unsigned __int64 __fastcall sub_3AF4B0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  const char *v5; // rsi
  __int128 v7; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-A8h]
  int v9; // [rsp+18h] [rbp-A0h]
  __int64 v10; // [rsp+20h] [rbp-98h]
  __int128 v11; // [rsp+28h] [rbp-90h]
  __m128i si128; // [rsp+38h] [rbp-80h] BYREF
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
  v11 = 0;
  v5 = (const char *)&v7;
  LODWORD(v7) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  *((_QWORD *)&v7 + 1) = 0;
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
  if ( (unsigned int)sub_1ED900(a1, &v7, 3, a4, 0.0) )
  {
    v5 = a2;
    sub_201EC0(a1, a2, &v7);
  }
  if ( v16 >= -1 && v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17, v5);
  }
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10, v5);
  }
  return v21 - __readfsqword(0x28u);
}
