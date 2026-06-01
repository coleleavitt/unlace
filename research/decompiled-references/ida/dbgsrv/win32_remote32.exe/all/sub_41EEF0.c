/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EEF0
// Address: 0x0041EEF0

//----- (0041EEF0) --------------------------------------------------------
char __thiscall sub_41EEF0(LPVOID *this, int *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  int v5; // ebp
  int v6; // ecx
  int v7; // edi

  v3 = *this;
  v4 = v3;
  v5 = (int)*(this + 1);
  v6 = (int)*this + 4 * v5;
  if ( v3 == (_DWORD *)v6 )
  {
LABEL_4:
    v7 = *a2;
    if ( v5 + 1 > (unsigned int)*(this + 2) )
      *this = sub_453B00((int)this, v3, v5 + 1, 4u);
    *((_DWORD *)*this + (_DWORD)*(this + 1)) = v7;
    *(this + 1) = (char *)*(this + 1) + 1;
    return 1;
  }
  else
  {
    while ( *a2 != *v4 )
    {
      if ( ++v4 == (_DWORD *)v6 )
        goto LABEL_4;
    }
    return 0;
  }
}
