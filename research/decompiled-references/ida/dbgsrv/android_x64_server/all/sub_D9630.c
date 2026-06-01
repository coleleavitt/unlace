/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9630
// Address: 0x00000000000D9630

//----- (00000000000D9630) ----------------------------------------------------
__int64 __fastcall sub_D9630(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _BYTE *v5; // rdi
  char v6; // al

  if ( *(_BYTE *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 1;
    v5 = *(_BYTE **)(a1 + 24);
    v6 = v5[11];
    if ( v6 == 2 )
      a4 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v5 + 16LL))(v5);
    else
      LOBYTE(a4) = v6 == 0;
    *(_BYTE *)(a1 + 32) = 0;
  }
  return a4;
}
