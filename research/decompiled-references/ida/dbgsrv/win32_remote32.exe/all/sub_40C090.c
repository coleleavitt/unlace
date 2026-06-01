/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C090
// Address: 0x0040C090

//----- (0040C090) --------------------------------------------------------
_DWORD *__thiscall sub_40C090(void *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax

  v2 = *(_DWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 8) = *v2;
  if ( !*(_BYTE *)(*v2 + 13) )
    *(_DWORD *)(*v2 + 4) = a2;
  v2[1] = *(_DWORD *)(a2 + 4);
  result = *(_DWORD **)this;
  if ( a2 == *(_DWORD *)(*(_DWORD *)this + 4) )
  {
    result[1] = v2;
    *v2 = a2;
    *(_DWORD *)(a2 + 4) = v2;
  }
  else
  {
    result = *(_DWORD **)(a2 + 4);
    if ( a2 == *result )
      *result = v2;
    else
      result[2] = v2;
    *v2 = a2;
    *(_DWORD *)(a2 + 4) = v2;
  }
  return result;
}
