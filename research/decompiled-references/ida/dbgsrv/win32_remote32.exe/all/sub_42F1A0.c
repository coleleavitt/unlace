/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42F1A0
// Address: 0x0042F1A0

//----- (0042F1A0) --------------------------------------------------------
bool __thiscall sub_42F1A0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  char v4; // bl
  int v5; // eax
  int *v6; // edi
  int v7; // eax

  v3 = a3;
  v4 = 0;
  LOBYTE(a3) = 0;
  if ( a2 < 0 )
  {
    if ( -a2 >= (unsigned int)dword_4B4060 )
      return 0;
    v6 = (int *)off_4B4064[-6 * a2 + 4];
    v7 = sub_427510((const char *)off_4B4064[-6 * a2 + 2], (char *)&a3);
    v4 = a3;
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || (unsigned int)a2 >= *(this + 1) )
      return 0;
    v5 = *(_DWORD *)(*this + 4 * a2);
    v6 = *(int **)(v5 + 36);
    v7 = *(_DWORD *)(v5 + 12);
  }
  if ( (int)v6 + v3 < v7 )
    return 0;
  return v4 || v3 <= v7;
}
// 4B4060: using guessed type int dword_4B4060;
// 4B4064: using guessed type int (**off_4B4064)[49];
