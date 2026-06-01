/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E168
// Address: 0x000000010005E168

//----- (000000010005E168) ----------------------------------------------------
void *__fastcall sub_10005E168(__int64 a1, int a2, __int64 *a3, char a4)
{
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  void *v16; // x20
  unsigned int v17; // w8
  void *v18; // x24
  __int64 v19; // x26
  __int64 v20; // x25
  void *v21; // x0
  void *v22; // x0
  void (*v23)(const char *, ...); // x8
  const char *v24; // x9
  char v26; // [xsp+0h] [xbp-70h]
  void *v27; // [xsp+10h] [xbp-60h] BYREF
  __int64 v28; // [xsp+18h] [xbp-58h]
  __int64 v29; // [xsp+20h] [xbp-50h]

  while ( 1 )
  {
    if ( !a3[1] )
      goto LABEL_8;
    if ( (unsigned int)sub_100062C38(a1, a3) )
      break;
    if ( (a4 & 1) != 0 )
      goto LABEL_34;
    if ( *(_BYTE *)(*a3 + 4) == 52 )
    {
      qexit(1);
      __break(1u);
    }
LABEL_8:
    v8 = sub_10006303C(a1, a2);
    v16 = (void *)v8;
    if ( !v8 )
    {
      v23 = (void (*)(const char *, ...))sub_100065520;
      if ( *(_BYTE *)(a1 + 68) )
        v23 = (void (*)(const char *, ...))sub_100000B44;
      if ( *(_QWORD *)(a1 + 24) )
        v24 = *(const char **)(a1 + 16);
      else
        v24 = &byte_10007AE40;
      goto LABEL_33;
    }
    v17 = *(unsigned __int8 *)(v8 + 4);
    if ( v17 > 1 )
    {
      if ( v17 == 2 )
      {
        sub_100053F5C((_BYTE *)a1, "rpc: no remote memory", v10, v11, v12, v13, v14, v15, v26);
        goto LABEL_26;
      }
      if ( v17 == 6 )
      {
        sub_100000B44();
        goto LABEL_26;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v8 + 4) )
        goto LABEL_35;
      if ( v17 == 1 )
      {
        sub_100053F5C((_BYTE *)a1, "rpc: remote did not understand our request", v10, v11, v12, v13, v14, v15, v26);
LABEL_26:
        qfree(v16);
        goto LABEL_34;
      }
    }
    if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
    {
      sub_100065520("Exploit packet has been detected and ignored\n", v9, v10, v11, v12, v13, v14, v15, v26);
      goto LABEL_26;
    }
    (*(void (__fastcall **)(void **__return_ptr, __int64, __int64))(*(_QWORD *)a1 + 56LL))(&v27, a1, v8);
    v18 = v27;
    v19 = v28;
    v20 = v29;
    v27 = nullptr;
    v28 = 0;
    v29 = 0;
    v21 = (void *)*a3;
    if ( *a3 )
    {
      a3[1] = 0;
      qfree(v21);
      v22 = v27;
      *a3 = (__int64)v18;
      a3[1] = v19;
      a3[2] = v20;
      if ( v22 )
      {
        v28 = 0;
        qfree(v22);
      }
    }
    else
    {
      *a3 = (__int64)v18;
      a3[1] = v19;
      a3[2] = v20;
    }
    qfree(v16);
  }
  v23 = (void (*)(const char *, ...))sub_100065520;
  if ( *(_BYTE *)(a1 + 68) )
    v23 = (void (*)(const char *, ...))sub_100000B44;
  if ( *(_QWORD *)(a1 + 24) )
    v24 = *(const char **)(a1 + 16);
  else
    v24 = &byte_10007AE40;
LABEL_33:
  v23("%s\n", v24);
LABEL_34:
  v16 = nullptr;
LABEL_35:
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 64LL))(a1, v16);
  return v16;
}
// 10005E2F0: variable 'v10' is possibly undefined
// 10005E2F0: variable 'v11' is possibly undefined
// 10005E2F0: variable 'v12' is possibly undefined
// 10005E2F0: variable 'v13' is possibly undefined
// 10005E2F0: variable 'v14' is possibly undefined
// 10005E2F0: variable 'v15' is possibly undefined
// 10005E2F0: variable 'v26' is possibly undefined
// 10005E314: variable 'v9' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
