/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000222C8
// Address: 0x00000001000222C8

//----- (00000001000222C8) ----------------------------------------------------
__int64 __fastcall sub_1000222C8(_QWORD *a1)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 v4; // x9
  _QWORD **v5; // x19
  __int64 v6; // x23
  __int64 v7; // x22
  const char *v8; // x21
  _QWORD *v9; // x8
  _QWORD *v10; // x25
  __int64 v11; // t1
  const char *v12; // x0
  const char *v13; // x20
  size_t v14; // x21
  void *v15; // x0
  void *v17; // [xsp+0h] [xbp-80h] BYREF
  size_t v18; // [xsp+8h] [xbp-78h]
  __int64 v19; // [xsp+10h] [xbp-70h]
  unsigned __int8 v20[8]; // [xsp+18h] [xbp-68h] BYREF
  __int64 v21; // [xsp+20h] [xbp-60h]
  __int64 v22; // [xsp+28h] [xbp-58h]
  __int64 v23; // [xsp+30h] [xbp-50h]

  v2 = a1[13];
  v3 = *(_QWORD *)(v2 + 88);
  v4 = *(_QWORD *)(v2 + 96);
  v5 = (_QWORD **)(v2 + 88);
  v6 = 56 * v4;
  if ( !(56 * v4) )
  {
    if ( a1[6] )
    {
LABEL_12:
      v13 = (const char *)a1[5];
      v18 = 0;
      v19 = 0;
      v17 = nullptr;
      if ( !v13 )
      {
LABEL_20:
        v20[0] = 2;
        v22 = 0;
        v23 = 0;
        v21 = 0;
        sub_100022488(v5, (unsigned __int64)&v17);
        free_idcv(v20);
        if ( v17 )
        {
          v18 = 0;
          qfree(v17);
        }
        return 0;
      }
    }
    else
    {
LABEL_15:
      v17 = nullptr;
      v18 = 0;
      v13 = &byte_100075A30;
      v19 = 0;
    }
    v14 = strlen(v13);
    if ( v14 == -1 )
    {
      v15 = nullptr;
    }
    else
    {
      v15 = qvector_reserve(&v17, nullptr, v14 + 1, 1u);
      v17 = v15;
    }
    v18 = v14 + 1;
    memmove(v15, v13, v14);
    *((_BYTE *)v17 + v14) = 0;
    goto LABEL_20;
  }
  v7 = a1[6];
  if ( v7 )
    v8 = (const char *)a1[5];
  else
    v8 = &byte_100075A30;
  v9 = (_QWORD *)(v3 + 8);
  v10 = v9;
  while ( 1 )
  {
    v11 = *v10;
    v10 += 7;
    v12 = v11 ? (const char *)*(v9 - 1) : &byte_100075A30;
    if ( !strcmp(v12, v8) )
      return 0;
    v9 = v10;
    v6 -= 56;
    if ( !v6 )
    {
      if ( !v7 )
        goto LABEL_15;
      goto LABEL_12;
    }
  }
}
// 100075A30: using guessed type char byte_100075A30;
