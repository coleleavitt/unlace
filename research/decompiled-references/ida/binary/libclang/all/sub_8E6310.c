__int64 __fastcall sub_8E6310(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx

  v2 = *(_DWORD *)(a2 + 48);
  if ( v2 == 1 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)a1 = 1;
    *(_DWORD *)(a1 + 48) = 1;
    *(_QWORD *)(a1 + 24) = v9;
    *(_QWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  else if ( v2 == 2 )
  {
    v8 = *(_QWORD *)(a2 + 24);
    *(_BYTE *)(a1 + 40) = 1;
    *(_QWORD *)a1 = 1;
    *(_QWORD *)(a1 + 24) = v8;
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
      v5 = *(unsigned int *)(v4 + 8);
      v6 = v5 + 32;
      if ( *(_QWORD *)(v4 + 32) )
        v6 = v5 + 16;
      sub_A1C030(a1, *(_QWORD *)(a2 + 24), v3, v6 + v3);
      return a1;
    }
  }
}

