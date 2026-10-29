/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424B00
// Address: 0x00424B00

//----- (00424B00) --------------------------------------------------------
const CHAR *__stdcall sub_424B00(int a1)
{
  if ( !a1 || *(_BYTE *)a1 != 5 || **(_DWORD **)(a1 + 8) == ***(_DWORD ***)(a1 + 8) )
    return nullptr;
  a1 = **(_DWORD **)(a1 + 8);
  sub_41D030((int **)&a1);
  if ( *(_DWORD *)(a1 + 20) )
    return *(const CHAR **)(a1 + 16);
  else
    return MultiByteStr;
}
