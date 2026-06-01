/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BECE0
// Address: 0x000BECE0

//----- (000BECE0) --------------------------------------------------------
void *__cdecl sub_BECE0(size_t nmemb, size_t size)
{
  void *v2; // edi
  void *v3; // eax

  v2 = calloc(nmemb, size);
  if ( !v2 )
  {
    v3 = (void *)sub_BEBE0(nmemb * size);
    if ( v3 )
    {
      v2 = v3;
      memset(v3, 0, nmemb * size);
    }
    else
    {
      return nullptr;
    }
  }
  return v2;
}
// BEBE0: using guessed type int __fastcall sub_BEBE0(_DWORD);
