/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4118D0
// Address: 0x00000000004118D0

//----- (00000000004118D0) ----------------------------------------------------
__int64 __fastcall sub_4118D0(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // x3
  __int64 v7; // x0
  __int64 v8; // x2
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // [xsp+40h] [xbp-50h] BYREF
  __int64 v13; // [xsp+48h] [xbp-48h]
  char v14; // [xsp+50h] [xbp-40h]
  int v15; // [xsp+54h] [xbp-3Ch]
  __int64 v16; // [xsp+58h] [xbp-38h]
  __int64 v17; // [xsp+60h] [xbp-30h]
  __int64 v18; // [xsp+68h] [xbp-28h]
  __int64 v19; // [xsp+70h] [xbp-20h]
  __int64 v20; // [xsp+78h] [xbp-18h]
  __int64 v21; // [xsp+80h] [xbp-10h]
  __int64 v22; // [xsp+88h] [xbp-8h]

  v4 = a1 + 1920;
  v7 = *(_QWORD *)(a1 + 1928);
  v8 = 0;
  if ( !v7 )
    goto LABEL_10;
  v8 = v4;
  do
  {
    while ( *(_DWORD *)(v7 + 32) >= (signed int)a2 )
    {
      v8 = v7;
      v7 = *(_QWORD *)(v7 + 16);
      if ( !v7 )
        goto LABEL_5;
    }
    v7 = *(_QWORD *)(v7 + 24);
  }
  while ( v7 );
LABEL_5:
  if ( v4 == v8 || *(_DWORD *)(v8 + 32) > (signed int)a2 )
    goto LABEL_10;
  *(_DWORD *)(v8 + 60) = a3;
  v16 = 0;
  v17 = 0;
  v12 = 0xFFFFFFFFLL;
  v13 = -1;
  v14 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v15 = 0;
  sub_482FB0((__int64)&v12, 4u);
  if ( (((v15 & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( !under_debugger )
      sub_492270(3296);
    __break(0x3E8u);
LABEL_10:
    sub_40A690((int)"unknown thread %d died\n", a2, v8, v4);
    return v22 ^ _stack_chk_guard;
  }
  v10 = *(_QWORD *)(a1 + 184);
  v11 = *(_QWORD *)(a1 + 168);
  LODWORD(v12) = *(_DWORD *)(a1 + 2044);
  HIDWORD(v12) = a2;
  v13 = -1;
  v14 = 1;
  LODWORD(v16) = 0;
  if ( v11 == v10 - 72 )
  {
    sub_411490((_QWORD *)(a1 + 120), (__int64)&v12);
  }
  else
  {
    *(_QWORD *)v11 = 0xFFFFFFFFLL;
    *(_QWORD *)(v11 + 8) = -1;
    *(_BYTE *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 20) = 0;
    sub_483128(v11, (__int64)&v12);
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  *(_BYTE *)(a1 + 2116) = 0;
  if ( a3 == 3 )
    sub_40B690(a1, (_QWORD *)a2);
  sub_482ED0((__int64)&v12);
  return v22 ^ _stack_chk_guard;
}
// 4119A8: variable 'v8' is possibly undefined
// 4119A8: variable 'v4' is possibly undefined
// 52451C: using guessed type char under_debugger;
