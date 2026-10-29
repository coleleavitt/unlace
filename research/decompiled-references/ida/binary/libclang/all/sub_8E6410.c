__int64 __fastcall sub_8E6410(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r12d
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx

  v2 = *(_DWORD *)(a2 + 48);
  if ( v2 == 1 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 24) = v8;
    *(_QWORD *)(a1 + 32) = v9;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else if ( v2 == 2 )
  {
    v7 = *(_QWORD *)(a2 + 24);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 48) = 2;
    *(_QWORD *)(a1 + 32) = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 32);
    if ( v3 == -1 )
    {
      if ( v2 == 3 )
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
      v4 = sub_8E5480(a2);
      v5 = 32;
      if ( *(_QWORD *)(v4 + 32) )
        v5 = 16;
      sub_A1C030(a1, *(_QWORD *)(a2 + 24), v3, v5 + v3);
      return a1;
    }
  }
}

