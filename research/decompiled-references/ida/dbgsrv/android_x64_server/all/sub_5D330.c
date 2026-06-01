/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D330
// Address: 0x000000000005D330

//----- (000000000005D330) ----------------------------------------------------
unsigned __int64 __fastcall sub_5D330(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  _QWORD *v5; // r15
  unsigned __int64 v6; // r13
  _QWORD *v7; // rax
  __int64 v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 i; // rsi
  __int64 v14; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r12
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  __int64 j; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx
  _QWORD *v34; // rdx
  _QWORD *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rsi
  _QWORD *v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // rdx
  _QWORD *v47; // rdx
  __int128 v48; // [rsp+0h] [rbp-68h] BYREF
  __int64 v49; // [rsp+10h] [rbp-58h]
  __int128 v50; // [rsp+20h] [rbp-48h]
  __int64 v51; // [rsp+30h] [rbp-38h]
  unsigned __int64 v52; // [rsp+38h] [rbp-30h]

  v52 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v48 = 0;
    v49 = 0;
    if ( v2 > a2 )
    {
LABEL_3:
      a1[1] = a2;
      return __readfsqword(0x28u);
    }
    if ( v2 >= a2 )
      return __readfsqword(0x28u);
    v5 = (_QWORD *)*a1;
    v6 = a1[2];
    if ( *a1 <= (unsigned __int64)&v48 && *a1 + 24 * v6 > (unsigned __int64)&v48 )
    {
      v51 = v49;
      v50 = v48;
      if ( v6 >= a2 )
      {
LABEL_42:
        if ( v2 < a2 )
        {
          v37 = 3 * v2;
          v5[v37 + 2] = v51;
          *(_OWORD *)&v5[v37] = v50;
          v38 = v2 + 1;
          if ( v2 + 1 != a2 )
          {
            if ( (((_BYTE)a2 + ~(_BYTE)v2) & 3) != 0 )
            {
              v39 = 24 * v2 + 24;
              v40 = 0;
              do
              {
                v41 = (_QWORD *)*a1;
                *(_QWORD *)((char *)v41 + v39 + 16) = v51;
                *(_OWORD *)((char *)v41 + v39) = v50;
                --v40;
                v39 += 24;
              }
              while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v2) & 3) != v40 );
              v38 = v2 + 1 - v40;
            }
            if ( a2 - 2 - v2 >= 3 )
            {
              v42 = a2 - v38;
              v43 = 3 * v38;
              do
              {
                v44 = (_QWORD *)*a1;
                v44[v43 + 2] = v51;
                *(_OWORD *)&v44[v43] = v50;
                v45 = (_QWORD *)*a1;
                v45[v43 + 5] = v51;
                *(_OWORD *)&v45[v43 + 3] = v50;
                v46 = (_QWORD *)*a1;
                v46[v43 + 8] = v51;
                *(_OWORD *)&v46[v43 + 6] = v50;
                v47 = (_QWORD *)*a1;
                v47[v43 + 11] = v51;
                *(_OWORD *)&v47[v43 + 9] = v50;
                v43 += 12;
                v42 -= 4LL;
              }
              while ( v42 );
            }
          }
        }
        goto LABEL_3;
      }
      v7 = qvector_reserve((__int64)a1, nullptr, a2, 0x18u);
      v5 = v7;
      v8 = a1[2];
      a1[2] = v6;
      v9 = (_QWORD *)*a1;
      v10 = a1[1];
      v11 = v10 - 1;
      if ( v10 - 1 < 0 )
      {
LABEL_41:
        qfree(v9);
        *a1 = v5;
        a1[2] = v8;
        v2 = a1[1];
        goto LABEL_42;
      }
      v12 = v10 & 7;
      if ( v12 )
      {
        for ( i = 0; i != v12; ++i )
        {
          v7[2] = v9[2];
          *(_OWORD *)v7 = *(_OWORD *)v9;
          v9 += 3;
          v7 += 3;
        }
        v14 = v11 - i;
        if ( v11 < 7 )
          goto LABEL_40;
      }
      else
      {
        v14 = a1[1] - 1LL;
        if ( v11 < 7 )
        {
LABEL_40:
          v9 = (_QWORD *)*a1;
          goto LABEL_41;
        }
      }
      v36 = 0;
      do
      {
        v7[v36 + 2] = v9[v36 + 2];
        *(_OWORD *)&v7[v36] = *(_OWORD *)&v9[v36];
        v7[v36 + 5] = v9[v36 + 5];
        *(_OWORD *)&v7[v36 + 3] = *(_OWORD *)&v9[v36 + 3];
        v7[v36 + 8] = v9[v36 + 8];
        *(_OWORD *)&v7[v36 + 6] = *(_OWORD *)&v9[v36 + 6];
        v7[v36 + 11] = v9[v36 + 11];
        *(_OWORD *)&v7[v36 + 9] = *(_OWORD *)&v9[v36 + 9];
        v7[v36 + 14] = v9[v36 + 14];
        *(_OWORD *)&v7[v36 + 12] = *(_OWORD *)&v9[v36 + 12];
        v7[v36 + 17] = v9[v36 + 17];
        *(_OWORD *)&v7[v36 + 15] = *(_OWORD *)&v9[v36 + 15];
        *(_OWORD *)&v7[v36 + 18] = *(_OWORD *)&v9[v36 + 18];
        v7[v36 + 20] = v9[v36 + 20];
        *(_OWORD *)&v7[v36 + 21] = *(_OWORD *)&v9[v36 + 21];
        v7[v36 + 23] = v9[v36 + 23];
        v36 += 24;
        v14 -= 8;
      }
      while ( v14 >= 0 );
      goto LABEL_40;
    }
    if ( v6 >= a2 )
    {
LABEL_27:
      if ( v2 < a2 )
      {
        v25 = 3 * v2;
        v5[v25 + 2] = v49;
        *(_OWORD *)&v5[v25] = v48;
        v26 = v2 + 1;
        if ( v2 + 1 != a2 )
        {
          if ( (((_BYTE)a2 + ~(_BYTE)v2) & 3) != 0 )
          {
            v27 = 24 * v2 + 24;
            v28 = 0;
            do
            {
              v29 = (_QWORD *)*a1;
              *(_QWORD *)((char *)v29 + v27 + 16) = v49;
              *(_OWORD *)((char *)v29 + v27) = v48;
              --v28;
              v27 += 24;
            }
            while ( -(__int64)(((_BYTE)a2 + ~(_BYTE)v2) & 3) != v28 );
            v26 = v2 + 1 - v28;
          }
          if ( a2 - 2 - v2 >= 3 )
          {
            v30 = a2 - v26;
            v31 = 3 * v26;
            do
            {
              v32 = (_QWORD *)*a1;
              v32[v31 + 2] = v49;
              *(_OWORD *)&v32[v31] = v48;
              v33 = (_QWORD *)*a1;
              v33[v31 + 5] = v49;
              *(_OWORD *)&v33[v31 + 3] = v48;
              v34 = (_QWORD *)*a1;
              v34[v31 + 8] = v49;
              *(_OWORD *)&v34[v31 + 6] = v48;
              v35 = (_QWORD *)*a1;
              v35[v31 + 11] = v49;
              *(_OWORD *)&v35[v31 + 9] = v48;
              v31 += 12;
              v30 -= 4LL;
            }
            while ( v30 );
          }
        }
      }
      goto LABEL_3;
    }
    v16 = qvector_reserve((__int64)a1, nullptr, a2, 0x18u);
    v5 = v16;
    v17 = a1[2];
    a1[2] = v6;
    v18 = (_QWORD *)*a1;
    v19 = a1[1];
    v20 = v19 - 1;
    if ( v19 - 1 < 0 )
    {
LABEL_26:
      qfree(v18);
      *a1 = v5;
      a1[2] = v17;
      v2 = a1[1];
      goto LABEL_27;
    }
    v21 = v19 & 7;
    if ( v21 )
    {
      for ( j = 0; j != v21; ++j )
      {
        v16[2] = v18[2];
        *(_OWORD *)v16 = *(_OWORD *)v18;
        v18 += 3;
        v16 += 3;
      }
      v23 = v20 - j;
      if ( v20 < 7 )
        goto LABEL_25;
    }
    else
    {
      v23 = a1[1] - 1LL;
      if ( v20 < 7 )
      {
LABEL_25:
        v18 = (_QWORD *)*a1;
        goto LABEL_26;
      }
    }
    v24 = 0;
    do
    {
      v16[v24 + 2] = v18[v24 + 2];
      *(_OWORD *)&v16[v24] = *(_OWORD *)&v18[v24];
      v16[v24 + 5] = v18[v24 + 5];
      *(_OWORD *)&v16[v24 + 3] = *(_OWORD *)&v18[v24 + 3];
      v16[v24 + 8] = v18[v24 + 8];
      *(_OWORD *)&v16[v24 + 6] = *(_OWORD *)&v18[v24 + 6];
      v16[v24 + 11] = v18[v24 + 11];
      *(_OWORD *)&v16[v24 + 9] = *(_OWORD *)&v18[v24 + 9];
      v16[v24 + 14] = v18[v24 + 14];
      *(_OWORD *)&v16[v24 + 12] = *(_OWORD *)&v18[v24 + 12];
      v16[v24 + 17] = v18[v24 + 17];
      *(_OWORD *)&v16[v24 + 15] = *(_OWORD *)&v18[v24 + 15];
      *(_OWORD *)&v16[v24 + 18] = *(_OWORD *)&v18[v24 + 18];
      v16[v24 + 20] = v18[v24 + 20];
      *(_OWORD *)&v16[v24 + 21] = *(_OWORD *)&v18[v24 + 21];
      v16[v24 + 23] = v18[v24 + 23];
      v24 += 24;
      v23 -= 8;
    }
    while ( v23 >= 0 );
    goto LABEL_25;
  }
  return __readfsqword(0x28u);
}
