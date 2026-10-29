/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D95B0
// Address: 0x00000000000D95B0

//----- (00000000000D95B0) ----------------------------------------------------
__int64 __fastcall sub_D95B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  char v6; // al

  if ( *(_BYTE *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 1;
    v5 = *(_QWORD *)(a1 + 24);
    v6 = *(_BYTE *)(v5 + 9);
    if ( v6 == 2 )
      a4 = (**(__int64 (__fastcall ***)(__int64))v5)(v5);
    else
      LOBYTE(a4) = v6 == 0;
    *(_BYTE *)(a1 + 32) = 0;
  }
  return a4;
}
