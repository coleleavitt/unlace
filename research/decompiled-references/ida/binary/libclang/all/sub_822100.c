__int64 __fastcall sub_822100(__int64 a1)
{
  __int64 v2; // rsi
  void *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r12

  *(_QWORD *)a1 = &off_47DA9F0;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = *(_QWORD *)(a1 + 16);
  v2 = 16LL * *(unsigned int *)(a1 + 232);
  operator delete();
  v3 = *(void **)(a1 + 184);
  if ( v3 != (void *)(a1 + 200) )
    free(v3);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    while ( 1 )
    {
      sub_821E40(*(_QWORD **)(v4 + 24));
      v5 = *(_QWORD *)(v4 + 16);
      if ( *(_DWORD *)(v4 + 48) > 1u )
        sub_69F740(v4 + 48);
      v2 = 104;
      operator delete((void *)v4, 0x68u);
      if ( !v5 )
        break;
      v4 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 88);
  if ( v6 )
  {
    while ( 1 )
    {
      sub_821E40(*(_QWORD **)(v6 + 24));
      v7 = *(_QWORD *)(v6 + 16);
      if ( *(_DWORD *)(v6 + 48) > 1u )
        sub_69F740(v6 + 48);
      v2 = 104;
      operator delete((void *)v6, 0x68u);
      if ( !v7 )
        break;
      v6 = v7;
    }
  }
  return sub_97D620(a1, v2);
}

