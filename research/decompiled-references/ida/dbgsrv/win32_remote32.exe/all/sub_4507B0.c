/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4507B0
// Address: 0x004507B0

//----- (004507B0) --------------------------------------------------------
_DWORD *__stdcall sub_4507B0(int a1, int a2, __int16 a3, int a4)
{
  _DWORD *v4; // esi
  _WORD *v5; // eax
  _WORD *v6; // ecx

  v4 = sub_46C90D(1u, 0x20u);
  if ( !v4 )
    return nullptr;
  v5 = sub_46C90D(1u, 0x10u);
  v6 = v5;
  if ( !v5 )
  {
    sub_46C918(v4);
    return nullptr;
  }
  v4[1] = 2;
  *v5 = 2;
  v5[1] = a3;
  *((_DWORD *)v5 + 1) = a4;
  v4[2] = a1;
  v4[3] = a2;
  v4[4] = 16;
  v4[6] = v6;
  return v4;
}
