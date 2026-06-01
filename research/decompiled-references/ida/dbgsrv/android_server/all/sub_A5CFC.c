/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5CFC
// Address: 0x00000000000A5CFC

//----- (00000000000A5CFC) ----------------------------------------------------
void *__fastcall sub_A5CFC(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x10
  __int64 v6; // x8
  int v7; // w8
  __time_t v8; // x0
  void *v9; // x21
  __int64 v11; // x22
  _DWORD *v12; // x0
  unsigned int v13; // w9
  __time_t v14; // x0
  unsigned int v15; // [xsp+0h] [xbp-60h] BYREF
  char v16; // [xsp+4h] [xbp-5Ch]
  pthread_mutex_t v17; // [xsp+Ch] [xbp-54h] BYREF

  *(__int64 *)((char *)&v17.__align + 28) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) || *(_BYTE *)(a1 + 8) )
    return nullptr;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(a1 + 48) + 4LL;
    do
    {
      if ( *(unsigned __int8 *)(v6 - 4) == a2 )
        break;
      ++v5;
      v6 += 8;
    }
    while ( v5 < v4 );
  }
  if ( (unsigned int)sub_A5AF4(a1, (__int64)&v15, 5) )
    return nullptr;
  v7 = bswap32(v15);
  v15 = v7;
  if ( v7 < 0 || v7 > 0x2000 && !*(_BYTE *)(a1 + 69) )
  {
    v8 = qtime64();
    format_timestamp(&v17, 25, v8, 0);
    sub_A5E74("%s rpc: bad packet length", (const char *)&v17);
    return nullptr;
  }
  v11 = v7;
  v12 = qalloc((void *)(v7 + 5LL));
  v9 = v12;
  if ( !v12 )
  {
    v14 = qtime64();
    format_timestamp(&v17, 25, v14, 0);
    sub_A5E74("%s rpc: no local memory", (const char *)&v17);
    return v9;
  }
  v13 = v15;
  *((_BYTE *)v12 + 4) = v16;
  *v12 = v13;
  if ( (unsigned int)sub_A5AF4(a1, (__int64)v12 + 5, v11) )
  {
    qfree(v9);
    return nullptr;
  }
  return v9;
}
