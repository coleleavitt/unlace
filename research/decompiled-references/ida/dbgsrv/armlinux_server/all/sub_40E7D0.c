/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E7D0
// Address: 0x000000000040E7D0

//----- (000000000040E7D0) ----------------------------------------------------
__int64 *__usercall sub_40E7D0@<X0>(_QWORD *a1@<X0>, __int64 *a2@<X1>, __int64 *a3@<X8>)
{
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 *v5; // x25
  __int64 v6; // x21
  __int64 *v7; // x27
  __int64 v8; // x24
  __int64 v9; // x9
  __int64 v10; // x7
  __int64 v11; // x8
  __int64 v12; // x1
  void *v13; // x0
  __int64 v14; // x6
  __int64 v15; // x3
  unsigned __int64 v16; // x4
  signed __int64 v17; // x1
  __int64 v18; // x26
  __int64 v19; // x19
  signed __int64 v20; // x0
  __int64 v21; // x20
  unsigned __int64 v22; // x28
  __int64 v23; // x19
  __int64 v24; // x0
  __int64 v25; // x19
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 v29; // x20
  signed __int64 v30; // x20
  unsigned __int64 v31; // x28
  __int64 v32; // x26
  __int64 v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x4
  __int64 *v40; // x2
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 *v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // [xsp+68h] [xbp-58h]
  unsigned __int64 v55; // [xsp+68h] [xbp-58h]
  __int64 v56; // [xsp+70h] [xbp-50h]
  __int64 v57; // [xsp+70h] [xbp-50h]
  unsigned __int64 v58; // [xsp+78h] [xbp-48h]
  __int64 v59; // [xsp+80h] [xbp-40h]
  __int64 v60; // [xsp+88h] [xbp-38h]
  __int64 v62; // [xsp+98h] [xbp-28h]
  signed __int64 v63; // [xsp+A0h] [xbp-20h]

  v3 = *a2;
  v4 = a2[1];
  v5 = (__int64 *)a2[3];
  v59 = a2[2];
  v6 = *a2 + 72;
  if ( v6 == v59 )
  {
    v6 = v5[1];
    v7 = v5 + 1;
    v8 = v6;
    v60 = v6 + 504;
  }
  else
  {
    v7 = (__int64 *)a2[3];
    v8 = a2[1];
    v60 = a2[2];
  }
  v9 = a1[2];
  v10 = a1[4];
  v11 = a1[6];
  v12 = a1[5];
  v13 = (void *)a1[7];
  v14 = a1[9];
  v54 = v3 - v4;
  v15 = ((v14 - v12) >> 3) - 1;
  v16 = 0x8E38E38E38E38E39LL * ((v11 - (__int64)v13) >> 3);
  v17 = 7 * ((((__int64)v5 - v12) >> 3) - 1)
      + 0x8E38E38E38E38E39LL * ((v10 - v9) >> 3)
      - 0x71C71C71C71C71C7LL * ((v3 - v4) >> 3);
  v63 = v17;
  if ( v17 >= (7 * v15 + v16 - 0x71C71C71C71C71C7LL * ((v10 - v9) >> 3)) >> 1 )
  {
    if ( v11 != v6 )
    {
      v29 = v60 - v6;
      v57 = 7 * (((v14 - (__int64)v7) >> 3) - 1) + v16 - 0x71C71C71C71C71C7LL * ((v60 - v6) >> 3);
      if ( v57 > 0 )
      {
        while ( 1 )
        {
          v30 = 0x8E38E38E38E38E39LL * (v29 >> 3);
          if ( v30 > (__int64)(0x8E38E38E38E38E39LL * ((v59 - v3) >> 3)) )
            v30 = 0x8E38E38E38E38E39LL * ((v59 - v3) >> 3);
          if ( v30 > v57 )
            v30 = v57;
          v62 = 72 * v30;
          v31 = 0x8E38E38E38E38E39LL * ((72 * v30) >> 3);
          if ( 72 * v30 > 0 )
          {
            v32 = v6;
            v33 = v3;
            do
            {
              sub_483128(v33, v32);
              v32 += 72;
              v33 += 72;
              --v31;
            }
            while ( v31 );
          }
          v34 = v30 - 0x71C71C71C71C71C7LL * ((v6 - v8) >> 3);
          if ( v34 < 0 )
            break;
          if ( v34 > 6 )
          {
            v35 = v34 / 7;
            goto LABEL_40;
          }
          v6 += v62;
          v36 = v30 - 0x71C71C71C71C71C7LL * (v54 >> 3);
          if ( v36 < 0 )
          {
LABEL_64:
            v47 = ((unsigned __int64)~v36 * (unsigned __int128)0x2492492492492493uLL) >> 64;
            v37 = ~((v47 + ((unsigned __int64)(~v36 - v47) >> 1)) >> 2);
LABEL_43:
            v5 += v37;
            v4 = *v5;
            v59 = *v5 + 504;
            v3 = *v5 + 72 * (v36 - 7 * v37);
            v57 -= v30;
            if ( v57 <= 0 )
              goto LABEL_61;
            goto LABEL_44;
          }
LABEL_41:
          if ( v36 > 6 )
          {
            v37 = v36 / 7;
            goto LABEL_43;
          }
          v3 += v62;
          v57 -= v30;
          if ( v57 <= 0 )
          {
LABEL_61:
            v6 = a1[6];
            v13 = (void *)a1[7];
            if ( v13 == (void *)v6 )
              goto LABEL_69;
            goto LABEL_47;
          }
LABEL_44:
          v54 = v3 - v4;
          v29 = v60 - v6;
        }
        v49 = ((unsigned __int64)~v34 * (unsigned __int128)0x2492492492492493uLL) >> 64;
        v35 = ~((v49 + ((unsigned __int64)(~v34 - v49) >> 1)) >> 2);
LABEL_40:
        v7 += v35;
        v8 = *v7;
        v60 = *v7 + 504;
        v6 = *v7 + 72 * (v34 - 7 * v35);
        v36 = v30 - 0x71C71C71C71C71C7LL * (v54 >> 3);
        if ( v36 < 0 )
          goto LABEL_64;
        goto LABEL_41;
      }
      v6 = a1[6];
    }
    if ( v13 == (void *)v6 )
    {
LABEL_69:
      j__free_0(v13);
      v51 = (__int64 *)(a1[9] - 8LL);
      a1[9] = v51;
      v52 = *v51;
      v53 = *v51 + 504;
      a1[7] = v52;
      a1[8] = v53;
      v52 += 432;
      a1[6] = v52;
      sub_482ED0(v52);
      v28 = a1[2];
      goto LABEL_48;
    }
LABEL_47:
    a1[6] = v6 - 72;
    sub_482ED0(v6 - 72);
    v28 = a1[2];
    goto LABEL_48;
  }
  if ( v9 == v3 )
    goto LABEL_26;
  if ( v17 <= 0 )
  {
    v3 = a1[2];
LABEL_26:
    if ( v3 == v10 - 72 )
      goto LABEL_70;
    goto LABEL_27;
  }
  v56 = v17;
  while ( 1 )
  {
    v55 = 0x8E38E38E38E38E39LL * (v54 >> 3);
    v58 = 0x8E38E38E38E38E39LL * ((v6 - v8) >> 3);
    if ( v3 == v4 )
    {
      v18 = 7;
      v19 = *(v5 - 1) + 504;
    }
    else
    {
      v19 = v3;
      v18 = v55;
    }
    if ( v6 == v8 )
    {
      v20 = 7;
      v21 = *(v7 - 1) + 504;
    }
    else
    {
      v21 = v6;
      v20 = 0x8E38E38E38E38E39LL * ((v6 - v8) >> 3);
    }
    if ( v56 <= v18 )
      v18 = v56;
    if ( v18 > v20 )
      v18 = v20;
    v22 = 0x8E38E38E38E38E39LL * ((72 * v18) >> 3);
    if ( 72 * v18 > 0 )
    {
      do
      {
        v19 -= 72;
        v21 -= 72;
        sub_483128(v21, v19);
        --v22;
      }
      while ( v22 );
    }
    v23 = v55 - v18;
    if ( (__int64)(v55 - v18) >= 0 )
      break;
    v48 = ((unsigned __int64)~v23 * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v24 = ~((v48 + ((unsigned __int64)(~v23 - v48) >> 1)) >> 2);
LABEL_20:
    v5 += v24;
    v4 = *v5;
    v25 = 9 * (v23 - 7 * v24);
    v26 = v58 - v18;
    v3 = *v5 + 8 * v25;
    if ( (__int64)(v58 - v18) >= 0 )
      goto LABEL_21;
LABEL_59:
    v46 = ((unsigned __int64)~v26 * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v27 = ~((v46 + ((unsigned __int64)(~v26 - v46) >> 1)) >> 2);
LABEL_23:
    v7 += v27;
    v8 = *v7;
    v6 = *v7 + 72 * (v26 - 7 * v27);
    v56 -= v18;
    if ( v56 <= 0 )
      goto LABEL_56;
LABEL_24:
    v54 = v3 - v4;
  }
  if ( v23 > 6 )
  {
    v24 = v23 / 7;
    goto LABEL_20;
  }
  v3 -= 72 * v18;
  v26 = v58 - v18;
  if ( (__int64)(v58 - v18) < 0 )
    goto LABEL_59;
LABEL_21:
  if ( v26 > 6 )
  {
    v27 = v26 / 7;
    goto LABEL_23;
  }
  v6 -= 72 * v18;
  v56 -= v18;
  if ( v56 > 0 )
    goto LABEL_24;
LABEL_56:
  v3 = a1[2];
  if ( v3 != a1[4] - 72LL )
  {
LABEL_27:
    sub_482ED0(v3);
    v28 = a1[2] + 72LL;
    a1[2] = v28;
    goto LABEL_48;
  }
LABEL_70:
  sub_40D1F0((__int64)a1);
  v28 = a1[2];
LABEL_48:
  v38 = a1[3];
  v39 = a1[4];
  v40 = (__int64 *)a1[5];
  v41 = v63 - 0x71C71C71C71C71C7LL * ((v28 - v38) >> 3);
  if ( v41 < 0 )
  {
    v50 = ((unsigned __int64)~v41 * (unsigned __int128)0x2492492492492493uLL) >> 64;
    v42 = ~((v50 + ((unsigned __int64)(~v41 - v50) >> 1)) >> 2);
LABEL_51:
    v40 += v42;
    v43 = v41 - 7 * v42;
    v38 = *v40;
    v39 = *v40 + 504;
    v44 = *v40 + 72 * v43;
  }
  else
  {
    if ( v41 > 6 )
    {
      v42 = v41 / 7;
      goto LABEL_51;
    }
    v44 = v28 + 72 * v63;
  }
  *a3 = v44;
  a3[1] = v38;
  a3[2] = v39;
  a3[3] = (__int64)v40;
  return a3;
}
