__int64 __fastcall sub_9C3DD0(__int64 a1, __int64 a2)
{
  int v3; // r12d
  unsigned int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx

  v3 = *(_DWORD *)(a2 + 48);
  if ( v3 == 1 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)a1 = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 24) = v12;
    *(_QWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  if ( v3 == 2 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)a1 = 1;
    *(_QWORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 48) = 2;
    *(_QWORD *)(a1 + 32) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v4 = *(_DWORD *)(a2 + 32);
  if ( v4 != -1 )
  {
    v5 = *(unsigned int *)(sub_8E5480(a2) + 8);
    if ( v3 )
    {
      if ( v3 == 3 )
        BUG();
      v6 = *(_QWORD *)(a2 + 24);
      v7 = *(_QWORD *)(v6 + 32);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
      v7 = *(_QWORD *)(v6 + 32);
      if ( *(_DWORD *)(v7 + 16) != v4 && v4 )
      {
        v8 = v4;
        v7 = *(_QWORD *)(v6 + v4 + 32);
        goto LABEL_8;
      }
    }
    v8 = v4;
LABEL_8:
    v9 = v5 + 32;
    if ( *(_QWORD *)(v7 + 32) )
      v9 = v5 + 16;
    sub_A1C030(a1, v6, v4, v8 + v9);
    return a1;
  }
  if ( v3 == 3 )
    BUG();
  sub_A1C030(a1, *(_QWORD *)(a2 + 24), 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL) + 12LL));
  return a1;
}

