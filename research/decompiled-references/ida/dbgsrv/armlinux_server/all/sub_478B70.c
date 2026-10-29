/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478B70
// Address: 0x0000000000478B70

//----- (0000000000478B70) ----------------------------------------------------
_DWORD *__fastcall sub_478B70(__int64 a1, unsigned __int8 a2)
{
  int v2; // w20
  __int64 (*v4)(void); // x1
  __int64 v5; // x0
  __int64 v6; // x5
  unsigned __int8 *v7; // x4
  unsigned __int8 *v8; // x2
  __int64 v9; // x0
  int v10; // t1
  signed int v11; // w2
  __int64 v12; // x20
  _DWORD *v13; // x0
  _DWORD *v14; // x22
  __time_t v16; // x0
  void *v17; // x0
  __time_t v18; // x0
  unsigned int v19[2]; // [xsp+40h] [xbp-30h] BYREF
  char v20[32]; // [xsp+48h] [xbp-28h] BYREF

  v2 = a2;
  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v4 == (char *)sub_477AB0 )
    v5 = *(_QWORD *)(a1 + 96);
  else
    v5 = v4();
  if ( !v5 || *(_BYTE *)(a1 + 8) )
    return nullptr;
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    v7 = *(unsigned __int8 **)(a1 + 48);
    if ( *v7 != v2 )
    {
      v8 = v7 + 8;
      v9 = 0;
      do
      {
        if ( ++v9 == v6 )
          break;
        v10 = *v8;
        v8 += 8;
      }
      while ( v10 != v2 );
    }
  }
  if ( (unsigned int)sub_477DF0(a1, (__int64)v19, 5) )
    return nullptr;
  v11 = bswap32(v19[0]);
  v19[0] = v11;
  if ( v11 < 0 || ((v11 > 0x2000) & (*(unsigned __int8 *)(a1 + 69) ^ 1)) != 0 )
  {
    v16 = sub_4926B8();
    sub_477950(v20, 0x19u, v16, 0);
    v14 = nullptr;
    sub_478A50("%s rpc: bad packet length", v20);
  }
  else
  {
    v12 = v11;
    v13 = sub_491040(v11 + 5LL);
    v14 = v13;
    if ( v13 )
    {
      *v13 = v19[0];
      *(_DWORD *)((char *)v13 + 1) = *(unsigned int *)((char *)v19 + 1);
      if ( (unsigned int)sub_477DF0(a1, (__int64)v13 + 5, v12) )
      {
        v17 = v14;
        v14 = nullptr;
        j__free(v17);
      }
    }
    else
    {
      v18 = sub_4926B8();
      sub_477950(v20, 0x19u, v18, 0);
      sub_478A50("%s rpc: no local memory", v20);
    }
  }
  return v14;
}
