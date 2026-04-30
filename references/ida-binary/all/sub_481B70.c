__int64 __fastcall sub_481B70(__int64 a1, const QT::QIcon *a2, __int64 a3, double a4, __m128 a5)
{
  double v5; // xmm0_8
  unsigned int v7; // r14d
  const char *v8; // rax
  char *v9; // r15
  char *v10; // rbp
  size_t v11; // r12
  const char *v12; // rcx
  const char *v13; // rsi
  char *v14; // r13
  const char *v15; // rdi
  int v16; // eax
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rax
  const char *v21; // rsi
  _QWORD *v22; // rdi
  _DWORD *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // r12
  void **v26; // rax
  void **v27; // rbp
  void **v28; // r13
  char *v29; // rdi
  void **v30; // r15
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  _QWORD *v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rbp
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // r12
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v45; // rax
  size_t v46; // r13
  __int64 v47; // r12
  const char *v48; // rsi
  char *v49; // rax
  __int64 v50; // rdx
  const char *v51; // rsi
  const char *v52; // rdi
  unsigned int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  void *v62; // rax
  void *v63; // rsi
  __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  const char *v66; // [rsp+0h] [rbp-B8h]
  void **v67; // [rsp+0h] [rbp-B8h]
  __int64 v68; // [rsp+0h] [rbp-B8h]
  char *s2; // [rsp+8h] [rbp-B0h]
  char *v71; // [rsp+18h] [rbp-A0h]
  unsigned int v72; // [rsp+24h] [rbp-94h] BYREF
  __int64 v73; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v74; // [rsp+30h] [rbp-88h] BYREF
  void *v75; // [rsp+38h] [rbp-80h] BYREF
  void *src; // [rsp+40h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+48h] [rbp-70h]
  void *v78; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v79; // [rsp+68h] [rbp-50h]
  char v80; // [rsp+70h] [rbp-48h]
  unsigned __int64 v81; // [rsp+78h] [rbp-40h]

  v5 = 0.0;
  v81 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a1 + 648);
  *(_OWORD *)n = 0;
  src = nullptr;
  *(_DWORD *)(a1 + 648) = v7 + 1;
  if ( a3 )
  {
    v8 = &s1;
    if ( *(_QWORD *)(a3 + 8) )
      v8 = *(const char **)a3;
    sub_169A50((__int64 *)&src, (__int64)"%s", v8);
  }
  else
  {
    sub_169A50((__int64 *)&src, (__int64)"%d.png", v7);
  }
  v9 = *(char **)(a1 + 616);
  v10 = (char *)(a1 + 608);
  v71 = (char *)(a1 + 608);
  if ( !v9 )
  {
    v10 = (char *)(a1 + 608);
    goto LABEL_76;
  }
  v11 = n[0];
  v12 = &s1;
  s2 = (char *)src;
  if ( n[0] )
    v12 = (const char *)src;
  v66 = v12;
  while ( 1 )
  {
    v18 = *((_QWORD *)v9 + 5);
    if ( !v11 )
      break;
    if ( v18 )
      goto LABEL_18;
    v13 = s2;
    v14 = v9;
    v15 = &s1;
LABEL_11:
    v16 = strcmp(v15, v13);
    v17 = *((char **)v9 + 2);
    v9 = *((char **)v9 + 3);
    if ( v16 >= 0 )
    {
      v10 = v14;
      v9 = v17;
    }
    if ( !v9 )
      goto LABEL_20;
  }
  if ( v18 )
  {
LABEL_18:
    v15 = *((const char **)v9 + 4);
    v13 = v66;
    v14 = v9;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v19 = *((_QWORD *)v9 + 2);
    if ( !v19 )
      break;
    v10 = v9;
    v9 = *((char **)v9 + 2);
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_18;
  }
  v10 = v9;
LABEL_20:
  if ( v71 == v10 )
    goto LABEL_76;
  if ( !*((_QWORD *)v10 + 5) )
  {
    v21 = &s1;
    if ( v11 )
      goto LABEL_25;
    goto LABEL_26;
  }
  v20 = &s1;
  if ( v11 )
    v20 = s2;
  v21 = *((const char **)v10 + 4);
  s2 = (char *)v20;
