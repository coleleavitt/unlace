unsigned __int64 __fastcall sub_1A0D10(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  char v21[4104]; // [rsp+0h] [rbp-1018h] BYREF
  unsigned __int64 v22; // [rsp+1008h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  if ( !dword_8CAD08 )
  {
    dword_8CAD08 = 1;
    ((void (__fastcall *)(char *, __int64, __int64, __int64, __int64, __int64))qvsnprintf)(v21, 4096, a1, a2, a13, a14);
    *(double *)a3.m128_u64 = sub_4BEF60(0, 0, v21);
    sub_169630(
      (int)"ICON ERROR\nAUTOHIDE NONE\n%s\nPlease send the input file to <support@hex-rays.com>",
      (__int64)v21,
      v15,
      v16,
      v17,
      v18,
      a3,
      a4,
      a5,
      a6,
      v19,
      v20,
      a9,
      a10,
      v21[0]);
  }
  return v22 - __readfsqword(0x28u);
}
