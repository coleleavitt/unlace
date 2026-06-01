/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005A024
// Address: 0x000000010005A024

//----- (000000010005A024) ----------------------------------------------------
__int64 __fastcall sub_10005A024(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x20
  char *v6; // x1
  int v7; // w0
  unsigned int v8; // w21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x20
  void *v12; // x0
  __int64 v13; // x19
  __int64 v14; // x21
  char *v15; // x23
  char *v16; // x24
  void *v17; // x0
  void *v19; // [xsp+8h] [xbp-78h] BYREF
  __int64 v20; // [xsp+10h] [xbp-70h]
  __int64 v21; // [xsp+18h] [xbp-68h]
  unsigned int v22; // [xsp+24h] [xbp-5Ch] BYREF
  int v23; // [xsp+28h] [xbp-58h] BYREF
  void *v24; // [xsp+30h] [xbp-50h]
  __int64 v25; // [xsp+38h] [xbp-48h]
  __int64 v26; // [xsp+40h] [xbp-40h]

  v4 = sub_10005991C();
  v5 = v4;
  if ( *(_QWORD *)(a1 + 16) )
    v6 = *(char **)(a1 + 8);
  else
    v6 = &byte_100075A30;
  v7 = (*(__int64 (__fastcall **)(__int64, char *, unsigned int *))(*(_QWORD *)v4 + 488LL))(v4, v6, &v22);
  v8 = v7;
  if ( v7 < 0 )
    goto LABEL_24;
  v9 = *(_QWORD *)(v5 + 552);
  if ( !v9 )
    LODWORD(v9) = *(_DWORD *)(v5 + 648);
  if ( v7 >= (int)v9 )
  {
LABEL_24:
    if ( under_debugger != 1 )
      goto LABEL_26;
    while ( 1 )
    {
      __break(1u);
LABEL_26:
      interr(30056);
    }
  }
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  v23 = -2;
  v25 = 0;
  v26 = 0;
  v24 = (void *)-1LL;
  sub_100054D84(&v19, (unsigned int)v9, (unsigned __int64)&v23);
  if ( v23 >= -1 && v24 )
  {
    v25 = 0;
    qfree(v24);
  }
  v10 = sub_100059928();
  if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, void *, _QWORD))(*(_QWORD *)v5 + 224LL))(v5, v10, v22, v19, 0) <= 0 )
  {
    v11 = throw_idc_exception((unsigned __int8 *)a2, "failed to read register value");
    v12 = v19;
    if ( !v19 )
      return v11;
  }
  else
  {
    v11 = 0;
    v12 = v19;
    *(_QWORD *)(a2 + 8) = *((_QWORD *)v19 + 4 * v8 + 1);
  }
  v13 = v20;
  if ( v20 )
  {
    v14 = 0;
    do
    {
      v15 = (char *)v19;
      if ( *(int *)((char *)v19 + v14) >= -1 )
      {
        v16 = (char *)v19 + v14;
        v17 = *(void **)((char *)v19 + v14 + 8);
        if ( v17 )
        {
          *((_QWORD *)v16 + 2) = 0;
          qfree(v17);
          *((_QWORD *)v16 + 1) = 0;
          *(_QWORD *)&v15[v14 + 24] = 0;
        }
        *(_DWORD *)&v15[v14] = -2;
      }
      v14 += 32;
      --v13;
    }
    while ( v13 );
    v12 = v19;
  }
  v20 = 0;
  qfree(v12);
  return v11;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
