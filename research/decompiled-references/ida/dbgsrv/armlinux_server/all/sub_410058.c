/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410058
// Address: 0x0000000000410058

//----- (0000000000410058) ----------------------------------------------------
__int64 __fastcall sub_410058(__int64 a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x5
  __int64 v4; // x0
  __int64 v5; // x25
  __int64 v6; // x26
  __int64 v7; // x23
  __int64 v8; // x24
  void **v9; // x20
  unsigned __int64 v10; // x21
  void *v11; // t1
  FILE *v12; // x0
  _QWORD *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x2
  __int64 v16; // x2
  void *v17; // x0
  __int64 v18; // x0
  int v19; // w20
  __int64 v20; // x0
  void *v21; // x0
  void *v22; // x0
  __int64 v24[4]; // [xsp+58h] [xbp-48h] BYREF
  __int64 v25[5]; // [xsp+78h] [xbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 2044) != -1 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
  *(_QWORD *)(a1 + 2044) = -1;
  *(_BYTE *)(a1 + 861) = 0;
  v2 = *(_QWORD **)(a1 + 1928);
  *(_BYTE *)(a1 + 2052) = 0;
  *(_BYTE *)(a1 + 2117) = 0;
  *(_BYTE *)(a1 + 2118) = 0;
  sub_40E6C0(a1 + 1912, v2);
  *(_QWORD *)(a1 + 1928) = 0;
  *(_QWORD *)(a1 + 1952) = 0;
  *(_QWORD *)(a1 + 1936) = a1 + 1920;
  *(_QWORD *)(a1 + 1944) = a1 + 1920;
  sub_40E630(a1 + 1864, *(_QWORD *)(a1 + 1880));
  *(_QWORD *)(a1 + 1880) = 0;
  *(_QWORD *)(a1 + 1904) = 0;
  *(_QWORD *)(a1 + 1888) = a1 + 1872;
  *(_QWORD *)(a1 + 1896) = a1 + 1872;
  sub_40E5E8(a1 + 1816, *(_QWORD **)(a1 + 1832));
  *(_QWORD *)(a1 + 1832) = 0;
  *(_QWORD *)(a1 + 1856) = 0;
  *(_QWORD *)(a1 + 1840) = a1 + 1824;
  *(_QWORD *)(a1 + 1848) = a1 + 1824;
  v3 = *(_QWORD *)(a1 + 176);
  v25[0] = *(_QWORD *)(a1 + 168);
  v25[1] = v3;
  v4 = *(_QWORD *)(a1 + 192);
  v25[2] = *(_QWORD *)(a1 + 184);
  v25[3] = v4;
  v6 = *(_QWORD *)(a1 + 136);
  v5 = *(_QWORD *)(a1 + 144);
  v8 = *(_QWORD *)(a1 + 152);
  v7 = *(_QWORD *)(a1 + 160);
  v24[0] = v6;
  v24[1] = v5;
  v24[2] = v8;
  v24[3] = v7;
  sub_40F988(a1 + 120, v24, v25);
  v9 = (void **)(v7 + 8);
  v10 = *(_QWORD *)(a1 + 192) + 8LL;
  if ( v7 + 8 < v10 )
  {
    do
    {
      v11 = *v9++;
      j__free_0(v11);
    }
    while ( v10 > (unsigned __int64)v9 );
  }
  v12 = *(FILE **)(a1 + 2104);
  *(_QWORD *)(a1 + 168) = v6;
  *(_QWORD *)(a1 + 176) = v5;
  *(_QWORD *)(a1 + 184) = v8;
  *(_QWORD *)(a1 + 192) = v7;
  if ( v12 )
  {
    sub_4906A0(v12);
    *(_QWORD *)(a1 + 2104) = 0;
  }
  v13 = *(_QWORD **)(a1 + 528);
  *(_BYTE *)(a1 + 1712) = 0;
  sub_40D380(a1 + 512, v13);
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 536) = a1 + 520;
  *(_QWORD *)(a1 + 544) = a1 + 520;
  *(_BYTE *)(a1 + 2054) = 0;
  *(_BYTE *)(a1 + 2055) = 0;
  sub_40E770((int *)a1);
  v14 = *(_QWORD *)(a1 + 1664);
  if ( v14 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v14,
      a1 + 1672,
      *(unsigned __int8 *)(a1 + 1676));
  v15 = *(_QWORD *)(a1 + 1680);
  *(_QWORD *)(a1 + 1664) = 0;
  *(_BYTE *)(a1 + 1676) = 0;
  if ( v15 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v15,
      a1 + 1688,
      *(unsigned __int8 *)(a1 + 1692));
  v16 = *(_QWORD *)(a1 + 1696);
  *(_QWORD *)(a1 + 1680) = 0;
  *(_BYTE *)(a1 + 1692) = 0;
  if ( v16 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v16,
      a1 + 1704,
      *(unsigned __int8 *)(a1 + 1708));
  *(_QWORD *)(a1 + 1696) = 0;
  *(_BYTE *)(a1 + 1708) = 0;
  *(_DWORD *)(a1 + 2112) = 0;
  v17 = *(void **)(a1 + 2120);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 2128) = 0;
    j__free(v17);
    *(_QWORD *)(a1 + 2120) = 0;
    *(_QWORD *)(a1 + 2136) = 0;
  }
  v18 = *(_QWORD *)(a1 + 1800);
  *(_BYTE *)(a1 + 2053) = 0;
  *(_QWORD *)(a1 + 2152) = 0;
  if ( v18 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      ++v19;
      j__free(*(void **)(*(_QWORD *)(a1 + 1792) + 8 * v20));
      v20 = v19;
    }
    while ( (unsigned __int64)v19 < *(_QWORD *)(a1 + 1800) );
  }
  v21 = *(void **)(a1 + 1768);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 1776) = 0;
    j__free(v21);
    *(_QWORD *)(a1 + 1768) = 0;
    *(_QWORD *)(a1 + 1784) = 0;
  }
  v22 = *(void **)(a1 + 1792);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 1800) = 0;
    j__free(v22);
    *(_QWORD *)(a1 + 1792) = 0;
    *(_QWORD *)(a1 + 1808) = 0;
  }
  sub_45EDF8((__int64 *)a1);
  return v25[4] ^ _stack_chk_guard;
}
