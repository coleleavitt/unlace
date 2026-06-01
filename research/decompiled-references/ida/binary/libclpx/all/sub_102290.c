_BOOL8 __fastcall sub_102290(void *ptr, int a2, FILE *a3)
{
  _BOOL8 result; // rax
  size_t v5; // rdx
  size_t v6; // rax
  _DWORD ptra[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  ptra[0] = a2;
  if ( ptr && a2 )
  {
    v5 = fwrite(ptra, 4u, 1u, a3);
    result = 1;
    if ( v5 == 1 )
    {
      v6 = fwrite(ptr, 8u, ptra[0], a3);
      return ptra[0] != v6;
    }
  }
  else
  {
    ptra[0] = 0;
    return fwrite(ptra, 4u, 1u, a3) != 1;
  }
  return result;
}

