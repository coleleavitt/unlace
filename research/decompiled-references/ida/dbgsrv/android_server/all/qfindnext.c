/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindnext
// Address: 0x00000000000BBCCC

//----- (00000000000BBCCC) ----------------------------------------------------
__int64 __fastcall qfindnext(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9

  v2 = a1 + 4120;
  while ( 1 )
  {
    v3 = *(int *)(a1 + 8240);
    if ( (int)v3 >= *(_DWORD *)(a1 + 8244) )
      break;
    v4 = *(_QWORD *)(a1 + 8232);
    *(_DWORD *)(a1 + 8240) = v3 + 1;
    if ( !(unsigned int)sub_BBBA4(v2, nullptr, (char *)(*(_QWORD *)(v4 + 8 * v3) + 19LL)) )
    {
      *(_DWORD *)a1 = *(_DWORD *)(a1 + 4120);
      qustrncpy(a1 + 4, a1 + 4124, 4096);
      v5 = *(unsigned int *)(a1 + 8220);
      *(_DWORD *)(a1 + 4112) = *(_DWORD *)(a1 + 8224);
      *(_QWORD *)(a1 + 4104) = v5;
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}
