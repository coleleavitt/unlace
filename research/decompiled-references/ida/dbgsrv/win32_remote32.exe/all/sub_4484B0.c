/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4484B0
// Address: 0x004484B0

//----- (004484B0) --------------------------------------------------------
_DWORD *__thiscall sub_4484B0(const CHAR **this, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // edi
  LPVOID v9; // eax
  unsigned int v11; // [esp+2Ch] [ebp+Ch]
  const CHAR *v12; // [esp+30h] [ebp+10h]

  v5 = (int)*(this + 1);
  v6 = a4;
  v7 = a3;
  if ( ((v5 - 1) & (unsigned int)-(v5 != 0)) < a4 )
    v6 = v5 != 0 ? v5 - 1 : 0;
  if ( a3 >= v6 )
    v7 = v6;
  v11 = v7;
  if ( v5 )
    v12 = *this;
  else
    v12 = MultiByteStr;
  v8 = v6 - v7;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if ( v8 )
  {
    v9 = nullptr;
    if ( v8 != -1 )
    {
      v9 = sub_453B00((int)a2, nullptr, v8 + 1, 1u);
      *a2 = v9;
    }
    a2[1] = v8 + 1;
    sub_464310((unsigned int)v9, (unsigned int)&v12[v11], v8);
    *(_BYTE *)(v8 + *a2) = 0;
  }
  return a2;
}
