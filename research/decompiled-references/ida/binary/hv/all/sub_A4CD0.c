__int64 __fastcall sub_A4CD0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rax
  __int64 v3; // rdx
  __int16 v4; // cx
  __int64 v5; // rax
  __int64 v6; // rdx

  v1 = *(_DWORD *)(a1 + 5940);
  if ( v1 <= 8 )
  {
    if ( v1 <= 0 )
      goto LABEL_4;
    v4 = *(_WORD *)(a1 + 5936);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v4 = *(_WORD *)(a1 + 5936);
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v2 + 1;
    *(_BYTE *)(v3 + v2) = v4;
    LOBYTE(v4) = *(_BYTE *)(a1 + 5937);
  }
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 40) = v5 + 1;
  *(_BYTE *)(v6 + v5) = v4;
LABEL_4:
  *(_DWORD *)(a1 + 5940) = 0;
  *(_WORD *)(a1 + 5936) = 0;
  return 0;
}

