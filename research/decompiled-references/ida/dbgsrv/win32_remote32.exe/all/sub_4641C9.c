/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4641C9
// Address: 0x004641C9

//----- (004641C9) --------------------------------------------------------
_DWORD *__usercall sub_4641C9@<eax>(int a1@<ebx>, int *a2@<edi>, int a3@<esi>, int a4)
{
  int v4; // esi
  _DWORD *result; // eax
  int *i; // ecx
  int v7; // eax

  if ( a4 == *((_DWORD *)sub_4667C5(a1, a2, a3) + 9) )
  {
    v4 = *(_DWORD *)(a4 + 4);
    result = sub_4667C5(a1, a2, v4);
    result[9] = v4;
  }
  else
  {
    for ( i = (int *)(*((_DWORD *)sub_4667C5(a1, a2, a4) + 9) + 4); ; i = (int *)(v7 + 4) )
    {
      v7 = *i;
      if ( !*i )
        sub_467F38(a1, a2, a4);
      if ( a4 == v7 )
        break;
    }
    result = *(_DWORD **)(a4 + 4);
    *i = (int)result;
  }
  return result;
}
