unsigned __int64 __fastcall sub_270C0(
        QT::QGraphicsScene *this,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int *v13; // rax
  char *v14; // rsi
  char *v15; // rbx
  __int64 v16; // rdi
  __int128 v17; // xmm0
  char *v18; // rsi
  _QWORD *v19; // rbp
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rdx
  QT::QGraphicsItem *v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rbp
  unsigned __int64 v34; // rbx
  _BYTE *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r12
  void *v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v44; // r13
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int8 *v50; // rdx
  __int64 i; // rcx
  __int64 v52; // r13
  unsigned __int64 v53; // rax
  __int64 v54; // r13
  unsigned __int8 *v55; // rax
  volatile signed __int32 **v56; // [rsp+8h] [rbp-A8h]
  void *v57; // [rsp+20h] [rbp-90h] BYREF
  __int128 v58; // [rsp+28h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+38h] [rbp-78h] BYREF
  __int64 v60; // [rsp+48h] [rbp-68h]
  __int64 v61; // [rsp+58h] [rbp-58h] BYREF
  __int128 v62; // [rsp+60h] [rbp-50h]
  unsigned __int64 v63; // [rsp+70h] [rbp-40h]

  v8 = *((_QWORD *)this + 8);
  v63 = __readfsqword(0x28u);
  v56 = (volatile signed __int32 **)((char *)this + 64);
  v60 = 0;
  *(_OWORD *)ptr = 0;
  if ( !v8
    || (sub_21300(ptr, *(_QWORD *)(v8 + 48), a5, a6, a7, a8),
        sub_22450(*(_QWORD *)(v8 + 32), v8 + 16, (int **)ptr, v10, v11, v12),
        (v13 = (int *)ptr[0]) == nullptr)
    || *(int *)ptr[0] > 1 )
  {
    sub_22070((__int64)ptr, 0, 0, 0, a7, a8);
    v13 = (int *)ptr[0];
  }
  v14 = (char *)ptr[1];
  v15 = (char *)ptr[1] + 8 * v60;
  if ( !v13 || *v13 > 1 )
  {
    sub_22070((__int64)ptr, 0, 0, 0, a7, a8);
    v14 = (char *)ptr[1];
  }
  v57 = nullptr;
  sub_255C0((unsigned int **)&v57, v14, v15, 0.0, a3);
  v16 = *((_QWORD *)this + 6);
  *(_QWORD *)&v17 = 0;
  v18 = (char *)&v61;
  v19 = v57;
  v61 = 0;
  v62 = 0;
  netnode_qgetblob(v16, &v61, 24, 0, 110);
  v20 = v61;
  v21 = v61 + 24 * v62;
  if ( v21 != v61 )
  {
    do
    {
      v22 = *((_QWORD *)this + 8);
      if ( !v22 )
        goto LABEL_17;
      v23 = (_QWORD *)(v22 + 16);
      v24 = *(_QWORD **)(v22 + 24);
      if ( !v24 )
        goto LABEL_17;
      v25 = *(_QWORD *)v20;
      v26 = v23;
      do
      {
        while ( 1 )
        {
          v27 = v24[2];
          v28 = v24[3];
          if ( v24[4] < v25 )
            break;
          v26 = v24;
          v24 = (_QWORD *)v24[2];
          if ( !v27 )
            goto LABEL_15;
        }
        v24 = (_QWORD *)v24[3];
      }
      while ( v28 );
LABEL_15:
      if ( v26 != v23 && v25 >= v26[4] && (v44 = v26[5]) != 0 )
      {
        sub_28A20((QT::QGraphicsItem *)v26[5]);
        v17 = *(_OWORD *)(v20 + 8);
        v18 = (char *)&v58;
        v58 = v17;
        sub_28900(v44, &v58);
        if ( v19 && v19[1] )
        {
          v45 = v19[4];
          v46 = 0xD6E8FEB86659FD93LL
              * (((0xD6E8FEB86659FD93LL * (v44 ^ HIDWORD(v44))) >> 32) ^ (0xD6E8FEB86659FD93LL * (v44 ^ HIDWORD(v44))));
          v47 = v19[2];
          v48 = (v47 - 1) & (HIDWORD(v46) ^ v46 ^ v19[3]);
          v49 = v48 & 0x7F;
          v50 = (unsigned __int8 *)(v45 + 144 * (v48 >> 7));
LABEL_45:
          for ( i = v50[v49]; i != 255; i = *v50 )
          {
            v18 = *((char **)v50 + 16);
            if ( v44 == *(_QWORD *)&v18[8 * i] )
              break;
            if ( ++v49 != 128 )
              goto LABEL_45;
            v50 += 144;
            v49 = 0;
            v18 = (char *)(v47 >> 7);
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v50[-v45] >> 4) == v47 >> 7 )
              v50 = (unsigned __int8 *)v19[4];
          }
          v57 = v19;
          v52 = v49 | (0x1C71C71C71C71C80LL * ((__int64)&v50[-v45] >> 4));
          sub_21440((unsigned int **)&v57, *(double *)&v17, a3);
          v53 = v52;
          v19 = v57;
          v54 = v52 & 0x7F;
          v55 = (unsigned __int8 *)(*((_QWORD *)v57 + 4) + 144 * (v53 >> 7));
          if ( v55[v54] != 0xFF )
          {
            v18 = (char *)v55;
            sub_22940(v57, v55, v54);
          }
        }
      }
      else
      {
LABEL_17:
        v29 = (QT::QGraphicsItem *)operator new(0x90u);
        sub_28DB0(v29);
        v17 = *(_OWORD *)(v20 + 8);
        v58 = v17;
        sub_28900(v29, &v58);
        *(_QWORD *)sub_20420(v56, (unsigned __int64 *)v20) = v29;
        v18 = (char *)v29;
        QT::QGraphicsScene::addItem(this, v29);
      }
      v20 += 24;
    }
    while ( v21 != v20 );
  }
  v57 = v19;
  sub_21440((unsigned int **)&v57, *(double *)&v17, a3);
  v33 = v57;
  v34 = 0;
  v35 = *((_BYTE **)v57 + 4);
  if ( *v35 == 0xFF )
  {
    v18 = *((char **)v57 + 2);
    while ( (char *)++v34 != v18 )
    {
      v30 = v34 & 0x7F;
      if ( v35[144 * (v34 >> 7) + v30] != 0xFF )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    if ( v33 || v34 )
    {
      v36 = v33[4] + 144 * (v34 >> 7);
      v18 = *(char **)(*(_QWORD *)(v36 + 128) + 8LL * *(unsigned __int8 *)(v36 + (v34 & 0x7F)));
      sub_26CE0((__int64)this, v18);
      v30 = v33[2];
      while ( ++v34 != v30 )
      {
        v35 = (_BYTE *)(v34 & 0x7F);
        if ( v35[144 * (v34 >> 7) + v33[4]] != 0xFF )
          goto LABEL_20;
      }
    }
  }
  sub_265E0((__int64)this, (__int64)v18, (__int64)v35, v30, v31, v32);
  v37 = v61;
  *((_BYTE *)this + 17) = 0;
  if ( v37 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v37, v18);
  }
  if ( v33 && *(_DWORD *)v33 != -1 && !_InterlockedSub((volatile signed __int32 *)v33, 1u) )
  {
    v38 = v33[4];
    if ( v38 )
    {
      v39 = v38 + 144LL * *(_QWORD *)(v38 - 8);
      if ( v38 == v39 )
      {
        v42 = 0;
      }
      else
      {
        do
        {
          v40 = v39;
          v41 = *(void **)(v39 - 16);
          v39 -= 144;
          if ( v41 )
            operator delete[](v41);
        }
        while ( v33[4] != v39 );
        v42 = 144LL * *(_QWORD *)(v40 - 152);
      }
      operator delete[]((void *)(v39 - 8), v42 + 8);
    }
    operator delete(v33, 0x28u);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v63 - __readfsqword(0x28u);
}
