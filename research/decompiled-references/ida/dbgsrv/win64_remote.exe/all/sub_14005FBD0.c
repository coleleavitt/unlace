/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005FBD0
// Address: 0x000000014005FBD0

//----- (000000014005FBD0) ----------------------------------------------------
__int64 __fastcall sub_14005FBD0(__int64 a1, const CHAR *a2, __int64 a3, WCHAR *a4, int *a5)
{
  unsigned int v8; // edi
  UINT v9; // ecx
  int v11; // edx
  DWORD v12; // edx
  int v13; // eax

  v8 = (*(__int64 (**)(void))(a1 + 24))();
  if ( v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 == 20127 && *a2 >= 0x80u
    || (v9 - 50220 <= 9 && (v11 = 679, _bittest(&v11, v9 - 50220))
     || v9 == 52936
     || v9 == 54936
     || v9 - 57002 <= 9
     || v9 == 65000
     || v9 == 42
      ? (v12 = 0)
      : (v12 = 8),
        v13 = MultiByteToWideChar(v9, v12, a2, v8, a4, *a5),
        (*a5 = v13) == 0) )
  {
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  return v8;
}
