/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437960
// Address: 0x00437960

//----- (00437960) --------------------------------------------------------
int __thiscall sub_437960(_DWORD *this, int a2, int *a3)
{
  LPVOID *v4; // esi
  unsigned int v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax
  int *v8; // edi
  int result; // eax
  int v10; // esi
  int v11; // edx
  int v12; // ecx

  v4 = (LPVOID *)(this + 7);
  v5 = *(this + 8) + 1;
  if ( v5 > *(this + 9) )
    *v4 = sub_453B00((int)(this + 7), *v4, v5, 0x1Cu);
  v6 = 7 * (_DWORD)v4[1];
  v7 = *v4;
  v7[v6] = 0;
  v7[v6 + 1] = 0;
  v7[v6 + 2] = 0;
  v4[1] = (char *)v4[1] + 1;
  v8 = &v7[v6];
  v8[3] = *this;
  v8[4] = *(this + 1);
  v8[6] = *(this + 10);
  result = a2;
  v8[5] = a2;
  if ( a3 )
  {
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    *a3 = *v8;
    a3[1] = v8[1];
    result = v8[2];
    a3[2] = result;
    *v8 = v10;
    v8[1] = v11;
    v8[2] = v12;
  }
  return result;
}
