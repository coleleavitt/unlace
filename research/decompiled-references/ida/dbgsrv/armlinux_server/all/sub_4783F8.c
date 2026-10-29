/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4783F8
// Address: 0x00000000004783F8

//----- (00000000004783F8) ----------------------------------------------------
__int64 __fastcall sub_4783F8(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4)
{
  unsigned int v6; // w24
  unsigned int v7; // w0
  size_t v8; // x20
  void *v9; // x22
  unsigned __int8 *v10; // x1
  __int64 (__fastcall *v12)(__int64, _QWORD, void *, size_t, void **, unsigned __int64 *); // x6
  unsigned int v13; // w21
  _BYTE *v14; // x0
  size_t v15; // x22
  size_t v16; // x21
  unsigned __int64 v18; // x21
  unsigned __int64 v19; // x24
  void *v20; // x25
  _BYTE *v21; // x0
  size_t v22; // x24
  unsigned __int64 v23; // x22
  unsigned __int64 v24; // x26
  __int64 v25; // x3
  char *v26; // x0
  unsigned __int64 v27; // x20
  unsigned __int64 v28; // x22
  __int64 v29; // x3
  char *v30; // x0
  __int64 v31; // x3
  char *v32; // x0
  void *ptr; // [xsp+50h] [xbp-30h] BYREF
  unsigned __int64 v34; // [xsp+58h] [xbp-28h] BYREF
  unsigned __int8 *v35; // [xsp+60h] [xbp-20h] BYREF
  unsigned __int64 v36; // [xsp+68h] [xbp-18h]
  _BYTE v37[5]; // [xsp+70h] [xbp-10h] BYREF
  _BYTE v38[3]; // [xsp+75h] [xbp-Bh] BYREF

  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  v35 = a3;
  v36 = a4;
  v6 = sub_48E5A8(&v35, a4);
  v7 = sub_48E5A8(&v35, v36);
  v8 = v7;
  if ( v7 )
  {
    v9 = sub_491040(v7);
    if ( !v9 )
      return 2;
  }
  else
  {
    v9 = nullptr;
  }
  v10 = v35;
  if ( v36 < (unsigned __int64)&v35[v8] || v35 > &v35[v8] )
    return 1;
  v35 += v8;
  if ( !memcpy(v9, v10, v8) )
    return 1;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, void *, size_t, void **, unsigned __int64 *))(a1 + 40);
  v34 = 0;
  ptr = nullptr;
  v13 = v12(a1, v6, v9, v8, &ptr, &v34);
  j__free(v9);
  v14 = sub_48E2D8(v37, (unsigned __int64)v38, v13);
  v15 = v14 - v37;
  if ( v14 != v37 )
  {
    v18 = *(_QWORD *)(a2 + 8);
    v19 = v15 + v18;
    if ( v18 <= v15 + v18 )
    {
      if ( v18 >= v15 + v18 )
        goto LABEL_21;
    }
    else
    {
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v18 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = *(_QWORD *)(a2 + 8);
    v26 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < v19 )
    {
      v26 = (char *)sub_491288(a2, *(void **)a2, v19, 1u);
      *(_QWORD *)a2 = v26;
      v25 = *(_QWORD *)(a2 + 8);
    }
    memset(&v26[v25], 0, v19 - v25);
    *(_QWORD *)(a2 + 8) = v19;
LABEL_21:
    memcpy((void *)(*(_QWORD *)a2 + v18), v37, v15);
    v16 = v34;
    if ( v34 > 0xFFFFFFFF )
      goto LABEL_11;
LABEL_22:
    v20 = ptr;
    v21 = sub_48E2D8(v37, (unsigned __int64)v38, v16);
    v22 = v21 - v37;
    if ( v21 == v37 )
      goto LABEL_23;
    v23 = *(_QWORD *)(a2 + 8);
    v24 = v22 + v23;
    if ( v23 <= v22 + v23 )
    {
      if ( v23 >= v22 + v23 )
      {
LABEL_40:
        memcpy((void *)(*(_QWORD *)a2 + v23), v37, v22);
LABEL_23:
        if ( !v16 )
        {
LABEL_24:
          j__free(ptr);
          return 0;
        }
        v27 = *(_QWORD *)(a2 + 8);
        v28 = v16 + v27;
        if ( v27 <= v16 + v27 )
        {
          if ( v27 >= v16 + v27 )
          {
LABEL_42:
            memcpy((void *)(*(_QWORD *)a2 + v27), v20, v16);
            goto LABEL_24;
          }
        }
        else
        {
          if ( v27 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (v27 & 0x8000000000000000LL) != 0 )
              *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_42;
          }
          v28 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v29 = *(_QWORD *)(a2 + 8);
        v30 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < v28 )
        {
          v30 = (char *)sub_491288(a2, *(void **)a2, v28, 1u);
          *(_QWORD *)a2 = v30;
          v29 = *(_QWORD *)(a2 + 8);
        }
        memset(&v30[v29], 0, v28 - v29);
        *(_QWORD *)(a2 + 8) = v28;
        goto LABEL_42;
      }
    }
    else
    {
      if ( v23 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v23 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a2 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_40;
      }
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = *(_QWORD *)(a2 + 8);
    v32 = *(char **)a2;
    if ( v24 > *(_QWORD *)(a2 + 16) )
    {
      v32 = (char *)sub_491288(a2, *(void **)a2, v24, 1u);
      *(_QWORD *)a2 = v32;
      v31 = *(_QWORD *)(a2 + 8);
    }
    memset(&v32[v31], 0, v24 - v31);
    *(_QWORD *)(a2 + 8) = v24;
    goto LABEL_40;
  }
  v16 = v34;
  if ( v34 <= 0xFFFFFFFF )
    goto LABEL_22;
LABEL_11:
  if ( !under_debugger )
    sub_492270(5);
  __break(0x3E8u);
  return 1;
}
// 4783F8: could not find valid save-restore pair for x25
// 52451C: using guessed type char under_debugger;
