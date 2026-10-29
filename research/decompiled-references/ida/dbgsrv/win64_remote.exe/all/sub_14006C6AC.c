/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006C6AC
// Address: 0x000000014006C6AC

//----- (000000014006C6AC) ----------------------------------------------------
void __fastcall sub_14006C6AC(__int64 a1, __int64 a2)
{
  const char *v4; // rcx
  size_t v5; // rbp
  char *v6; // rsi
  char *v7; // rcx

  if ( *(_BYTE *)(a1 + 8) && (v4 = *(const char **)a1) != nullptr )
  {
    v5 = strlen(v4) + 1;
    v6 = (char *)j__malloc_base(v5);
    v7 = v6;
    if ( v6 )
    {
      strcpy_s(v6, v5, *(const char **)a1);
      v7 = nullptr;
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 1;
    }
    free(v7);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)a1;
    *(_BYTE *)(a2 + 8) = 0;
  }
}
