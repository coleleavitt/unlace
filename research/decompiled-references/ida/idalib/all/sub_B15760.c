__int64 __fastcall sub_B15760(__int64 a1, __int64 a2, int a3)
{
  size_t v4; // rax
  size_t v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  v4 = j__strlen("#pragma omp declare simd");
  sub_9954E0(a2, "#pragma omp declare simd", v4);
  sub_B05A00(a1, a2, a3);
  v5 = j__strlen("\n");
  return sub_9954E0(a2, "\n", v5);
}
