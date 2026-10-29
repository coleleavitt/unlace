/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043CB0
// Address: 0x0000000100043CB0

//----- (0000000100043CB0) ----------------------------------------------------
__int64 __fastcall sub_100043CB0(char *a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  char *v10; // x21
  void *v11; // x1
  __int64 v12; // x8
  __int64 v13; // x8
  char *v14; // x1
  const char *v15; // x0
  void *v16; // x8
  __int64 v17; // x19
  void *v18; // [xsp+10h] [xbp-1490h] BYREF
  __int64 v19; // [xsp+18h] [xbp-1488h]
  unsigned __int64 v20; // [xsp+20h] [xbp-1480h]
  _BYTE v21[4]; // [xsp+28h] [xbp-1478h] BYREF
  unsigned __int8 v22[2084]; // [xsp+2Ch] [xbp-1474h] BYREF
  __int64 v23; // [xsp+850h] [xbp-C50h]
  int v24; // [xsp+85Ch] [xbp-C44h]
  unsigned __int8 v25[1024]; // [xsp+1068h] [xbp-438h] BYREF
  __int64 v26; // [xsp+1468h] [xbp-38h] BYREF

  if ( qfileexist(a1) )
    return 1;
  v25[0] = 0;
  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v10 = qbasename(a1);
    v11 = v18;
    v12 = v19;
    if ( v20 < v19 + 1 )
    {
      v11 = qvector_reserve(&v18, v18, v19 + 1, 8u);
      v18 = v11;
      v12 = v19;
    }
    *((_QWORD *)v11 + v12) = v10;
    v13 = ++v19;
    if ( v10 == a1 )
      break;
    *(v10 - 1) = 0;
    if ( qisdir(a1) )
    {
      qstrncpy((const char *)v25, (unsigned __int8 *)a1, 1024);
      v13 = v19;
      break;
    }
  }
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *((char **)v18 + v13 - 1);
      v19 = v13 - 1;
      if ( v25[0] )
        qmakepath((char *)v25, 1024, (const char *)v25, v5, v6, v7, v8, v9, v14);
      else
        qstrncpy((const char *)v25, (unsigned __int8 *)v14, 1024);
      v23 = 0;
      v24 = 0;
      if ( (unsigned int)qfindfirst((__int64)v25, (__int64)v21, (unsigned __int8)(v19 != 0) << 14) )
        break;
      v15 = qbasename(v25);
      qstrncpy(v15, v22, (char *)&v26 - v15);
      qfindclose((__int64)v21);
      v13 = v19;
      if ( !v19 )
        goto LABEL_15;
    }
    qfindclose((__int64)v21);
    result = 0;
    v16 = v18;
    if ( v18 )
      goto LABEL_18;
  }
  else
  {
LABEL_15:
    qstrncpy(a1, v25, a2);
    result = 1;
    v16 = v18;
    if ( v18 )
    {
LABEL_18:
      v19 = 0;
      v17 = result;
      qfree(v16);
      return v17;
    }
  }
  return result;
}
// 100043DD4: variable 'v5' is possibly undefined
// 100043DD4: variable 'v6' is possibly undefined
// 100043DD4: variable 'v7' is possibly undefined
// 100043DD4: variable 'v8' is possibly undefined
// 100043DD4: variable 'v9' is possibly undefined
