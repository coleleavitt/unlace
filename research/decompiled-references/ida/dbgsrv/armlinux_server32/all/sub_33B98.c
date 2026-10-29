/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_33B98
// Address: 0x00033B98

//----- (00033B98) --------------------------------------------------------
int __fastcall sub_33B98(int a1, int a2)
{
  char *v3; // r0
  int v5; // r9
  int i; // r5
  char *v7; // r4
  void *v8; // r0
  void *v9; // r0
  __int64 v10; // kr00_8
  int v11; // r4
  __int64 v12; // kr10_8
  _DWORD *v13; // r4
  void *ptr; // [sp+0h] [bp-10h] BYREF
  int v16; // [sp+4h] [bp-Ch]
  int v17; // [sp+8h] [bp-8h]

  v3 = *(char **)(a2 + 4);
  if ( v3 )
  {
    v5 = *(_DWORD *)(a2 + 8);
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v3[28 * i];
        v8 = *((void **)v7 + 3);
        if ( v8 )
        {
          *((_DWORD *)v7 + 4) = 0;
          sub_77F70(v8);
        }
        v9 = *(void **)v7;
        if ( *(_DWORD *)v7 )
        {
          *((_DWORD *)v7 + 1) = 0;
          sub_77F70(v9);
        }
        v3 = *(char **)(a2 + 4);
      }
    }
    *(_DWORD *)(a2 + 8) = 0;
    sub_77F70(v3);
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  if ( *(_BYTE *)(a1 + 176) )
  {
    v10 = *(_QWORD *)(a1 + 56);
    v11 = *(_DWORD *)(a1 + 56);
    if ( HIDWORD(v10) << 6 )
    {
      do
      {
        while ( *(_DWORD *)(v11 + 4) != 7 )
        {
          v11 += 64;
          if ( v11 == (_DWORD)v10 + (HIDWORD(v10) << 6) )
            goto LABEL_18;
        }
        ptr = nullptr;
        v16 = 0;
        v17 = 0;
        sub_337BC(a1 + 40, (int)&ptr, v11);
        sub_2CE84((_DWORD *)a2, &ptr);
        if ( ptr )
        {
          v16 = 0;
          sub_77F70(ptr);
        }
        v11 += 64;
        v10 = *(_QWORD *)(a1 + 56);
      }
      while ( v11 != *(_DWORD *)(a1 + 56) + (*(_DWORD *)(a1 + 60) << 6) );
    }
  }
LABEL_18:
  if ( *(_BYTE *)(a1 + 36) )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_DWORD **)(a1 + 16);
    if ( 56 * HIDWORD(v12) )
    {
      do
      {
        while ( *v13 != 4 )
        {
          v13 += 14;
          if ( v13 == (_DWORD *)(v12 + 56 * HIDWORD(v12)) )
            goto LABEL_26;
        }
        ptr = nullptr;
        v16 = 0;
        v17 = 0;
        sub_33A50(a1, (int)&ptr, (int)v13);
        sub_2CE84((_DWORD *)a2, &ptr);
        if ( ptr )
        {
          v16 = 0;
          sub_77F70(ptr);
        }
        v13 += 14;
        v12 = *(_QWORD *)(a1 + 16);
      }
      while ( v13 != (_DWORD *)(*(_DWORD *)(a1 + 16) + 56 * *(_DWORD *)(a1 + 20)) );
    }
  }
LABEL_26:
  *(_BYTE *)(a2 + 16) = 1;
  return 1;
}
