/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43F850
// Address: 0x0043F850

//----- (0043F850) --------------------------------------------------------
bool __stdcall sub_43F850(int a1)
{
  int v1; // eax

  v1 = sub_439DB0();
  return v1 && (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v1 + 240))(v1, a1, 0) >= 0;
}
