void __fastcall sub_1F88410(__int64 a1)
{
  __int64 v1; // r13
  int v2; // ebp
  __int64 v3; // r12
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 149) )
  {
    v1 = *(_QWORD *)(a1 + 1320);
    v2 = *(_DWORD *)(a1 + 1336);
    *(_QWORD *)(a1 + 1320) = 0;
    v3 = *(_QWORD *)(a1 + 1328);
    *(_DWORD *)(a1 + 1336) = 0;
    *(_QWORD *)(a1 + 1328) = 0;
    operator delete(0, 0, 8);
    v4 = *(_QWORD *)(a1 + 1280);
    *(_QWORD *)(a1 + 1280) = 0;
    *(_QWORD *)(a1 + 1320) = v4;
    *(_DWORD *)(a1 + 1328) = *(_DWORD *)(a1 + 1288);
    LODWORD(v4) = *(_DWORD *)(a1 + 1292);
    *(_QWORD *)(a1 + 1288) = 0;
    *(_DWORD *)(a1 + 1332) = v4;
    LODWORD(v4) = *(_DWORD *)(a1 + 1296);
    *(_DWORD *)(a1 + 1296) = 0;
    *(_DWORD *)(a1 + 1336) = v4;
    operator delete(0, 0, 8);
    *(_QWORD *)(a1 + 1280) = v1;
    *(_QWORD *)(a1 + 1288) = v3;
    *(_DWORD *)(a1 + 1296) = v2;
    operator delete(0, 0, 8);
    sub_1F87E80(a1 + 1344, a1 + 1304);
  }
}
