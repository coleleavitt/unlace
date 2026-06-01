__int64 __fastcall sub_5D5130(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi

  v3 = *(_QWORD *)(a1 + 120);
  v4 = *(_DWORD *)(v3 + 188);
  if ( *(_DWORD *)(a1 + 680) == 1 )
  {
    a2 = 0;
    sub_5D38A0((char **)(a1 + 624), 0, v4, nullptr);
  }
  v5 = *(_QWORD *)(a1 + 688);
  v6 = v5 + 56LL * *(_QWORD *)(a1 + 696);
  if ( v5 == v6 )
  {
LABEL_12:
    *(_QWORD *)(v3 + 8) = 0;
    if ( *(_DWORD *)(a1 + 212) != 2 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 212) = 1;
      goto LABEL_14;
    }
  }
  else
  {
    while ( *(_DWORD *)(v5 + 48) != 1 || v4 != *(_DWORD *)(v5 + 52) )
    {
      v5 += 56;
      if ( v6 == v5 )
        goto LABEL_12;
    }
    a2 = *(_QWORD *)(v5 + 8);
    v7 = *(_QWORD *)v5;
    if ( a2 < *(_QWORD *)(v5 + 16) )
    {
      if ( v7 )
      {
        if ( a2 )
        {
          v7 = qrealloc(v7);
          if ( !v7 )
            v7 = *(_QWORD *)v5;
        }
      }
    }
    *(_QWORD *)v5 = 0;
    *(_QWORD *)(v5 + 48) = 0;
    *(_OWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v3 + 8) = v7;
    if ( *(_DWORD *)(a1 + 212) != 2 )
      goto LABEL_13;
  }
  if ( (unsigned int)set_qerrno(63, a2) )
    return 0xFFFFFFFFLL;
LABEL_14:
  if ( (*(_DWORD *)(a1 + 208) & 0xFFFFFFFD) != 0 )
    return set_qerrno(66, a2);
  *(_DWORD *)(a1 + 208) = 1;
  return 0;
}

