/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F7C0
// Address: 0x000000000047F7C0

//----- (000000000047F7C0) ----------------------------------------------------
__int64 __fastcall sub_47F7C0(__int64 a1, _BYTE *a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r12
  size_t v7; // rax

  v5 = a4;
  v7 = sub_47F6E0(a1, a2, a3, a4, a5);
  if ( v7 != a3 )
    return 0xFFFFFFFFLL;
  if ( v5 )
    sub_482080(a2, v7);
  return 0;
}
