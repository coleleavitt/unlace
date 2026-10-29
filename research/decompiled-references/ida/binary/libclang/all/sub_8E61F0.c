__int64 __fastcall sub_8E61F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx

  v5 = *(_DWORD *)(a2 + 48);
  if ( v5 == 1 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)a1 = a3;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 24) = v12;
    *(_QWORD *)(a1 + 32) = v13;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else if ( v5 == 2 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)a1 = a3;
    *(_DWORD *)(a1 + 48) = 2;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 40) = 1;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 32);
    if ( v6 == -1 )
    {
      if ( v5 == 3 )
        BUG();
      sub_A1C030(
        a1,
        *(_QWORD *)(a2 + 24),
        0xFFFFFFFFLL,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 32LL) + 12LL));
      return a1;
    }
    else
    {
      v7 = sub_8E5480(a2);
      v8 = a3 * *(unsigned int *)(v7 + 8);
      v9 = v8 + 32;
      if ( *(_QWORD *)(v7 + 32) )
        v9 = v8 + 16;
      sub_A1C030(a1, *(_QWORD *)(a2 + 24), v6, v9 + v6);
      return a1;
    }
  }
}

