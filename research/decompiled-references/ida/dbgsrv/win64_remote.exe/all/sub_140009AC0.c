/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009AC0
// Address: 0x0000000140009AC0

//----- (0000000140009AC0) ----------------------------------------------------
__int64 __fastcall sub_140009AC0(_QWORD *a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  _QWORD *v11; // rbp
  _QWORD *v12; // rdx
  _QWORD *v14; // rbx
  float v15; // xmm3_4
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm2_4
  __int64 v20; // rcx
  float v21; // xmm0_4
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r8

  v6 = 0x100000001B3LL
     * (a3[7]
      ^ (0x100000001B3LL
       * (a3[6]
        ^ (0x100000001B3LL
         * (a3[5]
          ^ (0x100000001B3LL
           * (a3[4]
            ^ (0x100000001B3LL
             * (a3[3]
              ^ (0x100000001B3LL
               * (a3[2] ^ (0x100000001B3LL * (a3[1] ^ (0x100000001B3LL * (*a3 ^ 0xCBF29CE484222325uLL)))))))))))))));
  v7 = 2 * (a1[6] & v6);
  v8 = a1[3];
  v9 = *(_QWORD **)(v8 + 8 * v7 + 8);
  v10 = a1 + 1;
  v11 = (_QWORD *)a1[1];
  if ( v9 == v11 )
    goto LABEL_8;
  v12 = *(_QWORD **)(v8 + 8 * v7);
  if ( *(_QWORD *)a3 != v9[2] )
  {
    while ( v9 != v12 )
    {
      v9 = (_QWORD *)v9[1];
      if ( *(_QWORD *)a3 == v9[2] )
        goto LABEL_5;
    }
    v11 = v9;
LABEL_8:
    if ( a1[2] == 0x7FFFFFFFFFFFFFFLL )
      sub_14006A9C4((__int64)"unordered_map/set too long");
    v14 = operator new(0x20u);
    v14[2] = *(_QWORD *)a3;
    v14[3] = 0;
    v15 = *(float *)a1;
    v16 = a1[7];
    v17 = a1[2] + 1LL;
    if ( v17 < 0 )
      v18 = (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1))
          + (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1));
    else
      v18 = (float)(int)v17;
    if ( (v16 & 0x8000000000000000uLL) != 0LL )
    {
      v20 = a1[7] & 1LL | (v16 >> 1);
      v19 = (float)(int)v20 + (float)(int)v20;
    }
    else
    {
      v19 = (float)(int)v16;
    }
    if ( (float)(v18 / v19) > v15 )
    {
      v21 = ceilf(v18 / v15);
      v22 = 0;
      if ( v21 >= 9.223372e18 )
      {
        v21 = v21 - 9.223372e18;
        if ( v21 < 9.223372e18 )
          v22 = 0x8000000000000000uLL;
      }
      v23 = v22 + (unsigned int)(int)v21;
      v24 = 8;
      if ( v23 > 8 )
        v24 = v23;
      if ( v16 < v24 )
      {
        if ( v16 >= 0x200 || (v16 *= 8LL, v16 < v24) )
          v16 = v24;
      }
      sub_14000CC90(a1, v16);
      v25 = a1[3];
      v26 = *(_QWORD **)(v25 + 16 * (v6 & a1[6]) + 8);
      v11 = (_QWORD *)*v10;
      if ( v26 != (_QWORD *)*v10 )
      {
        v27 = *(_QWORD **)(v25 + 16 * (v6 & a1[6]));
        v28 = v14[2];
        if ( v28 == v26[2] )
        {
LABEL_29:
          v11 = (_QWORD *)*v26;
        }
        else
        {
          while ( v26 != v27 )
          {
            v26 = (_QWORD *)v26[1];
            if ( v28 == v26[2] )
              goto LABEL_29;
          }
          v11 = v26;
        }
      }
    }
    v29 = (_QWORD *)v11[1];
    ++a1[2];
    *v14 = v11;
    v14[1] = v29;
    *v29 = v14;
    v11[1] = v14;
    v30 = 2 * (v6 & a1[6]);
    v31 = a1[3];
    v32 = *(_QWORD **)(v31 + 16 * (v6 & a1[6]));
    if ( v32 == (_QWORD *)*v10 )
    {
      *(_QWORD *)(v31 + 16 * (v6 & a1[6])) = v14;
LABEL_36:
      *(_QWORD *)(v31 + 8 * v30 + 8) = v14;
      goto LABEL_37;
    }
    if ( v32 == v11 )
    {
      *(_QWORD *)(v31 + 16 * (v6 & a1[6])) = v14;
    }
    else if ( *(_QWORD **)(v31 + 16 * (v6 & a1[6]) + 8) == v29 )
    {
      goto LABEL_36;
    }
LABEL_37:
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
LABEL_5:
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
