__int64 __fastcall sub_AF1BF0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  size_t v5; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_F83A90(a1);
  v4 = j__strlen("#pragma omp declare variant");
  sub_9717A0(a2, "#pragma omp declare variant", v4);
  sub_AE25E0(a1, a2, a3);
  v5 = j__strlen("\n");
  return sub_9717A0(a2, "\n", v5);
}

