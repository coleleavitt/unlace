/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_92A20
// Address: 0x0000000000092A20

//----- (0000000000092A20) ----------------------------------------------------
__int64 __fastcall sub_92A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  int v5; // eax
  unsigned int v6; // ecx
  __int64 result; // rax

  v4 = *(_BYTE *)(a4 + 289);
  if ( !v4 || (v5 = sub_95120(a4, 0x28u), v6 = 2, !v5) )
    v6 = 1;
  result = 0;
  if ( v4 )
    return v6;
  return result;
}
