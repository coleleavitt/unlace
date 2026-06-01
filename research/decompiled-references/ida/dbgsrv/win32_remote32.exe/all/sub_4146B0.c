/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4146B0
// Address: 0x004146B0

//----- (004146B0) --------------------------------------------------------
char __thiscall sub_4146B0(HANDLE *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  DWORD LastError; // eax

  if ( !*((_BYTE *)*this + 28) )
    return 0;
  if ( *(this + 1) != (HANDLE)-1 )
    CloseHandle(*(this + 1));
  v4 = 0;
  while ( 1 )
  {
    v5 = (*(int (__stdcall **)(int, int))*this)(a2, a3);
    *(this + 1) = (HANDLE)v5;
    if ( v5 != -1 )
      break;
    LastError = GetLastError();
    *(this + 2) = (HANDLE)LastError;
    if ( LastError == 24 && (a2 & 0x18) != 0 && ++v4 < 5 )
      continue;
    return 0;
  }
  return 1;
}
