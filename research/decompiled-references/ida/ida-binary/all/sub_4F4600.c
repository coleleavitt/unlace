unsigned __int64 __fastcall sub_4F4600(__m128i *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  QT::QMetaObject::Connection *v14; // r15
  __int64 v15; // rsi
  QT::QMetaObject::Connection *v16; // rdi
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  char v30; // bp
  __int64 v31; // rax
  __int64 v32; // rax
  QT::QMetaObject::Connection **v33; // rdx
  QT::QMetaObject::Connection *v34; // rdi
  QT::QMetaObject::Connection *v35; // rax
  QT::QMetaObject::Connection *v36; // r13
  QT::QMetaObject::Connection *v37; // rcx
  QT::QMetaObject::Connection *v38; // rdx
  __int64 v39; // rdx
  QT::QMetaObject::Connection *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rsi
  QT::QMetaObject::Connection **v43; // rdx
  QT::QMetaObject::Connection *v44; // r12
  QT::QMetaObject::Connection *v45; // rdi
  QT::QMetaObject::Connection *v46; // rax
  int v47; // ecx
  __int64 v48; // r12
  __int64 v49; // rax
  const double *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-68h] BYREF
  QT::QMetaObject::Connection *v56; // [rsp+8h] [rbp-60h] BYREF
  QT::QMetaObject::Connection **v57; // [rsp+10h] [rbp-58h]
  QT::QMetaObject::Connection *v58; // [rsp+18h] [rbp-50h] BYREF
  QT::QMetaObject::Connection *v59; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+28h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v9 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] || (v10 = *a3, *(int *)v9 > 1) )
  {
    v11 = *a3;
    *a3 = 0;
    v12 = a1[1].m128i_i64[0] == 0;
    v55 = v11;
    if ( v12 || a2 )
    {
LABEL_5:
      v13 = a1->m128i_i64[0];
      if ( a1->m128i_i64[0] )
        goto LABEL_6;
      goto LABEL_16;
    }
LABEL_24:
    v27 = a1->m128i_i64[0];
    if ( !a1->m128i_i64[0] || *(int *)v27 > 1 )
      goto LABEL_26;
    v14 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
    v52 = (__int64)v14 - ((v27 + 31) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v52 > 0 )
      goto LABEL_27;
    v15 = a1[1].m128i_i64[0];
    v29 = v52 >> 3;
    if ( *(_QWORD *)(v27 + 8) - v15 - v29 <= 0 || 3 * v15 >= *(_QWORD *)(v27 + 8) )
    {
LABEL_26:
      sub_4F4020(a1, 1u, 1, 0, a5, a6);
      v14 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
      goto LABEL_27;
    }
    v16 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
    v30 = 1;
    v53 = (*(_QWORD *)(v27 + 8) - v15 - 1) / 2;
    if ( v53 < 0 )
      v53 = 0;
    v31 = v53 + 1;
LABEL_36:
    v32 = v31 - v29;
    v14 = (QT::QMetaObject::Connection *)((char *)v16 + 8 * v32);
    if ( v15 && v16 != v14 && v16 && v14 )
    {
      if ( v14 < v16 )
      {
        sub_4F4480(v16, v15, (QT::QMetaObject::Connection *)((char *)v16 + 8 * v32));
      }
      else
      {
        v33 = &v56;
        v59 = nullptr;
        v34 = (QT::QMetaObject::Connection *)((char *)v16 + 8 * v15);
        v35 = (QT::QMetaObject::Connection *)((char *)v14 + 8 * v15);
        v57 = &v56;
        v56 = v35;
        v58 = v35;
        if ( v14 >= v34 )
        {
          v36 = v34;
          v37 = v14;
        }
        else
        {
          v36 = v14;
          v37 = v34;
        }
        if ( v37 != v35 )
        {
          v38 = (QT::QMetaObject::Connection *)((char *)v34 - 8);
          do
          {
            v34 = v38;
            v39 = *(_QWORD *)v38;
            *(_QWORD *)v34 = 0;
            *((_QWORD *)v35 - 1) = v39;
            v38 = (QT::QMetaObject::Connection *)((char *)v34 - 8);
            v35 = (QT::QMetaObject::Connection *)((char *)v56 - 8);
            v56 = v35;
          }
          while ( v37 != v35 );
          v33 = v57;
        }
        v59 = *v33;
        v57 = &v59;
        if ( v35 != v14 )
        {
          v40 = (QT::QMetaObject::Connection *)((char *)v34 - 8);
          do
          {
            v41 = *((_QWORD *)v35 - 1);
            v42 = *(_QWORD *)v40;
            v34 = v40;
            v40 = (QT::QMetaObject::Connection *)((char *)v40 - 8);
            *((_QWORD *)v35 - 1) = v42;
            *((_QWORD *)v40 + 1) = v41;
            v35 = (QT::QMetaObject::Connection *)((char *)v56 - 8);
            v56 = v35;
          }
          while ( v14 != v35 );
        }
        v43 = &v58;
        v57 = &v58;
        if ( v36 != v34 )
        {
          v44 = v34;
          do
          {
            v45 = v44;
            v44 = (QT::QMetaObject::Connection *)((char *)v44 + 8);
            QT::QMetaObject::Connection::~Connection(v45);
          }
          while ( v36 != v44 );
          v43 = v57;
        }
        v46 = *v43;
        if ( v58 < *v43 )
        {
          v47 = 1;
        }
        else
        {
          v47 = -1;
          if ( v58 == *v43 )
            goto LABEL_58;
        }
        v48 = -8LL * v47;
        do
        {
          *v43 = (QT::QMetaObject::Connection *)((char *)v46 + v48);
          QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)((char *)*v57 - 8));
          v43 = v57;
          v46 = *v57;
        }
        while ( *v57 != v58 );
      }
    }
