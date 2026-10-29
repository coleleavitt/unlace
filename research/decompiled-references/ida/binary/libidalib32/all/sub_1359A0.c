__int64 __fastcall sub_1359A0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  unsigned int v8; // ebp
  char v9; // al
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rsi
  unsigned int notype; // ebx
  char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  char v27; // [rsp+0h] [rbp-28h]

  sub_1344B0();
  v8 = BYTE10(xmmword_244090) | 0x900;
  v9 = BYTE10(xmmword_244090) & 1;
  if ( WORD1(xmmword_244090) )
  {
    v20 = "up";
    if ( v9 )
      v20 = "down";
    sub_108A90(1069, v20);
    sub_10DDF0(
      (__int64)"Searching for an untyped immediate value",
      (__int64)v20,
      v21,
      v22,
      v23,
      v24,
      a1,
      a2,
      a3,
      a4,
      v25,
      v26,
      a7,
      a8,
      v27);
    v17 = v8;
    notype = find_notype();
    sub_10D850();
    if ( notype != -1 )
      goto LABEL_5;
  }
  else
  {
    v10 = "up";
    if ( v9 )
      v10 = "down";
    sub_108A90(1068, v10, DWORD1(xmmword_244090));
    sub_10DDF0(
      (__int64)"Searching for an immediate value",
      (__int64)v10,
      v11,
      v12,
      v13,
      v14,
      a1,
      a2,
      a3,
      a4,
      v15,
      v16,
      a7,
      a8,
      v27);
    v17 = v8;
    notype = find_imm();
    sub_10D850();
    if ( notype != -1 )
    {
LABEL_5:
      sub_108A90(1071, notype);
      return (unsigned __int8)sub_120900();
    }
  }
  sub_108A90(1072, v17);
  return 0;
}

