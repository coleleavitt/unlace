/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfindnext
// Address: 0x00000000000C0970

//----- (00000000000C0970) ----------------------------------------------------
__int64 __fastcall qfindnext(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  while ( 1 )
  {
    v1 = *(int *)(a1 + 8240);
    if ( (int)v1 >= *(_DWORD *)(a1 + 8244) )
      break;
    *(_DWORD *)(a1 + 8240) = v1 + 1;
    if ( !sub_C0820(a1 + 4120, nullptr, (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8232) + 8 * v1) + 19LL)) )
    {
      *(_DWORD *)a1 = *(_DWORD *)(a1 + 4120);
      qustrncpy(a1 + 4, a1 + 4124, 4096);
      v2 = *(unsigned int *)(a1 + 8220);
      *(_DWORD *)(a1 + 4112) = *(_DWORD *)(a1 + 8224);
      *(_QWORD *)(a1 + 4104) = v2;
      return 0;
    }
  }
  return 0xFFFFFFFFLL;
}
