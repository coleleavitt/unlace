/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426B50
// Address: 0x00426B50

//----- (00426B50) --------------------------------------------------------
int __thiscall sub_426B50(int *this, int a2, int a3)
{
  int *v3; // esi
  int v4; // ecx
  bool v5; // zf
  int v6; // ecx
  int result; // eax
  int v8; // ecx

  v3 = this + 14;
  if ( *(this + 15) && (v4 = *(this + 15), v5 = *(_DWORD *)(*v3 + 8 * v4 - 8) == a2, v6 = *v3 + 8 * v4, v5) )
  {
    *(_DWORD *)(v6 - 4) = a3;
    return a3;
  }
  else
  {
    sub_4287D0((int)v3, v3[1] + 1);
    result = v3[1];
    v8 = *v3;
    *(_DWORD *)(v8 + 8 * result + 4) = a3;
    *(_DWORD *)(v8 + 8 * result) = a2;
    ++v3[1];
  }
  return result;
}
