/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003617C
// Address: 0x000000010003617C

//----- (000000010003617C) ----------------------------------------------------
__int64 __fastcall sub_10003617C(_QWORD *a1, _DWORD *a2, __int64 a3, unsigned __int8 **a4)
{
  int v6; // w24
  unsigned __int8 *v9; // x22
  int v10; // w8
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  char *v19; // x8
  __int64 v20; // x2
  __int64 v22; // x8
  _QWORD *v23; // x1
  __int64 v24; // x8
  _QWORD *v25; // x8
  unsigned __int8 *v26; // x20
  void *v27; // [xsp+10h] [xbp-50h] BYREF
  __int64 v28; // [xsp+18h] [xbp-48h]
  __int64 v29; // [xsp+20h] [xbp-40h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = a2[7];
  if ( v6 )
  {
    v9 = *a4;
    v10 = a2[7];
    while ( 1 )
    {
      v11 = sub_10002F168(a1[1], v10);
      if ( *(_DWORD *)(v11 + 56) != -1 )
        break;
      v10 = *(_DWORD *)(v11 + 24);
      if ( !v10 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    v20 = *(unsigned int *)(v11 + 56);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return sub_100037B28(a1, a2, v20, a3, v9, 1);
  }
  else
  {
LABEL_5:
    v27 = nullptr;
    v28 = 0;
    v29 = 0;
    v12 = sub_10002F168(a1[1], v6);
    if ( *(_QWORD *)(v12 + 40) )
      v19 = *(char **)(v12 + 32);
    else
      v19 = &byte_10007AE40;
    sub_10000295C((char **)&v27, "%s.%s", v13, v14, v15, v16, v17, v18, (char)v19);
    set_error_string(0);
    set_qerrno();
    v22 = a1[4];
    if ( !v22 )
    {
      v23 = (_QWORD *)a1[3];
      if ( a1[5] )
      {
        v24 = 0;
      }
      else
      {
        v23 = qvector_reserve(a1 + 3, v23, 1u, 0x20u);
        a1[3] = v23;
        v24 = a1[4];
      }
      v25 = &v23[4 * v24];
      *(_BYTE *)v25 = 2;
      v25[2] = 0;
      v25[3] = 0;
      v25[1] = 0;
      v22 = a1[4] + 1LL;
      a1[4] = v22;
    }
    v26 = (unsigned __int8 *)(a1[3] + 32 * v22 - 32);
    sub_1000368F0(v26);
    sub_100036528((__int64)a1, (__int64)v26);
    if ( v27 )
    {
      v28 = 0;
      qfree(v27);
    }
    return 0;
  }
}
// 100036290: variable 'v13' is possibly undefined
// 100036290: variable 'v14' is possibly undefined
// 100036290: variable 'v15' is possibly undefined
// 100036290: variable 'v16' is possibly undefined
// 100036290: variable 'v17' is possibly undefined
// 100036290: variable 'v18' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
