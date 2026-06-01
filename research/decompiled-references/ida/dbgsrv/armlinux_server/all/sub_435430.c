/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435430
// Address: 0x0000000000435430

//----- (0000000000435430) ----------------------------------------------------
__int64 __fastcall sub_435430(_QWORD *a1)
{
  char *v2; // x19
  __int64 v3; // x22
  size_t v4; // x0
  size_t v5; // x25
  size_t v6; // x24
  __int64 v7; // x3
  void **v8; // x0
  unsigned __int64 v9; // x2
  unsigned __int64 v10; // x1
  void *v11; // x23
  void *v12; // x25
  void *v13; // x24
  void **v14; // x1
  void *v15; // x0
  void **v17; // x1
  void *ptr; // [xsp+50h] [xbp-20h] BYREF
  void *v19; // [xsp+58h] [xbp-18h]
  void *v20; // [xsp+60h] [xbp-10h]

  if ( a1[6] )
    v2 = (char *)a1[5];
  else
    v2 = (char *)&qword_4B2D48;
  if ( sub_435100(a1 + 17, v2) != -1 )
  {
LABEL_13:
    sub_486A58(0, v2);
    return sub_4869C8(52);
  }
  ptr = nullptr;
  v19 = nullptr;
  v20 = nullptr;
  v3 = a1[18];
  if ( v2 )
  {
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = sub_491288((__int64)&ptr, nullptr, v4 + 1, 1u);
    v19 = (void *)v5;
    memmove(ptr, v2, v6);
    *((_BYTE *)ptr + v6) = 0;
  }
  v7 = a1[18];
  v8 = (void **)a1[17];
  v9 = v7 + 1;
  v10 = a1[19];
  if ( v8 > &ptr || &ptr >= &v8[3 * v10] )
  {
    if ( v10 < v9 )
    {
      v8 = (void **)sub_491288((__int64)(a1 + 17), (void *)a1[17], v9, 0x18u);
      a1[17] = v8;
      v7 = a1[18];
    }
    v17 = &v8[3 * v7];
    *v17 = ptr;
    v17[1] = v19;
    v17[2] = v20;
    ++a1[18];
    if ( v3 == -1 )
      goto LABEL_13;
  }
  else
  {
    v11 = ptr;
    v12 = v19;
    ptr = nullptr;
    v19 = nullptr;
    v13 = v20;
    v20 = nullptr;
    if ( v10 < v9 )
    {
      v8 = (void **)sub_491288((__int64)(a1 + 17), v8, v9, 0x18u);
      a1[17] = v8;
      v7 = a1[18];
    }
    v14 = &v8[3 * v7];
    *v14 = v11;
    v14[1] = v12;
    v14[2] = v13;
    v15 = ptr;
    ++a1[18];
    if ( v15 )
    {
      v19 = nullptr;
      j__free(v15);
    }
    if ( v3 == -1 )
      goto LABEL_13;
  }
  return 0;
}
// 435430: could not find valid save-restore pair for x23
// 435430: could not find valid save-restore pair for x24
// 435430: could not find valid save-restore pair for x25
// 4B2D48: using guessed type __int64 qword_4B2D48;
