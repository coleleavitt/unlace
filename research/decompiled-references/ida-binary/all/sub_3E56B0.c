unsigned __int64 __fastcall sub_3E56B0(
        QT::QAbstractItemView *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  double v12; // xmm0_8
  __int64 v13; // r15
  int v14; // r13d
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rbp
  __int64 v19; // rbx
  _QWORD *v20; // r14
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rax
  const char *v24; // rsi
  _DWORD *v25; // rdi
  int v26; // ebx
  __int64 v27; // rbp
  _DWORD *v28; // rdx
  _DWORD *v29; // rax
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  _DWORD **v34; // rbp
  _DWORD *v35; // rdi
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v38; // [rsp+0h] [rbp-88h]
  __int64 v40; // [rsp+10h] [rbp-78h] BYREF
  __int128 v41; // [rsp+18h] [rbp-70h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  __int128 v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v12 = 0.0;
  v13 = a4;
  v14 = 0;
  v38 = a2;
  v44 = __readfsqword(0x28u);
  v16 = 0;
  v17 = a3[1] == 0;
  v41 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  if ( !v17 )
  {
    do
    {
      v18 = *(_QWORD *)(*a3 + 8 * v16);
      if ( *(_DWORD *)(v18 + 56) == 1 && v18 )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v18 + 376) + 128LL))(*(_QWORD *)(v18 + 376));
        v20 = *(_QWORD **)v13;
        if ( 8LL * *(_QWORD *)(v13 + 8) )
        {
          while ( v19 != (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 128LL))(*v20)
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v20 + 112LL))(
                     *v20,
                     *(_QWORD *)(v18 + 376)) )
          {
            a4 = *(_QWORD *)(v13 + 8);
            if ( ++v20 == (_QWORD *)(*(_QWORD *)v13 + 8 * a4) )
              goto LABEL_29;
          }
          if ( (unsigned int)(((__int64)v20 - *(_QWORD *)v13) >> 3) != -1 )
          {
            sub_3E5190(
              v18,
              (__int64 *)(v18 + 376),
              qword_8BA5A8,
              (int *)(v18 + 72),
              0.0,
              a6,
              a7,
              a8,
              v21,
              v22,
              a11,
              a12);
            v23 = v43;
            a2 = v42;
            if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
            {
              v42 = qvector_reserve(&v42, v42, v43 + 1, 4);
              a2 = v42;
              v23 = v43;
            }
            *(_DWORD *)(a2 + 4 * v23) = v14;
            *(_QWORD *)&v43 = v43 + 1;
            goto LABEL_13;
          }
        }
      }
      else
      {
        if ( under_debugger )
          BUG();
        interr(40281, a2, *a3, a4, 0.0);
      }
LABEL_29:
      v31 = v41;
      a2 = v40;
      if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
      {
        v40 = qvector_reserve(&v40, v40, v41 + 1, 4);
        a2 = v40;
        v31 = v41;
      }
      *(_DWORD *)(a2 + 4 * v31) = v14;
      *(_QWORD *)&v41 = v41 + 1;
LABEL_13:
      v16 = ++v14;
    }
    while ( (unsigned __int64)v14 < a3[1] );
  }
  v24 = (const char *)&v40;
  sub_3E3120((__int64 *)v38, (__int64)&v40, 0.0);
  v25 = (_DWORD *)v42;
  if ( *(_QWORD *)(v13 + 8) )
  {
    v26 = 0;
    v27 = 0;
    do
    {
      v28 = &v25[v43];
      if ( v28 == v25 )
        goto LABEL_32;
      v29 = v25;
      while ( v26 != *v29 )
      {
        if ( v28 == ++v29 )
          goto LABEL_32;
      }
      if ( v29 == v28 )
      {
LABEL_32:
        v32 = QT::QAbstractItemView::model(a1);
        v33 = operator new(0x180u);
        v34 = (_DWORD **)(*(_QWORD *)v13 + 8 * v27);
        sub_3DE430(v33, v32, 1);
        *(_BYTE *)(v33 + 372) = 0;
        *(_QWORD *)v33 = &srcitem_node_t___vtable;
        v35 = *v34;
        *(_QWORD *)(v33 + 376) = *v34;
        if ( v35 )
          ++v35[2];
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v35 + 16LL))(v35, v33 + 80);
        sub_3E2C20((__int64 *)v38, v33, *(_DWORD *)(v38 + 24));
        v24 = (const char *)(v33 + 376);
        sub_3E5190(v33, (__int64 *)(v33 + 376), qword_8BA5A8, (int *)(v33 + 72), 0.0, a6, a7, a8, v36, v37, a11, a12);
        v25 = (_DWORD *)v42;
      }
      v27 = ++v26;
    }
    while ( (unsigned __int64)v26 < *(_QWORD *)(v13 + 8) );
  }
  if ( v25 )
  {
    *(_QWORD *)&v43 = 0;
    v12 = qfree(v25, v24);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40, v24, v12);
  }
  return v44 - __readfsqword(0x28u);
}
