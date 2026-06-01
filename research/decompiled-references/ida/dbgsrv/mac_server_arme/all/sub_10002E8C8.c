/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E8C8
// Address: 0x000000010002E8C8

//----- (000000010002E8C8) ----------------------------------------------------
void __fastcall sub_10002E8C8(__int64 **a1, __int64 *a2)
{
  __int64 *v3; // x20
  unsigned __int64 v4; // x23
  __int64 *v6; // x8
  __int64 *v7; // x21
  unsigned __int64 v8; // x10
  __int64 *v9; // x22
  __int64 *v10; // x0
  unsigned __int64 v11; // x9
  __int64 *v12; // x8
  unsigned __int64 v13; // x12
  __int64 *v14; // x12
  _OWORD *v15; // x13
  __int128 *v16; // x14
  unsigned __int64 v17; // x15
  __int128 v18; // q0
  __int128 v19; // q1
  __int128 v20; // q2
  __int128 v21; // q3
  __int64 v22; // x21
  __int64 *v23; // x8
  unsigned __int64 v24; // x10
  __int64 *v25; // x22
  __int64 *v26; // x0
  unsigned __int64 v27; // x9
  __int64 *v28; // x8
  unsigned __int64 v29; // x12
  __int64 *v30; // x12
  _OWORD *v31; // x13
  __int128 *v32; // x14
  unsigned __int64 v33; // x15
  __int128 v34; // q0
  __int128 v35; // q1
  __int128 v36; // q2
  __int128 v37; // q3
  unsigned __int64 v38; // x9
  __int64 v39; // t1
  unsigned __int64 v40; // x9
  __int64 v41; // t1

  v3 = *a1;
  v4 = (unsigned __int64)a1[2];
  if ( *a1 <= a2 && &(*a1)[v4] > a2 )
  {
    v22 = *a2;
    v23 = a1[1];
    if ( v4 >= (unsigned __int64)v23 + 1 )
    {
LABEL_32:
      v3[(_QWORD)v23] = v22;
      goto LABEL_33;
    }
    v3 = (__int64 *)qvector_reserve(a1, nullptr, (unsigned __int64)v23 + 1, 8u);
    v24 = (unsigned __int64)a1[1];
    v25 = a1[2];
    a1[2] = (__int64 *)v4;
    v26 = *a1;
    v27 = v24 - 1;
    if ( (__int64)(v24 - 1) < 0 )
    {
LABEL_31:
      qfree(v26);
      *a1 = v3;
      a1[2] = v25;
      v23 = a1[1];
      goto LABEL_32;
    }
    if ( v24 < 8 )
    {
      v28 = v3;
    }
    else
    {
      v28 = v3;
      if ( (unsigned __int64)((char *)v3 - (char *)v26) >= 0x40 )
      {
        v27 -= v24 & 0xFFFFFFFFFFFFFFF8LL;
        v29 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v28 = &v3[v29];
        v30 = &v26[v29];
        v31 = v3 + 4;
        v32 = (__int128 *)(v26 + 4);
        v33 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        do
        {
          v34 = *(v32 - 2);
          v35 = *(v32 - 1);
          v36 = *v32;
          v37 = v32[1];
          v32 += 4;
          *(v31 - 2) = v34;
          *(v31 - 1) = v35;
          *v31 = v36;
          v31[1] = v37;
          v31 += 4;
          v33 -= 8LL;
        }
        while ( v33 );
        v26 = v30;
        if ( v24 == (v24 & 0xFFFFFFFFFFFFFFF8LL) )
          goto LABEL_30;
      }
    }
    v40 = v27 + 1;
    do
    {
      v41 = *v26++;
      *v28++ = v41;
      --v40;
    }
    while ( v40 );
LABEL_30:
    v26 = *a1;
    goto LABEL_31;
  }
  v6 = a1[1];
  if ( v4 < (unsigned __int64)v6 + 1 )
  {
    v7 = a2;
    v3 = (__int64 *)qvector_reserve(a1, nullptr, (unsigned __int64)v6 + 1, 8u);
    v8 = (unsigned __int64)a1[1];
    v9 = a1[2];
    a1[2] = (__int64 *)v4;
    v10 = *a1;
    v11 = v8 - 1;
    if ( (__int64)(v8 - 1) < 0 )
    {
LABEL_25:
      qfree(v10);
      *a1 = v3;
      a1[2] = v9;
      v6 = a1[1];
      a2 = v7;
      goto LABEL_26;
    }
    if ( v8 < 8 )
    {
      v12 = v3;
    }
    else
    {
      v12 = v3;
      if ( (unsigned __int64)((char *)v3 - (char *)v10) >= 0x40 )
      {
        v11 -= v8 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = &v3[v13];
        v14 = &v10[v13];
        v15 = v3 + 4;
        v16 = (__int128 *)(v10 + 4);
        v17 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        do
        {
          v18 = *(v16 - 2);
          v19 = *(v16 - 1);
          v20 = *v16;
          v21 = v16[1];
          v16 += 4;
          *(v15 - 2) = v18;
          *(v15 - 1) = v19;
          *v15 = v20;
          v15[1] = v21;
          v15 += 4;
          v17 -= 8LL;
        }
        while ( v17 );
        v10 = v14;
        if ( v8 == (v8 & 0xFFFFFFFFFFFFFFF8LL) )
          goto LABEL_24;
      }
    }
    v38 = v11 + 1;
    do
    {
      v39 = *v10++;
      *v12++ = v39;
      --v38;
    }
    while ( v38 );
LABEL_24:
    v10 = *a1;
    goto LABEL_25;
  }
LABEL_26:
  v3[(_QWORD)v6] = *a2;
LABEL_33:
  a1[1] = (__int64 *)((char *)a1[1] + 1);
}
