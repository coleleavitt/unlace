/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423B40
// Address: 0x00423B40

//----- (00423B40) --------------------------------------------------------
const CHAR *__stdcall sub_423B40(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  const CHAR *result; // eax

  if ( !a1 )
    return nullptr;
  if ( *(_BYTE *)a1 != 5 )
    return nullptr;
  v1 = **(_DWORD ***)(a1 + 8);
  v2 = (_DWORD *)*v1;
  if ( (_DWORD *)*v1 == v1 )
    return nullptr;
  result = MultiByteStr;
  if ( v2[5] )
    return (const CHAR *)v2[4];
  return result;
}
