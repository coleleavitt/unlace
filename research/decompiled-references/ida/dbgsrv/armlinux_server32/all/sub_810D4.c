/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_810D4
// Address: 0x000810D4

//----- (000810D4) --------------------------------------------------------
void __noreturn sub_810D4()
{
  int v0; // r0
  __int64 v1; // kr00_8

  v0 = sub_840B0();
  v1 = *(_QWORD *)v0;
  ++*(_DWORD *)(v0 + 4);
  if ( (_DWORD)v1 )
  {
    if ( *(_BYTE *)(v1 + 32) == 71
      && *(_BYTE *)(v1 + 33) == 78
      && *(_BYTE *)(v1 + 34) == 85
      && *(_BYTE *)(v1 + 35) == 67
      && *(_BYTE *)(v1 + 36) == 67
      && *(_BYTE *)(v1 + 37) == 43
      && *(_BYTE *)(v1 + 38) == 43
      && *(unsigned __int8 *)(v1 + 39) <= 1u )
    {
      *(_DWORD *)(v1 + 20) = -*(_DWORD *)(v1 + 20);
    }
    else
    {
      *(_DWORD *)v0 = 0;
    }
    Unwind_Resume_or_Rethrow(v1 + 32);
  }
  sub_80A40();
}
// 141A0: using guessed type void __fastcall __noreturn Unwind_Resume_or_Rethrow(_DWORD);
