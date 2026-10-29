__int64 __fastcall sub_21995B0(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rax
  __int128 v8; // rax
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, unsigned int); // rax
  int v12; // eax
  __m128i v13; // [rsp+0h] [rbp-68h]
  __m128i v14; // [rsp+20h] [rbp-48h] BYREF
  char v15; // [rsp+30h] [rbp-38h]

  v4 = sub_2195C60(a2, a3) >> 32;
  if ( (v4 & 0xE0) != 0 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 3;
    return a1;
  }
  v6 = v4 & 0xE;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 0;
    return a1;
  }
  if ( (_BYTE)v6 != 14 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 1;
    return a1;
  }
  (*(void (__fastcall **)(__m128i *, __int64, unsigned int *))(*(_QWORD *)a2 + 128LL))(&v14, a2, a3);
  if ( (v15 & 1) == 0 )
  {
    v13 = _mm_load_si128(&v14);
    *(_QWORD *)&v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
    if ( *(_OWORD *)&v13 == v8 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 1;
      goto LABEL_9;
    }
    v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13.m128i_i64[1] + 208LL);
    if ( v9 == sub_21972C0 )
    {
      v10 = sub_2197120(v13.m128i_i64[1], v13.m128i_u32[0]);
      if ( v10 >= 0 && (unsigned __int8)v10 != 1 && (unsigned __int8)v10 != 12 )
        goto LABEL_15;
    }
    else if ( (unsigned __int8)v9(v13.m128i_i64[1], v13.m128i_i64[0]) )
    {
      goto LABEL_15;
    }
    v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v13.m128i_i64[1] + 216LL);
    if ( v11 == sub_2197350 )
    {
      v12 = sub_2197120(v13.m128i_i64[1], v13.m128i_u32[0]);
      if ( v12 < 0 || (unsigned __int8)v12 != 1 && (unsigned __int8)v12 != 12 )
        goto LABEL_21;
    }
    else if ( !(unsigned __int8)v11(v13.m128i_i64[1], v13.m128i_i64[0]) )
    {
LABEL_21:
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 5;
      goto LABEL_9;
    }
LABEL_15:
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 2;
    goto LABEL_9;
  }
  v7 = v14.m128i_i64[0];
  *(_BYTE *)(a1 + 8) |= 1u;
  v14.m128i_i64[0] = 0;
  *(_QWORD *)a1 = v7;
LABEL_9:
  sub_20CE610(v14.m128i_i64);
  return a1;
}
