void __fastcall sub_2B5E70(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  const char *v9; // rax
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r12
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax

  if ( a3 < *(_QWORD *)(a1 + 48) )
  {
    v4 = a3 << 6;
    v5 = (a3 << 6) + *(_QWORD *)(a1 + 40);
    v6 = **(unsigned __int8 (***)(void))v5;
    if ( (char *)v6 == (char *)sub_2A7E00 )
    {
      if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 48) )
        return;
    }
    else if ( !v6() )
    {
      return;
    }
    switch_dbctx(*(int *)(a1 + 8));
    v7 = *(_QWORD *)(a1 + 40) + v4;
    v8 = (_QWORD *)sub_2B5E10(a2);
    v9 = s1;
    if ( *(_QWORD *)(v7 + 24) )
      v9 = *(const char **)(v7 + 16);
    if ( !(unsigned __int8)print_tinfo(v8, 0, 0, 0, 0, v7 + 40, v9, 0) )
    {
      v10 = (const char *)dstr_tinfo(v7 + 40);
      v11 = v10;
      if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
      {
        v14 = (void *)*v8;
        v15 = v12 + 1;
        if ( v8[2] < v12 + 1 )
        {
          v16 = qvector_reserve(v8, *v8, v12 + 1, 1);
          *v8 = v16;
          v14 = (void *)v16;
        }
        v8[1] = v15;
        memmove(v14, v11, v13);
        *(_BYTE *)(*v8 + v13) = 0;
      }
      else
      {
        v8[1] = 0;
      }
    }
  }
}
