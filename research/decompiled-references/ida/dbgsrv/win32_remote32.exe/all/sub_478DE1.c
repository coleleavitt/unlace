/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478DE1
// Address: 0x00478DE1

//----- (00478DE1) --------------------------------------------------------
FARPROC __cdecl sub_478DE1(int a1, LPCSTR lpProcName, _DWORD *a3, _DWORD *a4)
{
  int *v4; // ebx
  int v5; // edx
  HMODULE v7; // eax
  FARPROC ProcAddress; // eax
  FARPROC v9; // esi

  v4 = &dword_4B7AB0[a1];
  v5 = __ROR4__(*v4 ^ __security_cookie, __security_cookie & 0x1F);
  if ( v5 == -1 )
    return nullptr;
  if ( v5 )
    return (FARPROC)v5;
  v7 = sub_478D1A(a3, a4);
  if ( v7 && (ProcAddress = GetProcAddress(v7, lpProcName), (v9 = ProcAddress) != nullptr) )
  {
    _InterlockedExchange(v4, sub_46B9E4((int)ProcAddress));
    return v9;
  }
  else
  {
    _InterlockedExchange(v4, __security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
    return nullptr;
  }
}
// 4B7AB0: using guessed type int dword_4B7AB0[34];
