unsigned __int64 __fastcall sub_F6D0E0(__int64 *a1)
{
  __int64 v1; // rax
  signed __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _BOOL8 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  if ( (*a1 & 7) != 0 )
  {
    v12 = a1[1];
    if ( v1 )
      return _mm_loadh_ps((const double *)&v12).m128_u64[0];
  }
  else
  {
    if ( (v1 & 8) != 0 )
    {
      v12 = a1[1];
      if ( v1 )
        return _mm_loadh_ps((const double *)&v12).m128_u64[0];
    }
    if ( *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
    {
      v2 = sub_F6D010(*a1, a1[1]);
      v3 = v11;
      goto LABEL_5;
    }
  }
  v2 = *a1;
  v3 = a1[1];
LABEL_5:
  if ( (v2 & 7) != 0 )
    goto LABEL_16;
  v12 = v3;
  v4 = (v2 >> 3) & 1;
  if ( ((v2 >> 3) & 1) != 0 )
    goto LABEL_16;
  v5 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) != 8 )
  {
    if ( *(_BYTE *)(v5 + 16) == 7 )
    {
      if ( v2 )
        v4 = v12;
      v12 = v4;
      return _mm_loadh_ps((const double *)&v12).m128_u64[0];
    }
LABEL_16:
    v12 = 0;
    return _mm_loadh_ps((const double *)&v12).m128_u64[0];
  }
  if ( v2 )
  {
    if ( !sub_F5E250(v2) )
    {
      v7 = v3 + 8;
      v8 = 1;
      if ( (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF0LL) != 0
        && !(*(_QWORD *)(v2 + 40) & 7LL | (*(__int64 *)(v2 + 40) >> 3) & 1) )
      {
        v8 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
      }
      v13[0] = *(_QWORD *)(v2 + 40);
      v9 = v7 != 0;
      v13[1] = v8 * (v9 + (v7 - v9) / v8);
      sub_F6D0E0(v13, v9, (v7 - v9) % v8);
      v12 = v10;
    }
  }
  else
  {
    v12 = 0;
  }
  return _mm_loadh_ps((const double *)&v12).m128_u64[0];
}
