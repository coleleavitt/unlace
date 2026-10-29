void __fastcall sub_1F88310(__int64 a1)
{
  __int64 v1; // r13
  int v2; // ebp
  __int64 v3; // r12
  __int64 v4; // rax

  if ( *(_BYTE *)(a1 + 157) )
  {
    v1 = *(_QWORD *)(a1 + 1328);
    v2 = *(_DWORD *)(a1 + 1344);
    *(_QWORD *)(a1 + 1328) = 0;
    v3 = *(_QWORD *)(a1 + 1336);
    *(_DWORD *)(a1 + 1344) = 0;
    *(_QWORD *)(a1 + 1336) = 0;
    operator delete(0, 0, 8);
    v4 = *(_QWORD *)(a1 + 1288);
    *(_QWORD *)(a1 + 1288) = 0;
    *(_QWORD *)(a1 + 1328) = v4;
    *(_DWORD *)(a1 + 1336) = *(_DWORD *)(a1 + 1296);
    LODWORD(v4) = *(_DWORD *)(a1 + 1300);
    *(_QWORD *)(a1 + 1296) = 0;
    *(_DWORD *)(a1 + 1340) = v4;
    LODWORD(v4) = *(_DWORD *)(a1 + 1304);
    *(_DWORD *)(a1 + 1304) = 0;
    *(_DWORD *)(a1 + 1344) = v4;
    operator delete(0, 0, 8);
    *(_QWORD *)(a1 + 1288) = v1;
    *(_QWORD *)(a1 + 1296) = v3;
    *(_DWORD *)(a1 + 1304) = v2;
    operator delete(0, 0, 8);
    sub_1F87E80(a1 + 1352, a1 + 1312);
  }
}
