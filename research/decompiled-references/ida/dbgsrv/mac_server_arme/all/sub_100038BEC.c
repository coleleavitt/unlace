/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100038BEC
// Address: 0x0000000100038BEC

//----- (0000000100038BEC) ----------------------------------------------------
__int64 __fastcall sub_100038BEC(
        _QWORD *a1,
        _DWORD *a2,
        unsigned __int8 **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  __int64 v12; // x0
  __int64 v13; // x20
  __int64 v14; // x0
  int v15; // w0
  __int64 v16; // x19
  void *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x21
  size_t v20; // x20
  _QWORD *v21; // x19
  size_t v22; // x22
  size_t v23; // x19
  void *v24; // x1
  __int64 v25; // x21
  void *v27; // [xsp+8h] [xbp-58h] BYREF
  __int64 v28; // [xsp+10h] [xbp-50h]
  unsigned __int64 v29; // [xsp+18h] [xbp-48h]
  void *__src; // [xsp+20h] [xbp-40h] BYREF
  unsigned __int64 v31; // [xsp+28h] [xbp-38h]
  __int64 v32; // [xsp+30h] [xbp-30h]

  *a2 = -1;
  __src = nullptr;
  v31 = 0;
  v32 = 0;
  v12 = sub_1000378F0((__int64)a1, (__int64 *)&__src, (__int64)a3, a4, a5, a6, a7, a8, a9);
  v13 = v12;
  if ( v12 )
  {
    v14 = sub_10002F0C0(*(int *)(v12 + 28));
    v15 = sub_1000360A8(v14, &__src);
    if ( v15 != -1 )
    {
      *a2 = v15;
      goto LABEL_5;
    }
    if ( (sub_100038894(a1, v13, &__src, a3) & 1) != 0 )
    {
LABEL_5:
      v16 = 1;
      v17 = __src;
      if ( !__src )
        return v16;
      goto LABEL_28;
    }
    set_qerrno();
    v18 = sub_10002F0C0(*(int *)(v13 + 28));
    v19 = v18;
    v27 = nullptr;
    v28 = 0;
    v29 = 0;
    v20 = *(_QWORD *)(v18 + 40);
    if ( v20 )
    {
      v21 = qalloc_or_throw(*(_QWORD *)(v18 + 40));
      v27 = v21;
      v29 = v20;
      memcpy(v21, *(const void **)(v19 + 32), v20);
      v28 = v20;
    }
    else
    {
      v21 = nullptr;
    }
    if ( v20 )
      v22 = v20 - 1;
    else
      v22 = 0;
    if ( v20 < v22 + 2 )
    {
      v21 = qvector_reserve(&v27, v21, v22 + 2, 1u);
      v27 = v21;
    }
    v28 = v22 + 2;
    *((_BYTE *)v21 + v22) = 46;
    *((_BYTE *)v27 + v22 + 1) = 0;
    if ( v31 )
      v23 = v31 - 1;
    else
      v23 = 0;
    if ( v31 >= 2 )
    {
      v24 = v27;
      if ( v28 )
        v25 = v28 - 1;
      else
        v25 = 0;
      if ( v29 < v25 + v23 + 1 )
      {
        v24 = qvector_reserve(&v27, v27, v25 + v23 + 1, 1u);
        v27 = v24;
      }
      v28 = v25 + v23 + 1;
      *((_BYTE *)v24 + v25 + v23) = 0;
      memcpy((char *)v27 + v25, __src, v23);
    }
    set_error_string(0);
    if ( v27 )
    {
      v28 = 0;
      qfree(v27);
    }
  }
  v16 = 0;
  v17 = __src;
  if ( __src )
  {
LABEL_28:
    v31 = 0;
    qfree(v17);
  }
  return v16;
}
