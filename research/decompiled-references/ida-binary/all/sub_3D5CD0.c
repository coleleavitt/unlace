unsigned __int64 sub_3D5CD0()
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __int64 v5; // [rsp+8h] [rbp-C0h] BYREF
  __m128i v6; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+20h] [rbp-A8h]
  int v8; // [rsp+28h] [rbp-A0h]
  __int64 v9; // [rsp+2Ch] [rbp-9Ch]
  __int64 v10; // [rsp+34h] [rbp-94h]
  __m128i v11; // [rsp+3Ch] [rbp-8Ch] BYREF
  __int64 v12; // [rsp+4Ch] [rbp-7Ch]
  int v13; // [rsp+54h] [rbp-74h]
  __m128i v14; // [rsp+58h] [rbp-70h] BYREF
  __m128i v15; // [rsp+68h] [rbp-60h] BYREF
  __int64 v16; // [rsp+78h] [rbp-50h]
  char v17; // [rsp+80h] [rbp-48h]
  unsigned __int64 v18; // [rsp+B8h] [rbp-10h]

  v18 = __readfsqword(0x28u);
  netnode_check(&v5, "$ ui dialogs status", 0, 0);
  v16 = -1;
  v17 = 1;
  if ( netnode_supval(v5, 0, &v6, 160, 83) == 160 )
  {
    v1 = _mm_load_si128(&v6);
    qword_8BCD70 = v7;
    xmmword_8BCD60 = (__int128)v1;
    v2 = _mm_loadu_si128(&v11);
    dword_8BCD78 = v8;
    xmmword_8BCD90 = (__int128)v2;
    v3 = _mm_loadu_si128(&v14);
    qword_8BCD80 = v9;
    xmmword_8BCDB0 = (__int128)v3;
    v4 = _mm_loadu_si128(&v15);
    qword_8BCD88 = v10;
    xmmword_8BCDC0 = (__int128)v4;
    qword_8BCDA0 = v12;
    dword_8BCDA8 = v13;
    netnode_qsupstr(v5, &qword_8D0AC0, 1, 83);
    netnode_qsupstr(v5, &qword_8D0AA0, 2, 83);
  }
  netnode_kill(&v5);
  return v18 - __readfsqword(0x28u);
}
