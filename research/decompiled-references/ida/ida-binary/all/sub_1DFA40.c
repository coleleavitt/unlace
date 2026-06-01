void __fastcall sub_1DFA40(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // rbp
  __int64 v4; // r11
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // r8d
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx

  v1 = *(_QWORD *)a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != *(_QWORD *)a1 )
  {
    v4 = *(_QWORD *)a1;
    v5 = 0;
    do
    {
      if ( *(_BYTE *)(v4 + 12) )
      {
        v6 = sub_1DF900(v4) + 1;
        if ( v5 < v6 )
          v5 = v6;
      }
      v4 += 56;
    }
    while ( v2 != v4 );
    v7 = 1;
    if ( (*(_DWORD *)(a1 + 32) + 2) / (v5 + 3) > 0 )
      v7 = (*(_DWORD *)(a1 + 32) + 2) / (v5 + 3);
    v8 = 0;
    v9 = v5 - 1;
    v10 = (*(_DWORD *)(a1 + 32) + 2) / v7;
    do
    {
      if ( *(_BYTE *)(v1 + 12) )
      {
        *(_DWORD *)(v1 + 44) = v7;
        v11 = v7;
        *(_DWORD *)(v1 + 48) = v10;
        *(_DWORD *)(v1 + 40) = v9;
      }
      else
      {
        v11 = *(int *)(v1 + 44);
      }
      v12 = *(_QWORD *)(v1 + 24);
      *(_DWORD *)(v1 + 52) = v8;
      v1 += 56;
      v8 += *(_DWORD *)(v1 - 48) + (v11 + v12 - 1) / v11;
    }
    while ( v2 != v1 );
  }
}
