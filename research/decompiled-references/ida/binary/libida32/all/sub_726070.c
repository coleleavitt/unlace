__int64 __fastcall sub_726070(__int64 a1, int a2, unsigned __int16 *a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  __int64 *v5; // rbp
  __int64 v6; // rax
  __int64 v9; // rsi
  __int64 v13; // rax

  v5 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_DWORD *)(a1 + 1564) )
    {
      if ( !under_debugger )
        interr(1681);
      BUG();
    }
    *(_DWORD *)(a1 + 1564) = a2;
    v6 = v5[1];
    v9 = *v5;
    if ( v5[2] < (unsigned __int64)(v6 + 1) )
    {
      v13 = qvector_reserve(v5, v9, v6 + 1, 1);
      *v5 = v13;
      v9 = v13;
      v6 = v5[1];
    }
    *(_BYTE *)(v9 + v6) = a2;
    ++v5[1];
    sub_717C30(*(__int64 **)a1, a3 + 1, *a3);
    if ( (unsigned int)(a2 - 2) <= 1 )
    {
      sub_717C30(*(__int64 **)a1, a4 + 1, *a4);
      if ( a2 != 2 )
        return 1;
    }
    else if ( (unsigned int)(a2 - 1) > 1 )
    {
      if ( a2 == 4 )
        memcpy((void *)(a1 + 16), a3, *a3 + 2LL);
      return 1;
    }
    sub_717C30(*(__int64 **)a1, a5 + 1, *a5);
    return 1;
  }
  return 0;
}

