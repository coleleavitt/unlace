void __fastcall sub_57C4E0(__int64 a1, volatile signed __int32 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  bool v8; // zf
  int v9; // eax

  v7 = *(_QWORD *)(a1 + 1256);
  if ( v7 && *(_QWORD *)(a1 + 1392) && *(_QWORD *)(v7 + 192) && !(unsigned __int8)sub_57C4D0() )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 1256) + 192LL))(*(_QWORD *)(a1 + 1392));
  v8 = *(_QWORD *)(a1 + 1448) == 0;
  *(_QWORD *)(a1 + 1392) = 0;
  if ( !v8 )
  {
    a2 = *(volatile signed __int32 **)(a1 + 1448);
    sub_56C9A0(a1 + 1224, a2);
    *(_QWORD *)(a1 + 1448) = 0;
  }
  v9 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0;
  if ( v9 )
  {
    a2 = nullptr;
    sub_55C7B0(a1, 0, 0);
  }
  sub_56E170(*(_QWORD *)(a1 + 1216), (__int64)a2, a3, a4, a5, a6);
  if ( *(_QWORD *)(a1 + 1344) )
    sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1344));
  if ( *(_QWORD *)(a1 + 1352) )
    sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1352));
  v8 = *(_QWORD *)(a1 + 1288) == 0;
  *(_DWORD *)(a1 + 1360) = 0;
  *(_OWORD *)(a1 + 1344) = 0;
  if ( !v8 )
  {
    sub_56C9A0(a1 + 1224, *(volatile signed __int32 **)(a1 + 1288));
    *(_QWORD *)(a1 + 1288) = 0;
  }
  *(_BYTE *)(a1 + 1510) = 0;
  *(_DWORD *)(a1 + 1432) = 0;
  *(_WORD *)(a1 + 1508) = 0;
  *(_OWORD *)(a1 + 1472) = 0;
  *(_OWORD *)(a1 + 1488) = 0;
}
