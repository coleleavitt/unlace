__int64 __fastcall sub_32CC70(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128 v13; // xmm4
  __m128 v14; // xmm5
  const char *v15; // rdx
  const char *v16; // rsi
  const char *v18; // [rsp+0h] [rbp-38h] BYREF
  __int128 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v9 = *(_QWORD *)(a1 + 88);
  v20 = __readfsqword(0x28u);
  v18 = nullptr;
  v19 = 0;
  get_manual_insn(&v18, v9);
  v11 = itext(1099, v9, v10);
  v15 = &s1;
  if ( (_QWORD)v19 )
    LODWORD(v15) = (_DWORD)v18;
  v16 = nullptr;
  if ( (unsigned __int8)sub_2B3730(
                          (int)&v18,
                          0,
                          (int)v15,
                          (int)"%s",
                          v11,
                          v12,
                          (__m128)0LL,
                          a3,
                          a4,
                          a5,
                          v13,
                          v14,
                          a8,
                          a9,
                          (char)v18) )
  {
    v16 = &s1;
    if ( (_QWORD)v19 )
      v16 = v18;
    set_manual_insn(v9, v16);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, v16);
  }
  return 1;
}
