/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435198
// Address: 0x0000000000435198

//----- (0000000000435198) ----------------------------------------------------
__int64 __fastcall sub_435198(_QWORD *a1)
{
  char *v2; // x20
  __int64 v4; // x23
  size_t v5; // x0
  size_t v6; // x26
  size_t v7; // x25
  __int64 v8; // x3
  void **v9; // x0
  unsigned __int64 v10; // x2
  unsigned __int64 v11; // x1
  void *v12; // x24
  void *v13; // x26
  void *v14; // x25
  void **v15; // x1
  void *v16; // x0
  void **v17; // x1
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  void *v19; // [xsp+58h] [xbp-18h]
  void *v20; // [xsp+60h] [xbp-10h]

  if ( a1[6] )
  {
    v2 = (char *)a1[5];
    if ( sub_435100(a1 + 17, v2) != -1 )
    {
LABEL_3:
      sub_486A58(0, v2);
      return sub_4869C8(52);
    }
  }
  else
  {
    v2 = (char *)&qword_4B2D48;
    if ( sub_435100(a1 + 17, (char *)&qword_4B2D48) != -1 )
      goto LABEL_3;
  }
  if ( sub_435100(a1 + 14, v2) != -1 )
    goto LABEL_3;
  ptr = nullptr;
  v19 = nullptr;
  v20 = nullptr;
  v4 = a1[15];
  if ( v2 )
  {
    v5 = strlen(v2);
    v6 = v5 + 1;
    v7 = v5;
    ptr = sub_491288((__int64)&ptr, nullptr, v5 + 1, 1u);
    v19 = (void *)v6;
    memmove(ptr, v2, v7);
    *((_BYTE *)ptr + v7) = 0;
  }
  v8 = a1[15];
  v9 = (void **)a1[14];
  v10 = v8 + 1;
  v11 = a1[16];
  if ( v9 > &ptr || &ptr >= &v9[3 * v11] )
  {
    if ( v11 < v10 )
    {
      v9 = (void **)sub_491288((__int64)(a1 + 14), (void *)a1[14], v10, 0x18u);
      a1[14] = v9;
      v8 = a1[15];
    }
    v17 = &v9[3 * v8];
    *v17 = ptr;
    v17[1] = v19;
    v17[2] = v20;
    ++a1[15];
  }
  else
  {
    v12 = ptr;
    v13 = v19;
    ptr = nullptr;
    v19 = nullptr;
    v14 = v20;
    v20 = nullptr;
    if ( v11 < v10 )
    {
      v9 = (void **)sub_491288((__int64)(a1 + 14), v9, v10, 0x18u);
      a1[14] = v9;
      v8 = a1[15];
    }
    v15 = &v9[3 * v8];
    *v15 = v12;
    v15[1] = v13;
    v15[2] = v14;
    v16 = ptr;
    ++a1[15];
    if ( v16 )
    {
      v19 = nullptr;
      j__free(v16);
    }
  }
  if ( v4 == -1 )
    goto LABEL_3;
  return 0;
}
// 435198: could not find valid save-restore pair for x24
// 435198: could not find valid save-restore pair for x25
// 435198: could not find valid save-restore pair for x26
// 4B2D48: using guessed type __int64 qword_4B2D48;
