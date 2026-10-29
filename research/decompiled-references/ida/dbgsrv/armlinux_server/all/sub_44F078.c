/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F078
// Address: 0x000000000044F078

//----- (000000000044F078) ----------------------------------------------------
__int64 __fastcall sub_44F078(_QWORD *a1, _DWORD *a2, __int64 **a3)
{
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v8; // x0
  int v9; // w0
  unsigned int v10; // w21
  __int64 v12; // x0
  size_t v13; // x20
  __int64 v14; // x22
  unsigned __int64 v15; // x23
  size_t v16; // x22
  void *v17; // x0
  size_t v18; // x1
  size_t v19; // x20
  size_t v20; // x22
  size_t v21; // x24
  void *v22; // x0
  bool v23; // zf
  char *v24; // x1
  void *v25; // x0
  const void *v26; // x1
  void *ptr; // [xsp+48h] [xbp-38h] BYREF
  __int64 v28; // [xsp+50h] [xbp-30h]
  __int64 v29; // [xsp+58h] [xbp-28h]
  void *v30; // [xsp+60h] [xbp-20h] BYREF
  size_t v31; // [xsp+68h] [xbp-18h]
  unsigned __int64 v32; // [xsp+70h] [xbp-10h]

  ptr = nullptr;
  v28 = 0;
  *a2 = -1;
  v29 = 0;
  v6 = sub_44A6A8((__int64)a1, (__int64 *)&ptr);
  v7 = v6;
  if ( !v6 )
  {
    v10 = 0;
    goto LABEL_5;
  }
  v8 = sub_43E578(*(int *)(v6 + 52));
  v9 = sub_444508(v8, (__int64)&ptr);
  if ( v9 != -1 )
  {
    *a2 = v9;
LABEL_4:
    v10 = 1;
    goto LABEL_5;
  }
  v10 = (unsigned __int8)sub_44EFF8(a1, v7, (const char **)&ptr, a3);
  if ( v10 )
    goto LABEL_4;
  sub_4869C8(88);
  v12 = sub_43E578(*(int *)(v7 + 52));
  v13 = *(_QWORD *)(v12 + 64);
  v14 = v12;
  v30 = nullptr;
  v31 = 0;
  v32 = 0;
  if ( !v13 )
  {
    v15 = 2;
    v16 = 0;
    v17 = nullptr;
LABEL_12:
    v17 = sub_491288((__int64)&v30, v17, v15, 1u);
    v30 = v17;
    goto LABEL_13;
  }
  v25 = sub_491248(v13);
  v26 = *(const void **)(v14 + 56);
  v30 = v25;
  v15 = v13 + 1;
  v32 = v13;
  v16 = v13 - 1;
  memcpy(v25, v26, v13);
  v31 = v13;
  v17 = v30;
  if ( v32 < v13 + 1 )
    goto LABEL_12;
LABEL_13:
  v31 = v15;
  *((_BYTE *)v17 + v16) = 46;
  *((_BYTE *)v30 + v16 + 1) = 0;
  v18 = v31;
  if ( v28 )
  {
    v19 = v28 - 1;
    if ( v28 != 1 )
    {
      if ( v31 )
      {
        v20 = v31 - 1;
        v21 = v19 + v31 - 1;
      }
      else
      {
        v21 = v28 - 1;
        v20 = 0;
      }
      v22 = v30;
      if ( v21 + 1 > v32 )
      {
        v22 = sub_491288((__int64)&v30, v30, v21 + 1, 1u);
        v30 = v22;
      }
      v31 = v21 + 1;
      *((_BYTE *)v22 + v21) = 0;
      memcpy((char *)v30 + v20, ptr, v19);
      v18 = v31;
    }
  }
  v23 = v18 == 0;
  v24 = (char *)v30;
  if ( v23 )
    v24 = (char *)&qword_4B2D48;
  sub_486A58(0, v24);
  if ( v30 )
  {
    v31 = 0;
    j__free(v30);
  }
LABEL_5:
  if ( ptr )
  {
    v28 = 0;
    j__free(ptr);
  }
  return v10;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
