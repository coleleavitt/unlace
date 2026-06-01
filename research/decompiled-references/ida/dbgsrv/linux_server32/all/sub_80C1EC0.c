/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C1EC0
// Address: 0x080C1EC0

//----- (080C1EC0) --------------------------------------------------------
char *__cdecl sub_80C1EC0(int a1)
{
  int (__cdecl *v1)(_DWORD); // eax
  char *result; // eax

  v1 = (int (__cdecl *)(_DWORD))dlsym(*(void **)(a1 + 16), "OpenSSL_version");
  if ( !v1 )
  {
    v1 = (int (__cdecl *)(_DWORD))dlsym(*(void **)(a1 + 16), "SSLeay_version");
    if ( !v1 )
      return nullptr;
  }
  result = (char *)v1(0);
  if ( !result )
    return "";
  return result;
}
