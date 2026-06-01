/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478DA0
// Address: 0x0000000000478DA0

//----- (0000000000478DA0) ----------------------------------------------------
__int64 __fastcall sub_478DA0(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v3; // w20
  __int64 v4; // x23
  int *v5; // x25
  __int64 *v6; // x19
  __int64 v7; // x21
  __int64 v10; // x0
  unsigned __int64 v11; // x4
  unsigned __int64 v12; // x2
  int v13; // w1
  __int64 v14; // x0
  int v15; // w2
  char v16; // w28
  _DWORD *v17; // x0
  __int64 *v18; // x2
  __int64 v19; // x1
  unsigned __int64 v20; // x3
  __int64 v21; // x5
  __int64 v22; // x2
  char *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x5
  char *v26; // x0
  __int64 v28; // [xsp+60h] [xbp-50h] BYREF
  __int64 v29; // [xsp+68h] [xbp-48h]
  __int64 v30; // [xsp+70h] [xbp-40h]
  char v31[8]; // [xsp+78h] [xbp-38h] BYREF
  int v32; // [xsp+80h] [xbp-30h] BYREF
  __int64 *v33; // [xsp+88h] [xbp-28h]
  int *v34; // [xsp+90h] [xbp-20h]
  int *v35; // [xsp+98h] [xbp-18h]
  __int64 v36; // [xsp+A0h] [xbp-10h]
  __int64 v37; // [xsp+A8h] [xbp-8h]

  v6 = a1;
  v7 = (__int64)(a1 + 9);
  v10 = a1[10];
  v32 = 0;
  v11 = *(_QWORD *)(v7 + 16);
  v12 = a3 + v10;
  v33 = nullptr;
  v34 = &v32;
  v35 = &v32;
  v36 = 0;
  if ( v12 > v11 )
    v6[9] = (__int64)sub_491288(v7, (void *)v6[9], v12, 0x18u);
  if ( a3 )
  {
    if ( !a2[1] )
      goto LABEL_22;
    v5 = &v32;
    v4 = 0;
LABEL_6:
    v6 = v33;
    v3 = *(unsigned __int8 *)a2;
    if ( v33 )
    {
      v13 = *((_DWORD *)v33 + 8);
      if ( v3 >= v13 )
        goto LABEL_10;
      while ( 1 )
      {
        v14 = v6[2];
        v15 = 1;
        if ( !v14 )
          break;
        while ( 1 )
        {
          v6 = (__int64 *)v14;
          v13 = *(_DWORD *)(v14 + 32);
          if ( v3 < v13 )
            break;
LABEL_10:
          v14 = v6[3];
          v15 = 0;
          if ( !v14 )
            goto LABEL_11;
        }
      }
LABEL_11:
      if ( !v15 )
        goto LABEL_12;
      if ( v6 == (__int64 *)v34 )
        goto LABEL_16;
LABEL_25:
      v13 = *(_DWORD *)(sub_49F750(v6) + 32);
LABEL_12:
      if ( v3 > v13 )
        goto LABEL_15;
LABEL_13:
      if ( !under_debugger )
        sub_492270(1620);
      goto LABEL_14;
    }
    v6 = (__int64 *)v5;
    if ( v34 != v5 )
      goto LABEL_25;
    v16 = 1;
    while ( 1 )
    {
      v17 = sub_49E050(0x28u);
      v18 = v6;
      v6 = &v28;
      v17[8] = v3;
      sub_49F830(v16, (__int64)v17, v18, v5);
      v19 = *(_QWORD *)(v7 + 8);
      v20 = *(_QWORD *)(v7 + 16);
      v21 = a2[1];
      v22 = a2[2];
      v28 = *a2;
      v29 = v21;
      v30 = v22;
      ++v36;
      if ( v19 + 1 > v20 )
      {
        v23 = (char *)sub_491288(v7, *(void **)v7, v19 + 1, 0x18u);
        v19 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)v7 = v23;
      }
      else
      {
        v23 = *(char **)v7;
      }
      v24 = v30;
      v25 = v29;
      v26 = &v23[24 * v19];
      ++v4;
      *(_QWORD *)v26 = v28;
      *((_QWORD *)v26 + 1) = v25;
      *((_QWORD *)v26 + 2) = v24;
      ++*(_QWORD *)(v7 + 8);
      if ( a3 == v4 )
        break;
      a2 += 3;
      if ( a2[1] )
        goto LABEL_6;
LABEL_22:
      if ( !under_debugger )
        sub_492270(1619);
LABEL_14:
      __break(0x3E8u);
LABEL_15:
      if ( !v6 )
        goto LABEL_13;
LABEL_16:
      v16 = 1;
      if ( v6 != (__int64 *)v5 )
        v16 = v3 < *((_DWORD *)v6 + 8);
    }
  }
  sub_478D58((__int64)v31, v33);
  return v37 ^ _stack_chk_guard;
}
// 478E84: variable 'v5' is possibly undefined
// 478F8C: variable 'v3' is possibly undefined
// 478EF0: variable 'v4' is possibly undefined
// 49F750: using guessed type __int64 __fastcall sub_49F750(_QWORD);
// 52451C: using guessed type char under_debugger;
