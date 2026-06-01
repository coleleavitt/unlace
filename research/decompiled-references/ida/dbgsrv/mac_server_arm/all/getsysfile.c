/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: getsysfile
// Address: 0x000000010006B7F4

//----- (000000010006B7F4) ----------------------------------------------------
char *__fastcall getsysfile(char *a1, __int64 a2, const char *a3, const char *a4)
{
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x23
  unsigned __int64 v13; // x24
  const char *v14; // x2
  char *v15; // x19
  void *v16; // x0
  unsigned __int64 v17; // x20
  __int64 v18; // x21
  void *v19; // x0
  _QWORD *v20; // x22
  void *v22; // [xsp+10h] [xbp-60h] BYREF
  unsigned __int64 v23; // [xsp+18h] [xbp-58h]
  __int64 v24; // [xsp+20h] [xbp-50h]

  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  get_ida_subdirs(&v22, a4, 0);
  if ( !v23 )
  {
    v15 = nullptr;
    v16 = v22;
    if ( !v22 )
      return v15;
    goto LABEL_12;
  }
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)((char *)v22 + v12 + 8) ? *(const char **)((char *)v22 + v12) : &byte_100075A30;
    v15 = qmakepath(a1, a2, v14, v7, v8, v9, v10, v11, a3);
    if ( qfileexist(v15) )
      break;
    ++v13;
    v12 += 24;
    if ( v13 >= v23 )
    {
      v15 = nullptr;
      break;
    }
  }
  v16 = v22;
  if ( v22 )
  {
LABEL_12:
    v17 = v23;
    if ( v23 )
    {
      v18 = 0;
      do
      {
        v19 = *(void **)((char *)v22 + v18);
        if ( v19 )
        {
          v20 = (char *)v22 + v18;
          *(_QWORD *)((char *)v22 + v18 + 8) = 0;
          qfree(v19);
          *v20 = 0;
          v20[2] = 0;
        }
        v18 += 24;
        --v17;
      }
      while ( v17 );
      v16 = v22;
    }
    v23 = 0;
    qfree(v16);
  }
  return v15;
}
// 10006B884: variable 'v7' is possibly undefined
// 10006B884: variable 'v8' is possibly undefined
// 10006B884: variable 'v9' is possibly undefined
// 10006B884: variable 'v10' is possibly undefined
// 10006B884: variable 'v11' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
