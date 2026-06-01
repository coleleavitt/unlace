__int64 __fastcall sub_799CE0(_BYTE *a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  unsigned int v3; // r13d
  const __m128i **v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  const __m128i *v8; // rsi
  __int16 v9; // ax
  __int64 v10; // rax
  char v12[41]; // [rsp+Fh] [rbp-29h] BYREF

  if ( !sub_799C40(a1, v12) )
    return 0;
  v1 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 56LL))(a1);
  v2 = v1;
  v3 = *(_BYTE *)(v1 + 29) & 1;
  if ( (*(_BYTE *)(v1 + 29) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v1 + 28) & 0x7F) != 0 )
    v1 = sub_793320(v1);
  v4 = nullptr;
  v5 = sub_6BB160(*(_QWORD *)(v1 + 88), v2);
  v6 = *v5 + 8LL * *((unsigned int *)v5 + 2);
  if ( (*(_BYTE *)(v2 + 29) & 1) != 0 )
  {
    v7 = v2;
    if ( (*(_BYTE *)(v2 + 28) & 0x7F) != 0 )
      v7 = sub_793320(v2);
    v4 = (const __m128i **)*sub_6BB160(*(_QWORD *)(v7 + 88), v2);
  }
  if ( (const __m128i **)v6 != v4 )
  {
    while ( 1 )
    {
      v8 = *v4;
      v9 = (*v4)[2].m128i_i16[0];
      if ( v9 == 390 )
        break;
      if ( v9 == 136 )
      {
        v10 = (__int64)a1;
        if ( (a1[28] & 0x7F) != 0 )
          v10 = sub_793320((__int64)a1);
        if ( (unsigned int)sub_7939B0(*(_QWORD *)(v10 + 88), v8, 0, 0, 0) == 1 )
          break;
      }
      if ( (const __m128i **)v6 == ++v4 )
        return 0;
    }
  }
  else
  {
    return 0;
  }
  return v3;
}

