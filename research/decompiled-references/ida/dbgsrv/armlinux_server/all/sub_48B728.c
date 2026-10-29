/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48B728
// Address: 0x000000000048B728

//----- (000000000048B728) ----------------------------------------------------
bool __fastcall sub_48B728(__int64 a1, __int64 a2)
{
  _BOOL4 v4; // w22
  __int64 v5; // x24
  __int64 v6; // x19
  __int64 v7; // x20
  unsigned __int8 *v8; // x2
  char *v9; // x22
  size_t v10; // x27
  char *v11; // x0
  __int64 v12; // x3
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x2
  void *v15; // x22
  size_t v16; // x27
  char *v17; // x1
  void *v18; // x0
  char *v19; // x1
  __int64 v20; // x21
  __int64 v21; // x19
  __int64 v22; // x20
  void *v23; // x0
  char *v24; // x1
  void **v26; // x1
  void *v27; // [xsp+60h] [xbp-1050h]
  void *v28; // [xsp+78h] [xbp-1038h] BYREF
  __int64 v29; // [xsp+80h] [xbp-1030h]
  __int64 v30; // [xsp+88h] [xbp-1028h]
  void *ptr; // [xsp+90h] [xbp-1020h] BYREF
  size_t v32; // [xsp+98h] [xbp-1018h]
  void *v33; // [xsp+A0h] [xbp-1010h]
  char v34[4096]; // [xsp+A8h] [xbp-1008h] BYREF

  v28 = nullptr;
  v29 = 0;
  v30 = 0;
  v4 = sub_48B468((__int64)&v28);
  if ( v4 )
  {
    v5 = v29;
    if ( v29 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = (unsigned __int8 *)&qword_4B2D48;
        if ( *(_QWORD *)((char *)v28 + v6 + 8) )
          v8 = *(unsigned __int8 **)((char *)v28 + v6);
        v9 = sub_48F278(v34, 4096, v8, a2, 0);
        if ( !(unsigned __int8)sub_490268(v9) )
          goto LABEL_4;
        ptr = nullptr;
        v32 = 0;
        v33 = nullptr;
        if ( v9 )
        {
          v10 = strlen(v9);
          ptr = sub_491288((__int64)&ptr, nullptr, v10 + 1, 1u);
          v32 = v10 + 1;
          memmove(ptr, v9, v10);
          *((_BYTE *)ptr + v10) = 0;
        }
        v11 = *(char **)a1;
        v12 = *(_QWORD *)(a1 + 8);
        v13 = *(_QWORD *)(a1 + 16);
        v14 = v12 + 1;
        if ( *(_QWORD *)a1 > (unsigned __int64)&ptr || &ptr >= (void **)&v11[24 * v13] )
          break;
        v15 = ptr;
        v16 = v32;
        v27 = v33;
        ptr = nullptr;
        v32 = 0;
        v33 = nullptr;
        if ( v13 < v14 )
        {
          v11 = (char *)sub_491288(a1, v11, v14, 0x18u);
          v12 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v11;
        }
        v17 = &v11[24 * v12];
        *(_QWORD *)v17 = v15;
        *((_QWORD *)v17 + 1) = v16;
        *((_QWORD *)v17 + 2) = v27;
        v18 = ptr;
        ++*(_QWORD *)(a1 + 8);
        if ( v18 )
        {
          v32 = 0;
          ++v7;
          j__free(v18);
          v6 += 24;
          if ( v7 == v5 )
            goto LABEL_16;
        }
        else
        {
LABEL_4:
          ++v7;
          v6 += 24;
          if ( v7 == v5 )
            goto LABEL_16;
        }
      }
      if ( v13 < v14 )
      {
        v11 = (char *)sub_491288(a1, *(void **)a1, v14, 0x18u);
        v12 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)a1 = v11;
      }
      v26 = (void **)&v11[24 * v12];
      *v26 = ptr;
      v26[1] = (void *)v32;
      v26[2] = v33;
      ++*(_QWORD *)(a1 + 8);
      goto LABEL_4;
    }
LABEL_16:
    v4 = *(_QWORD *)(a1 + 8) != 0;
  }
  v19 = (char *)v28;
  if ( v28 )
  {
    v20 = v29;
    if ( v29 )
    {
      v21 = 0;
      v22 = 0;
      do
      {
        v23 = *(void **)&v19[v21];
        v24 = &v19[v21];
        if ( v23 )
        {
          *((_QWORD *)v24 + 1) = 0;
          j__free(v23);
        }
        ++v22;
        v21 += 24;
        v19 = (char *)v28;
      }
      while ( v20 != v22 );
    }
    v29 = 0;
    j__free(v19);
  }
  return v4;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
