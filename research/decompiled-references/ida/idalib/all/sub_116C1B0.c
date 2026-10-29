__int64 __fastcall sub_116C1B0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int64 *v12; // rbx
  __int64 v13; // r12
  __int64 *v14; // [rsp+8h] [rbp-50h] BYREF
  __m128 v15; // [rsp+10h] [rbp-48h] BYREF
  __int64 v16; // [rsp+20h] [rbp-38h]

  v15.m128_u64[0] = 0x79500000797LL;
  v4 = sub_21B6DA0(a2, &v15, 2);
  v5 = *(_QWORD *)(a2 + 8);
  v16 = 0x79500000797LL;
  v6 = (__int64 *)(v5 + 8LL * (unsigned int)v4);
  v7 = (__int64 *)(v5 + 8 * HIDWORD(v4));
  v14 = v7;
  v15 = _mm_loadh_ps((const double *)&v14);
  if ( v6 == v7 )
    goto LABEL_6;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( (unsigned __int8)sub_21B9810(*v6, 1943) || (unsigned __int8)sub_21B9810(v8, 1941) )
        break;
    }
    v15.m128_u64[0] = (unsigned __int64)++v6;
    if ( v7 == v6 )
      goto LABEL_6;
  }
  v14 = v7;
  v16 = 0x79500000797LL;
  v15 = _mm_loadh_ps((const double *)&v14);
  if ( v7 == v6 )
  {
LABEL_6:
    v9 = *(unsigned int *)(a3 + 8);
    if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v9 + 1, 8);
      v9 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v9) = "-fvisibility=hidden";
    v10 = *(unsigned int *)(a3 + 12);
    result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = result;
    if ( result + 1 > v10 )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-fapply-global-visibility-to-externs";
    ++*(_DWORD *)(a3 + 8);
  }
  else
  {
    do
    {
      result = *v6;
      if ( *(_QWORD *)(*v6 + 16) )
        result = *(_QWORD *)(*v6 + 16);
      v12 = v6 + 1;
      *(_BYTE *)(result + 44) |= 1u;
      v15.m128_u64[0] = (unsigned __int64)v12;
      if ( v12 == v7 )
        break;
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 )
        {
          result = sub_21B9810(*v12, 1943);
          if ( (_BYTE)result )
            break;
          result = sub_21B9810(v13, 1941);
          if ( (_BYTE)result )
            break;
        }
        v15.m128_u64[0] = (unsigned __int64)++v12;
        if ( v7 == v12 )
          return result;
      }
      v6 = (__int64 *)v15.m128_u64[0];
    }
    while ( v7 != (__int64 *)v15.m128_u64[0] );
  }
  return result;
}
