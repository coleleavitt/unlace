void __fastcall sub_57F9D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi

  if ( a1 )
  {
    sub_57F960(a1, nullptr, a3, a4, a5, a6);
    sub_56E640(*(_QWORD *)(a1 + 1216));
    v7 = *(void **)(a1 + 1272);
    if ( v7 )
    {
      off_8C52A0(v7);
      *(_QWORD *)(a1 + 1272) = 0;
      *(_QWORD *)(a1 + 1280) = 0;
    }
    v8 = *(void **)(a1 + 1456);
    if ( v8 )
    {
      off_8C52A0(v8);
      *(_QWORD *)(a1 + 1456) = 0;
      *(_QWORD *)(a1 + 1464) = 0;
    }
    if ( *(_QWORD *)(a1 + 1448) )
    {
      sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1448));
      *(_QWORD *)(a1 + 1448) = 0;
    }
    nullsub_335();
    off_8C52A0(*(void **)(a1 + 96));
    if ( *(_QWORD *)(a1 + 1344) )
      sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1344));
    if ( *(_QWORD *)(a1 + 1352) )
      sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1352));
    *(_DWORD *)(a1 + 1360) = 0;
    *(_OWORD *)(a1 + 1344) = 0;
    sub_56B570(a1 + 1224);
    v9 = *(void **)(a1 + 1368);
    if ( v9 )
    {
      off_8C52A0(v9);
      *(_QWORD *)(a1 + 1368) = 0;
      *(_QWORD *)(a1 + 1376) = 0;
    }
    v10 = *(void **)(a1 + 1296);
    if ( v10 )
    {
      off_8C52A0(v10);
      *(_QWORD *)(a1 + 1296) = 0;
      *(_QWORD *)(a1 + 1304) = 0;
    }
    v11 = *(void **)(a1 + 1312);
    if ( v11 )
    {
      off_8C52A0(v11);
      *(_QWORD *)(a1 + 1312) = 0;
      *(_QWORD *)(a1 + 1320) = 0;
    }
    v12 = *(void **)(a1 + 1328);
    if ( v12 )
    {
      off_8C52A0(v12);
      *(_QWORD *)(a1 + 1328) = 0;
      *(_QWORD *)(a1 + 1336) = 0;
    }
    off_8C52A0((void *)a1);
  }
}
