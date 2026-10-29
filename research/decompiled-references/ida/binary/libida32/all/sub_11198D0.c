__int64 __fastcall sub_11198D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // r12
  int v9; // edx
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // r12
  _QWORD *v15; // [rsp+8h] [rbp-50h] BYREF
  __m128 v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+20h] [rbp-38h]

  v16.m128_u64[0] = 0x8F70000099FLL;
  v2 = sub_2193060(a2, &v16, 2);
  v3 = *(_QWORD *)(a2 + 8);
  v17 = 0x8F70000099FLL;
  v4 = (unsigned int)v2;
  v5 = HIDWORD(v2);
  v6 = (_QWORD *)(v3 + 8 * v4);
  v7 = (_QWORD *)(v3 + 8 * v5);
  v15 = v7;
  v16 = _mm_loadh_ps((const double *)&v15);
  if ( v6 == v7 )
    goto LABEL_6;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( (unsigned __int8)sub_2195AD0(*v6, 2463) )
        break;
      LODWORD(v5) = sub_2195AD0(v8, 2295);
      if ( (_BYTE)v5 )
        break;
    }
    v16.m128_u64[0] = (unsigned __int64)++v6;
    if ( v7 == v6 )
      goto LABEL_6;
  }
  LODWORD(v5) = 2463;
  v15 = v7;
  v17 = 0x8F70000099FLL;
  v16 = _mm_loadh_ps((const double *)&v15);
  if ( v7 == v6 )
  {
LABEL_6:
    v9 = *(_DWORD *)(a1 + 32);
    LOBYTE(v5) = v9 == 36;
    LOBYTE(v9) = v9 == 2;
    return v9 | (unsigned int)v5;
  }
  else
  {
    do
    {
      v11 = *v6;
      v12 = *(_QWORD *)(*v6 + 16LL);
      if ( !v12 )
        v12 = *v6;
      v13 = v6 + 1;
      *(_BYTE *)(v12 + 44) |= 1u;
      v16.m128_u64[0] = (unsigned __int64)v13;
      if ( v13 == v7 )
        break;
      while ( 1 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          if ( (unsigned __int8)sub_2195AD0(*v13, 2463) || (unsigned __int8)sub_2195AD0(v14, 2295) )
            break;
        }
        v16.m128_u64[0] = (unsigned __int64)++v13;
        if ( v7 == v13 )
          return (unsigned int)sub_2195AD0(v11, 2463) ^ 1;
      }
      v6 = (_QWORD *)v16.m128_u64[0];
    }
    while ( v7 != (_QWORD *)v16.m128_u64[0] );
    return (unsigned int)sub_2195AD0(v11, 2463) ^ 1;
  }
}

