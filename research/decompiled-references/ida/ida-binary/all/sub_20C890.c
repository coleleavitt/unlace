unsigned __int64 __fastcall sub_20C890(
        char a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  char *v14; // rsi
  _QWORD *v15; // rax
  char *v16; // rdi
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-10h]

  v14 = "None";
  v19 = __readfsqword(0x28u);
  v15 = &unk_8CB900;
  if ( a1 )
    v15 = &unk_8CBAA0;
  if ( v15[39] )
  {
    v14 = (char *)v15[38];
    if ( !v14 || !*v14 )
      v14 = "None";
  }
  v16 = (char *)&s1;
  if ( v15[42] )
    v16 = (char *)v15[41];
  if ( v16 )
  {
    if ( !*v16 )
      v16 = "None";
  }
  else
  {
    v16 = "None";
  }
  sub_1697D0(
    (int)"BUTTON YES NONE\n"
         "BUTTON NO NONE\n"
         "BUTTON CANCEL Ok\n"
         "Trace information\n"
         "Trace description:  | %A\n"
         "Path on disk:       | %A\n"
         "Number of elements: | %u\n",
    (__int64)v14,
    (__int64)v16,
    (__int64)&v18,
    v15[15],
    a14,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    ((__int64)(v15[10] - v15[8]) >> 5)
  + ((__int64)(v15[12] - v15[13]) >> 5)
  + 16 * ((v15[15] == 0) + ((__int64)(v15[15] - v15[11]) >> 3) - 1));
  return v19 - __readfsqword(0x28u);
}
