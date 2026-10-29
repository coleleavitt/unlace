/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467A8E
// Address: 0x00467A8E

//----- (00467A8E) --------------------------------------------------------
FARPROC __cdecl sub_467A8E(int a1, LPCSTR lpProcName, int *a3, int *a4)
{
  FARPROC result; // eax
  HMODULE v6; // esi
  HMODULE v7; // eax
  volatile __int32 *v8; // ecx
  int *v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  v9 = &dword_4B78B0[a1];
  result = (FARPROC)*v9;
  if ( *v9 == -1 )
    return nullptr;
  if ( !result )
  {
    while ( 1 )
    {
      if ( a3 == a4 )
        goto LABEL_12;
      v10 = *a3;
      v6 = (HMODULE)dword_4B78A4[*a3];
      if ( v6 )
      {
        if ( v6 != (HMODULE)-1 )
          goto LABEL_16;
      }
      else
      {
        v7 = sub_467B2E((WCHAR *)(&off_4A4EA0)[*a3]);
        v6 = v7;
        v8 = &dword_4B78A4[v10];
        if ( v7 )
        {
          if ( _InterlockedExchange(v8, (__int32)v7) )
            FreeLibrary(v7);
LABEL_16:
          result = GetProcAddress(v6, lpProcName);
          if ( !result )
          {
LABEL_12:
            _InterlockedExchange(v9, -1);
            return nullptr;
          }
          _InterlockedExchange(v9, (__int32)result);
          return result;
        }
        _InterlockedExchange(v8, -1);
      }
      ++a3;
    }
  }
  return result;
}
// 4B78A4: using guessed type int dword_4B78A4[3];
// 4B78B0: using guessed type int dword_4B78B0[5];
