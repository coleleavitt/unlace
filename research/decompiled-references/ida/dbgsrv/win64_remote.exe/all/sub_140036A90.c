/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140036A90
// Address: 0x0000000140036A90

//----- (0000000140036A90) ----------------------------------------------------
__int64 __fastcall sub_140036A90(_QWORD *a1, __int64 a2, size_t *a3)
{
  size_t *v3; // rbx
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 i; // rcx
  _QWORD *v9; // rsi
  char *v10; // r15
  __int64 v11; // rcx
  float v12; // xmm0_4
  __int64 v13; // rcx
  float v14; // xmm1_4
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *v19; // r13
  size_t v20; // rsi
  _QWORD *v21; // rdx
  const void *v22; // rcx
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r9
  _QWORD *v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]

  v3 = a3;
  v6 = a3[2];
  if ( a3[3] > 0xF )
    a3 = (size_t *)*a3;
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0; i < v6; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v7);
  sub_1400362D0(a1, &v28, v3, v7);
  if ( !v29 )
  {
    v9 = a1 + 1;
    if ( a1[2] == 0x333333333333333LL )
      sub_14006A9C4((__int64)"unordered_map/set too long");
    v10 = (char *)operator new(0x50u);
    *((_OWORD *)v10 + 1) = 0;
    *((_QWORD *)v10 + 4) = 0;
    *((_QWORD *)v10 + 5) = 0;
    *((_OWORD *)v10 + 1) = *(_OWORD *)v3;
    *((_OWORD *)v10 + 2) = *((_OWORD *)v3 + 1);
    v3[2] = 0;
    v3[3] = 15;
    *(_BYTE *)v3 = 0;
    *((_QWORD *)v10 + 6) = 0;
    *((_QWORD *)v10 + 7) = 0;
    *((_QWORD *)v10 + 8) = 0;
    *((_WORD *)v10 + 36) = 0;
    v11 = a1[2] + 1LL;
    if ( v11 < 0 )
      v12 = (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1))
          + (float)(v11 & 1 | (unsigned int)((unsigned __int64)v11 >> 1));
    else
      v12 = (float)(int)v11;
    v13 = a1[7];
    if ( v13 < 0 )
    {
      v15 = a1[7] & 1LL | ((unsigned __int64)v13 >> 1);
      v14 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v14 = (float)(int)v13;
    }
    if ( (float)(v12 / v14) <= *(float *)a1 )
    {
      v18 = v28;
    }
    else
    {
      sub_1400379F0((float *)a1);
      v16 = a1[3];
      v17 = *(_QWORD **)(v16 + 16 * (v7 & a1[6]) + 8);
      v18 = (_QWORD *)*v9;
      if ( v17 != (_QWORD *)*v9 )
      {
        v19 = *(_QWORD **)(v16 + 16 * (v7 & a1[6]));
        v20 = *((_QWORD *)v10 + 4);
        while ( 1 )
        {
          v21 = v17 + 2;
          if ( v17[5] > 0xFu )
            v21 = (_QWORD *)*v21;
          v22 = v10 + 16;
          if ( *((_QWORD *)v10 + 5) > 0xFu )
            v22 = *((const void **)v10 + 2);
          if ( v20 == v17[4] && (!v20 || !memcmp(v22, v21, v20)) )
          {
            v18 = (_QWORD *)*v17;
            v9 = a1 + 1;
            goto LABEL_29;
          }
          if ( v17 == v19 )
            break;
          v17 = (_QWORD *)v17[1];
        }
        v18 = v17;
        v9 = a1 + 1;
      }
    }
LABEL_29:
    v23 = (_QWORD *)v18[1];
    ++a1[2];
    *(_QWORD *)v10 = v18;
    *((_QWORD *)v10 + 1) = v23;
    *v23 = v10;
    v18[1] = v10;
    v24 = 2 * (v7 & a1[6]);
    v25 = a1[3];
    v26 = *(_QWORD **)(v25 + 16 * (v7 & a1[6]));
    if ( v26 == (_QWORD *)*v9 )
    {
      *(_QWORD *)(v25 + 16 * (v7 & a1[6])) = v10;
LABEL_34:
      *(_QWORD *)(v25 + 8 * v24 + 8) = v10;
      goto LABEL_35;
    }
    if ( v26 == v18 )
    {
      *(_QWORD *)(v25 + 16 * (v7 & a1[6])) = v10;
    }
    else if ( *(_QWORD **)(v25 + 16 * (v7 & a1[6]) + 8) == v23 )
    {
      goto LABEL_34;
    }
LABEL_35:
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v29;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
