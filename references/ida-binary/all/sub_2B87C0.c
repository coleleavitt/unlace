unsigned __int64 __fastcall sub_2B87C0(__int64 a1, QT::QPainter *a2, __int64 a3, __int64 a4)
{
  double v7; // xmm2_8
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r11
  double v11; // xmm0_8
  unsigned int v12; // r15d
  __int64 v13; // rbp
  unsigned int v14; // r9d
  unsigned __int64 *v15; // r13
  const char *v16; // rsi
  unsigned __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r11
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // r8
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rbp
  unsigned int *v28; // rdx
  unsigned __int64 *v29; // rdx
  double v32; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+8h] [rbp-A8h]
  __int64 v34; // [rsp+10h] [rbp-A0h]
  unsigned int v35; // [rsp+10h] [rbp-A0h]
  __int64 v36; // [rsp+18h] [rbp-98h]
  unsigned __int64 v37; // [rsp+18h] [rbp-98h]
  unsigned int v38; // [rsp+24h] [rbp-8Ch]
  unsigned __int64 v39; // [rsp+28h] [rbp-88h]
  char v40[8]; // [rsp+40h] [rbp-70h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-60h] BYREF
  unsigned __int64 *v43; // [rsp+58h] [rbp-58h] BYREF
  __int128 v44; // [rsp+60h] [rbp-50h]
  unsigned __int64 v45; // [rsp+70h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v32 = (double)*(int *)(*(_QWORD *)(a4 + 8) + 4LL);
  QT::QBrush::QBrush(&v43, *(_QWORD *)(a3 + 288) + 16LL * *(unsigned __int8 *)(a4 + 16), 1);
  QT::QPen::QPen(v40, &v43, 1, 0, 64, v32);
  QT::QBrush::~QBrush((QT::QBrush *)&v43);
  v7 = *(double *)(a3 + 368);
  if ( v7 < 0.5 )
    QT::QPen::setWidthF((QT::QPen *)v40, (double)*(int *)(*(_QWORD *)(a4 + 8) + 4LL) * (0.5 / v7));
  QT::QPainter::setPen(a2, (const QT::QPen *)v40);
  QT::QBrush::QBrush(&v43, *(_QWORD *)(a3 + 288) + 16LL * *(unsigned __int8 *)(a4 + 16), 1);
  QT::QPainter::setBrush(a2, (const QT::QBrush *)&v43);
  QT::QBrush::~QBrush((QT::QBrush *)&v43);
  QT::QPainter::setRenderHint(a2, 1, 1);
  v8 = *(_QWORD *)a4;
  v9 = *(_QWORD *)(a3 + 408);
  v41 = 0;
  v42 = 0;
  sub_298C80(*(_QWORD *)(v9 + 8), v8, &v41, &v42);
  v10 = *(_QWORD *)(a4 + 8);
  v11 = 0.0;
  v43 = nullptr;
  v44 = 0;
  v12 = v41;
  v13 = *(_QWORD *)(v10 + 24);
  v14 = HIDWORD(v41);
  v33 = v42;
  if ( (_DWORD)v13 == -2 )
  {
    *(_QWORD *)&dword_0 = v41;
LABEL_11:
    v25 = 1;
    goto LABEL_16;
  }
  v39 = v41;
  v38 = HIDWORD(v41);
  v36 = v10;
  v15 = (unsigned __int64 *)qvector_reserve(&v43, 0, (int)v13 + 2, 8);
  v16 = *((const char **)&v44 + 1);
  *((_QWORD *)&v44 + 1) = 0;
  v17 = v43;
  v18 = v44 - 1;
  v19 = v36;
  if ( (__int64)v44 - 1 >= 0 )
  {
    v20 = v15;
    do
    {
      v21 = *v17;
      ++v20;
      ++v17;
      *(v20 - 1) = v21;
    }
    while ( v18-- != 0 );
    v17 = v43;
  }
  v37 = (int)v13 + 2;
  v34 = v19;
  v11 = qfree(v17, v16);
  v23 = v44;
  v43 = v15;
  v14 = v38;
  *((_QWORD *)&v44 + 1) = v16;
  if ( (unsigned __int64)v44 < v37 )
  {
    do
    {
      v15[v23++] = 0;
      v15 = v43;
    }
    while ( v37 != v23 );
  }
  v24 = v13 + 1;
  *(_QWORD *)&v44 = (int)v13 + 2;
  *v15 = v39;
  if ( (int)v13 + 1 <= 1 )
    goto LABEL_11;
  v26 = 0;
  v27 = 8LL * (unsigned int)v13;
  do
  {
    v28 = (unsigned int *)(v26 + *(_QWORD *)(v34 + 16));
    v26 += 8LL;
    v12 = *v28;
    v14 = v28[1];
    v29 = &v43[v26 / 8];
    *(_DWORD *)v29 = v12;
    *((_DWORD *)v29 + 1) = v14;
  }
  while ( v26 != v27 );
  v25 = v24;
LABEL_16:
  v35 = v14;
  v43[v25] = v33;
  QT::QPainter::drawPolyline(a2, v43, (unsigned int)v44, v11);
  sub_2B85A0(a1, (__int64)a2, a3, ((unsigned __int64)v35 << 32) | v12, v33);
  QT::QPainter::setRenderHint(a2, 1, 0);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, (_BYTE *)&dword_0 + 1);
  }
  QT::QPen::~QPen((QT::QPen *)v40);
  return v45 - __readfsqword(0x28u);
}
