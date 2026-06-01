/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478060
// Address: 0x0000000000478060

//----- (0000000000478060) ----------------------------------------------------
__int64 __fastcall sub_478060(__int64 a1, unsigned int a2, void *a3, size_t a4, _QWORD *a5, size_t *a6)
{
  _BYTE *v11; // x0
  size_t v12; // x24
  unsigned __int64 v13; // x23
  unsigned __int64 v14; // x28
  _BYTE *v15; // x0
  size_t v16; // x23
  unsigned int *v17; // x0
  void *v18; // x19
  unsigned __int8 *v19; // x1
  __int64 v20; // x0
  unsigned int v21; // w21
  unsigned int v22; // w0
  size_t v23; // x22
  bool v24; // zf
  unsigned __int64 v26; // x28
  unsigned __int64 v27; // x24
  unsigned __int64 v28; // x19
  unsigned __int64 v29; // x23
  void *v30; // x0
  unsigned __int8 *v31; // x1
  bool v32; // cc
  unsigned __int64 v33; // x3
  char *v34; // x0
  unsigned __int64 v35; // x3
  char *v36; // x0
  unsigned __int64 v37; // x3
  char *v38; // x0
  void *src; // [xsp+68h] [xbp-48h]
  unsigned __int8 *v40; // [xsp+70h] [xbp-40h] BYREF
  unsigned __int8 *v41; // [xsp+78h] [xbp-38h]
  void *ptr; // [xsp+80h] [xbp-30h] BYREF
  unsigned __int64 v43; // [xsp+88h] [xbp-28h]
  unsigned __int64 v44; // [xsp+90h] [xbp-20h]
  _BYTE v45[5]; // [xsp+98h] [xbp-18h] BYREF
  _BYTE v46[3]; // [xsp+9Dh] [xbp-13h] BYREF
  _BYTE v47[5]; // [xsp+A0h] [xbp-10h] BYREF
  _BYTE v48[3]; // [xsp+A5h] [xbp-Bh] BYREF

  src = a3;
  sub_479010(39, (__int64 *)&ptr);
  v11 = sub_48E2D8(v45, (unsigned __int64)v46, a2);
  v12 = v11 - v45;
  if ( v11 != v45 )
  {
    v13 = v43;
    v14 = v12 + v43;
    if ( v43 <= v12 + v43 )
    {
      if ( v43 >= v12 + v43 )
      {
LABEL_25:
        memcpy((char *)ptr + v13, v45, v12);
        goto LABEL_2;
      }
    }
    else
    {
      if ( v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v43 & 0x8000000000000000LL) != 0 )
          v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v33 = v43;
    v34 = (char *)ptr;
    if ( v44 < v14 )
    {
      v34 = (char *)sub_491288((__int64)&ptr, ptr, v14, 1u);
      v33 = v43;
      ptr = v34;
    }
    memset(&v34[v33], 0, v14 - v33);
    v43 = v14;
    goto LABEL_25;
  }
LABEL_2:
  if ( a4 > 0xFFFFFFFF )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(5);
  }
  v15 = sub_48E2D8(v47, (unsigned __int64)v48, a4);
  v16 = v15 - v47;
  if ( v15 != v47 )
  {
    v26 = v43;
    v27 = v16 + v43;
    if ( v43 <= v16 + v43 )
    {
      if ( v43 >= v16 + v43 )
        goto LABEL_30;
    }
    else
    {
      if ( v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v43 & 0x8000000000000000LL) != 0 )
          v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_30;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v37 = v43;
    v38 = (char *)ptr;
    if ( v44 < v27 )
    {
      v38 = (char *)sub_491288((__int64)&ptr, ptr, v27, 1u);
      v37 = v43;
      ptr = v38;
    }
    memset(&v38[v37], 0, v27 - v37);
    v43 = v27;
LABEL_30:
    memcpy((char *)ptr + v26, v47, v16);
    if ( !a4 )
      goto LABEL_12;
LABEL_31:
    v28 = v43;
    v29 = a4 + v43;
    if ( v43 <= a4 + v43 )
    {
      if ( v43 >= a4 + v43 )
      {
LABEL_35:
        memcpy((char *)ptr + v28, src, a4);
        goto LABEL_12;
      }
    }
    else
    {
      if ( v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v43 & 0x8000000000000000LL) != 0 )
          v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_35;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v35 = v43;
    v36 = (char *)ptr;
    if ( v29 > v44 )
    {
      v36 = (char *)sub_491288((__int64)&ptr, ptr, v29, 1u);
      v35 = v43;
      ptr = v36;
    }
    memset(&v36[v35], 0, v29 - v35);
    v43 = v29;
    goto LABEL_35;
  }
  if ( a4 )
    goto LABEL_31;
LABEL_12:
  v17 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 16LL))(a1, 39, &ptr);
  v18 = v17;
  if ( v17
    && ((v19 = (unsigned __int8 *)v17 + 5,
         v20 = *v17,
         v40 = v19,
         v41 = &v19[v20],
         v21 = sub_48E5A8(&v40, (unsigned __int64)&v19[v20]),
         v22 = sub_48E5A8(&v40, (unsigned __int64)v41),
         (v23 = v22) != 0)
      ? (v24 = a5 == nullptr)
      : (v24 = 1),
        v24
     || (v30 = sub_491040(v22), (*a5 = v30) == 0)
     || ((v31 = v40, v41 >= &v40[v23]) ? (v32 = v40 > &v40[v23]) : (v32 = 1), !v32
                                                                           && (v40 += v23, memcpy(v30, v31, v23)))) )
  {
    if ( a6 )
      *a6 = v23;
    j__free(v18);
  }
  else
  {
    v21 = -1;
  }
  if ( ptr )
  {
    v43 = 0;
    j__free(ptr);
  }
  return v21;
}
// 52451C: using guessed type char under_debugger;
