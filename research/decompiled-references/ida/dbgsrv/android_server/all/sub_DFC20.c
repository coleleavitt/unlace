/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFC20
// Address: 0x00000000000DFC20

//----- (00000000000DFC20) ----------------------------------------------------
__int64 __fastcall sub_DFC20(__int64 a1)
{
  char v1; // w8
  unsigned __int8 *v3; // x0
  int v4; // w8

  if ( *(_BYTE *)(a1 + 32) )
  {
    v1 = 0;
  }
  else
  {
    v3 = *(unsigned __int8 **)(a1 + 24);
    *(_BYTE *)(a1 + 32) = 1;
    v4 = v3[10];
    if ( v4 == 2 )
      v1 = (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v3 + 8LL))(v3);
    else
      v1 = v4 == 0;
    *(_BYTE *)(a1 + 32) = 0;
  }
  return v1 & 1;
}
