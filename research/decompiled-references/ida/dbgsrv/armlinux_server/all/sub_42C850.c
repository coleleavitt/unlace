/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C850
// Address: 0x000000000042C850

//----- (000000000042C850) ----------------------------------------------------
__int64 __fastcall sub_42C850(__int64 a1, __int64 a2)
{
  char *v4; // x0
  __int64 v5; // x25
  __int64 v6; // x24
  __int64 i; // x23
  char *v8; // x19
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x19
  __int64 v14; // x1
  _DWORD *v15; // x2
  _DWORD *v16; // x19
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v19; // [xsp+48h] [xbp-18h]
  __int64 v20; // [xsp+50h] [xbp-10h]

  v4 = *(char **)(a2 + 8);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = &v4[v6];
        v9 = *(void **)&v4[v6 + 24];
        if ( v9 )
        {
          *((_QWORD *)v8 + 4) = 0;
          j__free(v9);
        }
        v10 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          j__free(v10);
        }
        v6 += 56;
        v4 = *(char **)(a2 + 8);
      }
    }
    *(_QWORD *)(a2 + 16) = 0;
    j__free(v4);
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 24) = 0;
  }
  if ( *(_BYTE *)(a1 + 248) )
  {
    v12 = *(_QWORD *)(a1 + 112);
    v11 = *(_QWORD *)(a1 + 120);
    v13 = v12;
    if ( v11 << 6 )
    {
      do
      {
        while ( *(_DWORD *)(v13 + 4) != 7 )
        {
          v13 += 64;
          if ( v13 == v12 + (v11 << 6) )
            goto LABEL_18;
        }
        ptr = nullptr;
        v19 = 0;
        v20 = 0;
        sub_42C2A0((__int64 *)(a1 + 80), (__int64)&ptr, v13);
        sub_424330((__int64 *)a2, &ptr);
        if ( ptr )
        {
          v19 = 0;
          j__free(ptr);
        }
        v12 = *(_QWORD *)(a1 + 112);
        v11 = *(_QWORD *)(a1 + 120);
        v13 += 64;
      }
      while ( v13 != v12 + (v11 << 6) );
    }
  }
LABEL_18:
  if ( *(_BYTE *)(a1 + 72) )
  {
    v15 = *(_DWORD **)(a1 + 32);
    v14 = *(_QWORD *)(a1 + 40);
    v16 = v15;
    if ( 56 * v14 )
    {
      do
      {
        while ( *v16 != 4 )
        {
          v16 += 14;
          if ( v16 == &v15[14 * v14] )
            goto LABEL_26;
        }
        ptr = nullptr;
        v19 = 0;
        v20 = 0;
        sub_42C698(a1, (__int64)&ptr, (__int64)v16);
        sub_424330((__int64 *)a2, &ptr);
        if ( ptr )
        {
          v19 = 0;
          j__free(ptr);
        }
        v15 = *(_DWORD **)(a1 + 32);
        v14 = *(_QWORD *)(a1 + 40);
        v16 += 14;
      }
      while ( v16 != &v15[14 * v14] );
    }
  }
LABEL_26:
  *(_BYTE *)(a2 + 32) = 1;
  return 1;
}
