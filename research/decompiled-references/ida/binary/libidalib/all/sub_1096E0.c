unsigned __int64 __fastcall sub_1096E0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-B0h]
  __int64 v15; // [rsp+10h] [rbp-A8h]
  int v16; // [rsp+18h] [rbp-A0h]
  __int64 v17; // [rsp+20h] [rbp-98h]
  __int128 v18; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h]
  int v20; // [rsp+48h] [rbp-70h]
  char v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  int v23; // [rsp+60h] [rbp-58h]
  __int64 v24; // [rsp+68h] [rbp-50h]
  __int128 v25; // [rsp+70h] [rbp-48h]
  __int64 v26; // [rsp+80h] [rbp-38h]
  char v27; // [rsp+88h] [rbp-30h]
  unsigned __int64 v28; // [rsp+98h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  sub_199BF0(a1, a2, a3);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 != 38 && v3 != 58 )
  {
    v9 = sub_F6B10(*(_QWORD *)a2);
    if ( v9 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 416LL))(v9, 0);
      if ( v10 != -1 )
      {
        *(_QWORD *)(a2 + 88) = v10;
        *(_QWORD *)(a2 + 104) = get_func();
        *(_QWORD *)(a2 + 112) = get_fchunk();
        *(_QWORD *)(a2 + 120) = getseg();
      }
    }
  }
  v4 = *(_QWORD *)(a2 + 232);
  if ( v4 )
  {
    if ( (unsigned __int8)sub_161A40(v4, a2 + 128, a2 + 144, 0) )
      *(_DWORD *)(a2 + 80) |= 1u;
    if ( *(_BYTE *)(sub_15E9E0(*(_QWORD *)(a2 + 232)) + 21) )
    {
      v18 = 0;
      v11 = *(_QWORD *)(a2 + 232);
      v13 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
      v14 = 0;
      v15 = -1;
      v16 = -1;
      v17 = 0;
      v20 = -1;
      v21 = 0;
      v22 = -1;
      v23 = -2;
      v24 = -1;
      v26 = 0xFFFFFFFFLL;
      v27 = 0;
      v25 = 0;
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15F500)(
                           v11,
                           &v13,
                           4,
                           v5,
                           v6,
                           v7) == 5 )
      {
        v12 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] == -1 )
          v12 = v22;
        *(_QWORD *)(a2 + 96) = v12;
      }
      if ( v23 >= -1 && v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree();
      }
      clear_tinfo_t();
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree();
      }
    }
  }
  if ( *(_QWORD *)(a2 + 88) != -1 && (unsigned __int8)segtype() == 1 )
    *(_DWORD *)(a2 + 80) |= 2u;
  return v28 - __readfsqword(0x28u);
}

