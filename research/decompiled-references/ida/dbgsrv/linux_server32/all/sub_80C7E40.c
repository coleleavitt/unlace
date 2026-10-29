/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7E40
// Address: 0x080C7E40

//----- (080C7E40) --------------------------------------------------------
int __usercall sub_80C7E40@<eax>(int a1@<eax>)
{
  _WORD *v1; // edx
  _WORD *v2; // esi
  int v3; // ebx
  int result; // eax
  int v5; // ecx

  v1 = (_WORD *)(a1 + 4);
  v2 = (_WORD *)(a1 + 22);
  v3 = 0;
  do
  {
    result = (unsigned __int16)*v1;
    LOWORD(result) = (unsigned __int16)result >> 1;
    v5 = v3 | *v1 & 1;
    if ( (v3 & 2) != 0 )
      result |= 0x8000u;
    ++v1;
    v3 = 2 * v5;
    *(v1 - 1) = result;
  }
  while ( v2 != v1 );
  return result;
}
