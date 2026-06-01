__int64 __fastcall sub_60BE10(__int64 a1, unsigned __int64 a2)
{
  __int64 i; // rax
  unsigned __int64 v4; // rax
  void *v5; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rbp

  for ( i = *(_QWORD *)(a2 + 8); i; i = *(_QWORD *)(v4 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v4 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v4 )
      break;
    a2 = v4;
  }
  v5 = *(void **)(a1 + 168);
  v6 = (_QWORD *)(a2 + 32);
  v7 = *(v6 - 4);
  if ( *(_QWORD *)(a1 + 160) - (_QWORD)v5 < v7 )
  {
    sub_26240F0(a1 + 136, v6, *(v6 - 4));
    return a1;
  }
  else
  {
    if ( v7 )
    {
      memcpy(v5, v6, *(v6 - 4));
      *(_QWORD *)(a1 + 168) += v7;
    }
    return a1;
  }
}

