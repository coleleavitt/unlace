/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_412090
// Address: 0x00412090

//----- (00412090) --------------------------------------------------------
int __thiscall sub_412090(int *this, unsigned int a2, int a3)
{
  unsigned int v4; // esi
  int result; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  char v8; // cl
  int v9; // [esp+10h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-10h]

  v4 = a2;
  sub_408C10(this + 54, &v9, &a2);
  if ( !*(_BYTE *)(v10 + 13) && v4 >= *(_DWORD *)(v10 + 16) && v10 != *(this + 54) )
    return v4;
  v6 = (_DWORD *)*(this + 56);
  v7 = &v6[9 * *(this + 57)];
  if ( v6 == v7 )
    goto LABEL_14;
  do
  {
    if ( v4 == *v6 && v6[4] == 4 )
      break;
    v6 += 9;
  }
  while ( v6 != v7 );
  if ( v6 == v7 || (*(this + 24) & 0xFFFFFFF) == 5 && *(this + 22) == v4 && *(this + 21) == a3 )
LABEL_14:
    v8 = 0;
  else
    v8 = 1;
  result = -1;
  if ( v8 )
    return v4;
  return result;
}
