__int64 __fastcall sub_8E4A00(
        unsigned int a1,
        unsigned int a2,
        signed int a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        char a8)
{
  unsigned int *v8; // rax
  unsigned int v9; // esi
  unsigned int v14; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  signed int i; // edx
  __int64 v19; // rsi
  _BYTE *v22; // [rsp+10h] [rbp-58h]
  unsigned __int64 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+20h] [rbp-48h]
  unsigned int v25; // [rsp+28h] [rbp-40h]
  unsigned int v26; // [rsp+2Ch] [rbp-3Ch]

  if ( (a8 & 2) == 0 )
    return sub_8E0850(a1, a2, a3, 1);
  v22 = (_BYTE *)(a4 + 748);
  v23 = a5 - 748;
  if ( a3 == -1 )
  {
    v25 = 0;
LABEL_6:
    v14 = v25;
    v26 = a1;
    v24 = -2;
    while ( 1 )
    {
      v15 = sub_8E4160(a6, a7, a3, v14, a4, a5);
      if ( v15 > 0xFFFFFFFFFFFFFF88LL )
        goto LABEL_7;
      if ( v14 > v15 && v25 < v14 )
        return v26;
      v16 = sub_8E3B40(v22, v23, (__int64)a6, a3, v15, a4, a5);
      if ( v16 > 0xFFFFFFFFFFFFFF88LL )
        goto LABEL_7;
      if ( a3 >= 0 )
      {
        v17 = 0;
        for ( i = 0; i <= a3; ++i )
        {
          v19 = i;
          v17 += a7[v19] * (unsigned __int64)LOBYTE(a6[v19 + 1]);
        }
        v16 += v17 >> 3;
      }
      if ( v24 + 1 < v16 )
        return v26;
      if ( v24 <= v16 )
      {
LABEL_7:
        if ( a1 < ++v14 )
          return v26;
      }
      else
      {
        v26 = v14++;
        v24 = v16;
        if ( a1 < v14 )
          return v26;
      }
    }
  }
  v8 = a7;
  v9 = 0;
  do
    v9 -= (*v8++ == 0) - 1;
  while ( &a7[a3 + 1] != v8 );
  _BitScanReverse(&v9, v9);
  v25 = 32 - (v9 ^ 0x1F);
  if ( a1 >= v25 )
    goto LABEL_6;
  return a1;
}

