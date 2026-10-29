__int64 __fastcall ccdigest_final_64be(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v6; // x23
  unsigned __int64 v7; // x24
  __int64 v8; // x8
  size_t v9; // x1
  _QWORD *v10; // x21
  __int64 v11; // x2
  unsigned int *v12; // x8
  __int64 v13; // x9
  unsigned int v14; // w9
  unsigned __int64 v15; // x8
  __int64 v17; // [xsp+0h] [xbp-50h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (__int64)a2 + v6 + 8;
  if ( v7 <= *(unsigned int *)(v8 + v7) )
    *(_DWORD *)(v8 + v7) = 0;
  v9 = (v6 + v7 + 19) & 0xFFFFFFFFFFFFFFF8LL;
  v10 = (__int64 *)((char *)&v17 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  __bzero(v10, v9);
  _platform_memmove(v10, a2, v6 + v7 + 12);
  v11 = (__int64)v10 + v6 + 8;
  v12 = (unsigned int *)(v11 + v7);
  v13 = *(unsigned int *)(v11 + v7);
  *v10 += (unsigned int)(8 * v13);
  *(_DWORD *)(v11 + v7) = v13 + 1;
  *(_BYTE *)(v11 + v13) = 0x80;
  v14 = *(_DWORD *)(v11 + v7);
  if ( v14 < 0x39 )
  {
    if ( v14 == 56 )
      goto LABEL_9;
  }
  else
  {
    if ( v14 <= 0x3F )
    {
      do
      {
        *v12 = v14 + 1;
        *(_BYTE *)(v11 + v14) = 0;
        v14 = *v12;
      }
      while ( *v12 < 0x40 );
    }
    (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 48))(v10 + 1, 1);
    v14 = 0;
    v11 = (__int64)v10 + *(_QWORD *)(a1 + 8) + 8;
    v12 = (unsigned int *)(v11 + *(_QWORD *)(a1 + 16));
    *v12 = 0;
  }
  do
  {
    *v12 = v14 + 1;
    *(_BYTE *)(v11 + v14) = 0;
    v14 = *v12;
  }
  while ( *v12 < 0x38 );
LABEL_9:
  *(_QWORD *)(v11 + 56) = bswap64(*v10);
  (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 48))(v10 + 1, 1);
  if ( *(_QWORD *)a1 >= 4u )
  {
    v15 = 0;
    do
    {
      *(_DWORD *)(a3 + 4 * (v15 & 0x3FFFFFFF)) = bswap32(*((_DWORD *)v10 + v15 + 2));
      v15 = (unsigned int)(v15 + 1);
    }
    while ( v15 < *(_QWORD *)a1 >> 2 );
  }
  return cc_clear(*(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16) + 12LL, v10);
}
