/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C197
// Address: 0x0046C197

//----- (0046C197) --------------------------------------------------------
int __usercall sub_46C197@<eax>(int a1@<ebx>, int a2@<edi>, int a3)
{
  int v4; // [esp+0h] [ebp-14h] BYREF
  int *v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  v7 = a3;
  if ( !a3 )
    return sub_46C03C(0);
  if ( !sub_46C0BC(*(_DWORD *)(a3 + 12)) )
    return 0;
  v5 = &v7;
  v6 = v7;
  v4 = v7;
  return sub_46BFDC(a1, a2, &v4, (_DWORD ***)&v5, &v6);
}
