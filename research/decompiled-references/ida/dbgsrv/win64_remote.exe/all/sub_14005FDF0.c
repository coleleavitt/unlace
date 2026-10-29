/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005FDF0
// Address: 0x000000014005FDF0

//----- (000000014005FDF0) ----------------------------------------------------
HMODULE sub_14005FDF0()
{
  HMODULE result; // rax
  HMODULE v1; // rbx

  if ( ConvertINetString )
    return (HMODULE)1;
  result = LoadLibraryA("mlang.dll");
  v1 = result;
  if ( result )
  {
    ConvertINetString = (HRESULT (__stdcall *)(LPDWORD, DWORD, DWORD, LPCSTR, LPINT, LPSTR, LPINT))GetProcAddress(
                                                                                                     result,
                                                                                                     "ConvertINetString");
    ConvertINetMultiByteToUnicode = (HRESULT (__stdcall *)(LPDWORD, DWORD, LPCSTR, LPINT, LPWSTR, LPINT))GetProcAddress(v1, "ConvertINetMultiByteToUnicode");
    ConvertINetUnicodeToMultiByte = (HRESULT (__stdcall *)(LPDWORD, DWORD, LPCWSTR, LPINT, LPSTR, LPINT))GetProcAddress(v1, "ConvertINetUnicodeToMultiByte");
    IsConvertINetStringAvailable = (HRESULT (__stdcall *)(DWORD, DWORD))GetProcAddress(
                                                                          v1,
                                                                          "IsConvertINetStringAvailable");
    LcidToRfc1766A = (HRESULT (__stdcall *)(LCID, LPSTR, int))GetProcAddress(v1, "LcidToRfc1766A");
    Rfc1766ToLcidA = (HRESULT (__stdcall *)(LCID *, LPCSTR))GetProcAddress(v1, "Rfc1766ToLcidA");
    return (HMODULE)1;
  }
  return result;
}
