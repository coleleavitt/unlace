__int64 __fastcall sub_439010(__int64 a1, __m128 *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  double *v8; // rcx
  __int32 v9; // edi
  unsigned int v10; // edx
  __m128 **v11; // rsi
  __int64 v12; // rdx
  double *v13; // r8
  __m128 **v14; // rax
  __m128 *v15; // rdx
  __int64 *v16; // rbp
  __m128 *v18; // rax

  v6 = a4;
  v7 = *(unsigned int *)(a1 + 40);
  v8 = *(double **)(a1 + 32);
  v9 = a2->m128_i32[3];
  v10 = v7 - 1;
  v7 *= 24;
  v11 = (__m128 **)((char *)v8 + v7);
  v12 = 24LL * (v9 & v10);
  v13 = &v8[(unsigned __int64)v12 / 8];
  if ( v12 == v7 )
  {
LABEL_11:
    while ( v13 != v8 )
    {
      v18 = *(__m128 **)v8;
      if ( *(_QWORD *)v8 > 1u )
      {
        if ( v18->m128_i32[3] == v9 && a2 == v18 )
        {
          v14 = (__m128 **)v8;
          goto LABEL_10;
        }
      }
      else if ( !v18 )
      {
        break;
      }
      v8 += 3;
    }
LABEL_8:
    sub_1872CE0("");
    sub_1873130(114, 91);
  }
  v14 = (__m128 **)&v8[(unsigned __int64)v12 / 8];
  while ( 1 )
  {
    v15 = *v14;
    if ( (unsigned __int64)*v14 > 1 )
      break;
    if ( !v15 )
      goto LABEL_8;
LABEL_5:
    v14 += 3;
    if ( v11 == v14 )
      goto LABEL_11;
  }
  if ( v15->m128_i32[3] != v9 || a2 != v15 )
    goto LABEL_5;
LABEL_10:
  v16 = (__int64 *)v14[1];
  sub_438A50(a1, v16, v6 + 1, (__int64)v8, v13, a2);
  return *(_QWORD *)(v16[3] + 8 * v6);
}

