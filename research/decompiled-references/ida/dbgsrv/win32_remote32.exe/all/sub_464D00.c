/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464D00
// Address: 0x00464D00

//----- (00464D00) --------------------------------------------------------
void __stdcall sub_464D00(_DWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // edi
  ULONG_PTR v3; // ebx
  int v4; // [esp-8h] [ebp-24h]
  ULONG_PTR Arguments[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = a2;
  v3 = 429065504;
  if ( a2 )
  {
    if ( (*a2 & 0x10) == 0
      || (v4 = *a1 - 4,
          v2 = *(_BYTE **)(*(_DWORD *)v4 + 24),
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v4 + 32))(*(_DWORD *)(*(_DWORD *)v4 + 32), v4),
          v2) )
    {
      if ( (*v2 & 8) != 0 )
        v3 = 26820608;
    }
  }
  Arguments[1] = (ULONG_PTR)a1;
  Arguments[0] = v3;
  Arguments[2] = (ULONG_PTR)v2;
  RaiseException(0xE06D7363, 1u, 3u, Arguments);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
