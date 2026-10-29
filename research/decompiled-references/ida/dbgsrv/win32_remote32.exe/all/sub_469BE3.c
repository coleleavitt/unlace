/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469BE3
// Address: 0x00469BE3

//----- (00469BE3) --------------------------------------------------------
int __thiscall sub_469BE3(int *this, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // edi
  char *v9; // ecx
  int v11; // edx
  int result; // eax
  unsigned int v13; // eax
  char v14; // cl
  char v15; // cl
  unsigned int v16; // edx
  char *v17; // [esp+14h] [ebp-4h]

  v6 = this + 16;
  v7 = (_DWORD *)v6[257];
  if ( !v7 )
    v7 = v6;
  v17 = (char *)v7 + sub_469A8C(v6) - 1;
  v9 = v17;
  for ( *(this + 13) = (int)v17; ; v9 = (char *)*(this + 13) )
  {
    v11 = *(this + 10);
    if ( v11 <= 0 )
    {
      result = a3 | a2;
      if ( !(a3 | a2) )
        break;
    }
    *(this + 10) = v11 - 1;
    v13 = sub_4828A0(__PAIR64__(a3, a2), a4);
    v15 = v14 + 48;
    a2 = v13;
    a3 = v16;
    if ( v15 > 57 )
      v15 += 32 * (a5 ^ 1) + 7;
    *(_BYTE *)(*(this + 13))-- = v15;
  }
  *(this + 14) = v17 - v9;
  ++*(this + 13);
  return result;
}
// 469C3A: variable 'v14' is possibly undefined
// 469C3F: variable 'v16' is possibly undefined
