/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006848
// Address: 0x0000000100006848

//----- (0000000100006848) ----------------------------------------------------
__int64 __fastcall sub_100006848(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // w0
  int v11; // w21
  int *v12; // x0
  __int64 v13; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  int v21; // w0
  int v22; // w9
  __int64 v23; // x21
  char v24; // w0
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  __int64 v31; // x8
  __int64 v32; // x24
  void *v33; // x25
  void *v34; // x22
  void *v35; // x0
  const char *v36; // [xsp+0h] [xbp-8A0h]
  __int64 v37; // [xsp+30h] [xbp-870h] BYREF
  int v38; // [xsp+38h] [xbp-868h]
  void *__src[2]; // [xsp+40h] [xbp-860h]
  __int64 v40; // [xsp+50h] [xbp-850h]
  _BYTE v41[1024]; // [xsp+58h] [xbp-848h] BYREF
  _BYTE msg[1024]; // [xsp+458h] [xbp-448h] BYREF

  sub_1000593FC(a1, "handle process start: %d\n", a3, a4, a5, a6, a7, a8, a2);
  *(_DWORD *)(a1 + 1556) = 0;
  *(_DWORD *)(a1 + 528) = a2;
  if ( !sub_1000066F8(a1, a2) )
    return 0;
  sub_100006194(a1);
  v10 = ptrace(14, a2, nullptr, 0);
  v11 = v10;
  if ( *(_BYTE *)(a1 + 664) == 1 )
  {
    if ( v10 )
    {
      v12 = __error();
      winerr(*v12);
    }
    v36 = "PT_ATTACHEXC";
    sub_100000B44();
  }
  if ( v11 )
    return 0;
  v40 = 0;
  *(_OWORD *)__src = 0u;
  v37 = 0;
  v38 = 0;
  v13 = sub_1000029C4(a1, 5000, (mach_msg_header_t *)msg, (__int64)v41, (__int64)&v37);
  if ( (v13 & 1) == 0 )
  {
    sub_100004BD4(a1, "failed to retrieve initial stop signal\n", v15, v16, v17, v18, v19, v20, (char)v36);
    goto LABEL_30;
  }
  v21 = sub_100000A48(a1, *(_DWORD *)(a1 + 528));
  *(_DWORD *)(a1 + 1548) = v21;
  if ( (v21 & 0x1000000) != 0 )
    v22 = 8;
  else
    v22 = 4;
  if ( *(_BYTE *)(a1 + 36) == 1 )
  {
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + ((unsigned __int64)(v21 & 0x1000000) >> 21) + 8);
    *(_DWORD *)(a1 + 32) = v22;
  }
  *(_DWORD *)(a1 + 244) = v22;
  *(_BYTE *)(a1 + 1929) = (v21 & 0x1000000u) >> 24;
  sub_100006BC8(a1);
  v23 = sub_100005EA4();
  v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 672LL))(a1, v23);
  sub_1000593FC(a1, "initially stopped at %a pid=%d tid=%d task=%d\n", v25, v26, v27, v28, v29, v30, v24);
  if ( (_DWORD)v23 != HIDWORD(v37) )
  {
    if ( under_debugger != 1 )
      goto LABEL_36;
    while ( 1 )
    {
LABEL_35:
      __break(1u);
LABEL_36:
      interr(2020);
    }
  }
  v31 = *(_QWORD *)(a1 + 1912);
  if ( !v31 )
    goto LABEL_32;
  v32 = a1 + 1912;
  do
  {
    if ( *(_DWORD *)(v31 + 32) >= (int)v23 )
      v32 = v31;
    v31 = *(_QWORD *)(v31 + 8LL * (*(_DWORD *)(v31 + 32) < (int)v23));
  }
  while ( v31 );
  if ( v32 == a1 + 1912 || *(_DWORD *)(v32 + 32) > (int)v23 )
  {
LABEL_32:
    if ( under_debugger != 1 )
      interr(2021);
    goto LABEL_35;
  }
  *(_QWORD *)(v32 + 2112) = v37;
  *(_DWORD *)(v32 + 2120) = v38;
  v33 = __src[1];
  if ( __src[1] )
  {
    v34 = qalloc_or_throw(8 * (__int64)__src[1]);
    memcpy(v34, __src[0], 8LL * (_QWORD)v33);
    v35 = *(void **)(v32 + 2128);
    if ( !v35 )
      goto LABEL_29;
    goto LABEL_28;
  }
  v34 = nullptr;
  v35 = *(void **)(v32 + 2128);
  if ( v35 )
  {
LABEL_28:
    *(_QWORD *)(v32 + 2136) = 0;
    qfree(v35);
  }
LABEL_29:
  *(_QWORD *)(v32 + 2128) = v34;
  *(_QWORD *)(v32 + 2136) = v33;
  *(_QWORD *)(v32 + 2144) = v33;
  memcpy((void *)(v32 + 60), msg, 0x400u);
  memcpy((void *)(v32 + 1084), v41, 0x400u);
  sub_100003974(a1);
  sub_100006CB0((_QWORD *)a1, *(unsigned int *)(a1 + 528), v23);
  sub_100003BEC(a1);
LABEL_30:
  if ( __src[0] )
  {
    __src[1] = nullptr;
    qfree(__src[0]);
  }
  return v13;
}
// 100006A3C: variable 'v25' is possibly undefined
// 100006A3C: variable 'v26' is possibly undefined
// 100006A3C: variable 'v27' is possibly undefined
// 100006A3C: variable 'v28' is possibly undefined
// 100006A3C: variable 'v29' is possibly undefined
// 100006A3C: variable 'v30' is possibly undefined
// 100006AD4: variable 'v15' is possibly undefined
// 100006AD4: variable 'v16' is possibly undefined
// 100006AD4: variable 'v17' is possibly undefined
// 100006AD4: variable 'v18' is possibly undefined
// 100006AD4: variable 'v19' is possibly undefined
// 100006AD4: variable 'v20' is possibly undefined
// 100006AD4: variable 'v36' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
