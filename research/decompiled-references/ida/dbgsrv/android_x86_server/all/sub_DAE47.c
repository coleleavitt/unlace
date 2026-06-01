/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DAE47
// Address: 0x000DAE47

//----- (000DAE47) --------------------------------------------------------
int __usercall sub_DAE47@<eax>(char a1@<al>, int a2@<edx>)
{
  unsigned __int8 v2; // al
  bool v3; // zf

  if ( a1 == -1 )
    return 0;
  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return *(_DWORD *)(a2 + 4);
  if ( v2 > 0x20u )
  {
    if ( v2 == 48 )
      return *(_DWORD *)(a2 + 8);
    v3 = v2 == 80;
    goto LABEL_8;
  }
  if ( v2 )
  {
    v3 = v2 == 16;
LABEL_8:
    if ( !v3 )
      abort();
  }
  return 0;
}
