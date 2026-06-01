/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441F20
// Address: 0x00441F20

//----- (00441F20) --------------------------------------------------------
int __thiscall sub_441F20(_BYTE *this, unsigned __int8 **a2, int *a3, int *a4, int a5)
{
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // ebx
  int result; // eax

  v6 = *(unsigned __int8 **)a5;
  v7 = *(unsigned __int8 **)a5;
  while ( (unsigned int)v6 < *(_DWORD *)(a5 + 4) )
  {
    if ( !*v6++ )
    {
      *(_DWORD *)a5 = v6;
      goto LABEL_6;
    }
  }
  v7 = nullptr;
LABEL_6:
  *a2 = v7;
  *a3 = sub_4541E0((unsigned __int8 **)a5, *(_DWORD *)(a5 + 4));
  result = sub_4541E0((unsigned __int8 **)a5, *(_DWORD *)(a5 + 4));
  *a4 = result;
  if ( *(this + 104) )
    return sub_402760("file_path = %s; arch = %d; is_be = %d.\n");
  return result;
}
