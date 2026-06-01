/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3D98
// Address: 0x00000000000C3D98

//----- (00000000000C3D98) ----------------------------------------------------
__int64 __fastcall sub_C3D98(char **a1, unsigned __int64 *a2, __int64 a3)
{
  char *v6; // x8
  char *v7; // x9
  char *v8; // x22
  char *v9; // x22
  unsigned __int64 v10; // t1
  bool v11; // cf
  char *v12; // x24
  char *v13; // x0
  unsigned __int64 v14; // x11
  unsigned __int64 v15; // x12
  char *v16; // x13
  unsigned __int64 v17; // x14
  char *v18; // x13
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x25
  __int64 v21; // x22
  char *v22; // x0
  char *v23; // x0
  char *v24; // x8
  __int128 v25; // q0
  char *v26; // x8
  __int64 v27; // x26
  char *v28; // x8
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x10
  char *v31; // x11
  unsigned __int64 v32; // x12
  char *v33; // x11
  char *v35; // x27
  __int128 v36; // t1
  char *v37; // x8
  __int128 v38; // [xsp+0h] [xbp-70h] BYREF
  char v39; // [xsp+10h] [xbp-60h]
  __int64 v40; // [xsp+18h] [xbp-58h]

  v40 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *a1;
  v7 = a1[1];
  v8 = &(*a1)[16 * (_QWORD)v7];
  if ( !v7 )
    goto LABEL_24;
  v10 = *((_QWORD *)v8 - 1);
  v9 = v8 - 8;
  v11 = v10 >= *a2;
  if ( v10 == *a2 )
  {
    v12 = v9 - 8;
    if ( *(_BYTE *)(a3 + 28) )
    {
      v38 = *(_OWORD *)v12;
      v39 = 1;
      sub_C5A18((char **)a3, (unsigned __int64)&v38);
    }
    *(_QWORD *)v9 = a2[1];
    if ( !*(_BYTE *)(a3 + 28) )
      goto LABEL_57;
    goto LABEL_55;
  }
  if ( v11 )
  {
    v8 = &v6[16 * (_QWORD)v7];
    if ( 16LL * (_QWORD)v7 )
    {
      v14 = (16 * (__int64)v7) >> 4;
      v12 = *a1;
      do
      {
        v15 = v14 >> 1;
        v16 = &v12[16 * (v14 >> 1)];
        v17 = *((_QWORD *)v16 + 1);
        v18 = v16 + 16;
        v14 += ~(v14 >> 1);
        if ( v17 < *a2 )
          v12 = v18;
        else
          v14 = v15;
      }
      while ( v14 );
      if ( v12 != v8 )
        goto LABEL_18;
      goto LABEL_25;
    }
LABEL_24:
    v12 = *a1;
    if ( v6 != v8 )
    {
LABEL_18:
      v19 = *(_QWORD *)v12;
      v20 = a2[1];
      if ( *a2 >= *(_QWORD *)v12 && v20 <= *((_QWORD *)v12 + 1) )
        return 0;
      if ( v19 <= v20 )
      {
        if ( v19 >= *a2 )
          v26 = (char *)a2;
        else
          v26 = v12;
        v27 = *(_QWORD *)v26;
        v28 = v12;
        if ( v8 != v12 )
        {
          v29 = (v8 - v12) >> 4;
          v28 = v12;
          do
          {
            v30 = v29 >> 1;
            v31 = &v28[16 * (v29 >> 1)];
            v32 = *((_QWORD *)v31 + 1);
            v33 = v31 + 16;
            v29 += ~(v29 >> 1);
            if ( v20 >= v32 )
              v28 = v33;
            else
              v29 = v30;
          }
          while ( v29 );
        }
        if ( v28 != v8 )
        {
          if ( *(_QWORD *)v28 <= v20 )
          {
            v20 = *((_QWORD *)v28 + 1);
            v8 = v28 + 16;
          }
          else
          {
            v8 = v28;
          }
        }
        if ( v12 == v8 )
        {
          if ( *(_BYTE *)(a3 + 28) )
          {
            v38 = *(_OWORD *)v12;
            v39 = 1;
            sub_C5A18((char **)a3, (unsigned __int64)&v38);
          }
        }
        else
        {
          if ( v12 < v8 && *(_BYTE *)(a3 + 28) )
          {
            v35 = v12;
            do
            {
              v36 = *(_OWORD *)v35;
              v35 += 16;
              v39 = 1;
              v38 = v36;
              sub_C5A18((char **)a3, (unsigned __int64)&v38);
            }
            while ( v35 < v8 );
          }
          v37 = v12;
          do
            v37 += 16;
          while ( v8 != v37 );
          memmove(v12 + 16, v8, &(*a1)[16 * (_QWORD)a1[1]] - v8);
          a1[1] -= (v8 - (v12 + 16)) >> 4;
        }
        *(_QWORD *)v12 = v27;
        *((_QWORD *)v12 + 1) = v20;
        if ( !*(_BYTE *)(a3 + 28) )
          goto LABEL_57;
LABEL_55:
        v25 = *(_OWORD *)v12;
        goto LABEL_56;
      }
      v21 = (v12 - v6) >> 4;
      v38 = *(_OWORD *)a2;
      if ( a1[2] < v7 + 1 )
      {
        v22 = (char *)qvector_reserve((pthread_mutex_t *)a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
        v7 = a1[1];
        v6 = v22;
        *a1 = v22;
      }
      v8 = &v6[16 * v21];
      memmove(v8 + 16, v8, &v6[16 * (_QWORD)v7] - v8);
      goto LABEL_27;
    }
LABEL_25:
    v38 = *(_OWORD *)a2;
    if ( a1[2] < v7 + 1 )
    {
      v23 = (char *)qvector_reserve((pthread_mutex_t *)a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
      v24 = a1[1];
      *a1 = v23;
      v8 = &v23[16 * (_QWORD)v24];
    }
LABEL_27:
    *(_OWORD *)v8 = v38;
    goto LABEL_28;
  }
  v38 = *(_OWORD *)a2;
  if ( a1[2] < v7 + 1 )
  {
    v13 = (char *)qvector_reserve((pthread_mutex_t *)a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
    v7 = a1[1];
    v6 = v13;
    *a1 = v13;
  }
  *(_OWORD *)&v6[16 * (_QWORD)v7] = v38;
LABEL_28:
  ++a1[1];
  if ( *(_BYTE *)(a3 + 28) )
  {
    v25 = *(_OWORD *)a2;
LABEL_56:
    v38 = v25;
    v39 = 0;
    sub_C5A18((char **)a3, (unsigned __int64)&v38);
  }
LABEL_57:
  a1[3] = nullptr;
  return 1;
}
