__int64 __fastcall ___ZNK5dyld39MachOFile28forEachCDHashOfCodeSignatureEPKvmU13block_pointerFvPKhE_block_invoke(
        __int64 result,
        __int64 a2)
{
  __int64 v3; // x19
  int v4; // w21
  int v5; // w8
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x8
  char *v10; // x23
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x8
  char *v14; // x23
  __int128 v15; // [xsp+0h] [xbp-80h] BYREF
  int v16; // [xsp+10h] [xbp-70h]
  __int128 v17; // [xsp+30h] [xbp-50h] BYREF
  int v18; // [xsp+40h] [xbp-40h]

  v3 = result;
  v4 = bswap32(*(_DWORD *)(a2 + 4));
  v5 = *(unsigned __int8 *)(a2 + 37);
  if ( (unsigned int)(v5 - 2) < 2 )
  {
    v6 = ccsha256_di();
  }
  else
  {
    if ( v5 == 1 )
    {
      v11 = ccsha1_di();
      v12 = __chkstk_darwin();
      v14 = (char *)&v15 - v13;
      ccdigest_init(v12, (char *)&v15 - v13);
      ccdigest_update(v11, (int)v14, v4, (void *)a2);
      (*(void (__fastcall **)(__int64, char *, __int128 *))(v11 + 56))(v11, v14, &v17);
      cc_clear(*(_QWORD *)(v11 + 8) + *(_QWORD *)(v11 + 16) + 12LL, v14);
      return (*(__int64 (**)(void))(*(_QWORD *)(v3 + 32) + 16LL))();
    }
    if ( v5 != 4 )
      return result;
    v6 = ccsha384_di();
  }
  v7 = v6;
  v8 = __chkstk_darwin();
  v10 = (char *)&v15 - v9;
  ccdigest_init(v8, (char *)&v15 - v9);
  ccdigest_update(v7, (int)v10, v4, (void *)a2);
  (*(void (__fastcall **)(__int64, char *, __int128 *))(v7 + 56))(v7, v10, &v15);
  cc_clear(*(_QWORD *)(v7 + 8) + *(_QWORD *)(v7 + 16) + 12LL, v10);
  v18 = v16;
  v17 = v15;
  return (*(__int64 (**)(void))(*(_QWORD *)(v3 + 32) + 16LL))();
}
