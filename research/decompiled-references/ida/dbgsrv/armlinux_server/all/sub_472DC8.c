/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472DC8
// Address: 0x0000000000472DC8

//----- (0000000000472DC8) ----------------------------------------------------
__int64 __fastcall sub_472DC8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  size_t v7; // x22
  const void *v8; // x27
  _BYTE *v9; // x0
  size_t v10; // x26
  _BYTE *v11; // x0
  size_t v12; // x25
  const void *v13; // x26
  _BYTE *v14; // x0
  size_t v15; // x25
  unsigned __int64 v17; // x25
  unsigned __int64 v18; // x28
  unsigned __int64 v19; // x25
  unsigned __int64 v20; // x26
  _BYTE *v21; // x0
  unsigned __int64 v22; // x22
  unsigned __int64 v23; // x26
  __int64 v24; // x3
  char *v25; // x0
  __int64 v26; // x3
  char *v27; // x0
  __int64 v28; // x3
  char *v29; // x0
  unsigned __int64 v30; // x21
  unsigned __int64 v31; // x27
  unsigned __int64 v32; // x20
  unsigned __int64 v33; // x21
  __int64 v34; // x3
  char *v35; // x0
  __int64 v36; // x3
  char *v37; // x0
  _BYTE v38[5]; // [xsp+68h] [xbp-18h] BYREF
  _BYTE v39[5]; // [xsp+6Dh] [xbp-13h] BYREF
  _BYTE v40[14]; // [xsp+72h] [xbp-Eh] BYREF

  sub_4728E0(a1, a2, 1u);
  v7 = *(_QWORD *)(a3 + 8);
  if ( v7 <= 0xFFFFFFFF )
    goto LABEL_4;
  do
  {
    if ( !under_debugger )
      sub_492270(5);
    __break(0x3E8u);
LABEL_4:
    v8 = *(const void **)a3;
    v9 = sub_48E2D8(v38, (unsigned __int64)v39, v7);
    v10 = v9 - v38;
    if ( v9 == v38 )
    {
      if ( !v7 )
        goto LABEL_6;
      goto LABEL_19;
    }
    v17 = *(_QWORD *)(a1 + 8);
    v18 = v10 + v17;
    if ( v17 <= v10 + v17 )
    {
      if ( v17 >= v10 + v17 )
        goto LABEL_18;
    }
    else
    {
      if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v17 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_18;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v18 )
    {
      v25 = (char *)sub_491288(a1, *(void **)a1, v18, 1u);
      *(_QWORD *)a1 = v25;
      v24 = *(_QWORD *)(a1 + 8);
    }
    memset(&v25[v24], 0, v18 - v24);
    *(_QWORD *)(a1 + 8) = v18;
LABEL_18:
    memcpy((void *)(*(_QWORD *)a1 + v17), v38, v10);
    if ( !v7 )
    {
LABEL_6:
      v11 = sub_48E4D8(v38, (unsigned __int64)v40, *(_QWORD *)(a3 + 24) + 1LL);
      v12 = v11 - v38;
      if ( v11 == v38 )
        goto LABEL_7;
      goto LABEL_24;
    }
LABEL_19:
    v19 = *(_QWORD *)(a1 + 8);
    v20 = v7 + v19;
    if ( v19 <= v7 + v19 )
    {
      if ( v19 >= v7 + v19 )
        goto LABEL_23;
    }
    else
    {
      if ( v19 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v19 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_23;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v28 = *(_QWORD *)(a1 + 8);
    v29 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v20 )
    {
      v29 = (char *)sub_491288(a1, *(void **)a1, v20, 1u);
      *(_QWORD *)a1 = v29;
      v28 = *(_QWORD *)(a1 + 8);
    }
    memset(&v29[v28], 0, v20 - v28);
    *(_QWORD *)(a1 + 8) = v20;
LABEL_23:
    memcpy((void *)(*(_QWORD *)a1 + v19), v8, v7);
    v21 = sub_48E4D8(v38, (unsigned __int64)v40, *(_QWORD *)(a3 + 24) + 1LL);
    v12 = v21 - v38;
    if ( v21 == v38 )
      goto LABEL_7;
LABEL_24:
    v22 = *(_QWORD *)(a1 + 8);
    v23 = v12 + v22;
    if ( v22 <= v12 + v22 )
    {
      if ( v22 < v12 + v22 )
        goto LABEL_34;
    }
    else
    {
      if ( v22 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_34:
        v26 = *(_QWORD *)(a1 + 8);
        v27 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v23 )
        {
          v27 = (char *)sub_491288(a1, *(void **)a1, v23, 1u);
          *(_QWORD *)a1 = v27;
          v26 = *(_QWORD *)(a1 + 8);
        }
        memset(&v27[v26], 0, v23 - v26);
        *(_QWORD *)(a1 + 8) = v23;
        goto LABEL_28;
      }
      if ( (v22 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_28:
    memcpy((void *)(*(_QWORD *)a1 + v22), v38, v12);
LABEL_7:
    v7 = *(_QWORD *)(a3 + 40);
  }
  while ( v7 > 0xFFFFFFFF );
  v13 = *(const void **)(a3 + 32);
  v14 = sub_48E2D8(v38, (unsigned __int64)v39, v7);
  v15 = v14 - v38;
  if ( v14 != v38 )
  {
    v30 = *(_QWORD *)(a1 + 8);
    v31 = v15 + v30;
    if ( v30 <= v15 + v30 )
    {
      if ( v30 >= v15 + v30 )
        goto LABEL_45;
    }
    else
    {
      if ( v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v30 & 0x8000000000000000LL) != 0 )
          *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_45;
      }
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v36 = *(_QWORD *)(a1 + 8);
    v37 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v31 )
    {
      v37 = (char *)sub_491288(a1, *(void **)a1, v31, 1u);
      *(_QWORD *)a1 = v37;
      v36 = *(_QWORD *)(a1 + 8);
    }
    memset(&v37[v36], 0, v31 - v36);
    *(_QWORD *)(a1 + 8) = v31;
LABEL_45:
    memcpy((void *)(*(_QWORD *)a1 + v30), v38, v15);
    if ( v7 )
      goto LABEL_46;
    goto LABEL_10;
  }
  if ( !v7 )
    goto LABEL_10;
LABEL_46:
  v32 = *(_QWORD *)(a1 + 8);
  v33 = v7 + v32;
  if ( v32 <= v7 + v32 )
  {
    if ( v32 >= v7 + v32 )
      goto LABEL_50;
  }
  else
  {
    if ( v32 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (v32 & 0x8000000000000000LL) != 0 )
        *(_QWORD *)(a1 + 8) = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_50;
    }
    v33 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v34 = *(_QWORD *)(a1 + 8);
  v35 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < v33 )
  {
    v35 = (char *)sub_491288(a1, *(void **)a1, v33, 1u);
    *(_QWORD *)a1 = v35;
    v34 = *(_QWORD *)(a1 + 8);
  }
  memset(&v35[v34], 0, v33 - v34);
  *(_QWORD *)(a1 + 8) = v33;
LABEL_50:
  memcpy((void *)(*(_QWORD *)a1 + v32), v13, v7);
LABEL_10:
  if ( a4 )
    sub_4728E0(a1, a4, 0);
  return *(_QWORD *)&v40[6] ^ _stack_chk_guard;
}
// 52451C: using guessed type char under_debugger;
