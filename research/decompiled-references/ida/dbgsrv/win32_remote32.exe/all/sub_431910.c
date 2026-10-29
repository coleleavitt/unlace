/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431910
// Address: 0x00431910

//----- (00431910) --------------------------------------------------------
_DWORD *__thiscall sub_431910(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // eax

  v4 = *(_DWORD **)(a3 + 4);
  ++*(this + 2);
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_DWORD *)(a3 + 4) = a4;
  v5 = (_DWORD *)(*(this + 3) + 8 * (a2 & *(this + 6)));
  if ( *v5 == *(this + 1) )
  {
    *v5 = a4;
    v5[1] = a4;
    return a4;
  }
  else if ( *v5 == a3 )
  {
    *v5 = a4;
    return a4;
  }
  else
  {
    if ( (_DWORD *)v5[1] == v4 )
      v5[1] = a4;
    return a4;
  }
}
