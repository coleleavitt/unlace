__int64 __fastcall sub_44F870(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 file_ext; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5

  file_ext = get_file_ext(a1);
  if ( !file_ext )
    file_ext = a1;
  return sub_169630(
           (int)"No application is defined for '%s' files.\nPlease add it in View, Options, File associatations",
           file_ext,
           v15,
           v16,
           v18,
           v19,
           a2,
           a3,
           a4,
           a5,
           v20,
           v21,
           a8,
           a9,
           a15);
}
