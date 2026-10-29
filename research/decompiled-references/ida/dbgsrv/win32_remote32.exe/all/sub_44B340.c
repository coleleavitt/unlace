/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B340
// Address: 0x0044B340

//----- (0044B340) --------------------------------------------------------
int __thiscall sub_44B340(int *this, unsigned __int8 *a2, _DWORD *a3)
{
  int v4; // esi
  int i; // edi
  int v6; // ebx

  v4 = 0;
  if ( !*(this + 67) )
    return -1;
  for ( i = 0; ; i += 20 )
  {
    v6 = *(this + 66);
    if ( !sub_468261(v6, i, a2, *(unsigned __int8 **)(v6 + i)) )
      break;
    if ( ++v4 >= (unsigned int)*(this + 67) )
      return -1;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(v6 + i + 8);
  return v4;
}
