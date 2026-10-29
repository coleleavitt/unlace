__int64 __fastcall sub_13D0580(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall **v3)(); // [rsp+0h] [rbp-58h] BYREF
  int v4; // [rsp+8h] [rbp-50h]
  __int128 v5; // [rsp+10h] [rbp-48h]
  __int64 v6; // [rsp+20h] [rbp-38h]
  char v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+2Ch] [rbp-2Ch]
  __int64 v9; // [rsp+30h] [rbp-28h]

  *(_QWORD *)a1 = a1 + 24;
  v9 = a1;
  *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&xmmword_23AA520);
  v5 = 0;
  v3 = &off_2BEBEE0;
  v4 = 2;
  v7 = 0;
  v8 = 1;
  v6 = 0;
  sub_227B8B0(&v3, 0, 0, 0);
  sub_2232DC0(&v3, a2, 0, 4, 1);
  v3 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v3);
  return a1;
}
