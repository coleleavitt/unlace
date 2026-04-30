_BOOL8 __fastcall sub_193170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BOOL4 v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+8h] [rbp-B0h]
  __int64 v19; // [rsp+10h] [rbp-A8h]
  int v20; // [rsp+18h] [rbp-A0h]
  __int64 v21; // [rsp+20h] [rbp-98h]
  __int128 v22; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
  int v24; // [rsp+48h] [rbp-70h]
  char v25; // [rsp+50h] [rbp-68h]
  __int64 v26; // [rsp+58h] [rbp-60h]
  int v27; // [rsp+60h] [rbp-58h]
  __int64 v28; // [rsp+68h] [rbp-50h]
  __int128 v29; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+80h] [rbp-38h]
  char v31; // [rsp+88h] [rbp-30h]
  unsigned __int64 v32; // [rsp+98h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 232);
  if ( v7 )
  {
    v22 = 0;
    v17 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
    v18 = 0;
    v19 = -1;
    v20 = -1;
    v21 = 0;
    v24 = -1;
    v25 = 0;
    v26 = -1;
    v27 = -2;
    v28 = -1;
    v30 = 0xFFFFFFFFLL;
    v31 = 0;
    v29 = 0;
    sub_1ED900(v7, &v17, 2, a4, a5, a6);
    if ( v17 == 5 )
      sub_2E10F0(a1);
    v8 = a1;
    v11 = sub_192EC0((__int64)&v17, a1);
    if ( v27 >= -1 && v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, v8, v9, v10, v12);
    }
    clear_tinfo_t(&si128.m128i_u64[1]);
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree(v21, v8, v13, v14, v15);
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
