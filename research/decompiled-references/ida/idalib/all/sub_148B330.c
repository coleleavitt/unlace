void __fastcall sub_148B330(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, __m128i a6, __m128 a7)
{
  int v8; // r13d
  char v9; // al
  __int64 v10; // rdx
  char v11; // dl
  __int64 v12; // rdx
  char v13; // al
  int v14; // [rsp+8h] [rbp-98h] BYREF
  __int64 v15; // [rsp+10h] [rbp-90h]
  __int64 v16; // [rsp+18h] [rbp-88h]
  unsigned __int8 *v17[15]; // [rsp+28h] [rbp-78h] BYREF

  v14 = 0;
  v15 = 0;
  v16 = 0;
  sub_1487580(a1, a2, (__int64)&v14, a4, a5, 0, a6, a7, a3);
  v8 = sub_15AC7E0(a2);
  if ( ((1LL << a5) & 0xDC3) == 0 && (*(_DWORD *)a2 & 0x7F000) == 0 && !(*(_BYTE *)a2 >> 6) )
  {
    v9 = *(_BYTE *)(a2 + 1);
    if ( (v9 & 3) == 0 && (v9 & 0xC) == 0 )
    {
      sub_1564840(v17, a1, a1 + 16, 1657);
      sub_AEA040((__int64)v17);
      sub_15AEFC0(a2);
      goto LABEL_12;
    }
  }
  if ( v8 )
  {
LABEL_12:
    if ( (v8 & 1) != 0 )
    {
      v10 = *(unsigned int *)(a2 + 168);
      if ( !(_DWORD)v10 )
        v10 = *(unsigned int *)(a2 + 172);
      sub_1564820(v17, a1, v10, 1906);
      sub_AEA040((__int64)v17);
      *(_BYTE *)a2 &= 0xC0u;
      *(_QWORD *)(a2 + 168) = 0;
    }
    if ( (v8 & 8) != 0 )
    {
      v11 = *(_BYTE *)(a2 + 4);
      if ( v11 & 1 | (*(_BYTE *)(a2 + 3) >> 7) )
      {
        if ( *(char *)(a2 + 3) < 0 )
          v12 = *(unsigned int *)(a2 + 240);
        else
          v12 = *(unsigned int *)(a2 + 260);
        sub_1564820(v17, a1, v12, 1905);
        sub_AEA040((__int64)v17);
        v11 = *(_BYTE *)(a2 + 4);
      }
      if ( (v11 & 2) != 0 )
      {
        sub_1564820(v17, a1, *(unsigned int *)(a2 + 244), 1905);
        sub_AEA040((__int64)v17);
      }
      if ( *(_QWORD *)(a2 + 24) )
      {
        sub_1564820(v17, a1, *(unsigned int *)(a2 + 248), 1905);
        sub_AEA040((__int64)v17);
      }
      if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
      {
        sub_1564820(v17, a1, *(unsigned int *)(a2 + 252), 1905);
        sub_AEA040((__int64)v17);
      }
      *(_QWORD *)a2 &= 0xFFFFFFF87FFFFFFFLL;
      *(_QWORD *)(a2 + 24) = 0;
      *(_QWORD *)(a2 + 240) = 0;
      *(_QWORD *)(a2 + 248) = 0;
      *(_QWORD *)(a2 + 256) = 0;
    }
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(a2 + 48) )
  {
    sub_1564840(v17, a1, a1 + 16, 1908);
    sub_AEA040((__int64)v17);
    if ( (*(_DWORD *)a2 & 0x7F000) == 0 && !(*(_BYTE *)a2 >> 6) )
    {
      v13 = *(_BYTE *)(a2 + 1);
      if ( (v13 & 3) == 0 && (v13 & 0xC) == 0 )
        sub_15AEFC0(a2);
    }
  }
LABEL_5:
  if ( (*(_BYTE *)(a2 + 4) & 0x30) != 0 && a5 != 11 )
  {
    sub_1564820(v17, a1, *(unsigned int *)(a2 + 272), 1904);
    sub_14780E0(v17, (*(_BYTE *)(a2 + 4) >> 4) & 3);
    sub_AEA040((__int64)v17);
    *(_BYTE *)(a2 + 4) &= 0xCFu;
    *(_DWORD *)(a2 + 272) = 0;
  }
}
