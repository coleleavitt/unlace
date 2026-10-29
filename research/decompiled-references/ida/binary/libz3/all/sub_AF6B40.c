__int64 __fastcall sub_AF6B40(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned int v7; // esi
  __int64 v8; // r8
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx

  v4 = *(_BYTE *)(a2 + 16) == 0;
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a2 + 20);
  if ( v4 )
  {
    v8 = *(_QWORD *)(v5 + 504);
    do
    {
      v9 = v7;
      v7 = *(_DWORD *)(v8 + 4LL * v7);
      v10 = v9;
    }
    while ( v9 != v7 );
    do
    {
      v11 = v6;
      v6 = *(_DWORD *)(v8 + 4LL * v6);
    }
    while ( v11 != v6 );
    if ( v6 != v10 )
      return 1;
  }
  else
  {
    sub_4F9300((_QWORD *)(v5 + 488), v7, v6);
  }
  return sub_AF6980(a1, a2);
}

