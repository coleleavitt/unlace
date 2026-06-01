/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FC10
// Address: 0x000000000005FC10

//----- (000000000005FC10) ----------------------------------------------------
__int64 __fastcall sub_5FC10(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  unsigned __int64 i; // rbx

  v2 = a1[2];
  v3 = a1 + 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v5 = *v3;
      for ( i = 0; i < v4; ++i )
        *(_BYTE *)(v5 + i) = toupper(*(unsigned __int8 *)(v5 + i));
    }
  }
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = *v3;
  *(_QWORD *)(a2 + 16) = a1[2];
  *(_QWORD *)(a2 + 24) = a1[3];
  *(_OWORD *)v3 = 0;
  a1[3] = 0;
  return 0;
}
