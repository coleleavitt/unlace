unsigned __int64 sub_99260()
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+20h] [rbp-A8h]
  int v7; // [rsp+28h] [rbp-A0h]
  __int64 v8; // [rsp+2Ch] [rbp-9Ch]
  __int64 v9; // [rsp+34h] [rbp-94h]
  __m128i v10; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int64 v11; // [rsp+4Ch] [rbp-7Ch]
  int v12; // [rsp+54h] [rbp-74h]
  __m128i v13; // [rsp+58h] [rbp-70h] BYREF
  __m128i v14; // [rsp+68h] [rbp-60h] BYREF
  __int64 v15; // [rsp+78h] [rbp-50h]
  char v16; // [rsp+80h] [rbp-48h]
  unsigned __int64 v17; // [rsp+B8h] [rbp-10h]

  v17 = __readfsqword(0x28u);
  netnode_check();
  v15 = -1;
  v16 = 1;
  if ( netnode_supval() == 160 )
  {
    v1 = _mm_load_si128(&v5);
    qword_245070 = v6;
    xmmword_245060 = (__int128)v1;
    v2 = _mm_loadu_si128(&v10);
    dword_245078 = v7;
    xmmword_245090 = (__int128)v2;
    v3 = _mm_loadu_si128(&v13);
    qword_245080 = v8;
    xmmword_2450B0 = (__int128)v3;
    v4 = _mm_loadu_si128(&v14);
    qword_245088 = v9;
    xmmword_2450C0 = (__int128)v4;
    qword_2450A0 = v11;
    dword_2450A8 = v12;
    netnode_qsupstr();
    netnode_qsupstr();
  }
  netnode_kill();
  return v17 - __readfsqword(0x28u);
}

