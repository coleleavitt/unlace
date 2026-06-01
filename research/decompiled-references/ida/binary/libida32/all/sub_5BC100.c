unsigned __int64 __fastcall sub_5BC100(__int64 a1, unsigned int a2, _BYTE *a3, char a4, char a5)
{
  int v8; // r9d
  __int64 v9; // r8
  char *v10; // rbp
  int v11; // eax
  const char *v12; // rsi
  const char *v13; // rbx
  const char *v14; // rdi
  char *v15; // rbx
  char *v16; // rax
  char v17; // dl
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v19; // [rsp+8h] [rbp-40h]
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  *a3 = 0;
  if ( a4 )
  {
    ptr = nullptr;
    v19 = 0;
    if ( sub_3BE850(a1, (__int64 *)&ptr, a2) > 0 )
    {
      v9 = *(_QWORD *)(a1 + 952);
      v10 = a3 + 1024;
      if ( a5 )
        v11 = qsnprintf((int)a3, 1024, (int)&unk_22B35E4, 34, v9, v8, (char)ptr);
      else
        v11 = qsnprintf((int)a3, 1024, (int)&unk_22AD269, *(_QWORD *)(a1 + 952), v9, v8, (char)ptr);
      v12 = haystack;
      v13 = &a3[v11];
      if ( (_QWORD)v19 )
        v12 = (const char *)ptr;
      str2user(&a3[v11], v12, v10 - v13);
      v14 = v13;
      v15 = (char *)&v13[strlen(v13)];
      if ( v15 >= v10 )
      {
        if ( !under_debugger )
          interr(520);
        BUG();
      }
      v16 = (char *)closing_comment(v14, v12);
      if ( v15 == a3 + 1023 )
      {
LABEL_15:
        a3[1023] = 0;
      }
      else
      {
        while ( 1 )
        {
          v17 = *v16++;
          *v15 = v17;
          if ( !v17 )
            break;
          if ( ++v15 == a3 + 1023 )
            goto LABEL_15;
        }
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
  }
  return v20 - __readfsqword(0x28u);
}

