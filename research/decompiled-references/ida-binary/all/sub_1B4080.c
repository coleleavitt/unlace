unsigned __int64 __fastcall sub_1B4080(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r13
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rbp
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  const char *v35; // rsi
  QT::QCoreApplication **v36; // rbx
  QT::QCoreApplication **v37; // rbp
  __int64 v39; // [rsp+8h] [rbp-48h] BYREF
  __int128 v40; // [rsp+10h] [rbp-40h]
  unsigned __int64 v41; // [rsp+20h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  v40 = 0;
  v39 = 0;
  v39 = qvector_reserve(&v39, 0, 16, 8);
  v1 = v39;
  v2 = v40;
  v3 = *a1;
  if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
  {
    v39 = qvector_reserve(&v39, v39, v40 + 1, 8);
    v1 = v39;
    v2 = v40;
  }
  *(_QWORD *)(v1 + 8 * v2) = v3;
  v4 = a1[1];
  v5 = v40 + 1;
  v6 = v40 + 2;
  v7 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v6 )
  {
    v39 = qvector_reserve(&v39, v39, v6, 8);
    v7 = v39;
    v5 = v40;
  }
  *(_QWORD *)(v7 + 8 * v5) = v4;
  v8 = a1[2];
  v9 = v40 + 1;
  v10 = v40 + 2;
  v11 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v10 )
  {
    v39 = qvector_reserve(&v39, v39, v10, 8);
    v11 = v39;
    v9 = v40;
  }
  *(_QWORD *)(v11 + 8 * v9) = v8;
  v12 = a1[3];
  v13 = v40 + 1;
  v14 = v40 + 2;
  v15 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v14 )
  {
    v39 = qvector_reserve(&v39, v39, v14, 8);
    v15 = v39;
    v13 = v40;
  }
  *(_QWORD *)(v15 + 8 * v13) = v12;
  v16 = a1[4];
  v17 = v40 + 1;
  v18 = v40 + 2;
  v19 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v18 )
  {
    v39 = qvector_reserve(&v39, v39, v18, 8);
    v19 = v39;
    v17 = v40;
  }
  *(_QWORD *)(v19 + 8 * v17) = v16;
  v20 = a1[5];
  v21 = v40 + 1;
  v22 = v40 + 2;
  v23 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v22 )
  {
    v39 = qvector_reserve(&v39, v39, v22, 8);
    v23 = v39;
    v21 = v40;
  }
  *(_QWORD *)(v23 + 8 * v21) = v20;
  v24 = a1[6];
  v25 = v40 + 1;
  v26 = v40 + 2;
  v27 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v26 )
  {
    v39 = qvector_reserve(&v39, v39, v26, 8);
    v27 = v39;
    v25 = v40;
  }
  *(_QWORD *)(v27 + 8 * v25) = v24;
  v28 = a1[7];
  v29 = v40 + 1;
  v30 = v40 + 2;
  v31 = v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v30 )
  {
    v39 = qvector_reserve(&v39, v39, v30, 8);
    v31 = v39;
    v29 = v40;
  }
  *(_QWORD *)(v31 + 8 * v29) = v28;
  v32 = a1[8];
  v33 = v40 + 1;
  v34 = v40 + 2;
  v35 = (const char *)v39;
  *(_QWORD *)&v40 = v40 + 1;
  if ( *((_QWORD *)&v40 + 1) < v34 )
  {
    v39 = qvector_reserve(&v39, v39, v34, 8);
    v35 = (const char *)v39;
    v33 = v40;
  }
  *(_QWORD *)&v35[8 * v33] = v32;
  v36 = (QT::QCoreApplication **)v39;
  v37 = (QT::QCoreApplication **)(v39 + 8 * (v40 + 1));
  *(_QWORD *)&v40 = v40 + 1;
  if ( v37 != (QT::QCoreApplication **)v39 )
  {
    do
    {
      v35 = (char *)&qword_48 + 2;
      QT::QCoreApplication::sendPostedEvents(*v36++, (QT::QObject *)((char *)&qword_48 + 2), v34);
    }
    while ( v37 != v36 );
    v36 = (QT::QCoreApplication **)v39;
  }
  if ( v36 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v36, v35);
  }
  return v41 - __readfsqword(0x28u);
}
