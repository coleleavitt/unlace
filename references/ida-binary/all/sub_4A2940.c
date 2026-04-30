unsigned __int64 __fastcall sub_4A2940(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  void (*v14)(); // rdx
  __int64 v16; // rax
  int v17; // r14d
  void (*v18)(void); // rax
  int v19; // eax
  int v20; // r15d
  QT::QAbstractItemView *v21; // rdi
  __int64 v22; // rax
  QT::QAbstractItemView *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r10
  __int64 v27; // rbp
  __int64 v28; // rdi
  __int64 v29; // r10
  __int64 *v30; // r8
  __int64 v31; // rsi
  char v32; // r9
  QT::QAbstractItemView *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  __int64 v40; // rbp
  unsigned __int64 v41; // rdx
  __int64 *v42; // rbp
  __int64 *i; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r12
  __int64 v48; // rax
  struct _Unwind_Exception *v49; // rbx
  __int64 v50; // [rsp+10h] [rbp-A8h]
  _QWORD v51[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v52; // [rsp+50h] [rbp-68h] BYREF
  __m128i si128; // [rsp+58h] [rbp-60h]
  char v54; // [rsp+68h] [rbp-50h]
  unsigned __int64 v55; // [rsp+78h] [rbp-40h]

  v14 = nullsub_263;
  v16 = *(_QWORD *)a1;
  v55 = __readfsqword(0x28u);
  v17 = a4;
  v18 = *(void (**)(void))(v16 + 672);
  if ( v18 != nullsub_263 )
    v18();
  *(_QWORD *)(a1 + 2360) = 0;
  if ( !a3 )
    return v55 - __readfsqword(0x28u);
  v19 = *(_DWORD *)(a1 + 2376);
  v20 = *(_DWORD *)(a1 + 2008) & 0x100;
  if ( v19 == 1 )
  {
    v51[0] = -1;
    v24 = *(QT::QAbstractItemView **)(a1 + 2472);
    v51[1] = 0;
    v51[2] = 0;
    v25 = QT::QAbstractItemView::model(v24);
    v26 = a3[1];
    v27 = *a3;
    v52 = 0;
    v28 = v25;
    v54 = 0;
    v29 = v27 + 32 * v26;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DDCF0);
    if ( v29 != v27 )
    {
      do
      {
        while ( *(_QWORD *)(v27 + 8) != -2 )
        {
          v27 += 32;
          if ( v27 == v29 )
            goto LABEL_16;
        }
        v30 = &v52;
        v50 = v29;
        if ( a3[4] == -2 )
          v30 = a3 + 3;
        (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64, __int64 *, _QWORD))(*(_QWORD *)v28 + 432LL))(
          v28,
          a2,
          v51,
          v27,
          v30,
          *(_QWORD *)(a1 + 2472));
        v29 = v50;
        v27 += 32;
      }
      while ( v27 != v50 );
    }
LABEL_16:
    sub_4DE2C0();
    v31 = a1 + 2352;
    v32 = a3[4] == -2;
    v33 = *(QT::QAbstractItemView **)(a1 + 2384);
    if ( !v20 )
      v31 = 0;
  }
  else
  {
    if ( v19 != 2 )
    {
      if ( v19 )
      {
        if ( !under_debugger )
        {
          v49 = (struct _Unwind_Exception *)interr(40832, a2, v14, a4, *(double *)a5.m128_u64);
          sub_4DE2C0();
          _Unwind_Resume(v49);
        }
        BUG();
      }
      v52 = -1;
      v21 = *(QT::QAbstractItemView **)(a1 + 2472);
      si128 = 0u;
      v22 = QT::QAbstractItemView::model(v21);
      (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)v22 + 432LL))(
        v22,
        a2,
        &v52,
        *a3,
        a3 + 3,
        *(_QWORD *)(a1 + 2472));
      if ( v20 )
      {
        v34 = sub_4E07A0(a1 + 104, -2);
        v40 = v34;
        if ( v34 )
        {
          v41 = *(_QWORD *)(v34 + 16);
          if ( *(_QWORD *)(a1 + 2368) < v41 )
          {
            *(_QWORD *)(a1 + 2352) = qvector_reserve(a1 + 2352, *(_QWORD *)(a1 + 2352), v41, 8);
            v41 = *(_QWORD *)(v40 + 16);
          }
          v42 = *(__int64 **)(v40 + 8);
          for ( i = &v42[v41]; i != v42; ++*(_QWORD *)(a1 + 2360) )
          {
            v45 = sub_4A0960(a1, *v42, 0, a5, a6, a7, a8, v38, v39, a11, a12, v35, v36, v37);
            v46 = *(_QWORD *)(a1 + 2352);
            v47 = v45;
            v48 = *(_QWORD *)(a1 + 2360);
            if ( *(_QWORD *)(a1 + 2368) < (unsigned __int64)(v48 + 1) )
            {
              v44 = qvector_reserve(a1 + 2352, v46, v48 + 1, 8);
              *(_QWORD *)(a1 + 2352) = v44;
              v46 = v44;
              v48 = *(_QWORD *)(a1 + 2360);
            }
            ++v42;
            *(_QWORD *)(v46 + 8 * v48) = v47;
          }
        }
      }
      return v55 - __readfsqword(0x28u);
    }
    v31 = a1 + 2352;
    v33 = *(QT::QAbstractItemView **)(a1 + 2384);
    if ( !v20 )
      v31 = 0;
    v32 = 0;
  }
  return sub_48E8B0(v33, v31, a2, (__int64)a3, v17, v32);
}
