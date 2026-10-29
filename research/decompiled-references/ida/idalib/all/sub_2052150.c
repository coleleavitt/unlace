char __fastcall sub_2052150(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r8
  unsigned __int8 v5; // al
  __int64 v6; // rax
  bool v7; // zf

  v4 = *(_WORD *)(a4 + 2);
  *(_BYTE *)a1 = v4;
  v5 = *(_BYTE *)(a4 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  LOBYTE(v6) = v5 >> 1;
  *(_QWORD *)(a1 + 16) = a3;
  *(_BYTE *)(a1 + 1) = v6;
  if ( v4 == 63 )
  {
    v6 = *(unsigned int *)(a4 + 32);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a4 + 24);
    *(_QWORD *)(a1 + 32) = v6;
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  if ( v4 != 34 )
  {
LABEL_6:
    *(_QWORD *)(a1 + 40) = 0;
    *(_BYTE *)(a1 + 80) = 0;
    return v6;
  }
  v6 = *(_QWORD *)(a4 + 24);
  *(_BYTE *)(a1 + 80) = 0;
  v7 = *(_BYTE *)(a4 + 72) == 0;
  *(_QWORD *)(a1 + 40) = v6;
  if ( !v7 )
  {
    LOBYTE(v6) = sub_20150B0(a1 + 48, a4 + 40);
    *(_BYTE *)(a1 + 80) = 1;
  }
  return v6;
}
