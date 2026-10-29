/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_ida_subdirs
// Address: 0x000000010006B978

//----- (000000010006B978) ----------------------------------------------------
__int64 __fastcall get_ida_subdirs(_QWORD *a1, const char *a2, char a3)
{
  __int64 v6; // x23
  const char *idp_name; // x22
  char *v8; // x0
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  __int64 v19; // x25
  unsigned __int64 v20; // x26
  const char *v21; // x2
  char *v22; // x0
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  const char *v28; // x2
  char *v29; // x0
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  void *v36; // [xsp+18h] [xbp-478h] BYREF
  __int64 v37; // [xsp+20h] [xbp-470h]
  __int64 v38; // [xsp+28h] [xbp-468h]

  v6 = a1[1];
  if ( (a3 & 1) != 0 )
  {
    idp_name = (const char *)get_idp_name();
    if ( (a3 & 2) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  idp_name = nullptr;
  if ( (a3 & 2) != 0 )
  {
LABEL_5:
    v8 = idadir(a2);
    sub_10006C0E4(a1, a3, v8, v9, v10, v11, v12, v13, idp_name);
  }
LABEL_6:
  sub_10006BF28();
  if ( qword_10009DF88 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      if ( *(_QWORD *)(qword_10009DF80 + v19 + 8) )
        v21 = *(const char **)(qword_10009DF80 + v19);
      else
        v21 = &byte_100075A30;
      sub_10006C0E4(a1, a3, v21, v14, v15, v16, v17, v18, a2);
      ++v20;
      v19 += 24;
    }
    while ( v20 < qword_10009DF88 );
  }
  if ( a2 )
  {
    if ( !strcmp(a2, "sig") )
    {
      v22 = "IDASGN";
    }
    else if ( !strcmp(a2, "ids") )
    {
      v22 = "IDAIDS";
    }
    else if ( !strcmp(a2, "idc") )
    {
      v22 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, "til") )
        goto LABEL_28;
      v22 = "IDATIL";
    }
    v36 = nullptr;
    v37 = 0;
    v38 = 0;
    if ( (unsigned int)qgetenv(v22, &v36) )
    {
      if ( v37 )
        v28 = (const char *)v36;
      else
        v28 = &byte_100075A30;
      sub_10006C0E4(a1, a3, v28, v23, v24, v25, v26, v27, idp_name);
    }
    if ( v36 )
    {
      v37 = 0;
      qfree(v36);
    }
  }
LABEL_28:
  if ( (a3 & 2) == 0 )
  {
    v29 = idadir(a2);
    sub_10006C0E4(a1, a3, v29, v30, v31, v32, v33, v34, idp_name);
  }
  return (unsigned int)(*((_DWORD *)a1 + 2) - v6);
}
// 10006B9F4: variable 'v9' is possibly undefined
// 10006B9F4: variable 'v10' is possibly undefined
// 10006B9F4: variable 'v11' is possibly undefined
// 10006B9F4: variable 'v12' is possibly undefined
// 10006B9F4: variable 'v13' is possibly undefined
// 10006BA48: variable 'v14' is possibly undefined
// 10006BA48: variable 'v15' is possibly undefined
// 10006BA48: variable 'v16' is possibly undefined
// 10006BA48: variable 'v17' is possibly undefined
// 10006BA48: variable 'v18' is possibly undefined
// 10006BB14: variable 'v23' is possibly undefined
// 10006BB14: variable 'v24' is possibly undefined
// 10006BB14: variable 'v25' is possibly undefined
// 10006BB14: variable 'v26' is possibly undefined
// 10006BB14: variable 'v27' is possibly undefined
// 10006BB44: variable 'v30' is possibly undefined
// 10006BB44: variable 'v31' is possibly undefined
// 10006BB44: variable 'v32' is possibly undefined
// 10006BB44: variable 'v33' is possibly undefined
// 10006BB44: variable 'v34' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009DF80: using guessed type __int64 qword_10009DF80;
// 10009DF88: using guessed type __int64 qword_10009DF88;
