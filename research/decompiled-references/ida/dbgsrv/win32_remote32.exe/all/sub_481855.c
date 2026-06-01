/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481855
// Address: 0x00481855

//----- (00481855) --------------------------------------------------------
unsigned __int8 *__usercall sub_481855@<eax>(int a1@<ebx>, int a2@<edi>, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned __int8 *v6; // edx
  int v7; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Ch] [ebp-4h]

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return nullptr;
  }
  if ( !a4 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return nullptr;
  }
  if ( a3 >= a4 )
    return nullptr;
  sub_467FF8((int)&v7, a5);
  v6 = (unsigned __int8 *)(a4 - 1);
  if ( *(_DWORD *)(v8 + 8) )
  {
    do
      --v6;
    while ( a3 <= (unsigned int)v6 && (*(_BYTE *)(*v6 + v8 + 25) & 4) != 0 );
    v6 = (unsigned __int8 *)(a4 - (((_BYTE)a4 - (_BYTE)v6) & 1) - 1);
  }
  if ( v9 )
    *(_DWORD *)(v7 + 848) &= ~2u;
  return v6;
}
