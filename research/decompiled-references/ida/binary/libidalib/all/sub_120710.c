__int64 sub_120710()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  int v6; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+8h] [rbp-B0h]
  __int64 v8; // [rsp+10h] [rbp-A8h]
  int v9; // [rsp+18h] [rbp-A0h]
  __int64 v10; // [rsp+20h] [rbp-98h]
  __int128 v11; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h]
  int v13; // [rsp+48h] [rbp-70h]
  char v14; // [rsp+50h] [rbp-68h]
  __int64 v15; // [rsp+58h] [rbp-60h]
  int v16; // [rsp+60h] [rbp-58h]
  __int64 v17; // [rsp+68h] [rbp-50h]
  __int128 v18; // [rsp+70h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp-38h]
  char v20; // [rsp+88h] [rbp-30h]
  unsigned __int64 v21; // [rsp+98h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v0 = sub_164460();
  if ( !v0 )
    return -1;
  v11 = 0;
  v6 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2FF0);
  v7 = 0;
  v8 = -1;
  v9 = -1;
  v10 = 0;
  v13 = -1;
  v14 = 0;
  v15 = -1;
  v16 = -2;
  v17 = -1;
  v19 = 0xFFFFFFFFLL;
  v20 = 0;
  v18 = 0;
  v4 = -1;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, __int64, __int64, __int64))sub_15F500)(
                       v0,
                       &v6,
                       2,
                       v1,
                       v2,
                       v3) == 5 )
  {
    v4 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] == -1 )
      v4 = v15;
  }
  if ( v16 >= -1 && v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v4;
}

