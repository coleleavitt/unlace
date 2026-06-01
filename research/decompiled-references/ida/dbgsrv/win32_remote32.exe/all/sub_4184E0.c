/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4184E0
// Address: 0x004184E0

//----- (004184E0) --------------------------------------------------------
bool __thiscall sub_4184E0(void *this, int a2, int a3)
{
  __int16 v5; // [esp+14h] [ebp-4h] BYREF
  char v6; // [esp+16h] [ebp-2h]

  return sub_4085E0() > 0
      && (*(int (__stdcall **)(void *, _DWORD, __int16 *, int, _DWORD))(*(_DWORD *)this + 140))(
           this,
           *(_DWORD *)(a2 + 8),
           &v5,
           3,
           0) == 3
      && v5 == -156
      && v6 == 21;
}
