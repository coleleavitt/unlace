/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400603D0
// Address: 0x00000001400603D0

//----- (00000001400603D0) ----------------------------------------------------
__int64 __fastcall sub_1400603D0(__int64 a1, const WCHAR *a2, int a3, void *a4, int a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+38h] [rbp-40h] BYREF
  CHAR Src[16]; // [rsp+40h] [rbp-38h] BYREF

  v12 = a3;
  v11 = 16;
  if ( ConvertINetUnicodeToMultiByte((LPDWORD)(a1 + 40), *(_DWORD *)a1, a2, &v12, Src, &v11) || a3 != v12 )
  {
LABEL_7:
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  if ( a5 >= v11 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, CHAR *))(a1 + 24))(a1, Src);
    v9 = v11;
    if ( v8 == v11 )
    {
      memcpy(a4, Src, v11);
      return v9;
    }
    goto LABEL_7;
  }
  *errno() = 7;
  return 0xFFFFFFFFLL;
}
