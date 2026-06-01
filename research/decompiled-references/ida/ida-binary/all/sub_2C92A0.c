__int64 __fastcall jump_or_follow_ah_t__::vfunc_4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  const char *v6; // rsi
  unsigned int v8; // edi
  const char *v9; // rsi
  __int128 v10; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v11; // [rsp+10h] [rbp-A8h]
  __int64 v12; // [rsp+20h] [rbp-98h]
  __int128 v13; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
  int v15; // [rsp+48h] [rbp-70h]
  char v16; // [rsp+50h] [rbp-68h]
  __int64 v17; // [rsp+58h] [rbp-60h]
  int v18; // [rsp+60h] [rbp-58h]
  __int64 v19; // [rsp+68h] [rbp-50h]
  __int128 v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+80h] [rbp-38h]
  char v22; // [rsp+88h] [rbp-30h]
  unsigned __int64 v23; // [rsp+98h] [rbp-20h]

  v4 = *(_DWORD *)(a1 + 12);
  v23 = __readfsqword(0x28u);
  if ( v4 <= 1 )
  {
    LODWORD(v10) = -2;
    *((_QWORD *)&v10 + 1) = -1;
    v11 = 0;
    if ( v4 )
      v8 = dword_8BA58C;
    else
      v8 = dword_8BA590;
    v9 = (const char *)&v10;
    if ( (unsigned __int8)sub_23F750(v8, (const char *)&v10, 0.0) )
    {
      v9 = *((const char **)&v10 + 1);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)a3 + 1104LL))(
        a3,
        *((_QWORD *)&v10 + 1),
        1,
        0);
    }
    if ( (int)v10 >= -1 && *((_QWORD *)&v10 + 1) )
    {
      *(_QWORD *)&v11 = 0;
      qfree(*((_QWORD *)&v10 + 1), v9);
    }
  }
  else if ( v4 - 2 <= 1 )
  {
    v6 = (const char *)&v10;
    v13 = 0;
    LODWORD(v10) = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
    *((_QWORD *)&v10 + 1) = 0;
    *(_QWORD *)&v11 = -1;
    DWORD2(v11) = -1;
    v12 = 0;
    v15 = -1;
    v16 = 0;
    v17 = -1;
    v18 = -2;
    v19 = -1;
    v21 = 0xFFFFFFFFLL;
    v22 = 0;
    v20 = 0;
    if ( (unsigned int)sub_1ED900(a3, &v10, 2, a4, 0.0) == 5 )
    {
      v6 = (const char *)si128.m128i_i64[0];
      if ( *(_DWORD *)(a1 + 12) == 2 )
      {
        if ( si128.m128i_i64[0] == -1 )
          v6 = (const char *)v17;
        sub_1F48F0((__int64)v6);
      }
      else
      {
        if ( si128.m128i_i64[0] == -1 )
          v6 = (const char *)v17;
        sub_2C7E30(a3, (__int64)v6);
      }
    }
    if ( v18 >= -1 && v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19, v6);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12, v6);
    }
  }
  return 1;
}
