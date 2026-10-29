__int64 __fastcall sub_1C4C070(
        char *a1,
        char *a2,
        char *a3,
        char *a4,
        __int64 a5,
        __int64 (__fastcall *a6)(char *, char *))
{
  char *v7; // r12
  char *v8; // rbp
  __int64 v10; // rbx
  char i; // al
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rbp
  __int64 v18; // rax

  v7 = a3;
  v8 = a1;
  if ( a1 != a2 && a3 != a4 )
  {
    v10 = a5;
    for ( i = a6(a3, a1); ; i = a6(v7, v8) )
    {
      if ( i )
      {
        if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
          operator delete[](*(void **)v10);
        v12 = *(_QWORD *)v7;
        v10 += 24;
        v7 += 24;
        *(_QWORD *)(v10 - 24) = v12;
        *(_DWORD *)(v10 - 16) = *((_DWORD *)v7 - 4);
        LOBYTE(v12) = *(v7 - 12);
        *((_DWORD *)v7 - 4) = 0;
        *(_BYTE *)(v10 - 12) = v12;
        *(_QWORD *)(v10 - 8) = *((_QWORD *)v7 - 1);
        if ( v8 == a2 )
          goto LABEL_15;
      }
      else
      {
        if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
          operator delete[](*(void **)v10);
        v13 = *(_QWORD *)v8;
        v8 += 24;
        v10 += 24;
        *(_QWORD *)(v10 - 24) = v13;
        *(_DWORD *)(v10 - 16) = *((_DWORD *)v8 - 4);
        LOBYTE(v13) = *(v8 - 12);
        *((_DWORD *)v8 - 4) = 0;
        *(_BYTE *)(v10 - 12) = v13;
        *(_QWORD *)(v10 - 8) = *((_QWORD *)v8 - 1);
        if ( v8 == a2 )
          goto LABEL_15;
      }
      if ( v7 == a4 )
        goto LABEL_15;
    }
  }
  v10 = a5;
LABEL_15:
  v14 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v8) >> 3);
  if ( a2 - v8 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
        operator delete[](*(void **)v10);
      v15 = *(_QWORD *)v8;
      v10 += 24;
      v8 += 24;
      *(_QWORD *)(v10 - 24) = v15;
      *(_DWORD *)(v10 - 16) = *((_DWORD *)v8 - 4);
      LOBYTE(v15) = *(v8 - 12);
      *((_DWORD *)v8 - 4) = 0;
      *(_BYTE *)(v10 - 12) = v15;
      *(_QWORD *)(v10 - 8) = *((_QWORD *)v8 - 1);
      --v14;
    }
    while ( v14 );
  }
  v16 = a4 - v7;
  v17 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 3);
  if ( v16 > 0 )
  {
    do
    {
      if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
        operator delete[](*(void **)v10);
      v18 = *(_QWORD *)v7;
      v10 += 24;
      v7 += 24;
      *(_QWORD *)(v10 - 24) = v18;
      *(_DWORD *)(v10 - 16) = *((_DWORD *)v7 - 4);
      LOBYTE(v18) = *(v7 - 12);
      *((_DWORD *)v7 - 4) = 0;
      *(_BYTE *)(v10 - 12) = v18;
      *(_QWORD *)(v10 - 8) = *((_QWORD *)v7 - 1);
      --v17;
    }
    while ( v17 );
  }
  return v10;
}
