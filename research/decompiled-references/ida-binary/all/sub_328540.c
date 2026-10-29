__int64 __fastcall sub_328540(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  unsigned int v15; // ebp
  char v16; // al
  char *v17; // rsi
  __int64 v18; // rsi
  __int64 notype; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  int v26; // ebp
  char *v28; // rsi
  char v29; // [rsp+0h] [rbp-28h]
  char v30; // [rsp+0h] [rbp-28h]
  int v31; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v32; // [rsp+8h] [rbp-20h]

  v32 = __readfsqword(0x28u);
  v10 = sub_326FD0();
  v15 = BYTE2(xmmword_8BCDC0) | 0x900;
  v16 = BYTE2(xmmword_8BCDC0) & 1;
  if ( WORD1(xmmword_8BCDB0) )
  {
    v28 = "up";
    if ( v16 )
      v28 = "down";
    sub_28A960(1069, (__int64)v28, v8, v9, v11, v12, a1, a2, a3, a4, v13, v14, a7, a8, v29);
    sub_1C76F0((int)"Searching for an untyped immediate value");
    v18 = v15;
    notype = find_notype(v10, v15, &v31);
    sub_1C78D0();
    if ( notype != -1 )
      goto LABEL_5;
  }
  else
  {
    v17 = "up";
    if ( v16 )
      v17 = "down";
    sub_28A960(
      1068,
      (__int64)v17,
      *((__int64 *)&xmmword_8BCDB0 + 1),
      v9,
      v11,
      v12,
      a1,
      a2,
      a3,
      a4,
      v13,
      v14,
      a7,
      a8,
      v29);
    sub_1C76F0((int)"Searching for an immediate value");
    v18 = v15;
    notype = find_imm(v10, v15, *((_QWORD *)&xmmword_8BCDB0 + 1), &v31);
    sub_1C78D0();
    if ( notype != -1 )
    {
LABEL_5:
      v26 = v31;
      sub_28A960(1071, notype, v20, v21, v22, v23, a1, a2, a3, a4, v24, v25, a7, a8, v30);
      return (unsigned __int8)sub_192AA0(0, notype, v26, 1u);
    }
  }
  sub_28A960(1072, v18, v20, v21, v22, v23, a1, a2, a3, a4, v24, v25, a7, a8, v30);
  return 0;
}
