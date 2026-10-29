/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100011D98
// Address: 0x0000000100011D98

//----- (0000000100011D98) ----------------------------------------------------
void __fastcall sub_100011D98(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // x3
  __int64 v6; // x8
  __int64 v7; // x19
  __int64 v8; // x20
  void *v9; // [xsp+0h] [xbp-30h] BYREF
  __int64 v10; // [xsp+8h] [xbp-28h]
  __int64 v11; // [xsp+10h] [xbp-20h]

  v3 = *(unsigned int *)(a2 + 12);
  if ( (_DWORD)v3 )
  {
    if ( *(_BYTE *)(a1 + 161) == 1 )
    {
      sub_100011EE0(a1, (__int64)a3, *(_DWORD *)(a2 + 8), v3, (__int64)"symbol table size", 0);
      if ( *(_BYTE *)(a1 + 160) == 1 )
      {
        v6 = a3[1];
        if ( (v6 & 0xFFFFFFFFFFFFFFFLL) != 0 )
        {
          v7 = *a3;
          v8 = v7 + 16 * v6;
          do
          {
            *(_DWORD *)v7 = bswap32(*(_DWORD *)v7);
            *(_WORD *)(v7 + 6) = bswap32(*(unsigned __int16 *)(v7 + 6)) >> 16;
            *(_QWORD *)(v7 + 8) = swap64(*(_QWORD *)(v7 + 8));
            v7 += 16;
          }
          while ( v7 != v8 );
        }
      }
    }
    else
    {
      v9 = nullptr;
      v10 = 0;
      v11 = 0;
      sub_10001201C(a1, (__int64)&v9, *(_DWORD *)(a2 + 8), v3, (__int64)"symbol table size", 0);
      sub_100012158((__int64)a3, (__int64 *)&v9, *(unsigned __int8 *)(a1 + 160));
      if ( v9 )
      {
        v10 = 0;
        qfree(v9);
      }
    }
  }
}
