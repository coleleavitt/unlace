__int64 __fastcall sub_FF3C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rsi
  int v7; // edi
  int v8; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+8h] [rbp-B0h]
  __int128 v10; // [rsp+10h] [rbp-A8h]
  __int64 v11; // [rsp+20h] [rbp-98h]
  __int128 v12; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h]
  int v14; // [rsp+48h] [rbp-70h]
  char v15; // [rsp+50h] [rbp-68h]
  __int64 v16; // [rsp+58h] [rbp-60h]
  int v17; // [rsp+60h] [rbp-58h]
  __int64 v18; // [rsp+68h] [rbp-50h]
  __int128 v19; // [rsp+70h] [rbp-48h]
  __int64 v20; // [rsp+80h] [rbp-38h]
  char v21; // [rsp+88h] [rbp-30h]
  unsigned __int64 v22; // [rsp+98h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 12);
  v22 = __readfsqword(0x28u);
  if ( v3 <= 1 )
  {
    v8 = -2;
    v9 = -1;
    v10 = 0;
    if ( v3 )
      v7 = dword_24516C;
    else
      v7 = dword_245170;
    if ( (unsigned __int8)sub_CFF70(v7, (__int64)&v8) )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a3 + 704LL))(a3, v9, 1, 0);
    if ( v8 >= -1 && v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  else if ( v3 - 2 <= 1 )
  {
    v12 = 0;
    v8 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
    v9 = 0;
    *(_QWORD *)&v10 = -1;
    DWORD2(v10) = -1;
    v11 = 0;
    v14 = -1;
    v15 = 0;
    v16 = -1;
    v17 = -2;
    v18 = -1;
    v20 = 0xFFFFFFFFLL;
    v21 = 0;
    v19 = 0;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64))sub_15F500)(a3, &v8, 2) == 5 )
    {
      v5 = si128.m128i_i64[0];
      if ( *(_DWORD *)(a1 + 12) == 2 )
      {
        if ( si128.m128i_i64[0] == -1 )
          v5 = v16;
        sub_164E50(v5);
      }
      else
      {
        if ( si128.m128i_i64[0] == -1 )
          v5 = v16;
        sub_FE0B0(a3, v5);
      }
    }
    if ( v17 >= -1 && v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    clear_tinfo_t();
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree();
    }
  }
  return 1;
}

