/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140060340
// Address: 0x0000000140060340

//----- (0000000140060340) ----------------------------------------------------
__int64 __fastcall sub_140060340(__int64 a1, const CHAR *a2, __int64 a3, WCHAR *a4, int *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  DWORD v10; // edx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = (*(__int64 (**)(void))(a1 + 24))();
  v9 = v8;
  if ( v8 != -1 )
  {
    v10 = *(_DWORD *)a1;
    v12 = v8;
    if ( !ConvertINetMultiByteToUnicode((LPDWORD)(a1 + 40), v10, a2, &v12, a4, a5) && v12 == v9 )
      return v9;
    *errno() = 42;
  }
  return 0xFFFFFFFFLL;
}
