/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B070
// Address: 0x000000000005B070

//----- (000000000005B070) ----------------------------------------------------
void __fastcall sub_5B070(pthread_mutex_t *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // x8
  char *align; // x21
  unsigned __int64 v6; // x23
  _QWORD *v7; // x0
  char *v8; // x8
  char *v9; // x24
  __int64 v10; // x8
  char *v11; // x9
  __int64 v12; // x10
  __int128 v13; // t1
  __int128 v14; // q0
  char *v15; // x9
  __int64 v16; // x9
  unsigned __int64 v17; // x8
  __int128 v18; // q0
  __int64 v19; // x10
  _QWORD *v20; // x0
  char *v21; // x8
  char *v22; // x24
  __int64 v23; // x8
  char *v24; // x9
  __int64 v25; // x10
  __int128 v26; // t1
  __int128 v27; // q0
  char *v28; // x9
  __int64 v29; // x9
  unsigned __int64 v30; // x8
  __int128 v31; // q0
  __int64 v32; // x10
  __int128 v33; // [xsp+8h] [xbp-78h] BYREF
  __int64 v34; // [xsp+18h] [xbp-68h]
  __int128 v35; // [xsp+20h] [xbp-60h]
  __int64 v36; // [xsp+30h] [xbp-50h]
  __int64 v37; // [xsp+38h] [xbp-48h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(&a1->__align + 1);
  if ( v2 != a2 )
  {
    v33 = 0u;
    v34 = 0;
    if ( v2 > a2 )
    {
LABEL_3:
      *(&a1->__align + 1) = a2;
      return;
    }
    if ( v2 < a2 )
    {
      align = (char *)a1->__align;
      v6 = *(&a1->__align + 2);
      if ( a1->__align > (unsigned __int64)&v33 || a1->__align + 24 * v6 <= (unsigned __int64)&v33 )
      {
        if ( v6 < a2 )
        {
          align = (char *)qvector_reserve(a1, nullptr, a2, 0x18u);
          v20 = (_QWORD *)a1->__align;
          v21 = (char *)*(&a1->__align + 1);
          v22 = (char *)*(&a1->__align + 2);
          *(&a1->__align + 2) = v6;
          v23 = (__int64)(v21 - 1);
          if ( v23 >= 0 )
          {
            v24 = align;
            do
            {
              v25 = v20[2];
              v26 = *(_OWORD *)v20;
              v20 += 3;
              --v23;
              *((_QWORD *)v24 + 2) = v25;
              *(_OWORD *)v24 = v26;
              v24 += 24;
            }
            while ( v23 >= 0 );
            v20 = (_QWORD *)a1->__align;
          }
          qfree(v20);
          v2 = *(&a1->__align + 1);
          a1->__align = (__int64)align;
          *(&a1->__align + 2) = (__int64)v22;
        }
        if ( v2 < a2 )
        {
          v27 = v33;
          v28 = &align[24 * v2];
          *((_QWORD *)v28 + 2) = v34;
          *(_OWORD *)v28 = v27;
          if ( v2 + 1 != a2 )
          {
            v29 = 24 * v2 + 24;
            v30 = a2 - 1 - v2;
            do
            {
              v31 = v33;
              --v30;
              v32 = a1->__align + v29;
              v29 += 24;
              *(_QWORD *)(v32 + 16) = v34;
              *(_OWORD *)v32 = v31;
            }
            while ( v30 );
          }
        }
      }
      else
      {
        v36 = v34;
        v35 = v33;
        if ( v6 < a2 )
        {
          align = (char *)qvector_reserve(a1, nullptr, a2, 0x18u);
          v7 = (_QWORD *)a1->__align;
          v8 = (char *)*(&a1->__align + 1);
          v9 = (char *)*(&a1->__align + 2);
          *(&a1->__align + 2) = v6;
          v10 = (__int64)(v8 - 1);
          if ( v10 >= 0 )
          {
            v11 = align;
            do
            {
              v12 = v7[2];
              v13 = *(_OWORD *)v7;
              v7 += 3;
              --v10;
              *((_QWORD *)v11 + 2) = v12;
              *(_OWORD *)v11 = v13;
              v11 += 24;
            }
            while ( v10 >= 0 );
            v7 = (_QWORD *)a1->__align;
          }
          qfree(v7);
          v2 = *(&a1->__align + 1);
          a1->__align = (__int64)align;
          *(&a1->__align + 2) = (__int64)v9;
        }
        if ( v2 < a2 )
        {
          v14 = v35;
          v15 = &align[24 * v2];
          *((_QWORD *)v15 + 2) = v36;
          *(_OWORD *)v15 = v14;
          if ( v2 + 1 != a2 )
          {
            v16 = 24 * v2 + 24;
            v17 = a2 - 1 - v2;
            do
            {
              v18 = v35;
              --v17;
              v19 = a1->__align + v16;
              v16 += 24;
              *(_QWORD *)(v19 + 16) = v36;
              *(_OWORD *)v19 = v18;
            }
            while ( v17 );
          }
        }
      }
      goto LABEL_3;
    }
  }
}
