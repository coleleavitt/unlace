__int64 __fastcall sub_AF6C10(__int64 a1, __int64 a2)
{
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned int v7; // ecx
  __int64 v8; // rdi
  unsigned int v9; // esi
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v15; // eax
  unsigned int v16; // edx
  _QWORD *v17; // rdi
  int v18; // eax

  v3 = *(_DWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a2 + 40);
LABEL_2:
  while ( v5 )
  {
    while ( 1 )
    {
      if ( v3 >= *(_DWORD *)(v5 - 4) )
        return 1;
      v6 = *(_QWORD *)(v5 + 8LL * v3);
      v7 = *(_DWORD *)(a2 + 24);
      if ( v7 == 39 )
        goto LABEL_20;
      if ( v7 > 0x27 )
        break;
      if ( v7 == 7 )
      {
        if ( *(_BYTE *)(v6 + 16) )
        {
          v16 = *(_DWORD *)(v6 + 24);
          v9 = *(_DWORD *)(v6 + 20);
          v17 = (_QWORD *)(*(_QWORD *)(v6 + 8) + 488LL);
          goto LABEL_25;
        }
      }
      else
      {
        if ( v7 != 31 )
          goto LABEL_19;
        v8 = *(_QWORD *)(v6 + 8);
        v9 = *(_DWORD *)(v6 + 20);
        v10 = *(_DWORD *)(v6 + 24);
        if ( *(_BYTE *)(v6 + 16) )
        {
          v17 = (_QWORD *)(v8 + 488);
          v16 = *(_DWORD *)(v6 + 24);
LABEL_25:
          sub_4F9300(v17, v9, v16);
          v18 = sub_AF6980(a1, v6);
          v3 = *(_DWORD *)(a2 + 48) + 1;
          *(_DWORD *)(a2 + 48) = v3;
          if ( v18 == 1 )
            goto LABEL_21;
          return 0xFFFFFFFFLL;
        }
        v11 = *(_QWORD *)(v8 + 504);
        do
        {
          v12 = v9;
          v9 = *(_DWORD *)(v11 + 4LL * v9);
        }
        while ( v12 != v9 );
        do
        {
          v13 = v10;
          v10 = *(_DWORD *)(v11 + 4LL * v10);
        }
        while ( v13 != v10 );
        if ( v12 == v10 )
        {
LABEL_20:
          v15 = sub_AF6980(a1, *(_QWORD *)(v5 + 8LL * v3));
          v3 = *(_DWORD *)(a2 + 48) + 1;
          *(_DWORD *)(a2 + 48) = v3;
          if ( v15 == 1 )
          {
LABEL_21:
            v5 = *(_QWORD *)(a2 + 40);
            goto LABEL_2;
          }
          return 0xFFFFFFFFLL;
        }
      }
LABEL_13:
      *(_DWORD *)(a2 + 48) = ++v3;
    }
    if ( v7 != 64 )
    {
LABEL_19:
      if ( *(_BYTE *)(v6 + 16) )
        goto LABEL_20;
      goto LABEL_13;
    }
    if ( !*(_BYTE *)(v6 + 16) )
      goto LABEL_13;
    if ( !(unsigned __int8)sub_AFBE30(*(_QWORD *)(v6 + 8) + 64LL, *(unsigned int *)(v6 + 28)) )
    {
      sub_1872CE0("");
      sub_1873130(114, 593);
    }
    sub_4F9300((_QWORD *)(*(_QWORD *)(v6 + 8) + 488LL), *(_DWORD *)(v6 + 20), *(_DWORD *)(v6 + 24));
    v3 = *(_DWORD *)(a2 + 48) + 1;
    v5 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 48) = v3;
  }
  return 1;
}

