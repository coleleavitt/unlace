/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B468
// Address: 0x000000000048B468

//----- (000000000048B468) ----------------------------------------------------
bool __fastcall sub_48B468(__int64 a1)
{
  unsigned __int8 *v2; // x2
  char *v3; // x21
  __int64 v4; // x1
  _BOOL4 v5; // w20
  size_t v7; // x0
  size_t v8; // x24
  size_t v9; // x23
  char *v10; // x0
  __int64 v11; // x3
  unsigned __int64 v12; // x1
  unsigned __int64 v13; // x2
  void *v14; // x21
  void *v15; // x22
  void *v16; // x23
  char *v17; // x1
  void *v18; // x0
  void **v19; // x1
  void *ptr; // [xsp+48h] [xbp-1038h] BYREF
  __int64 v21; // [xsp+50h] [xbp-1030h]
  __int64 v22; // [xsp+58h] [xbp-1028h]
  void *v23; // [xsp+60h] [xbp-1020h] BYREF
  void *v24; // [xsp+68h] [xbp-1018h]
  void *v25; // [xsp+70h] [xbp-1010h]
  char v26[4096]; // [xsp+78h] [xbp-1008h] BYREF

  sub_48B0B8(a1, "cfg", 6);
  ptr = nullptr;
  v21 = 0;
  v22 = 0;
  if ( !(unsigned __int8)sub_48AA60((__int64)&ptr) )
    goto LABEL_5;
  v2 = (unsigned __int8 *)ptr;
  if ( !v21 )
    v2 = (unsigned __int8 *)&qword_4B2D48;
  v3 = sub_48F278(v26, 4096, v2, 0);
  if ( (unsigned __int8)sub_4902C8(v3) )
  {
    v23 = nullptr;
    v24 = nullptr;
    v25 = nullptr;
    if ( v3 )
    {
      v7 = strlen(v3);
      v8 = v7 + 1;
      v9 = v7;
      v23 = sub_491288((__int64)&v23, nullptr, v7 + 1, 1u);
      v24 = (void *)v8;
      memmove(v23, v3, v9);
      *((_BYTE *)v23 + v9) = 0;
    }
    v10 = *(char **)a1;
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)(a1 + 16);
    v13 = v11 + 1;
    if ( *(_QWORD *)a1 > (unsigned __int64)&v23 || &v23 >= (void **)&v10[24 * v12] )
    {
      if ( v12 < v13 )
      {
        v10 = (char *)sub_491288(a1, *(void **)a1, v13, 0x18u);
        v11 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v10;
      }
      v19 = (void **)&v10[24 * v11];
      *v19 = v23;
      v19[1] = v24;
      v19[2] = v25;
      v4 = *(_QWORD *)(a1 + 8) + 1LL;
      *(_QWORD *)(a1 + 8) = v4;
    }
    else
    {
      v14 = v23;
      v15 = v25;
      v23 = nullptr;
      v16 = v24;
      v24 = nullptr;
      v25 = nullptr;
      if ( v12 < v13 )
      {
        v10 = (char *)sub_491288(a1, v10, v13, 0x18u);
        v11 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v10;
      }
      v17 = &v10[24 * v11];
      *(_QWORD *)v17 = v14;
      *((_QWORD *)v17 + 1) = v16;
      *((_QWORD *)v17 + 2) = v15;
      v18 = v23;
      v4 = *(_QWORD *)(a1 + 8) + 1LL;
      *(_QWORD *)(a1 + 8) = v4;
      if ( v18 )
      {
        v24 = nullptr;
        j__free(v18);
        v4 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  else
  {
LABEL_5:
    v4 = *(_QWORD *)(a1 + 8);
  }
  v5 = v4 != 0;
  if ( ptr )
  {
    v21 = 0;
    j__free(ptr);
  }
  return v5;
}
// 48B468: could not find valid save-restore pair for x22
// 48B468: could not find valid save-restore pair for x23
// 48B468: could not find valid save-restore pair for x24
// 4B2D48: using guessed type __int64 qword_4B2D48;
