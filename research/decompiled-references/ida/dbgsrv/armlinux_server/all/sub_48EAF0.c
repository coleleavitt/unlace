/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48EAF0
// Address: 0x000000000048EAF0

//----- (000000000048EAF0) ----------------------------------------------------
__int64 __fastcall sub_48EAF0(__int64 a1)
{
  _QWORD *v2; // x22
  __int64 v3; // x21
  __int64 v4; // x3
  int v5; // w2

  v2 = (_QWORD *)(a1 + 4104);
  v3 = a1 + 4120;
  do
  {
    v5 = *(_DWORD *)(a1 + 8240);
    if ( v5 >= *(_DWORD *)(a1 + 8244) )
      return 0xFFFFFFFFLL;
    v4 = *(_QWORD *)(a1 + 8232);
    *(_DWORD *)(a1 + 8240) = v5 + 1;
  }
  while ( (unsigned int)sub_48E9B0(v3, v2, (char *)(*(_QWORD *)(v4 + 8LL * v5) + 19LL)) );
  *(_DWORD *)a1 = *(_DWORD *)(a1 + 4120);
  sub_4860D8(a1 + 4, (unsigned __int8 *)(v3 + 4), 4096);
  *(_WORD *)(a1 + 4112) = *(_WORD *)(a1 + 8224);
  *(_WORD *)(a1 + 4114) = *(_WORD *)(a1 + 8226);
  return 0;
}
