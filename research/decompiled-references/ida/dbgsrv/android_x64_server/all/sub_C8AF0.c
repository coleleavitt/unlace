/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8AF0
// Address: 0x00000000000C8AF0

//----- (00000000000C8AF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_C8AF0(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rax
  _QWORD *v7; // r12
  unsigned __int64 v8; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rsi
  __int64 v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // r12
  unsigned __int64 v19; // rbp
  __int64 v20; // rbx
  char *v21; // rax
  char v22; // cl
  __int64 v23; // r14
  _QWORD *v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rdi
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 j; // rsi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  _QWORD *v38; // rbp
  unsigned __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  _QWORD *v42; // rdx
  _QWORD *v43; // rdx
  _QWORD *v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  _QWORD *v50; // rbp
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  _QWORD *v54; // rdx
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  __int128 v57; // [rsp+0h] [rbp-78h] BYREF
  __int64 v58; // [rsp+10h] [rbp-68h]
  __int128 v59; // [rsp+20h] [rbp-58h]
  __int64 v60; // [rsp+30h] [rbp-48h]
  unsigned __int64 v61; // [rsp+40h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  a1[1] = 0;
  v3 = a2[1];
  if ( *a2 >= v3 )
    return __readfsqword(0x28u);
  v5 = unpack_dq(a2, v3);
  v6 = a1[1];
  if ( v6 != v5 )
  {
    v57 = 0;
    LOBYTE(v58) = 0;
    if ( v6 > v5 )
    {
LABEL_4:
      a1[1] = v5;
      goto LABEL_16;
    }
    if ( v6 < v5 )
    {
      v7 = (_QWORD *)*a1;
      v8 = a1[2];
      if ( *a1 <= (unsigned __int64)&v57 && *a1 + 24 * v8 > (unsigned __int64)&v57 )
      {
        LOBYTE(v60) = v58;
        v59 = v57;
        if ( v8 >= v5 )
        {
LABEL_50:
          if ( v6 < v5 )
          {
            v46 = 3 * v6;
            v7[v46 + 2] = v60;
            *(_OWORD *)&v7[v46] = v59;
            v47 = v6 + 1;
            if ( v6 + 1 != v5 )
            {
              if ( (((_BYTE)v5 + ~(_BYTE)v6) & 3) != 0 )
              {
                v48 = 24 * v6 + 24;
                v49 = 0;
                do
                {
                  v50 = (_QWORD *)*a1;
                  *(_QWORD *)((char *)v50 + v48 + 16) = v60;
                  *(_OWORD *)((char *)v50 + v48) = v59;
                  --v49;
                  v48 += 24;
                }
                while ( -(__int64)(((_BYTE)v5 + ~(_BYTE)v6) & 3) != v49 );
                v47 = v6 + 1 - v49;
              }
              if ( v5 - 2 - v6 >= 3 )
              {
                v51 = v5 - v47;
                v52 = 3 * v47;
                do
                {
                  v53 = (_QWORD *)*a1;
                  v53[v52 + 2] = v60;
                  *(_OWORD *)&v53[v52] = v59;
                  v54 = (_QWORD *)*a1;
                  v54[v52 + 5] = v60;
                  *(_OWORD *)&v54[v52 + 3] = v59;
                  v55 = (_QWORD *)*a1;
                  v55[v52 + 8] = v60;
                  *(_OWORD *)&v55[v52 + 6] = v59;
                  v56 = (_QWORD *)*a1;
                  v56[v52 + 11] = v60;
                  *(_OWORD *)&v56[v52 + 9] = v59;
                  v52 += 12;
                  v51 -= 4LL;
                }
                while ( v51 );
              }
            }
          }
          goto LABEL_4;
        }
        v9 = qvector_reserve((__int64)a1, nullptr, v5, 0x18u);
        v7 = v9;
        v10 = a1[2];
        a1[2] = v8;
        v11 = (_QWORD *)*a1;
        v12 = a1[1];
        v13 = v12 - 1;
        if ( v12 - 1 < 0 )
        {
LABEL_49:
          qfree(v11);
          *a1 = v7;
          a1[2] = v10;
          v6 = a1[1];
          goto LABEL_50;
        }
        v14 = v12 & 7;
        if ( v14 )
        {
          for ( i = 0; i != v14; ++i )
          {
            v9[2] = v11[2];
            *(_OWORD *)v9 = *(_OWORD *)v11;
            v11 += 3;
            v9 += 3;
          }
          v16 = v13 - i;
          if ( v13 < 7 )
            goto LABEL_48;
        }
        else
        {
          v16 = a1[1] - 1LL;
          if ( v13 < 7 )
          {
LABEL_48:
            v11 = (_QWORD *)*a1;
            goto LABEL_49;
          }
        }
        v45 = 0;
        do
        {
          v9[v45 + 2] = v11[v45 + 2];
          *(_OWORD *)&v9[v45] = *(_OWORD *)&v11[v45];
          v9[v45 + 5] = v11[v45 + 5];
          *(_OWORD *)&v9[v45 + 3] = *(_OWORD *)&v11[v45 + 3];
          v9[v45 + 8] = v11[v45 + 8];
          *(_OWORD *)&v9[v45 + 6] = *(_OWORD *)&v11[v45 + 6];
          v9[v45 + 11] = v11[v45 + 11];
          *(_OWORD *)&v9[v45 + 9] = *(_OWORD *)&v11[v45 + 9];
          v9[v45 + 14] = v11[v45 + 14];
          *(_OWORD *)&v9[v45 + 12] = *(_OWORD *)&v11[v45 + 12];
          v9[v45 + 17] = v11[v45 + 17];
          *(_OWORD *)&v9[v45 + 15] = *(_OWORD *)&v11[v45 + 15];
          *(_OWORD *)&v9[v45 + 18] = *(_OWORD *)&v11[v45 + 18];
          v9[v45 + 20] = v11[v45 + 20];
          *(_OWORD *)&v9[v45 + 21] = *(_OWORD *)&v11[v45 + 21];
          v9[v45 + 23] = v11[v45 + 23];
          v45 += 24;
          v16 -= 8;
        }
        while ( v16 >= 0 );
        goto LABEL_48;
      }
      if ( v8 >= v5 )
      {
LABEL_35:
        if ( v6 < v5 )
        {
          v34 = 3 * v6;
          v7[v34 + 2] = v58;
          *(_OWORD *)&v7[v34] = v57;
          v35 = v6 + 1;
          if ( v6 + 1 != v5 )
          {
            if ( (((_BYTE)v5 + ~(_BYTE)v6) & 3) != 0 )
            {
              v36 = 24 * v6 + 24;
              v37 = 0;
              do
              {
                v38 = (_QWORD *)*a1;
                *(_QWORD *)((char *)v38 + v36 + 16) = v58;
                *(_OWORD *)((char *)v38 + v36) = v57;
                --v37;
                v36 += 24;
              }
              while ( -(__int64)(((_BYTE)v5 + ~(_BYTE)v6) & 3) != v37 );
              v35 = v6 + 1 - v37;
            }
            if ( v5 - 2 - v6 >= 3 )
            {
              v39 = v5 - v35;
              v40 = 3 * v35;
              do
              {
                v41 = (_QWORD *)*a1;
                v41[v40 + 2] = v58;
                *(_OWORD *)&v41[v40] = v57;
                v42 = (_QWORD *)*a1;
                v42[v40 + 5] = v58;
                *(_OWORD *)&v42[v40 + 3] = v57;
                v43 = (_QWORD *)*a1;
                v43[v40 + 8] = v58;
                *(_OWORD *)&v43[v40 + 6] = v57;
                v44 = (_QWORD *)*a1;
                v44[v40 + 11] = v58;
                *(_OWORD *)&v44[v40 + 9] = v57;
                v40 += 12;
                v39 -= 4LL;
              }
              while ( v39 );
            }
          }
        }
        goto LABEL_4;
      }
      v25 = qvector_reserve((__int64)a1, nullptr, v5, 0x18u);
      v7 = v25;
      v26 = a1[2];
      a1[2] = v8;
      v27 = (_QWORD *)*a1;
      v28 = a1[1];
      v29 = v28 - 1;
      if ( v28 - 1 < 0 )
      {
LABEL_34:
        qfree(v27);
        *a1 = v7;
        a1[2] = v26;
        v6 = a1[1];
        goto LABEL_35;
      }
      v30 = v28 & 7;
      if ( v30 )
      {
        for ( j = 0; j != v30; ++j )
        {
          v25[2] = v27[2];
          *(_OWORD *)v25 = *(_OWORD *)v27;
          v27 += 3;
          v25 += 3;
        }
        v32 = v29 - j;
        if ( v29 < 7 )
          goto LABEL_33;
      }
      else
      {
        v32 = a1[1] - 1LL;
        if ( v29 < 7 )
        {
LABEL_33:
          v27 = (_QWORD *)*a1;
          goto LABEL_34;
        }
      }
      v33 = 0;
      do
      {
        v25[v33 + 2] = v27[v33 + 2];
        *(_OWORD *)&v25[v33] = *(_OWORD *)&v27[v33];
        v25[v33 + 5] = v27[v33 + 5];
        *(_OWORD *)&v25[v33 + 3] = *(_OWORD *)&v27[v33 + 3];
        v25[v33 + 8] = v27[v33 + 8];
        *(_OWORD *)&v25[v33 + 6] = *(_OWORD *)&v27[v33 + 6];
        v25[v33 + 11] = v27[v33 + 11];
        *(_OWORD *)&v25[v33 + 9] = *(_OWORD *)&v27[v33 + 9];
        v25[v33 + 14] = v27[v33 + 14];
        *(_OWORD *)&v25[v33 + 12] = *(_OWORD *)&v27[v33 + 12];
        v25[v33 + 17] = v27[v33 + 17];
        *(_OWORD *)&v25[v33 + 15] = *(_OWORD *)&v27[v33 + 15];
        *(_OWORD *)&v25[v33 + 18] = *(_OWORD *)&v27[v33 + 18];
        v25[v33 + 20] = v27[v33 + 20];
        *(_OWORD *)&v25[v33 + 21] = *(_OWORD *)&v27[v33 + 21];
        v25[v33 + 23] = v27[v33 + 23];
        v33 += 24;
        v32 -= 8;
      }
      while ( v32 >= 0 );
      goto LABEL_33;
    }
    v5 = v6;
  }
LABEL_16:
  v17 = 24 * v5;
  if ( v17 )
  {
    v18 = (_QWORD *)*a1;
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = (char *)*a2;
      if ( *a2 >= a2[1] )
        v22 = 0;
      else
        v22 = *v21++;
      *a2 = (unsigned __int64)v21;
      LOBYTE(v18[v19 / 8 + 2]) = v22;
      v23 = v20 + unpack_dq(a2, a2[1]);
      v18[v19 / 8] = v23;
      v20 = v23 + unpack_dq(a2, a2[1]);
      v18[v19 / 8 + 1] = v20;
      v19 += 24LL;
    }
    while ( v17 != v19 );
  }
  return __readfsqword(0x28u);
}