LABEL_25:
  if ( strcmp(s2, v21) < 0 )
  {
LABEL_76:
    v45 = operator new(0x40u);
    v46 = n[0];
    v5 = 0.0;
    *(_QWORD *)(v45 + 32) = 0;
    v47 = v45;
    *(_OWORD *)(v45 + 40) = 0;
    if ( v46 )
    {
      v62 = (void *)qalloc_or_throw(v46);
      *(_QWORD *)(v47 + 32) = v62;
      v63 = src;
      *(_QWORD *)(v47 + 48) = v46;
      memcpy(v62, v63, v46);
      *(_QWORD *)(v47 + 40) = v46;
    }
    *(_DWORD *)(v47 + 56) = 0;
    v48 = v10;
    v49 = (char *)sub_47E870((_QWORD *)(a1 + 600), v10, v47 + 32);
    v10 = v49;
    if ( v50 )
    {
      if ( v49 || v71 == (char *)v50 )
      {
        v54 = 1;
      }
      else
      {
        v51 = &s1;
        if ( *(_QWORD *)(v50 + 40) )
          v51 = *(const char **)(v50 + 32);
        v52 = &s1;
        if ( *(_QWORD *)(v47 + 40) )
          v52 = *(const char **)(v47 + 32);
        v68 = v50;
        v53 = strcmp(v52, v51);
        v50 = v68;
        v54 = v53 >> 31;
      }
      v10 = (char *)v47;
      std::_Rb_tree_insert_and_rebalance(v54, v47, v50, v71);
      ++*(_QWORD *)(a1 + 640);
    }
    else if ( v47 )
    {
      v55 = *(_QWORD *)(v47 + 32);
      if ( v55 )
      {
        *(_QWORD *)(v47 + 40) = 0;
        v5 = qfree(v55, v48);
      }
      operator delete((void *)v47, 0x40u);
    }
  }
