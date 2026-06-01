__int64 __fastcall sub_372BF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  signed int v3; // ecx
  unsigned __int64 v5; // rsi
  __int64 strlit_contents; // rax
  unsigned __int64 v7; // r12
  char *v8; // rbp
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r15
  __int64 v12; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 72);
  v16 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  v15 = 0;
  s = nullptr;
  strlit_contents = get_strlit_contents((__int64 *)&s, v5, v2, v3, nullptr, 0);
  v7 = v15;
  v8 = s;
  if ( strlit_contents >= 0 )
  {
    if ( (_QWORD)v15 && (v9 = strlen(s), (v10 = v9) != 0) )
    {
      v11 = v9 + 1;
      if ( v7 < v9 + 1 )
      {
        if ( *((_QWORD *)&v15 + 1) < v11 )
        {
          s = (char *)qvector_reserve(&s, v8, v9 + 1, 1);
          v7 = v15;
          v8 = s;
        }
        memset(&v8[v7], 0, v11 - v7);
        *(_QWORD *)&v15 = v11;
        v8 = s;
      }
      else if ( v11 != v7 )
      {
        *(_QWORD *)&v15 = v9 + 1;
      }
      v8[v10] = 0;
      v8 = s;
      v7 = v15;
    }
    else if ( v8 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v8);
      v7 = v15;
      v12 = 0;
      v8 = nullptr;
      goto LABEL_9;
    }
  }
  v12 = *((_QWORD *)&v15 + 1);
LABEL_9:
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v8;
  *(_QWORD *)(a2 + 16) = v7;
  *(_QWORD *)(a2 + 24) = v12;
  return 0;
}
