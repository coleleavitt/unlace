/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87818
// Address: 0x0000000000087818

//----- (0000000000087818) ----------------------------------------------------
__int64 **__fastcall sub_87818(_QWORD *a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x10
  __int64 *v6; // x1
  unsigned __int64 v7; // x2
  unsigned __int64 v8; // x0
  unsigned __int64 v9; // x24
  unsigned __int64 v10; // x25
  unsigned __int64 v11; // x19
  unsigned __int64 v12; // x27
  __int64 ***v13; // x8
  __int64 **v14; // x20
  unsigned __int64 v15; // x8
  unsigned __int8 *v16; // x11
  unsigned __int8 *v17; // x9
  size_t v18; // x21
  unsigned __int8 *v19; // x22
  unsigned __int64 v20; // x8
  unsigned __int64 v21; // x10
  unsigned __int64 v22; // x11
  __int64 *v23; // x0
  unsigned __int8 *v24; // x8
  __int64 v25; // x9
  unsigned __int8 *i; // x10
  _QWORD v28[2]; // [xsp+0h] [xbp-60h] BYREF

  v28[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  if ( (v4 & 1) != 0 )
    v6 = *((__int64 **)a2 + 2);
  else
    v6 = (__int64 *)(a2 + 1);
  if ( (v4 & 1) != 0 )
    v7 = v5;
  else
    v7 = v4 >> 1;
  v8 = sub_86778((__int64)v28, v6, v7);
  v9 = a1[1];
  if ( !v9 )
    return nullptr;
  v10 = v9 - 1;
  v11 = v8;
  if ( ((v9 - 1) & v9) != 0 )
  {
    v12 = v8;
    if ( v8 >= v9 )
      v12 = v8 % v9;
  }
  else
  {
    v12 = v10 & v8;
  }
  v13 = *(__int64 ****)(*a1 + 8 * v12);
  if ( !v13 )
    return nullptr;
  v14 = *v13;
  if ( *v13 )
  {
    v15 = *a2;
    v16 = *((unsigned __int8 **)a2 + 2);
    v17 = a2 + 1;
    if ( (v15 & 1) != 0 )
      v18 = *((_QWORD *)a2 + 1);
    else
      v18 = v15 >> 1;
    if ( (v15 & 1) != 0 )
      v19 = v16;
    else
      v19 = v17;
    do
    {
      v20 = (unsigned __int64)v14[1];
      if ( v20 == v11 )
      {
        v21 = *((unsigned __int8 *)v14 + 16);
        v22 = (unsigned __int64)v14[3];
        if ( (v21 & 1) == 0 )
          v22 = v21 >> 1;
        if ( v22 == v18 )
        {
          if ( (v21 & 1) != 0 )
            v23 = v14[4];
          else
            v23 = (__int64 *)((char *)v14 + 17);
          if ( (v21 & 1) != 0 )
          {
            if ( !v18 || !memcmp(v23, v19, v18) )
              return v14;
          }
          else
          {
            if ( !v18 )
              return v14;
            v24 = (unsigned __int8 *)v14 + 17;
            v25 = -(__int64)(v21 >> 1);
            for ( i = v19; *v24 == *i; ++i )
            {
              ++v24;
              if ( !++v25 )
                return v14;
            }
          }
        }
      }
      else
      {
        if ( ((v9 - 1) & v9) == 0 )
        {
          v20 &= v10;
LABEL_38:
          if ( v20 != v12 )
            return nullptr;
          goto LABEL_39;
        }
        if ( v20 < v9 )
          goto LABEL_38;
        if ( v20 % v9 != v12 )
          return nullptr;
      }
LABEL_39:
      v14 = (__int64 **)*v14;
    }
    while ( v14 );
  }
  return v14;
}
