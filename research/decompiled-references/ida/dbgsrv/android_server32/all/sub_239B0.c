/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_239B0
// Address: 0x000239B0

//----- (000239B0) --------------------------------------------------------
int __fastcall sub_239B0(int a1, int *a2, _DWORD *a3)
{
  unsigned __int16 v7; // [sp+10h] [bp-8h] BYREF
  int v8; // [sp+14h] [bp-4h]

  sub_6B212(a1, a2, a3);
  if ( *a3 != 2 )
    return _stack_chk_guard - v8;
  if ( (*(int (__fastcall **)(int, int, unsigned __int16 *, int, _DWORD))(*(_DWORD *)a1 + 144))(a1, *a2, &v7, 2, 0) >= 1
    && sub_699CC(v7) )
  {
    *a3 |= 0x80u;
  }
  return _stack_chk_guard - v8;
}
