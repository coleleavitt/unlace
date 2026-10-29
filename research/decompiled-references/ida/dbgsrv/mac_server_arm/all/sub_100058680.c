/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058680
// Address: 0x0000000100058680

//----- (0000000100058680) ----------------------------------------------------
__int64 __fastcall sub_100058680(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v7; // w28
  __int64 *v8; // x20
  unsigned __int64 v9; // x8
  __int64 *v10; // x9
  __int64 *v11; // x1
  unsigned int v12; // w10
  char *v13; // x0
  char *v14; // x24
  unsigned __int64 v15; // x8
  size_t v16; // x25
  const void *v17; // x26
  _QWORD *v18; // x1
  size_t v19; // x25
  void *v20; // x26
  void *v21; // x0
  unsigned __int64 v24; // [xsp+10h] [xbp-70h] BYREF
  unsigned __int64 *v25; // [xsp+20h] [xbp-60h] BYREF

  if ( a4 >= 1 )
  {
    v7 = 0;
    v8 = (__int64 *)(a1 + 336);
    while ( 1 )
    {
      v9 = *(_QWORD *)a3;
      v24 = *(_QWORD *)a3;
      if ( *(_QWORD *)(a3 + 16) <= 1u )
      {
        v10 = (__int64 *)*v8;
        if ( *v8 )
        {
          v11 = v8;
          do
          {
            if ( v10[4] < v9 )
            {
              v12 = 1;
            }
            else
            {
              v11 = v10;
              v12 = 0;
            }
            v10 = (__int64 *)v10[v12];
          }
          while ( v10 );
          if ( v11 != v8 && v9 >= v11[4] )
            sub_10005964C((__int64 **)(a1 + 328), v11);
        }
        goto LABEL_4;
      }
      v25 = &v24;
      v13 = sub_1000596FC((__int64 **)(a1 + 328), &v24, (__int64)&byte_1000763D7, &v25);
      v14 = v13;
      *((_QWORD *)v13 + 5) = *(_QWORD *)a3;
      if ( v13 + 40 != (char *)a3 )
      {
        v15 = *(_QWORD *)(a3 + 16);
        if ( v15 )
          v16 = v15 - 1;
        else
          v16 = 0;
        if ( v15 >= 2 )
        {
          v17 = *(const void **)(a3 + 8);
          v18 = *((_QWORD **)v13 + 6);
          if ( *((_QWORD *)v13 + 8) <= v16 )
          {
            v18 = qvector_reserve((_QWORD *)v13 + 6, v18, v16 + 1, 1u);
            *((_QWORD *)v14 + 6) = v18;
          }
          *((_QWORD *)v14 + 7) = v16 + 1;
          memmove(v18, v17, v16);
          *(_BYTE *)(*((_QWORD *)v14 + 6) + v16) = 0;
        }
        else
        {
          *((_QWORD *)v13 + 7) = 0;
        }
      }
      *((_DWORD *)v14 + 18) = *(_DWORD *)(a3 + 32);
      v19 = *(_QWORD *)(a3 + 48);
      if ( v19 )
        break;
      v20 = nullptr;
      v21 = *((void **)v14 + 10);
      if ( v21 )
        goto LABEL_28;
LABEL_3:
      *((_QWORD *)v14 + 10) = v20;
      *((_QWORD *)v14 + 11) = v19;
      *((_QWORD *)v14 + 12) = v19;
      memcpy(v14 + 104, (const void *)(a3 + 64), 0x170u);
LABEL_4:
      ++v7;
      a3 += 432;
      if ( v7 == a4 )
        goto LABEL_29;
    }
    v20 = qalloc_or_throw(*(_QWORD *)(a3 + 48));
    memcpy(v20, *(const void **)(a3 + 40), v19);
    v21 = *((void **)v14 + 10);
    if ( !v21 )
      goto LABEL_3;
LABEL_28:
    *((_QWORD *)v14 + 11) = 0;
    qfree(v21);
    goto LABEL_3;
  }
LABEL_29:
  if ( a2 )
    *a2 = a4;
  return 1;
}
// 1000763D7: using guessed type char byte_1000763D7;
