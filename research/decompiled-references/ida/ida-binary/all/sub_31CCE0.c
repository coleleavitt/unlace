unsigned __int64 __fastcall sub_31CCE0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  const char *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rbp
  const char *v7; // rdi
  size_t v8; // rax
  size_t v9; // r12
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  char *s2; // [rsp+8h] [rbp-50h]
  __int128 v16; // [rsp+10h] [rbp-48h]
  int v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v14 = 40;
  s2 = nullptr;
  v17 = 0;
  v16 = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(_QWORD, __int64, __int64 *))a1[1])(a1[1], 40, &v14) )
  {
    if ( !under_debugger )
      interr(40221, 40, v1, v2, 0.0);
    BUG();
  }
  v3 = **(const char ***)(*a1 + 16LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 24LL))(*a1, v3);
  v5 = *(_QWORD *)(v4 + 40);
  if ( (_QWORD)v16 )
  {
    v6 = s2;
    v7 = &s1;
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    v6 = (char *)&s1;
    if ( !v5 )
      goto LABEL_10;
  }
  v7 = *(const char **)(v4 + 32);
LABEL_5:
  v3 = v6;
  if ( strcmp(v7, v6) )
  {
    if ( v6 && (v8 = strlen(v6), (v9 = v8) != 0) )
    {
      v11 = *(void **)(v4 + 32);
      v12 = v8 + 1;
      if ( *(_QWORD *)(v4 + 48) < v8 + 1 )
      {
        v13 = qvector_reserve(v4 + 32, *(_QWORD *)(v4 + 32), v12, 1);
        *(_QWORD *)(v4 + 32) = v13;
        v11 = (void *)v13;
      }
      *(_QWORD *)(v4 + 40) = v12;
      v3 = v6;
      memmove(v11, v6, v9);
      *(_BYTE *)(*(_QWORD *)(v4 + 32) + v9) = 0;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = 0;
    }
    *(_BYTE *)(v4 + 64) = 1;
  }
LABEL_10:
  if ( s2 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(s2, v3);
  }
  return v18 - __readfsqword(0x28u);
}
