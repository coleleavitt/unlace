__int64 __fastcall sub_31C60(__int64 *a1, __int64 **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  const char **v8; // rax
  const char *v9; // r14
  size_t v10; // rax
  size_t v11; // r13
  unsigned int v12; // eax
  bool v13; // cc
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // r15
  __int64 v18; // rax

  v4 = a1[4];
  v5 = a1[3];
  if ( a1[5] < (unsigned __int64)(v4 + 1) )
  {
    v15 = qvector_reserve(a1 + 3, v5, v4 + 1, 56);
    v4 = a1[4];
    a1[3] = v15;
    v5 = v15;
  }
  v6 = v5 + 56 * v4;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 8) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  ++a1[4];
  v7 = (__int64 (__fastcall *)(__int64, __int64 *))(*a2)[18];
  if ( v7 == sub_2D280 )
  {
    v8 = (const char **)sub_2CEC0(a2[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v8 )
    {
      v9 = *v8;
      if ( *v8 && (v10 = strlen(*v8), (v11 = v10) != 0) )
      {
        v16 = *(void **)v6;
        v17 = v10 + 1;
        if ( *(_QWORD *)(v6 + 16) < v10 + 1 )
        {
          v18 = qvector_reserve(v6, *(_QWORD *)v6, v10 + 1, 1);
          *(_QWORD *)v6 = v18;
          v16 = (void *)v18;
        }
        *(_QWORD *)(v6 + 8) = v17;
        memmove(v16, v9, v11);
        *(_BYTE *)(*(_QWORD *)v6 + v11) = 0;
      }
      else
      {
        *(_QWORD *)(v6 + 8) = 0;
      }
    }
  }
  else
  {
    v7((__int64)a2, (__int64 *)(v5 + 56 * v4));
  }
  v12 = sub_31B60(a1[2], a2);
  v13 = *(_QWORD *)(v6 + 8) <= 1u;
  *(_QWORD *)(v6 + 48) = v12;
  if ( v13 )
    return 2147500037LL;
  else
    return 0;
}
