__int64 __fastcall sub_76C880(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD **v5; // rax
  _DWORD *v6; // rbx
  unsigned int v7; // r13d
  _DWORD *i; // r14
  int v9; // eax
  unsigned int v11; // r12d
  __m128i v12; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  __m128i v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]

  sub_AC4830(&v14);
  v13 = v15;
  v12 = _mm_load_si128(&v14);
  v5 = (_DWORD **)v12.m128i_i64[0];
  if ( (v12.m128i_i8[8] & 3) != 0 )
    v5 = (_DWORD **)sub_ACE280(&v12, a1, v1, v2, v3, v4);
  v6 = *(_DWORD **)(a1 + 24);
  v7 = (**v5 >> 14) & 0x1F;
  for ( i = &v6[6 * (*(_WORD *)(a1 + 20) >> 1)]; i != v6; v6 += 6 )
  {
    while ( *v6 == 1 )
    {
      v9 = (*(_DWORD *)sub_81B3D0(a1, v6) >> 14) & 0x1F;
LABEL_9:
      v7 |= v9;
      if ( (v9 & 0xC) != 0 )
        v7 |= 0xEu;
      v6 += 6;
      if ( i == v6 )
        return v7;
    }
    if ( *v6 == 2 )
    {
      v11 = *(_DWORD *)sub_81B3F0(a1, v6);
      v9 = (v11 >> 14) & 0x1F | (*(_DWORD *)sub_81B3E0(a1, v6) >> 14) & 0x1F;
      goto LABEL_9;
    }
  }
  return v7;
}

