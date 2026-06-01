__int64 __fastcall sub_731E20(__int64 a1)
{
  int v1; // ecx
  __int16 v2; // ax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rax
  __int16 v9; // cx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx

  v1 = *(_DWORD *)(a1 + 5940);
  v2 = *(_WORD *)(a1 + 5936) | (2 << v1);
  *(_WORD *)(a1 + 5936) = v2;
  if ( v1 <= 13 )
  {
    v7 = v1 + 3;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v3 + 1;
    *(_BYTE *)(v4 + v3) = v2;
    v5 = *(_QWORD *)(a1 + 40);
    LOBYTE(v4) = *(_BYTE *)(a1 + 5937);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v5 + 1;
    *(_BYTE *)(v6 + v5) = v4;
    LODWORD(v5) = *(_DWORD *)(a1 + 5940);
    v7 = v5 - 13;
    *(_WORD *)(a1 + 5936) = 2 >> (16 - v5);
  }
  *(_DWORD *)(a1 + 5940) = v7;
  if ( v7 <= 9 )
  {
    *(_DWORD *)(a1 + 5940) = v7 + 7;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 40);
    v9 = *(_WORD *)(a1 + 5936);
    v10 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v8 + 1;
    *(_BYTE *)(v10 + v8) = v9;
    v11 = *(_QWORD *)(a1 + 40);
    LOBYTE(v9) = *(_BYTE *)(a1 + 5937);
    v12 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v11 + 1;
    *(_BYTE *)(v12 + v11) = v9;
    *(_DWORD *)(a1 + 5940) -= 9;
    *(_WORD *)(a1 + 5936) = 0;
  }
  return sub_731B50(a1);
}

