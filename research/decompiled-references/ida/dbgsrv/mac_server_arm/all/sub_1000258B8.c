/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000258B8
// Address: 0x00000001000258B8

//----- (00000001000258B8) ----------------------------------------------------
unsigned __int64 __fastcall sub_1000258B8(__int64 *a1, char *__s2, int *a3)
{
  unsigned __int64 v6; // x23
  unsigned __int64 v7; // x21
  __int64 v8; // x24
  int v9; // w25
  _QWORD *v10; // x8
  const char *v11; // x0
  int v12; // w8
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  int v15; // w25
  _QWORD *v16; // x8
  const char *v17; // x0
  __int64 v18; // x23
  __int64 v19; // x24
  _QWORD *v20; // x25
  const char *v21; // x0

  v6 = a1[15];
  if ( !v6 )
    goto LABEL_11;
  v7 = 0;
  v8 = a1[14];
  v9 = 1;
  while ( 1 )
  {
    v10 = (_QWORD *)(v8 + 24 * v7);
    v11 = v10[1] ? (const char *)*v10 : &byte_100075A30;
    if ( !strcmp(v11, __s2) )
      break;
    v7 = v9++;
    if ( v6 <= v7 )
      goto LABEL_11;
  }
  if ( v7 == -1 )
  {
LABEL_11:
    v13 = a1[18];
    if ( !v13 )
      goto LABEL_21;
    v7 = 0;
    v14 = a1[17];
    v15 = 1;
    while ( 1 )
    {
      v16 = (_QWORD *)(v14 + 24 * v7);
      v17 = v16[1] ? (const char *)*v16 : &byte_100075A30;
      if ( !strcmp(v17, __s2) )
        break;
      v7 = v15++;
      if ( v13 <= v7 )
        goto LABEL_21;
    }
    if ( v7 == -1 )
    {
LABEL_21:
      v18 = a1[13];
      v19 = *(_QWORD *)(v18 + 96);
      if ( v19 )
      {
        v7 = 0;
        v20 = (_QWORD *)(*(_QWORD *)(v18 + 88) + 8LL);
        while ( 1 )
        {
          v21 = *v20 ? (const char *)*(v20 - 1) : &byte_100075A30;
          if ( !strcmp(v21, __s2) )
            break;
          ++v7;
          v20 += 7;
          if ( v19 == v7 )
            goto LABEL_28;
        }
        v12 = 3;
      }
      else
      {
LABEL_28:
        if ( sub_10002DF68(v18, __s2) )
        {
          v12 = 5;
        }
        else if ( (unsigned int)sub_10002E59C(a1[13], __s2) == 0x7FFFFFFF )
        {
          v12 = (int)off_10009CA40;
          if ( off_10009CA40 )
          {
            if ( (unsigned int)off_10009CA40((__int64)__s2) )
              v12 = 4;
            else
              v12 = 0;
          }
        }
        else
        {
          v12 = 6;
        }
        v7 = -1;
      }
    }
    else
    {
      v12 = 2;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( a3 )
    *a3 = v12;
  return v7;
}
// 100075A30: using guessed type char byte_100075A30;
// 10009CA40: using guessed type __int64 (__fastcall *off_10009CA40)(__int64 a1);
