/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044830
// Address: 0x0000000140044830

//----- (0000000140044830) ----------------------------------------------------
bool __fastcall sub_140044830(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r8
  __int64 *v5; // rcx
  __int64 *v6; // rax
  int v7; // edx
  __int64 v8; // rax

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
    return 1;
  v4 = *(__int64 **)(a1 + 296);
  v5 = v4;
  v6 = (__int64 *)v4[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *(_DWORD *)(a2 + 4);
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v7 )
        v5 = v6;
      else
        v6 += 2;
      v6 = (__int64 *)*v6;
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  return !*((_BYTE *)v5 + 25)
      && *(_DWORD *)(a2 + 4) >= *((_DWORD *)v5 + 8)
      && v5 != v4
      && (v8 = v5[6]) != 0
      && *(_QWORD *)(v5[5] + 48 * v8 - 16) == *(_QWORD *)(a2 + 8);
}
