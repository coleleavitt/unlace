void __fastcall sub_569E40(__int64 a1, int a2)
{
  int v2; // edx
  _DWORD *v4; // r8
  __int64 v5; // rax
  _DWORD *v6; // rdi
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  _DWORD *v10; // r8
  __int64 v11; // rax
  _DWORD *i; // rdi
  int v13; // ecx
  int v14; // esi

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 )
  {
    v4 = *(_DWORD **)(a1 + 56);
    LODWORD(v5) = 0;
    v6 = v4;
    while ( 1 )
    {
      v7 = v5;
      v5 = (unsigned int)(v5 + 1);
      if ( *v6 == a2 )
        break;
      v6 += 4;
      if ( v2 == (_DWORD)v5 )
        goto LABEL_9;
    }
    v8 = v6[1];
    if ( (unsigned int)(unsigned __int16)v8 < *(_DWORD *)(a1 + 80) )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned __int16)v8 + 8) = -1;
      ++*(_DWORD *)(a1 + 108);
    }
    memmove(v6, &v4[4 * v5], 16LL * (unsigned int)(v2 - 1 - v7));
    --*(_DWORD *)(a1 + 64);
  }
  else
  {
LABEL_9:
    v9 = *(_DWORD *)(a1 + 48);
    if ( v9 )
    {
      v10 = *(_DWORD **)(a1 + 40);
      LODWORD(v11) = 0;
      for ( i = v10; ; i += 4 )
      {
        v13 = v11;
        v11 = (unsigned int)(v11 + 1);
        if ( *i == a2 )
          break;
        if ( v9 == (_DWORD)v11 )
          return;
      }
      v14 = i[1];
      if ( (unsigned int)(unsigned __int16)v14 < *(_DWORD *)(a1 + 80) )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL * (unsigned __int16)v14 + 8) = -1;
        ++*(_DWORD *)(a1 + 108);
      }
      memmove(i, &v10[4 * v11], 16LL * (unsigned int)(v9 - 1 - v13));
      --*(_DWORD *)(a1 + 48);
    }
  }
}
