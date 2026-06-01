__int64 __fastcall sub_D071B0(__int64 a1, int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // rax

  v5 = *(_DWORD *)(a1 + 1256);
  if ( a2 == 13 )
  {
    if ( *(_DWORD *)(a1 + 1252) != v5 )
      return 1;
    *(_QWORD *)(a1 + 1240) = *a5;
    v8 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
    *(_QWORD *)v8 = 0;
    *(_OWORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 24) = 1;
    *(_QWORD *)(v8 + 40) = a3;
    *(_QWORD *)(v8 + 32) = a4;
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 1252) != v5 )
      return 1;
    *(_QWORD *)(a1 + 1240) = *a5;
    v7 = sub_E216C0(*(_QWORD *)(a1 + 560), 64);
    *(_QWORD *)v7 = 0;
    *(_OWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v7 + 24) = 1;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    return 1;
  }
}
