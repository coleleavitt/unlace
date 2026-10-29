/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: HandlerRoutine
// Address: 0x0046C250

//----- (0046C250) --------------------------------------------------------
BOOL __stdcall HandlerRoutine(DWORD CtrlType)
{
  int *v1; // edx
  uintptr_t v2; // esi
  void (__cdecl *v3)(int); // esi
  int v5; // [esp-4h] [ebp-34h]

  sub_47A78B(3);
  if ( CtrlType )
  {
    v1 = &dword_4B78E4;
    v2 = dword_4B78E4 ^ __security_cookie;
    v5 = 21;
  }
  else
  {
    v1 = &dword_4B78E0;
    v2 = dword_4B78E0 ^ __security_cookie;
    v5 = 2;
  }
  v3 = (void (__cdecl *)(int))__ROR4__(v2, __security_cookie & 0x1F);
  if ( (unsigned int)v3 >= 2 )
    *v1 = __security_cookie;
  sub_47A7D3(3);
  if ( !v3 )
    return 0;
  if ( v3 != (void (__cdecl *)(int))1 )
    v3(v5);
  return 1;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4B78E0: using guessed type int dword_4B78E0;
// 4B78E4: using guessed type int dword_4B78E4;