LABEL_26:
  *((_DWORD *)v10 + 14) = v7;
  v22 = *(_QWORD **)(a1 + 584);
  v72 = v7;
  if ( !v22 )
  {
    v78 = nullptr;
    goto LABEL_104;
  }
  if ( *(_DWORD *)v22 <= 1u )
  {
    if ( v22[1] < v22[2] >> 1 )
    {
      sub_480EE0(v22, (int *)&v72, a2);
    }
    else
    {
      QT::QIcon::QIcon((QT::QIcon *)&v73, a2);
      sub_480B40((__int64)&v78, *(_QWORD **)(a1 + 584), (int *)&v72);
      v58 = *((_QWORD *)v78 + 4) + 144 * (v79 >> 7);
      v59 = *(_QWORD *)(v58 + 128) + 16LL * *(unsigned __int8 *)(v58 + (v79 & 0x7F));
      v60 = v59;
      if ( v80 )
      {
        v64 = v73;
        v75 = nullptr;
        v73 = 0;
        v65 = *(_QWORD *)(v59 + 8);
        *(_QWORD *)(v60 + 8) = v64;
        v74 = v65;
        QT::QIcon::~QIcon((QT::QIcon *)&v74);
        QT::QIcon::~QIcon((QT::QIcon *)&v75);
      }
      else
      {
        *(_DWORD *)v59 = v72;
        v61 = v73;
        v73 = 0;
        *(_QWORD *)(v60 + 8) = v61;
      }
      QT::QIcon::~QIcon((QT::QIcon *)&v73);
    }
  }
  else
  {
    v78 = v22;
    if ( *(_DWORD *)v22 != -1 )
      _InterlockedAdd((volatile signed __int32 *)v22, 1u);
    v23 = *(_DWORD **)(a1 + 584);
    if ( v23 )
    {
      if ( *v23 > 1u )
        goto LABEL_32;
      goto LABEL_33;
    }
LABEL_104:
    v23 = nullptr;
LABEL_32:
    v24 = sub_47EA40(v23, v5, a5);
    *(_QWORD *)(a1 + 584) = v24;
    v23 = v24;
LABEL_33:
    sub_480EE0(v23, (int *)&v72, a2);
    if ( v78 )
    {
      if ( *(_DWORD *)v78 != -1 && !_InterlockedSub((volatile signed __int32 *)v78, 1u) )
      {
        v25 = v78;
        if ( v78 )
        {
          v26 = *((void ***)v78 + 4);
          if ( v26 )
          {
            v27 = &v26[18 * (_QWORD)*(v26 - 1)];
            if ( v26 == v27 )
            {
              v32 = 0;
            }
            else
            {
              v28 = v27 - 2;
              do
              {
                v29 = (char *)*v28;
                v67 = v27;
                v27 -= 18;
                if ( *v28 )
                {
                  v30 = v27;
                  if ( v27 == v28 )
                    goto LABEL_46;
                  do
                  {
                    v31 = *(unsigned __int8 *)v30;
                    if ( (_BYTE)v31 != 0xFF )
                    {
                      QT::QIcon::~QIcon((QT::QIcon *)&v29[16 * v31 + 8]);
                      v29 = (char *)*v28;
                    }
                    v30 = (void **)((char *)v30 + 1);
                  }
                  while ( v28 != v30 );
                  if ( v29 )
LABEL_46:
                    operator delete[](v29);
                }
                v28 -= 18;
              }
              while ( (void **)v25[4] != v27 );
              v32 = 144LL * (_QWORD)*(v67 - 19);
            }
            operator delete[](v27 - 1, v32 + 8);
          }
          operator delete(v25, 0x28u);
        }
      }
    }
  }
  v33 = QT::QIcon::cacheKey(a2);
  v34 = *(_QWORD **)(a1 + 592);
  v74 = v33;
  if ( !v34 )
  {
    v75 = nullptr;
    goto LABEL_102;
  }
  if ( *(_DWORD *)v34 <= 1u )
  {
    sub_4817E0((__int64)&v78, v34, &v74);
    v56 = *((_QWORD *)v78 + 4) + 144 * (v79 >> 7);
    v57 = *(_QWORD *)(v56 + 128) + 16LL * *(unsigned __int8 *)(v56 + (v79 & 0x7F));
    if ( !v80 )
      *(_QWORD *)v57 = v74;
    *(_DWORD *)(v57 + 8) = v7;
  }
  else
  {
    v75 = v34;
    if ( *(_DWORD *)v34 != -1 )
      _InterlockedAdd((volatile signed __int32 *)v34, 1u);
    v34 = *(_QWORD **)(a1 + 592);
    if ( v34 )
    {
      if ( *(_DWORD *)v34 > 1u )
        goto LABEL_57;
      goto LABEL_58;
    }
LABEL_102:
    v34 = nullptr;
LABEL_57:
    v35 = sub_47EE80(v34, v5, a5);
    *(_QWORD *)(a1 + 592) = v35;
    v34 = v35;
LABEL_58:
    sub_4817E0((__int64)&v78, v34, &v74);
    v36 = *((_QWORD *)v78 + 4) + 144 * (v79 >> 7);
    v37 = *(_QWORD *)(v36 + 128) + 16LL * *(unsigned __int8 *)(v36 + (v79 & 0x7F));
    if ( !v80 )
      *(_QWORD *)v37 = v74;
    *(_DWORD *)(v37 + 8) = v7;
    if ( v75 )
    {
      if ( *(_DWORD *)v75 != -1 && !_InterlockedSub((volatile signed __int32 *)v75, 1u) )
      {
        v38 = v75;
        if ( v75 )
        {
          v39 = *((_QWORD *)v75 + 4);
          if ( v39 )
          {
            v40 = v39 + 144LL * *(_QWORD *)(v39 - 8);
            if ( v39 == v40 )
            {
              v43 = 0;
            }
            else
            {
              do
              {
                v41 = v40;
                v42 = *(void **)(v40 - 16);
                v40 -= 144;
                if ( v42 )
                  operator delete[](v42);
              }
              while ( v38[4] != v40 );
              v43 = 144LL * *(_QWORD *)(v41 - 152);
            }
            operator delete[]((void *)(v40 - 8), v43 + 8);
          }
          v34 = &qword_28;
          operator delete(v38, 0x28u);
        }
      }
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, (const char *)v34);
  }
  return v7;
}
