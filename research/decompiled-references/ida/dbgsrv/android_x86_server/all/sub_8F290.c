/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F290
// Address: 0x0008F290

//----- (0008F290) --------------------------------------------------------
bool __cdecl sub_8F290(int a1)
{
  int v1; // eax

  v1 = sub_8EB10();
  return v1 && (*(int (__cdecl **)(int, int, _DWORD))(*(_DWORD *)v1 + 244))(v1, a1, 0) >= 0;
}
