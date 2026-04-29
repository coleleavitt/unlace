__int64 __fastcall ccsha512_final(__int64 a1, const void *a2, __int64 a3)
{
  unsigned __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x8
  size_t v9; // x1
  _QWORD *v10; // x21
  __int64 v11; // x2
  _DWORD *v12; // x9
  __int64 v13; // x8
  unsigned __int64 v14; // x8
  char *v15; // x9
  unsigned __int64 v16; // x12
  unsigned __int64 v17; // x8
  __int64 v19; // [xsp+0h] [xbp-50h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v8 = (__int64)a2 + v7 + 8;
  if ( v6 <= *(unsigned int *)(v8 + v6) )
    *(_DWORD *)(v8 + v6) = 0;
  v9 = (v7 + v6 + 19) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = (__int64 *)((char *)&v19 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  __bzero(v10, v9);
  _platform_memmove(v10, a2, v7 + v6 + 12);
  v11 = (__int64)v10 + v7 + 8;
  v12 = (_DWORD *)(v11 + v6);
  v13 = *(unsigned int *)(v11 + v6);
  *v10 += (unsigned int)(8 * v13);
  *(_DWORD *)(v11 + v6) = v13 + 1;
  *(_BYTE *)(v11 + v13) = 0x80;
  v14 = *(unsigned int *)(v11 + v6);
  if ( v6 - 16 < v14 )
  {
    while ( v6 > v14 )
    {
      *(_DWORD *)(v11 + v6) = v14 + 1;
      *(_BYTE *)(v11 + v14) = 0;
      v14 = *(unsigned int *)(v11 + v6);
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 48))(v10 + 1, 1);
    LODWORD(v14) = 0;
    v7 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 16);
    v15 = (char *)v10 + v7 + v6;
    *((_DWORD *)v15 + 2) = 0;
    v12 = v15 + 8;
  }
  if ( v6 - 8 > (unsigned int)v14 )
  {
    v16 = (unsigned int)v14;
    do
    {
      *v12 = v14 + 1;
      *((_BYTE *)v10 + v7 + v16 + 8) = 0;
      v16 = (unsigned int)*v12;
      LODWORD(v14) = *v12;
    }
    while ( v6 - 8 > v16 );
  }
  *(_QWORD *)((char *)v10 + v7 + v6) = bswap64(*v10);
  (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 48))(v10 + 1, 1);
  if ( *(_QWORD *)a1 >= 8u )
  {
    v17 = 0;
    do
    {
      *(_QWORD *)(a3 + 8 * (v17 & 0x1FFFFFFF)) = bswap64(v10[v17 + 1]);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( v17 < *(_QWORD *)a1 >> 3 );
  }
  return cc_clear(*(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16) + 12LL, v10);
}
