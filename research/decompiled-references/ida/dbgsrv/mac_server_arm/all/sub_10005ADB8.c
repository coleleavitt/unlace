/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005ADB8
// Address: 0x000000010005ADB8

//----- (000000010005ADB8) ----------------------------------------------------
size_t __fastcall sub_10005ADB8(_QWORD **a1, _QWORD *a2)
{
  __int64 v4; // x21
  size_t result; // x0
  __int64 v6; // x25
  _QWORD *v7; // x8
  __int64 v8; // x22
  char *v9; // x8
  const char *v10; // x22
  size_t v11; // x23
  _QWORD *v12; // x26
  unsigned __int64 v13; // x24
  char v14; // [xsp+7h] [xbp-59h] BYREF

  v4 = a2[1];
  result = (size_t)sub_10002CF84(a1, v4);
  if ( v4 )
  {
    v6 = 0;
    do
    {
      v8 = *a2 + v6;
      sub_10002CF84(a1, *(_DWORD *)v8);
      if ( *(_QWORD *)(v8 + 16) )
        v9 = *(char **)(v8 + 8);
      else
        v9 = &byte_100075A30;
      if ( v9 )
        v10 = v9;
      else
        v10 = &byte_10008E2F5;
      result = strlen(v10);
      v11 = result + 1;
      if ( result != -1 )
      {
        v12 = a1[1];
        if ( __CFADD__(v12, v11) )
          v13 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v13 = (unsigned __int64)v12 + v11;
        if ( (unsigned __int64)v12 >= v13 )
        {
          if ( v12 != (_QWORD *)v13 )
          {
            v14 = 0;
            sub_100019CE4(a1, v13, &v14);
          }
        }
        else
        {
          v7 = *a1;
          if ( (unsigned __int64)a1[2] < v13 )
          {
            v7 = qvector_reserve(a1, *a1, v13, 1u);
            *a1 = v7;
          }
          bzero((char *)a1[1] + (_QWORD)v7, v13 - (_QWORD)a1[1]);
          a1[1] = (_QWORD *)v13;
        }
        result = (size_t)memcpy((char *)v12 + (_QWORD)*a1, v10, v11);
      }
      v6 += 32;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
