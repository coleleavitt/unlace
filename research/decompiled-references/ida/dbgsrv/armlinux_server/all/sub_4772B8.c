/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4772B8
// Address: 0x00000000004772B8

//----- (00000000004772B8) ----------------------------------------------------
__int64 __fastcall sub_4772B8(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v5; // x19
  unsigned int v6; // w23
  void *v7; // x0
  unsigned int v8; // w19
  unsigned __int64 v11; // x0
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // x0
  unsigned __int64 v14; // x3
  unsigned __int64 v15; // x0
  unsigned __int64 v16; // x0
  unsigned __int64 v17; // x3
  __int64 v18; // x0
  void *v19; // x22
  void *v20; // x0
  __int64 v21; // x23
  __int64 v22; // x24
  void *v23; // x0
  unsigned int v24; // [xsp+4Ch] [xbp-24h] BYREF
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  __int64 v26; // [xsp+58h] [xbp-18h]
  __int64 v27; // [xsp+60h] [xbp-10h]

  if ( a3 < 0 || (v11 = sub_4926B8(), (v5 = (unsigned int)v11 + 1000LL * a3 + 1000000 * HIDWORD(v11)) == 0) )
  {
    v5 = 0;
    if ( !sub_477120(a1, (__int64)&v24, 4, -1) )
      return 0;
  }
  else
  {
    v12 = sub_4926B8();
    v13 = (unsigned int)v12 + 1000000 * HIDWORD(v12);
    v14 = (v5 - v13) / 0x3E8;
    if ( v5 <= v13 )
      LODWORD(v14) = 0;
    if ( !sub_477120(a1, (__int64)&v24, 4, v14) )
      return 0;
  }
  v6 = bswap32(v24);
  v24 = v6;
  if ( v6 )
  {
    ptr = nullptr;
    v26 = 0;
    v27 = 0;
    ptr = sub_491288((__int64)&ptr, nullptr, v6 + 1LL, 1u);
    memset((char *)ptr + v26, 0, v6 + 1LL - v26);
    v26 = v6 + 1LL;
    *((_BYTE *)ptr + v6) = 0;
    if ( v5 )
    {
      v15 = sub_4926B8();
      v16 = (unsigned int)v15 + 1000000 * HIDWORD(v15);
      v17 = (v5 - v16) / 0x3E8;
      if ( v16 >= v5 )
        LODWORD(v17) = 0;
    }
    else
    {
      LODWORD(v17) = -1;
    }
    v18 = sub_477120(a1, (__int64)ptr, v24, v17);
    v19 = ptr;
    if ( v18 )
    {
      v20 = *(void **)a2;
      v22 = v26;
      v21 = v27;
      ptr = nullptr;
      v26 = 0;
      v27 = 0;
      if ( !v20 )
      {
        *(_QWORD *)a2 = v19;
        *(_QWORD *)(a2 + 8) = v22;
        v8 = 1;
        *(_QWORD *)(a2 + 16) = v21;
        return v8;
      }
      *(_QWORD *)(a2 + 8) = 0;
      v8 = 1;
      j__free(v20);
      *(_QWORD *)a2 = v19;
      *(_QWORD *)(a2 + 8) = v22;
      v23 = ptr;
      *(_QWORD *)(a2 + 16) = v21;
      v19 = v23;
    }
    else
    {
      v8 = 0;
    }
    if ( v19 )
    {
      v26 = 0;
      j__free(v19);
    }
  }
  else
  {
    v7 = *(void **)a2;
    v8 = 1;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      j__free(v7);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
  }
  return v8;
}
// 4772B8: could not find valid save-restore pair for x24
