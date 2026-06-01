/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4666F8
// Address: 0x00000000004666F8

//----- (00000000004666F8) ----------------------------------------------------
__int64 __fastcall sub_4666F8(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x25
  __int64 v6; // x27
  __int64 v7; // x28
  __int64 *v9; // x20
  __int64 v10; // x19
  const char *v11; // x21
  _BYTE *v12; // x0
  size_t v13; // x23
  unsigned __int64 v14; // x19
  size_t v15; // x25
  unsigned __int64 v16; // x23
  size_t v17; // x19
  __int64 result; // x0
  unsigned __int64 v19; // x3
  char *v20; // x0
  unsigned __int64 v21; // x25
  const void *v22; // x21
  _BYTE *v23; // x0
  int v24; // w0
  unsigned __int64 v25; // x3
  char *v26; // x0
  void (*v27)(void); // x2
  __int64 v28; // [xsp+10h] [xbp-B0h]
  __int64 v29; // [xsp+18h] [xbp-A8h]
  __int64 v30; // [xsp+20h] [xbp-A0h]
  __int64 v31; // [xsp+30h] [xbp-90h]
  __int64 v32; // [xsp+40h] [xbp-80h]
  __int64 v33; // [xsp+48h] [xbp-78h]
  __int64 *v34; // [xsp+68h] [xbp-58h]
  __int64 v35; // [xsp+70h] [xbp-50h]
  _BYTE *v36; // [xsp+78h] [xbp-48h]
  void *ptr; // [xsp+88h] [xbp-38h] BYREF
  unsigned __int64 v38; // [xsp+90h] [xbp-30h]
  unsigned __int64 v39; // [xsp+98h] [xbp-28h]
  _BYTE v40[5]; // [xsp+A0h] [xbp-20h] BYREF
  _BYTE v41[3]; // [xsp+A5h] [xbp-1Bh] BYREF
  _BYTE v42[10]; // [xsp+A8h] [xbp-18h] BYREF
  _BYTE v43[6]; // [xsp+B2h] [xbp-Eh] BYREF
  __int64 v44; // [xsp+B8h] [xbp-8h]

  v35 = a1;
  v9 = *(__int64 **)a2;
  if ( !(56LL * *(_QWORD *)(a2 + 8)) )
    goto LABEL_17;
  v28 = v2;
  v30 = v4;
  v31 = v5;
  v34 = &qword_4B2D48;
  v36 = v41;
  while ( 1 )
  {
    v10 = *v9;
    v11 = (const char *)v34;
    if ( v9[2] )
      v11 = (const char *)v9[1];
    sub_479010(57, (__int64 *)&ptr);
    v12 = sub_48E4D8(v42, (unsigned __int64)v43, v10 + 1);
    v13 = v12 - v42;
    v14 = v38;
    if ( v12 == v42 )
    {
      if ( v11 )
        goto LABEL_7;
      goto LABEL_28;
    }
    v21 = v13 + v38;
    if ( v13 + v38 >= v38 )
    {
      if ( v13 + v38 <= v38 )
        goto LABEL_26;
    }
    else
    {
      if ( v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (v38 & 0x8000000000000000LL) != 0 )
          v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_26:
        memcpy((char *)ptr + v14, v42, v13);
        v14 = v38;
        goto LABEL_27;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = v38;
    v26 = (char *)ptr;
    if ( v39 < v21 )
    {
      v26 = (char *)sub_491288((__int64)&ptr, ptr, v21, 1u);
      v25 = v38;
      ptr = v26;
    }
    memset(&v26[v25], 0, v21 - v25);
    v38 = v21;
    memcpy((char *)ptr + v14, v42, v13);
    v14 = v38;
LABEL_27:
    if ( v11 )
    {
LABEL_7:
      v15 = strlen(v11) + 1;
      goto LABEL_8;
    }
LABEL_28:
    v15 = 1;
    v11 = &byte_4B31F0;
LABEL_8:
    v16 = v15 + v14;
    if ( v15 + v14 >= v14 )
    {
      if ( v15 + v14 <= v14 )
        goto LABEL_12;
      v19 = v14;
      v20 = (char *)ptr;
      if ( v16 <= v39 )
        goto LABEL_21;
      goto LABEL_30;
    }
    if ( v14 <= 0x7FFFFFFFFFFFFFFELL )
    {
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      v19 = v14;
      v20 = (char *)ptr;
      if ( v39 >= 0x7FFFFFFFFFFFFFFFLL )
      {
LABEL_21:
        memset(&v20[v19], 0, v16 - v19);
        v38 = v16;
        goto LABEL_12;
      }
LABEL_30:
      v20 = (char *)sub_491288((__int64)&ptr, v20, v16, 1u);
      v19 = v38;
      ptr = v20;
      goto LABEL_21;
    }
    if ( (v14 & 0x8000000000000000LL) != 0 )
      v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
    memcpy((char *)ptr + v14, v11, v15);
    v17 = v9[5];
    if ( v17 > 0xFFFFFFFF )
      break;
    v22 = (const void *)v9[4];
    v23 = sub_48E2D8(v40, (unsigned __int64)v36, v17);
    if ( v23 == v40 )
    {
      if ( !v17 )
        goto LABEL_33;
    }
    else
    {
      sub_4630F0((__int64)&ptr, v40, v23 - v40);
      if ( !v17 )
        goto LABEL_33;
    }
    sub_4630F0((__int64)&ptr, v22, v17);
LABEL_33:
    v24 = sub_46F3C8(v35 + 192, (__int64 *)&ptr, -1, 0);
    if ( v24 < 0 )
      goto LABEL_15;
    if ( v24 )
    {
      v27 = *(void (**)(void))(**(_QWORD **)(v35 + 440) + 568LL);
      if ( (char *)v27 != (char *)sub_4071B0 )
        v27();
    }
    if ( ptr )
    {
      v38 = 0;
      j__free(ptr);
    }
    v9 += 7;
    if ( v9 == (__int64 *)(*(_QWORD *)a2 + 56LL * *(_QWORD *)(a2 + 8)) )
      goto LABEL_38;
  }
  if ( !under_debugger )
    sub_492270(5);
  __break(0x3E8u);
LABEL_15:
  if ( ptr )
  {
    v38 = 0;
    j__free(ptr);
    v2 = v28;
    v4 = v30;
    v5 = v31;
    goto LABEL_17;
  }
LABEL_38:
  v2 = v28;
  v4 = v30;
  v5 = v31;
LABEL_17:
  result = v44 ^ _stack_chk_guard;
  if ( v44 != _stack_chk_guard )
  {
    v28 = v2;
    v29 = v3;
    v30 = v4;
    v31 = v5;
    v32 = v6;
    v33 = v7;
  }
  return result;
}
// 4666F8: could not find valid save-restore pair for x21
// 4666F8: could not find valid save-restore pair for x23
// 4666F8: could not find valid save-restore pair for x25
// 46673C: variable 'v2' is possibly undefined
// 466758: variable 'v4' is possibly undefined
// 46675C: variable 'v5' is possibly undefined
// 466A84: variable 'v3' is possibly undefined
// 466A90: variable 'v6' is possibly undefined
// 466A90: variable 'v7' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 52451C: using guessed type char under_debugger;
