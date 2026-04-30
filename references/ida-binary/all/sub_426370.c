unsigned __int64 __fastcall sub_426370(__int64 a1, const char **a2, char a3)
{
  __int64 v4; // rax
  QT::QAbstractItemView *Child_helper; // rax
  QT::QAbstractItemView *v6; // rbx
  const __m128i **v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r12
  void *v11; // r14
  const char *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r15
  const char *v16; // r14
  const char *v17; // rsi
  const char *v18; // rdi
  const char *v19; // rsi
  const char *v21; // rax
  const char *v22; // rdi
  __int64 v23; // r15
  const char *v24; // r14
  __int64 v25; // [rsp+0h] [rbp-118h]
  const char *v26; // [rsp+0h] [rbp-118h]
  char *s1; // [rsp+10h] [rbp-108h]
  char *s2; // [rsp+18h] [rbp-100h]
  __int64 v30; // [rsp+28h] [rbp-F0h]
  __m128i v31; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+48h] [rbp-D0h]
  void *src; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-B0h]
  char *v36; // [rsp+80h] [rbp-98h] BYREF
  __int128 v37; // [rsp+88h] [rbp-90h]
  __int128 v38; // [rsp+98h] [rbp-80h]
  __int64 v39; // [rsp+A8h] [rbp-70h]
  __int64 v40; // [rsp+B0h] [rbp-68h]
  __int128 v41; // [rsp+B8h] [rbp-60h]
  char v42; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v43; // [rsp+D8h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v4 = sub_41A4D0("Vault files");
  if ( v4 )
  {
    Child_helper = (QT::QAbstractItemView *)QT::qt_qFindChild_helper(v4, 0, 0, &off_878400, 1);
    v6 = Child_helper;
    if ( Child_helper )
    {
      QT::QAbstractItemView::model(Child_helper);
      v7 = *(const __m128i ***)(a1 + 200);
      if ( !v7 )
        goto LABEL_17;
      v31 = _mm_loadu_si128(*v7);
      v8 = QT::QAbstractItemView::model(v6);
      v9 = *(_QWORD **)(v8 + 216);
      if ( !v9 )
        v9 = *(_QWORD **)(v8 + 208);
      v32 = 0;
      v33 = 0;
      dirtree_get_abspath_by_cursor(&v32, *v9, &v31, 0);
      sub_42B280(&src, &v32);
      v10 = v35;
      v36 = nullptr;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v42 = 0;
      s1 = nullptr;
      v41 = 0;
      if ( v35 >= 2 )
      {
        v11 = src;
        v36 = (char *)qvector_reserve(&v36, 0, v35, 1);
        *(_QWORD *)&v37 = v10;
        memmove(v36, v11, v10 - 1);
        v36[v10 - 1] = 0;
        s1 = v36;
      }
      v12 = *a2;
      v13 = 80LL * (_QWORD)a2[1];
      v30 = (__int64)&(*a2)[v13];
      v14 = 0xCCCCCCCCCCCCCCCDLL * (v13 >> 4);
      if ( a3 )
      {
        v25 = v37;
LABEL_10:
        if ( v14 <= 0 )
          goto LABEL_32;
        while ( 1 )
        {
          v15 = v14 >> 1;
          v16 = &v12[80 * (v14 >> 1)];
          if ( *((_QWORD *)v16 + 1) )
          {
            v17 = *(const char **)v16;
            v18 = &::s1;
            if ( !v25 )
              goto LABEL_14;
          }
          else
          {
            v17 = &::s1;
            if ( !v25 )
            {
LABEL_43:
              v12 = v16 + 80;
              v14 = v14 - 1 - v15;
              goto LABEL_10;
            }
          }
          v18 = s1;
LABEL_14:
          if ( strcmp(v18, v17) >= 0 )
            goto LABEL_43;
          v14 >>= 1;
          if ( v15 <= 0 )
            goto LABEL_32;
        }
      }
      v21 = &::s1;
      v26 = *a2;
      if ( (_QWORD)v37 )
        v21 = s1;
      s2 = (char *)v21;
      while ( v14 > 0 )
      {
        while ( 1 )
        {
          v22 = &::s1;
          v23 = v14 >> 1;
          v24 = &v26[80 * (v14 >> 1)];
          if ( *((_QWORD *)v24 + 1) )
            v22 = *(const char **)v24;
          if ( strcmp(v22, s2) < 0 )
            break;
          v14 >>= 1;
          if ( v23 <= 0 )
            goto LABEL_30;
        }
        v26 = v24 + 80;
        v14 = v14 - 1 - v23;
      }
LABEL_30:
      v19 = nullptr;
      if ( v26 != v12 )
      {
        v12 = v26 - 80;
LABEL_32:
        v19 = nullptr;
        if ( v12 != (const char *)v30 )
          v19 = v12;
      }
      if ( s1 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(s1, v19);
      }
      if ( src )
      {
        v35 = 0;
        qfree(src, v19);
      }
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32, v19);
      }
      if ( !v19 )
      {
LABEL_17:
        v19 = *a2;
        if ( !a3 )
          v19 = &v19[80 * (_QWORD)a2[1] - 80];
      }
      sub_42B1D0(&src, v19);
      sub_429170(v6, &src);
      if ( src )
      {
        v35 = 0;
        qfree(src, (const char *)&src);
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}
