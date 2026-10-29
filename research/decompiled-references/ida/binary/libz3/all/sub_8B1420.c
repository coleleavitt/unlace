char __fastcall sub_8B1420(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r13
  __int64 v7; // r12
  __int64 v8; // rsi
  int *v9; // rsi
  __int64 v10; // rax
  int *v11; // rdx

  v3 = a1 + 736;
  v5 = 232LL * a2;
  v7 = v5 + *(_QWORD *)(a1 + 1592);
  v8 = v7 + 8;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)(v7 + 8) )
    {
      if ( (*(_BYTE *)(v7 + 28) & 1) != 0
        || *(_DWORD *)(v7 + 24) != 1
        || (*(_BYTE *)(a3 + 20) & 1) != 0
        || *(_DWORD *)(a3 + 16) != 1 )
      {
        sub_18540F0(v3, v8, a3, v7 + 8);
        v9 = (int *)(v7 + 40);
        if ( *(_DWORD *)(a3 + 32) )
          goto LABEL_10;
LABEL_6:
        sub_8ADE80(v3, (__int64)v9, v9);
        v10 = *(_QWORD *)(a1 + 1592);
        if ( (*(_BYTE *)(v10 + v5 + 3) & 0x20) == 0 )
          return v10;
        goto LABEL_7;
      }
      sub_1839610(v3, v8, a3);
      sub_182EF00(v3, v7 + 24);
      *(_BYTE *)(v7 + 28) &= ~1u;
      *(_DWORD *)(v7 + 24) = 1;
    }
    else
    {
      sub_8ADE80(v3, v8, (int *)a3);
    }
  }
  else
  {
    sub_8ADE80(v3, v8, (int *)(v7 + 8));
  }
  v9 = (int *)(v7 + 40);
  if ( !*(_DWORD *)(a3 + 32) )
    goto LABEL_6;
LABEL_10:
  v11 = (int *)(a3 + 32);
  if ( *(_DWORD *)(v7 + 40) )
  {
    if ( (*(_BYTE *)(v7 + 60) & 1) != 0
      || *(_DWORD *)(v7 + 56) != 1
      || (*(_BYTE *)(a3 + 52) & 1) != 0
      || *(_DWORD *)(a3 + 48) != 1 )
    {
      sub_18540F0(v3, v9, v11, v9);
    }
    else
    {
      sub_1839610(v3, v9, v11);
      sub_182EF00(v3, v7 + 56);
      *(_BYTE *)(v7 + 60) &= ~1u;
      *(_DWORD *)(v7 + 56) = 1;
    }
  }
  else
  {
    sub_8ADE80(v3, (__int64)v9, v11);
  }
  v10 = *(_QWORD *)(a1 + 1592);
  if ( (*(_BYTE *)(v10 + v5 + 3) & 0x20) != 0 )
LABEL_7:
    LOBYTE(v10) = sub_8B12A0(a1, a2);
  return v10;
}

