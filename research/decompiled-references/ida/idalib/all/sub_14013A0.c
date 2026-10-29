__int64 __fastcall sub_14013A0(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 *v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rsi
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // [rsp+0h] [rbp-1E8h]
  _QWORD v18[4]; // [rsp+10h] [rbp-1D8h] BYREF
  __int16 v19; // [rsp+30h] [rbp-1B8h]
  unsigned int *v20; // [rsp+40h] [rbp-1A8h] BYREF
  __int16 v21; // [rsp+60h] [rbp-188h]
  _BYTE *v22[2]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v23; // [rsp+80h] [rbp-168h] BYREF
  _BYTE *v24[2]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-148h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-138h]
  __m128i v27; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-118h] BYREF
  _QWORD *v29; // [rsp+E0h] [rbp-108h] BYREF
  _QWORD v30[4]; // [rsp+F0h] [rbp-F8h] BYREF
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+118h] [rbp-D0h]
  _WORD v33[96]; // [rsp+128h] [rbp-C0h] BYREF

  if ( *a3 == 4 )
    return 0;
  v4 = a3 + 2;
  v33[4] = 260;
  ptr = a3 + 2;
  if ( (unsigned __int8)sub_228B020(&ptr, 0) || (*(_BYTE *)(a2 + 904) & 0x10) != 0 )
    return 0;
  v6 = a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 40);
    if ( !v6 )
      break;
    if ( (*(_BYTE *)(v6 + 904) & 0x10) != 0 )
      return 0;
  }
  if ( (*(_BYTE *)(a2 + 904) & 0x40) == 0 )
    return 0;
  if ( *((_BYTE *)a3 + 40) )
    return 0;
  v7 = a1[8];
  if ( !v7 )
    return 0;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
  {
    if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v8 + 8) )
      return 0;
  }
  if ( (*(_BYTE *)(a1[2] + 21LL) & 0x10) == 0 )
    return 0;
  v9 = sub_13F47D0(*((_QWORD *)a3 + 1), *((_QWORD *)a3 + 2));
  if ( !(_BYTE)v9 )
  {
    return 0;
  }
  else
  {
    v20 = v4;
    ptr = v33;
    LOWORD(v29) = 257;
    v11 = (__int64 *)a1[8];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    LOWORD(v24[0]) = 257;
    v12 = *v11;
    v21 = 260;
    v19 = 261;
    v18[1] = v12;
    v18[0] = v11 + 4;
    sub_228A3B0(&ptr, v18, &v20, v22, &v27);
    v17 = sub_12ED8B0(*(_QWORD *)(*a1 + 16LL), ptr, si128.m128i_u64[0], 0, 1u);
    if ( v17 )
    {
      v13 = *((_BYTE **)a3 + 1);
      v22[0] = &v23;
      sub_13F27F0(v22, v13, (__int64)&v13[*((_QWORD *)a3 + 2)]);
      v14 = *((_BYTE **)a3 + 1);
      v24[0] = &v25;
      sub_13F27F0(v24, v14, (__int64)&v14[*((_QWORD *)a3 + 2)]);
      v15 = *a3;
      v26 = v17;
      v16 = dword_2614740[v15];
      v27.m128i_i64[0] = (__int64)&v28;
      sub_13F27F0(&v27, v22[0], (__int64)&v22[0][(unsigned __int64)v22[1]]);
      v29 = v30;
      sub_13F27F0(&v29, v24[0], (__int64)&v24[0][(unsigned __int64)v24[1]]);
      v30[2] = v26;
      sub_1400A10((__int64)a1, a2, &v27, v16, 0);
      sub_13F29E0((__int64)&v27);
      sub_13F29E0((__int64)v22);
    }
    else
    {
      v9 = 0;
    }
    if ( ptr != v33 )
      free(ptr);
  }
  return v9;
}
