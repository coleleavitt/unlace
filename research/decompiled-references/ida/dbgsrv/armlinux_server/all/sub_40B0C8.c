/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B0C8
// Address: 0x000000000040B0C8

//----- (000000000040B0C8) ----------------------------------------------------
__int64 __fastcall sub_40B0C8(__int64 a1, __int64 *a2)
{
  int v4; // w0
  __int64 v6; // x1
  __int64 v7; // x4
  __int64 v8; // x21
  __int64 v9; // x1
  char *v10; // x0
  const char *v11; // x0
  _BYTE v12[68]; // [xsp+38h] [xbp-308h] BYREF
  int v13; // [xsp+7Ch] [xbp-2C4h]
  int v14; // [xsp+A0h] [xbp-2A0h]
  _BYTE dest[384]; // [xsp+1B8h] [xbp-188h] BYREF

  v4 = off_522088(a1, v12);
  if ( v4 )
  {
    v11 = sub_4084C0(v4);
    sub_40A608("%s: %s\n", "td_thr_get_info", v11);
  }
  if ( (v13 & 0xFFFFFFFB) != 1 )
  {
    v6 = *(_QWORD *)(*a2 + 1928);
    if ( !v6 )
      goto LABEL_10;
    v7 = *a2 + 1920;
    do
    {
      while ( *(_DWORD *)(v6 + 32) >= v14 )
      {
        v7 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_8;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v6 );
LABEL_8:
    if ( *a2 + 1920 == v7 || v14 < *(_DWORD *)(v7 + 32) )
    {
LABEL_10:
      sub_40B000(*a2, (__int64)v12, a1);
      v8 = a2[1];
      memcpy(dest, v12, sizeof(dest));
      v9 = *(_QWORD *)(v8 + 8);
      if ( (unsigned __int64)(v9 + 1) > *(_QWORD *)(v8 + 16) )
      {
        v10 = (char *)sub_491288(v8, *(void **)v8, v9 + 1, 0x180u);
        *(_QWORD *)v8 = v10;
        v9 = *(_QWORD *)(v8 + 8);
      }
      else
      {
        v10 = *(char **)v8;
      }
      memcpy(&v10[384 * v9], dest, 0x180u);
      ++*(_QWORD *)(v8 + 8);
    }
  }
  return 0;
}
// 522088: using guessed type __int64 (__fastcall *off_522088)(_QWORD, _QWORD);
