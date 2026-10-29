/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_320EC
// Address: 0x000320EC

//----- (000320EC) --------------------------------------------------------
int __fastcall sub_320EC(int a1, void **a2, unsigned int a3)
{
  int v3; // r3

  if ( !*(_BYTE *)(a1 + 136) )
  {
    if ( !under_debugger )
      interr(20099);
    __debugbreak();
  }
  v3 = 0;
  if ( *(_DWORD *)(a1 + 20) > a3 )
  {
    v3 = 0;
    if ( *(__int64 *)(a1 + 144) >= 1 )
    {
      if ( *(_QWORD *)(a1 + 160) )
        return sub_32154(
                 *(_DWORD *)(a1 + 132),
                 a2,
                 (__int64 *)(a1 + 144),
                 *(_DWORD *)(*(_DWORD *)(a1 + 16) + (a3 << 6)));
    }
  }
  return v3;
}
// E0550: using guessed type char under_debugger;
