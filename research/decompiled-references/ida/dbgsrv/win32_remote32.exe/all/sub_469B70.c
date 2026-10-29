/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469B70
// Address: 0x00469B70

//----- (00469B70) --------------------------------------------------------
char *__thiscall sub_469B70(int *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  char *result; // eax
  _BYTE *v9; // edi
  _BYTE *i; // ecx
  int v11; // edx
  char v12; // dl

  v5 = this + 16;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  result = (char *)(sub_469A8C(v5) - 1);
  v9 = (char *)v6 + (_DWORD)result;
  *(this + 13) = (int)v9;
  for ( i = v9; ; i = (_BYTE *)*(this + 13) )
  {
    v11 = *(this + 10);
    if ( v11 <= 0 && !a2 )
      break;
    *(this + 10) = v11 - 1;
    v12 = a2 % a3 + 48;
    a2 /= a3;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    result = (char *)*(this + 13);
    *result = v12;
    --*(this + 13);
  }
  *(this + 14) = v9 - i;
  ++*(this + 13);
  return result;
}
