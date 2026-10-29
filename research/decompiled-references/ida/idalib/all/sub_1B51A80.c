void __fastcall sub_1B51A80(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rdx
  __m128 v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(unsigned int *)(a2 + 16);
  v5 = *(_QWORD **)a2;
  v6 = &v5[2 * v4];
  if ( *(_DWORD *)(a2 + 8) )
    sub_15071F0(v15, v5, v6, a2, 0);
  else
    sub_15071F0(v15, v6, v6, a2, 1);
  v8 = v15[0].m128_u64[1];
  v7 = v15[0].m128_u64[0];
  v9 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  sub_15071F0(v15, v9, v9, a2, 1);
  v10 = v15[0].m128_u64[0];
  if ( v7 != v15[0].m128_u64[0] )
  {
    do
    {
LABEL_4:
      while ( 1 )
      {
        sub_1B514C0(a1, *(_QWORD *)v7, *(_DWORD *)(v7 + 12), *(_DWORD *)(v7 + 8), a2, a3);
        v11 = v7 + 16;
        if ( v7 + 16 != v8 )
          break;
LABEL_13:
        v7 = v8;
        if ( v10 == v8 )
          return;
      }
      v12 = *(_QWORD *)(v7 + 16);
      if ( v12 == -8192 || v12 == -4096 )
      {
        v13 = (__int64 *)(v7 + 32);
        while ( 1 )
        {
          v7 = (unsigned __int64)v13;
          if ( v13 == (__int64 *)v8 )
            goto LABEL_13;
          v14 = *v13;
          v13 += 2;
          if ( v14 != -4096 && v14 != -8192 )
          {
            if ( v10 != v7 )
              goto LABEL_4;
            return;
          }
        }
      }
      v7 += 16LL;
    }
    while ( v10 != v11 );
  }
}
