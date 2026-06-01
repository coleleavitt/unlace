unsigned __int64 __fastcall sub_361990(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  void **v15; // rsi
  size_t v16; // r8
  char *v17; // r15
  size_t v18; // rax
  unsigned __int64 v19; // rcx
  _BYTE *v21; // rdi
  unsigned __int64 v22; // r15
  _BYTE *v23; // rdx
  _BYTE *v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rax
  _BYTE *v27; // rsi
  __int64 v28; // rsi
  double v29; // xmm4_8
  double v30; // xmm5_8
  char *v31; // r8
  size_t v32; // r15
  __int16 v33; // ax
  void *v34; // rdi
  size_t v35; // rdx
  __int16 v36; // dx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r15
  size_t v42; // r8
  __int64 v43; // rdx
  size_t v44; // rax
  __int64 v45; // rax
  size_t v46; // [rsp+0h] [rbp-A8h]
  __int64 v47; // [rsp+0h] [rbp-A8h]
  size_t v48; // [rsp+0h] [rbp-A8h]
  size_t v49; // [rsp+0h] [rbp-A8h]
  size_t v50; // [rsp+0h] [rbp-A8h]
  char *src; // [rsp+8h] [rbp-A0h]
  void *srca; // [rsp+8h] [rbp-A0h]
  void *v53; // [rsp+10h] [rbp-98h] BYREF
  __int128 v54; // [rsp+18h] [rbp-90h]
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v56; // [rsp+50h] [rbp-58h] BYREF
  char *s; // [rsp+58h] [rbp-50h]
  unsigned __int64 v58; // [rsp+68h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v15 = ptr;
  QT::QString::toUtf8_helper((QT::QString *)&v56, (const QT::QString *)ptr);
  v17 = s;
  if ( (s || (v17 = (char *)&QT::QByteArray::_empty) != nullptr) && (v18 = strlen(v17), (v16 = v18) != 0) )
  {
    v34 = (void *)*a2;
    v35 = v18 + 1;
    if ( a2[2] < v18 + 1 )
    {
      v48 = v18 + 1;
      srca = (void *)v18;
      v38 = qvector_reserve(a2, *a2, v35, 1);
      v16 = (size_t)srca;
      v35 = v48;
      *a2 = v38;
      v34 = (void *)v38;
    }
    a2[1] = v35;
    v15 = (void **)v17;
    v46 = v16;
    memmove(v34, v17, v16);
    v16 = v46;
    *(_BYTE *)(*a2 + v46) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  if ( v56 && !_InterlockedSub((volatile signed __int32 *)v56, 1u) )
    free(v56);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v19 = a2[1];
  if ( v19 <= 1 )
    goto LABEL_11;
  v21 = (_BYTE *)*a2;
  v22 = v19 - 1;
  v23 = (_BYTE *)(*a2 + v19 - 1);
  v24 = v23;
  if ( *a2 >= (unsigned __int64)v23 )
    goto LABEL_18;
  if ( *(v23 - 1) == 32 )
  {
    while ( v21 != --v24 )
    {
      if ( *(v24 - 1) != 32 )
        goto LABEL_17;
    }
    goto LABEL_47;
  }
LABEL_17:
  v22 = v24 - v21;
  if ( v24 != v21 )
  {
LABEL_18:
    v25 = v22 + 1;
    if ( v19 < v22 + 1 )
    {
      if ( a2[2] < v25 )
      {
        v40 = qvector_reserve(a2, *a2, v22 + 1, 1);
        v19 = a2[1];
        v25 = v22 + 1;
        *a2 = v40;
        v21 = (_BYTE *)v40;
      }
      v47 = v25;
      memset(&v21[v19], 0, v25 - v19);
      v37 = *a2;
      a2[1] = v47;
      v24 = (_BYTE *)(v22 + v37);
    }
    else if ( v19 != v22 + 1 )
    {
      a2[1] = v25;
    }
    *v24 = 0;
    goto LABEL_22;
  }
LABEL_47:
  if ( !v21 )
  {
LABEL_24:
    v27 = v21;
    while ( *v27 == 32 )
    {
      if ( v23 == ++v27 )
      {
        *v21 = *v23;
        v39 = *a2;
        goto LABEL_58;
      }
    }
    if ( v21 >= v27 )
      goto LABEL_28;
    v41 = v23 - v27;
    v49 = v23 - v27 + 1;
    memmove(v21, v27, v49);
    v39 = *a2;
    v42 = v49;
    v43 = *a2;
    if ( v41 )
    {
      v44 = a2[1];
      if ( v44 < v49 )
      {
        if ( a2[2] < v49 )
        {
          v45 = qvector_reserve(a2, *a2, v49, 1);
          v42 = v49;
          *a2 = v45;
          v39 = v45;
          v44 = a2[1];
        }
        v50 = v42;
        memset((void *)(v44 + v39), 0, v42 - v44);
        v43 = *a2;
        a2[1] = v50;
      }
      else if ( v49 != v44 )
      {
        a2[1] = v49;
      }
      *(_BYTE *)(v43 + v41) = 0;
      goto LABEL_60;
    }
LABEL_58:
    if ( v39 )
    {
      a2[1] = 0;
      qfree(v39, v27);
      *a2 = 0;
      a2[2] = 0;
    }
LABEL_60:
    if ( (unsigned __int64)a2[1] <= 1 )
      goto LABEL_11;
    goto LABEL_28;
  }
  a2[1] = 0;
  qfree(v21, (const char *)v15, v23, v19, v16);
  *a2 = 0;
  a2[2] = 0;
LABEL_22:
  v26 = a2[1];
  if ( v26 <= 1 )
  {
LABEL_11:
    *((_WORD *)a2 + 12) = 0;
    return v58 - __readfsqword(0x28u);
  }
  v21 = (_BYTE *)*a2;
  v23 = (_BYTE *)(*a2 + v26 - 1);
  if ( *a2 < (unsigned __int64)v23 )
    goto LABEL_24;
LABEL_28:
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v28 = (__int64)ptr;
  QT::QString::toUtf8_helper((QT::QString *)&v56, (const QT::QString *)ptr);
  v31 = s;
  v53 = nullptr;
  v54 = 0;
  if ( s || (v31 = (char *)&QT::QByteArray::_empty) != nullptr )
  {
    src = v31;
    v32 = strlen(v31);
    v28 = (__int64)src;
    v53 = (void *)qvector_reserve(&v53, 0, v32 + 1, 1);
    *(_QWORD *)&v54 = v32 + 1;
    memmove(v53, src, v32);
    *((_BYTE *)v53 + v32) = 0;
  }
  if ( v56 && !_InterlockedSub((volatile signed __int32 *)v56, 1u) )
    free(v56);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( (unsigned __int64)v54 <= 1 )
    goto LABEL_37;
  v28 = a12;
  if ( !(unsigned __int8)sub_357F80((const char **)&v56, a12, nullptr, 0.0, a4, a5, a6, v29, v30, a9, a10) )
  {
    *(_BYTE *)(a1 + 68) = 0;
LABEL_37:
    v33 = *((_WORD *)a2 + 12);
    goto LABEL_38;
  }
  v36 = (__int16)v56;
  if ( (__int64)v56 < 0 )
  {
LABEL_39:
    *((_WORD *)a2 + 12) = 443;
    goto LABEL_40;
  }
  if ( (__int64)v56 <= 0xFFFF )
  {
    *((_WORD *)a2 + 12) = (_WORD)v56;
    v33 = v36;
LABEL_38:
    if ( v33 )
      goto LABEL_40;
    goto LABEL_39;
  }
  v28 = 0xFFFFFFFFLL;
  *((_WORD *)a2 + 12) = -1;
LABEL_40:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53, (const char *)v28);
  }
  return v58 - __readfsqword(0x28u);
}
