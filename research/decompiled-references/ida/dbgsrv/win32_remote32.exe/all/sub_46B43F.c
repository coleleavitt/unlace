/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B43F
// Address: 0x0046B43F

//----- (0046B43F) --------------------------------------------------------
void __thiscall sub_46B43F(int *this, unsigned int a2, unsigned int a3, _DWORD *a4, int a5)
{
  int v6; // eax
  int v7; // esi
  bool v8; // zf
  _DWORD *v9; // eax
  unsigned int v10; // esi

  if ( a3 )
  {
    v6 = *this;
    v7 = *(_DWORD *)(*this + 4);
    if ( *(_DWORD *)(*this + 8) == v7 )
    {
      v8 = *(_BYTE *)(v6 + 12) == 0;
      v9 = a4;
      if ( !v8 )
      {
LABEL_8:
        *v9 += a3;
        return;
      }
LABEL_10:
      *v9 = -1;
      return;
    }
    v10 = v7 - *(_DWORD *)(v6 + 8);
    if ( v10 >= a3 )
      v10 = a3;
    sub_464310(*(_DWORD *)v6, a2, v10);
    *(_DWORD *)*this += v10;
    *(_DWORD *)(*this + 8) += v10;
    v9 = a4;
    if ( *(_BYTE *)(*this + 12) )
      goto LABEL_8;
    if ( v10 != a3 )
      goto LABEL_10;
    *a4 += v10;
  }
}
