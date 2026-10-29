__int64 __fastcall sub_5F0F50(__int64 a1)
{
  __int64 v2; // r13
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 128);
  v3 = *(_DWORD *)(v2 + 188);
  if ( *(_DWORD *)(a1 + 696) == 1 )
    sub_5EF6C0((const __m128i *)(a1 + 632), 0, v3, nullptr);
  v4 = *(_QWORD *)(a1 + 704);
  v5 = v4 + 56LL * *(_QWORD *)(a1 + 712);
  if ( v4 == v5 )
  {
LABEL_12:
    *(_QWORD *)(v2 + 8) = 0;
    if ( *(_DWORD *)(a1 + 220) != 2 )
    {
LABEL_13:
      *(_DWORD *)(a1 + 220) = 1;
      goto LABEL_14;
    }
  }
  else
  {
    while ( *(_DWORD *)(v4 + 48) != 1 || v3 != *(_DWORD *)(v4 + 52) )
    {
      v4 += 56;
      if ( v5 == v4 )
        goto LABEL_12;
    }
    v6 = *(_QWORD *)(v4 + 8);
    v7 = *(_QWORD *)v4;
    if ( v6 < *(_QWORD *)(v4 + 16) )
    {
      if ( v7 )
      {
        if ( v6 )
        {
          v7 = qrealloc(v7);
          if ( !v7 )
            v7 = *(_QWORD *)v4;
        }
      }
    }
    *(_QWORD *)v4 = 0;
    *(_QWORD *)(v4 + 48) = 0;
    *(_OWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v2 + 8) = v7;
    if ( *(_DWORD *)(a1 + 220) != 2 )
      goto LABEL_13;
  }
  if ( (unsigned int)set_qerrno(63) )
    return 0xFFFFFFFFLL;
LABEL_14:
  if ( (*(_DWORD *)(a1 + 216) & 0xFFFFFFFD) != 0 )
    return set_qerrno(66);
  *(_DWORD *)(a1 + 216) = 1;
  return 0;
}
