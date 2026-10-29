/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3AC0
// Address: 0x00000000000C3AC0

//----- (00000000000C3AC0) ----------------------------------------------------
void __fastcall sub_C3AC0(pthread_mutex_t *a1, unsigned __int64 *a2)
{
  unsigned __int64 v3; // x1
  unsigned __int64 v4; // x8
  unsigned __int64 v6; // x0
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x21
  char *align; // x22
  unsigned __int64 v10; // x24
  _QWORD *v11; // x0
  char *v12; // x8
  char *v13; // x25
  __int64 v14; // x8
  char *v15; // x9
  __int64 v16; // x10
  __int128 v17; // t1
  __int128 v18; // q0
  char *v19; // x9
  __int64 v20; // x9
  unsigned __int64 v21; // x8
  __int128 v22; // q0
  __int64 v23; // x10
  __int64 v24; // x21
  __int64 v25; // x22
  _BYTE *v26; // x20
  char *v27; // x8
  char v28; // w9
  char v29; // t1
  __int64 v30; // x22
  _QWORD *v31; // x0
  char *v32; // x8
  char *v33; // x25
  __int64 v34; // x8
  char *v35; // x9
  __int64 v36; // x10
  __int128 v37; // t1
  __int128 v38; // q0
  char *v39; // x9
  __int64 v40; // x9
  unsigned __int64 v41; // x8
  __int128 v42; // q0
  __int64 v43; // x10
  __int128 v44; // [xsp+8h] [xbp-78h] BYREF
  __int64 v45; // [xsp+18h] [xbp-68h]
  __int128 v46; // [xsp+20h] [xbp-60h]
  __int64 v47; // [xsp+30h] [xbp-50h]
  __int64 v48; // [xsp+38h] [xbp-48h]

  v48 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(&a1->__align + 1) = 0;
  v4 = *a2;
  v3 = a2[1];
  if ( v4 >= v3 )
    return;
  v6 = unpack_dq(a2, v3);
  v7 = *(&a1->__align + 1);
  v8 = v6;
  if ( v7 != v6 )
  {
    v44 = 0u;
    LOBYTE(v45) = 0;
    if ( v7 > v6 )
    {
LABEL_4:
      *(&a1->__align + 1) = v8;
      goto LABEL_20;
    }
    if ( v7 < v6 )
    {
      align = (char *)a1->__align;
      v10 = *(&a1->__align + 2);
      if ( a1->__align > (unsigned __int64)&v44 || a1->__align + 24 * v10 <= (unsigned __int64)&v44 )
      {
        if ( v10 < v6 )
        {
          align = (char *)qvector_reserve(a1, nullptr, v6, 0x18u);
          v31 = (_QWORD *)a1->__align;
          v32 = (char *)*(&a1->__align + 1);
          v33 = (char *)*(&a1->__align + 2);
          *(&a1->__align + 2) = v10;
          v34 = (__int64)(v32 - 1);
          if ( v34 >= 0 )
          {
            v35 = align;
            do
            {
              v36 = v31[2];
              v37 = *(_OWORD *)v31;
              v31 += 3;
              --v34;
              *((_QWORD *)v35 + 2) = v36;
              *(_OWORD *)v35 = v37;
              v35 += 24;
            }
            while ( v34 >= 0 );
            v31 = (_QWORD *)a1->__align;
          }
          qfree(v31);
          v7 = *(&a1->__align + 1);
          a1->__align = (__int64)align;
          *(&a1->__align + 2) = (__int64)v33;
        }
        if ( v7 < v8 )
        {
          v38 = v44;
          v39 = &align[24 * v7];
          *((_QWORD *)v39 + 2) = v45;
          *(_OWORD *)v39 = v38;
          if ( v7 + 1 != v8 )
          {
            v40 = 24 * v7 + 24;
            v41 = v8 - 1 - v7;
            do
            {
              v42 = v44;
              --v41;
              v43 = a1->__align + v40;
              v40 += 24;
              *(_QWORD *)(v43 + 16) = v45;
              *(_OWORD *)v43 = v42;
            }
            while ( v41 );
          }
        }
      }
      else
      {
        LOBYTE(v47) = v45;
        v46 = v44;
        if ( v10 < v6 )
        {
          align = (char *)qvector_reserve(a1, nullptr, v6, 0x18u);
          v11 = (_QWORD *)a1->__align;
          v12 = (char *)*(&a1->__align + 1);
          v13 = (char *)*(&a1->__align + 2);
          *(&a1->__align + 2) = v10;
          v14 = (__int64)(v12 - 1);
          if ( v14 >= 0 )
          {
            v15 = align;
            do
            {
              v16 = v11[2];
              v17 = *(_OWORD *)v11;
              v11 += 3;
              --v14;
              *((_QWORD *)v15 + 2) = v16;
              *(_OWORD *)v15 = v17;
              v15 += 24;
            }
            while ( v14 >= 0 );
            v11 = (_QWORD *)a1->__align;
          }
          qfree(v11);
          v7 = *(&a1->__align + 1);
          a1->__align = (__int64)align;
          *(&a1->__align + 2) = (__int64)v13;
        }
        if ( v7 < v8 )
        {
          v18 = v46;
          v19 = &align[24 * v7];
          *((_QWORD *)v19 + 2) = v47;
          *(_OWORD *)v19 = v18;
          if ( v7 + 1 != v8 )
          {
            v20 = 24 * v7 + 24;
            v21 = v8 - 1 - v7;
            do
            {
              v22 = v46;
              --v21;
              v23 = a1->__align + v20;
              v20 += 24;
              *(_QWORD *)(v23 + 16) = v47;
              *(_OWORD *)v23 = v22;
            }
            while ( v21 );
          }
        }
      }
      goto LABEL_4;
    }
    v8 = v7;
  }
LABEL_20:
  v24 = 24 * v8;
  if ( v24 )
  {
    v25 = 0;
    v26 = (_BYTE *)(a1->__align + 16);
    do
    {
      v27 = (char *)*a2;
      if ( *a2 >= a2[1] )
      {
        v28 = 0;
      }
      else
      {
        v29 = *v27++;
        v28 = v29;
      }
      *a2 = (unsigned __int64)v27;
      *v26 = v28;
      v30 = unpack_dq(a2, a2[1]) + v25;
      *((_QWORD *)v26 - 2) = v30;
      v25 = unpack_dq(a2, a2[1]) + v30;
      v24 -= 24;
      *((_QWORD *)v26 - 1) = v25;
      v26 += 24;
    }
    while ( v24 );
  }
}
