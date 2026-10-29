__int64 sub_192350()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-B0h]
  __int64 v14; // [rsp+10h] [rbp-A8h]
  int v15; // [rsp+18h] [rbp-A0h]
  __int64 v16; // [rsp+20h] [rbp-98h]
  __int128 v17; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
  int v19; // [rsp+48h] [rbp-70h]
  char v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  int v22; // [rsp+60h] [rbp-58h]
  __int64 v23; // [rsp+68h] [rbp-50h]
  __int128 v24; // [rsp+70h] [rbp-48h]
  __int64 v25; // [rsp+80h] [rbp-38h]
  char v26; // [rsp+88h] [rbp-30h]
  unsigned __int64 v27; // [rsp+98h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  v0 = sub_1F4200();
  if ( !v0 )
    return -1;
  v17 = 0;
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  v13 = 0;
  v14 = -1;
  v15 = -1;
  v16 = 0;
  v19 = -1;
  v20 = 0;
  v21 = -1;
  v22 = -2;
  v23 = -1;
  v25 = 0xFFFFFFFFLL;
  v26 = 0;
  v24 = 0;
  v7 = -1;
  if ( (unsigned int)sub_1ED900(v0, &v12, 2, v1, v2, v3) == 5 )
  {
    v7 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] == -1 )
      v7 = v21;
  }
  if ( v22 >= -1 && v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, &v12, v4, v5, v6);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, &v12, v8, v9, v10);
  }
  return v7;
}
