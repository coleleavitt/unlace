__int16 __fastcall sub_12FBBD0(char *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r14
  __int16 result; // ax
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rbx
  char v14; // dl
  _QWORD *v15; // [rsp+8h] [rbp-60h] BYREF
  __m128 v16; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v17; // [rsp+20h] [rbp-48h]
  unsigned int v18; // [rsp+24h] [rbp-44h]

  v4 = *((_DWORD *)a1 + 1);
  v16.m128_u64[0] = __PAIR64__(v4, a2);
  v5 = sub_21B6DA0(a3, &v16, 2);
  v6 = *(_QWORD *)(a3 + 8);
  v17 = a2;
  v18 = v4;
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  v15 = v8;
  v16 = _mm_loadh_ps((const double *)&v15);
  if ( v7 == v8 )
    return 0;
  while ( 1 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      if ( a2 && ((unsigned __int8)sub_21B9810(*v7, a2) || v4 && (unsigned __int8)sub_21B9810(v9, v4)) )
        break;
    }
    v16.m128_u64[0] = (unsigned __int64)++v7;
    if ( v8 == v7 )
      return 0;
  }
  v15 = v8;
  v17 = a2;
  v18 = v4;
  v16 = _mm_loadh_ps((const double *)&v15);
  if ( v8 == v7 )
    return 0;
  do
  {
    v11 = *v7;
    v12 = *(_QWORD *)(*v7 + 16LL);
    if ( !v12 )
      v12 = *v7;
    v13 = v7 + 1;
    *(_BYTE *)(v12 + 44) |= 1u;
    v16.m128_u64[0] = (unsigned __int64)v13;
    if ( v13 == v8 )
      break;
    while ( 1 )
    {
      if ( *v13 )
      {
        v15 = (_QWORD *)*v13;
        if ( (unsigned __int8)sub_21B9810(v15, a2) || v4 && (unsigned __int8)sub_21B9810(v15, v4) )
          break;
      }
      v16.m128_u64[0] = (unsigned __int64)++v13;
      if ( v8 == v13 )
        goto LABEL_18;
    }
    v7 = (_QWORD *)v16.m128_u64[0];
  }
  while ( v8 != (_QWORD *)v16.m128_u64[0] );
LABEL_18:
  if ( (unsigned __int8)sub_21B9810(v11, a2) )
    v14 = *a1;
  else
    v14 = a1[1];
  LOBYTE(result) = v14;
  HIBYTE(result) = 1;
  return result;
}
