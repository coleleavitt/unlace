/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49D2C0
// Address: 0x000000000049D2C0

//----- (000000000049D2C0) ----------------------------------------------------
__int64 __fastcall sub_49D2C0(int a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x3
  char v4; // t1
  __int64 v5; // x22
  unsigned int v6; // w13
  char *v7; // x20
  unsigned __int64 v8; // x19
  __int64 v9; // x12
  __int64 v10; // x10
  unsigned int v11; // w11
  unsigned int v12; // w14
  unsigned __int64 v13; // x21
  unsigned __int64 v14; // x16
  unsigned __int64 v15; // x18
  unsigned __int64 v16; // x17
  unsigned __int64 v17; // x30
  __int64 v18; // x6
  __int64 v19; // x3
  __int64 v20; // x0
  __int64 v21; // x5
  int v22; // w5
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x0
  int v26; // w5
  unsigned __int64 v27; // x4
  int v28; // w5
  unsigned __int64 v29; // x3
  int v30; // w4
  unsigned __int64 v31; // x0
  int v32; // w4
  unsigned __int64 v33; // x0
  int v34; // w4
  unsigned __int64 v35; // x0
  char *v36; // x4
  char v37; // w0
  unsigned __int64 v38; // x0
  unsigned __int64 v39; // x0
  unsigned __int64 v40; // x0
  unsigned __int64 v41; // x0
  unsigned __int64 v42; // x0
  unsigned __int64 v43; // x0
  unsigned __int64 v44; // x0
  char *v45; // x2
  char v46; // t1
  bool v48; // zf

  a3 = (unsigned int)a3;
  if ( !a2 )
    return 0;
  v3 = (unsigned int)~a1;
  if ( (unsigned int)a3 > 0x2EuLL )
  {
    while ( ((unsigned __int8)a2 & 7) != 0 )
    {
      v4 = *a2++;
      --a3;
      v3 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(v4 ^ v3)) ^ (v3 >> 8);
      if ( !a3 )
      {
        v5 = -1;
        v6 = v3;
        v7 = a2;
        v8 = -1;
        goto LABEL_6;
      }
    }
    v6 = v3;
    v8 = a3 / 0x28 - 1;
    v48 = a3 / 0x28 == 1;
    a3 %= 0x28u;
    if ( v48 )
    {
      v9 = 0;
      v10 = 0;
      v25 = 0;
      goto LABEL_11;
    }
    v5 = v8;
    v7 = a2;
LABEL_6:
    LODWORD(v9) = 0;
    LODWORD(v10) = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = v6 ^ *(_QWORD *)a2;
      v14 = (unsigned int)v9 ^ *((_QWORD *)a2 + 4);
      v15 = v11 ^ *((_QWORD *)a2 + 2);
      v16 = (unsigned int)v10 ^ *((_QWORD *)a2 + 3);
      v17 = v12 ^ *((_QWORD *)a2 + 1);
      v18 = (unsigned __int8)(v11 ^ a2[16]);
      v19 = (unsigned __int8)(v10 ^ a2[24]);
      v20 = (unsigned __int8)(v9 ^ a2[32]);
      v21 = (unsigned __int8)(v12 ^ a2[8]);
      v6 = *((_DWORD *)qword_4DE9A0 + (unsigned __int8)(v6 ^ *a2));
      a2 += 40;
      v11 = *((_DWORD *)qword_4DE9A0 + v18);
      LODWORD(v10) = *((_DWORD *)qword_4DE9A0 + v19);
      LODWORD(v9) = *((_DWORD *)qword_4DE9A0 + v20);
      v12 = *((_DWORD *)qword_4DE9A0 + v21);
      v22 = 1;
      do
      {
        v23 = 8 * v22;
        v24 = (__int64)v22++ << 8;
        v6 ^= *((_DWORD *)qword_4DE9A0 + v24 + (unsigned __int8)(v13 >> v23));
        v12 ^= *((_DWORD *)qword_4DE9A0 + v24 + (unsigned __int8)(v17 >> v23));
        v11 ^= *((_DWORD *)qword_4DE9A0 + v24 + (unsigned __int8)(v15 >> v23));
        v9 = (unsigned int)v9 ^ *((_DWORD *)qword_4DE9A0 + v24 + (unsigned __int8)(v14 >> v23));
        v10 = (unsigned int)v10 ^ *((_DWORD *)qword_4DE9A0 + v24 + (unsigned __int8)(v16 >> v23));
      }
      while ( v22 != 8 );
      --v8;
    }
    while ( v8 );
    v3 = v6;
    v8 = v12;
    v25 = v11;
    a2 = &v7[40 * v5];
LABEL_11:
    v26 = 8;
    v27 = v3 ^ *(_QWORD *)a2;
    do
    {
      --v26;
      v27 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)v27) ^ (v27 >> 8);
    }
    while ( v26 );
    v28 = 8;
    v29 = v8 ^ *((_QWORD *)a2 + 1) ^ (unsigned int)v27;
    do
    {
      --v28;
      v29 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)v29) ^ (v29 >> 8);
    }
    while ( v28 );
    v30 = 8;
    v31 = v25 ^ *((_QWORD *)a2 + 2) ^ (unsigned int)v29;
    do
    {
      --v30;
      v31 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)v31) ^ (v31 >> 8);
    }
    while ( v30 );
    v32 = 8;
    v33 = v10 ^ *((_QWORD *)a2 + 3) ^ (unsigned int)v31;
    do
    {
      --v32;
      v33 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)v33) ^ (v33 >> 8);
    }
    while ( v32 );
    v34 = 8;
    v35 = v9 ^ *((_QWORD *)a2 + 4) ^ (unsigned int)v33;
    do
    {
      --v34;
      v35 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)v35) ^ (v35 >> 8);
    }
    while ( v34 );
    v3 = (unsigned int)v35;
    a2 += 40;
  }
  if ( a3 > 7 )
  {
    v36 = a2;
    do
    {
      v37 = *v36;
      v36 += 8;
      v38 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(v37 ^ v3)) ^ (v3 >> 8);
      v39 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 7) ^ v38)) ^ (v38 >> 8);
      v40 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 6) ^ v39)) ^ (v39 >> 8);
      v41 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 5) ^ v40)) ^ (v40 >> 8);
      v42 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 4) ^ v41)) ^ (v41 >> 8);
      v43 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 3) ^ v42)) ^ (v42 >> 8);
      v44 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 2) ^ v43)) ^ (v43 >> 8);
      v3 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(*(v36 - 1) ^ v44)) ^ (v44 >> 8);
    }
    while ( v36 != &a2[8 * (unsigned int)((a3 - 8) >> 3) + 8] );
    a2 += ((a3 - 8) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    a3 &= 7u;
  }
  if ( a3 )
  {
    v45 = &a2[a3];
    do
    {
      v46 = *a2++;
      v3 = *((unsigned int *)qword_4E09A0 + (unsigned __int8)(v46 ^ v3)) ^ (v3 >> 8);
    }
    while ( a2 != v45 );
  }
  return v3 ^ 0xFFFFFFFF;
}
// 4DE9A0: using guessed type __int64 qword_4DE9A0[512];
// 4DF9A0: using guessed type __int64[512];
// 4E09A0: using guessed type __int64 qword_4E09A0[128];