LABEL_58:
    a1->m128i_i64[1] = (__int64)v14;
    if ( !v30 )
      goto LABEL_8;
LABEL_27:
    v28 = v55;
    v55 = 0;
    *((_QWORD *)v14 - 1) = v28;
    a1->m128i_i64[1] -= 8;
    ++a1[1].m128i_i64[0];
    goto LABEL_22;
  }
  if ( a1[1].m128i_i64[0] != a2 )
  {
    if ( !a2 )
    {
      v17 = a1->m128i_i64[1];
      v18 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_12;
    }
LABEL_30:
    *a3 = 0;
    v13 = a1->m128i_i64[0];
    v55 = v10;
    if ( v13 )
    {
LABEL_6:
      if ( *(int *)v13 > 1 )
      {
LABEL_7:
        sub_4F4020(a1, 0, 1, 0, a5, a6);
        v14 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
LABEL_8:
        v15 = a1[1].m128i_i64[0];
        v16 = v14;
        goto LABEL_17;
      }
      v16 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
      v15 = a1[1].m128i_i64[0];
      a5 = (__int64)v16 - ((v13 + 31) & 0xFFFFFFFFFFFFFFF0LL);
      v29 = a5 >> 3;
      if ( *(_QWORD *)(v13 + 8) - v15 - (a5 >> 3) <= 0 )
      {
        if ( a5 <= 0 || 3 * v15 >= 2LL * *(_QWORD *)(v13 + 8) )
          goto LABEL_7;
        v30 = 0;
        v31 = 0;
        goto LABEL_36;
      }
LABEL_17:
      v22 = (_QWORD *)((char *)v16 + 8 * v15);
      v23 = a2 + 1 - v15;
      if ( v15 - a2 > 0 )
      {
        v49 = *(v22 - 1);
        *(v22 - 1) = 0;
        *v22 = v49;
        if ( v23 )
        {
          v50 = (const double *)(v22 - 2);
          v51 = (__int64)&v22[v23 - 2];
          do
          {
            --v50;
            *(__m128 *)(v50 + 1) = _mm_loadh_ps(v50 + 1);
          }
          while ( v50 != (const double *)v51 );
        }
      }
      else
      {
        if ( v23 )
        {
          v54 = v55;
          v55 = 0;
          *v22 = v54;
          goto LABEL_21;
        }
        v24 = *(v22 - 1);
        *(v22 - 1) = 0;
        *v22 = v24;
      }
      v25 = (__int64 *)((char *)v16 + 8 * a2);
      v26 = *v25;
      *v25 = v55;
      v55 = v26;
LABEL_21:
      a1->m128i_i64[1] = (__int64)v16;
      a1[1].m128i_i64[0] = v15 + 1;
LABEL_22:
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v55);
      return v60 - __readfsqword(0x28u);
    }
LABEL_16:
    sub_4F4020(a1, 0, 1, 0, a5, a6);
    v16 = (QT::QMetaObject::Connection *)a1->m128i_i64[1];
    v15 = a1[1].m128i_i64[0];
    goto LABEL_17;
  }
  v17 = a1->m128i_i64[1];
  v18 = (v9 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  a5 = (__int64)(v17 - v18) >> 3;
  if ( a2 != *(_QWORD *)(v9 + 8) - a5 )
  {
    *a3 = 0;
    *(_QWORD *)(v17 + 8 * a2) = v10;
    v20 = a1[1].m128i_i64[0] + 1;
    goto LABEL_14;
  }
  if ( a2 )
    goto LABEL_30;
LABEL_12:
  *a3 = 0;
  if ( v18 == v17 )
  {
    v12 = a1[1].m128i_i64[0] == 0;
    v55 = v10;
    if ( v12 )
      goto LABEL_5;
    goto LABEL_24;
  }
  *(_QWORD *)(v17 - 8) = v10;
  v19 = a1[1].m128i_i64[0];
  a1->m128i_i64[1] -= 8;
  v20 = v19 + 1;
LABEL_14:
  a1[1].m128i_i64[0] = v20;
  return v60 - __readfsqword(0x28u);
}
