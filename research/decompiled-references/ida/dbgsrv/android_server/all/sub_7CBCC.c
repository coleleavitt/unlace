/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7CBCC
// Address: 0x000000000007CBCC

//----- (000000000007CBCC) ----------------------------------------------------
_QWORD *__fastcall sub_7CBCC(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // x27
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x10
  __int64 *v7; // x1
  unsigned __int64 v8; // x2
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x26
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x28
  _QWORD *v13; // x8
  _QWORD *v14; // x20
  unsigned __int64 v15; // x8
  size_t v16; // x23
  unsigned __int8 *v17; // x24
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x11
  const void *v21; // x0
  __int64 v22; // x9
  _QWORD *v23; // x0
  __int128 v24; // q0
  float v25; // s0
  float v26; // s1
  _BOOL8 v27; // x9
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x1
  __int64 v31; // x9
  _QWORD *v32; // x8
  unsigned __int64 v33; // x8
  _QWORD v35[2]; // [xsp+0h] [xbp-70h] BYREF

  v35[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *a2;
  v6 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    v7 = *((__int64 **)a2 + 2);
  else
    v7 = (__int64 *)(a2 + 1);
  if ( (v5 & 1) != 0 )
    v8 = v6;
  else
    v8 = v5 >> 1;
  v9 = sub_86778((__int64)v35, v7, v8);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v9;
  if ( v10 )
  {
    v12 = v10 - 1;
    if ( ((v10 - 1) & v10) != 0 )
    {
      v2 = v9;
      if ( v9 >= v10 )
        v2 = v9 % v10;
    }
    else
    {
      v2 = v12 & v9;
    }
    v13 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v2);
    if ( v13 )
    {
      v14 = (_QWORD *)*v13;
      if ( *v13 )
      {
        v15 = *a2;
        if ( (v15 & 1) != 0 )
          v16 = *((_QWORD *)a2 + 1);
        else
          v16 = v15 >> 1;
        if ( (v15 & 1) != 0 )
          v17 = *((unsigned __int8 **)a2 + 2);
        else
          v17 = a2 + 1;
        do
        {
          v18 = v14[1];
          if ( v18 == v11 )
            goto LABEL_28;
          if ( ((v10 - 1) & v10) != 0 )
          {
            if ( v18 >= v10 )
            {
              if ( v18 % v10 != v2 )
                break;
              goto LABEL_28;
            }
          }
          else
          {
            v18 &= v12;
          }
          if ( v18 != v2 )
            break;
LABEL_28:
          v19 = *((unsigned __int8 *)v14 + 16);
          v20 = v14[3];
          if ( (v19 & 1) == 0 )
            v20 = v19 >> 1;
          if ( v20 == v16 )
          {
            if ( (v19 & 1) != 0 )
              v21 = (const void *)v14[4];
            else
              v21 = (char *)v14 + 17;
            if ( (v19 & 1) != 0 )
            {
              if ( !v16 || !memcmp(v21, v17, v16) )
                return v14 + 5;
            }
            else
            {
              if ( !v16 )
                return v14 + 5;
              v22 = 0;
              while ( *((unsigned __int8 *)v14 + v22 + 17) == v17[v22] )
              {
                if ( v19 >> 1 == ++v22 )
                  return v14 + 5;
              }
            }
          }
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
    }
  }
  v23 = operator new(0x30u);
  v24 = *(_OWORD *)a2;
  v14 = v23;
  v23[4] = *((_QWORD *)a2 + 2);
  *((_OWORD *)v23 + 1) = v24;
  *((_QWORD *)a2 + 1) = 0;
  *((_QWORD *)a2 + 2) = 0;
  *(_QWORD *)a2 = 0;
  *((_WORD *)v23 + 20) = 0;
  *v23 = 0;
  v23[1] = v11;
  v25 = *(float *)(a1 + 32);
  v26 = (float)(unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL);
  if ( !v10 || (float)(v25 * (float)v10) < v26 )
  {
    v27 = v10 < 3 || ((v10 - 1) & v10) != 0;
    v28 = v27 | (2 * v10);
    v29 = vcvtps_u32_f32(v26 / v25);
    if ( v28 >= v29 )
      v30 = v28;
    else
      v30 = v29;
    sub_866A4(a1, v30);
    v10 = *(_QWORD *)(a1 + 8);
    if ( ((v10 - 1) & v10) != 0 )
    {
      if ( v11 >= v10 )
        v2 = v11 % v10;
      else
        v2 = v11;
    }
    else
    {
      v2 = (v10 - 1) & v11;
    }
  }
  v31 = *(_QWORD *)a1;
  v32 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v2);
  if ( v32 )
  {
    *v14 = *v32;
LABEL_64:
    *v32 = v14;
    goto LABEL_65;
  }
  *v14 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(v31 + 8 * v2) = a1 + 16;
  if ( *v14 )
  {
    v33 = *(_QWORD *)(*v14 + 8LL);
    if ( ((v10 - 1) & v10) != 0 )
    {
      if ( v33 >= v10 )
        v33 %= v10;
    }
    else
    {
      v33 &= v10 - 1;
    }
    v32 = (_QWORD *)(*(_QWORD *)a1 + 8 * v33);
    goto LABEL_64;
  }
LABEL_65:
  ++*(_QWORD *)(a1 + 24);
  return v14 + 5;
}
// 7CDF8: variable 'v2' is possibly undefined
