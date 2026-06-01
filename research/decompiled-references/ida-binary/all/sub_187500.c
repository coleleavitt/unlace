__int64 __fastcall sub_187500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  const char *v13; // rdx
  __int64 m128i_i64; // rsi
  size_t v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  size_t v20; // rax
  const char *v21; // rbx
  size_t v22; // rdx
  __int64 v23; // r9
  __m128i *v24; // rbp
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int8 *v33; // r12
  unsigned __int8 *v34; // rbp
  __int64 v35; // rbx
  _QWORD *v36; // rbx
  __int64 v37; // r15
  __int64 v38; // r12
  int *v39; // rbx
  __int32 v40; // r13d
  void *v41; // rax
  __int32 *v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  volatile signed __int32 *v45; // rax
  unsigned int v46; // eax
  __int64 v47; // r15
  __int64 v48; // r14
  __int64 v49; // rax
  __m128i *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r14
  char *v53; // r13
  __int64 v54; // rdx
  unsigned __int64 v55; // rax
  __m128i *v56; // r15
  __int32 v57; // ecx
  __int32 v58; // edx
  __int32 *v59; // rax
  __m128i *i; // rax
  unsigned int v61; // ebp
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // r12
  __int64 v65; // rbx
  __int64 v66; // rdi
  void *v68; // r12
  struct _Unwind_Exception *v69; // r14
  void **v71; // [rsp+10h] [rbp-128h]
  unsigned __int64 v72; // [rsp+10h] [rbp-128h]
  __int64 v73; // [rsp+18h] [rbp-120h]
  void **v74; // [rsp+20h] [rbp-118h]
  __int64 v75; // [rsp+28h] [rbp-110h]
  __int64 v76; // [rsp+30h] [rbp-108h]
  size_t v77; // [rsp+38h] [rbp-100h]
  void **v78; // [rsp+48h] [rbp-F0h]
  __int64 v79; // [rsp+50h] [rbp-E8h]
  void **v80; // [rsp+58h] [rbp-E0h]
  unsigned int v81; // [rsp+60h] [rbp-D8h]
  char v82; // [rsp+67h] [rbp-D1h]
  __int64 *v83; // [rsp+68h] [rbp-D0h]
  __int64 v84; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v85; // [rsp+78h] [rbp-C0h]
  void *v86; // [rsp+90h] [rbp-A8h] BYREF
  __m128i *v87; // [rsp+98h] [rbp-A0h]
  __int64 v88; // [rsp+A0h] [rbp-98h]
  void *v89[4]; // [rsp+B0h] [rbp-88h] BYREF
  void *ptr; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-60h]
  __int64 v92; // [rsp+E0h] [rbp-58h]
  __int64 v93; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v94; // [rsp+F8h] [rbp-40h]

  v81 = a2;
  v82 = a3;
  v94 = __readfsqword(0x28u);
  if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 80) )
  {
    v69 = (struct _Unwind_Exception *)sub_1851C0(a5, a1, a2, a3, a4);
    ptr = v8;
    v91 = v9;
    v92 = v10;
    v93 = v11;
    sub_186C60(v80);
    sub_186C60(v71);
    sub_1805D0(v83, a2, v5, v6, v7);
    _Unwind_Resume(v69);
  }
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * (int)a2);
  v85 = 0;
  v13 = &s1;
  v84 = 0;
  if ( *(_QWORD *)(v12 + 40) )
    v13 = *(const char **)(v12 + 32);
  m128i_i64 = 0;
  sub_4B1970(&v84, 0, v13);
  if ( !(_QWORD)v85 )
  {
LABEL_151:
    v63 = v84;
    v61 = -1;
    if ( v84 )
      goto LABEL_113;
    return v61;
  }
  v73 = 0;
  while ( 2 )
  {
    v18 = v84 + 24 * v73;
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 )
    {
      v20 = v19 - 1;
      v21 = *(const char **)v18;
      v22 = v20 >> 63;
    }
    else
    {
      LOBYTE(v22) = 0;
      v20 = 0;
      v21 = &s1;
    }
    if ( !v21 || (_BYTE)v22 )
    {
      v20 = 0;
      if ( v21 )
        v20 = strlen(v21);
    }
    QT::QString::fromUtf8(v89, v20, v21);
    m128i_i64 = (__int64)v89;
    QT::QString::toLower_helper((QT::QString *)&ptr, (QT::QString *)v89);
    v24 = *(__m128i **)(a1 + 112);
    if ( !v24 )
    {
      v45 = (volatile signed __int32 *)ptr;
      if ( !ptr )
      {
        if ( v89[0] && !_InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
          free(v89[0]);
        goto LABEL_105;
      }
      v39 = nullptr;
      v38 = 0;
      goto LABEL_50;
    }
    v25 = v91;
    v26 = v92;
    v27 = QT::qHash(v92, v91, v24[1].m128i_i64[1]);
    v28 = v24[2].m128i_i64[0];
    m128i_i64 = (__int64)v74;
    v29 = v27;
    v30 = v75;
    v72 = v24[1].m128i_u64[0];
    v31 = v76;
    v32 = v29 & (v72 - 1);
    v23 = v32 & 0x7F;
    v15 = v77;
    v16 = v28 + 144 * (v32 >> 7);
LABEL_12:
    v33 = (unsigned __int8 *)(v16 + 128);
LABEL_13:
    v34 = &v33[v23 - 128];
    while ( 1 )
    {
      v35 = *v34;
      if ( v35 == 255 )
      {
        v74 = (void **)m128i_i64;
        v75 = v30;
        v76 = v31;
        v77 = v15;
        goto LABEL_48;
      }
      v36 = (_QWORD *)(*(_QWORD *)v33 + 32 * v35);
      v30 = v25;
      v15 = v36[1];
      if ( v26 == v36[2] )
      {
        v30 = v26;
        m128i_i64 = v36[1];
        v31 = QT::QtPrivate::equalStrings(v26, m128i_i64, v26, v25);
        v16 = (unsigned int)v31;
        if ( (_BYTE)v31 )
          break;
      }
      if ( v33 == ++v34 )
      {
        v23 = 0;
        v44 = (__int64)&v33[-v28 + 16];
        v33 += 144;
        v17 = v72 >> 7;
        v16 = 0x8E38E38E38E38E39LL * (v44 >> 4);
        if ( v16 != v72 >> 7 )
          goto LABEL_13;
        v16 = v28;
        goto LABEL_12;
      }
    }
    v74 = (void **)m128i_i64;
    v75 = v26;
    v76 = v31;
    v77 = v15;
    if ( v36 )
    {
      v37 = v36[3];
      if ( v37 )
      {
        v38 = 0;
        v24 = nullptr;
        v39 = nullptr;
        while ( 1 )
        {
          v40 = *(_DWORD *)v37;
          if ( !v39 )
            goto LABEL_21;
          if ( *v39 > 1 )
            break;
          while ( 1 )
          {
            v43 = ((unsigned __int64)v39 + 31) & 0xFFFFFFFFFFFFFFF0LL;
            v16 = (__int64)((__int64)v24->m128i_i64 - v43) >> 2;
            v15 = *((_QWORD *)v39 + 1) - v16;
            if ( v15 == v38 )
            {
              if ( v38 || (__m128i *)v43 == v24 )
                goto LABEL_27;
              v24[-1].m128i_i32[3] = v40;
              v38 = 1;
              v24 = (__m128i *)((char *)v24 - 4);
            }
            else
            {
              v24->m128i_i32[v38++] = v40;
            }
LABEL_38:
            if ( *v39 > 1 )
              break;
            v37 = *(_QWORD *)(v37 + 8);
            if ( !v37 )
            {
LABEL_122:
              v45 = (volatile signed __int32 *)ptr;
              if ( !ptr )
                goto LABEL_52;
              goto LABEL_50;
            }
            v40 = *(_DWORD *)v37;
            if ( *v39 > 1 )
              goto LABEL_27;
          }
LABEL_24:
          m128i_i64 = 0;
          v86 = v39;
          v87 = v24;
          v88 = v38;
          sub_187120((__int64)&v86, 0, 0, 0, v17, v23);
          v37 = *(_QWORD *)(v37 + 8);
          v39 = (int *)v86;
          v24 = v87;
          v38 = v88;
          if ( !v37 )
            goto LABEL_122;
        }
LABEL_27:
        if ( *v39 <= 1 )
        {
          v16 = *((_QWORD *)v39 + 1);
          m128i_i64 = (__int64)v24->m128i_i64 - (((unsigned __int64)v39 + 31) & 0xFFFFFFFFFFFFFFF0LL);
          v15 = m128i_i64 >> 2;
          if ( v16 - v38 - (m128i_i64 >> 2) > 0 )
          {
            v42 = &v24->m128i_i32[v38];
LABEL_37:
            *v42 = v40;
            ++v38;
            goto LABEL_38;
          }
          if ( m128i_i64 > 0 && 3 * v38 < 2 * v16 )
          {
            v16 = (__int64)v24->m128i_i64 - 4 * v15;
            v15 = 4 * v38;
            if ( v38 && (__m128i *)v16 != v24 && v24 && v16 )
            {
              m128i_i64 = (__int64)v24;
              v41 = memmove((void *)v16, v24, v15);
              v15 = 4 * v38;
              v16 = (__int64)v41;
            }
            v42 = (__int32 *)(v16 + v15);
            v24 = (__m128i *)v16;
            goto LABEL_37;
          }
        }
LABEL_21:
        v86 = v39;
        v87 = v24;
        v88 = v38;
        sub_187120((__int64)&v86, 0, 1, 0, v17, v23);
        v24 = v87;
        v16 = v88;
        v39 = (int *)v86;
        m128i_i64 = (__int64)v87->m128i_i64 + 4 * v38;
        if ( v38 < v88 )
        {
          v79 = v88;
          v78 = (void **)((char *)v87 + 4 * v38);
          memmove((void *)(m128i_i64 + 4), (const void *)m128i_i64, 4 * (v88 - v38));
          v16 = v79;
          m128i_i64 = (__int64)v78;
        }
        *(_DWORD *)m128i_i64 = v40;
        v38 = v16 + 1;
        if ( !v39 )
          goto LABEL_24;
        goto LABEL_38;
      }
    }
LABEL_48:
    v45 = (volatile signed __int32 *)ptr;
    if ( ptr )
    {
      v39 = nullptr;
      v38 = 0;
      v24 = nullptr;
LABEL_50:
      if ( !_InterlockedSub(v45, 1u) )
        free(ptr);
LABEL_52:
      if ( !v89[0] || _InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
        goto LABEL_55;
      goto LABEL_54;
    }
    if ( !v89[0] || _InterlockedSub((volatile signed __int32 *)v89[0], 1u) )
      goto LABEL_105;
    v39 = nullptr;
    v24 = nullptr;
    v38 = 0;
LABEL_54:
    free(v89[0]);
LABEL_55:
    if ( v38 <= 1 )
    {
LABEL_102:
      if ( v39 && !_InterlockedSub(v39, 1u) )
        goto LABEL_104;
      goto LABEL_105;
    }
    v46 = v38 - 1;
    if ( (int)v38 - 1 < 0 )
      goto LABEL_73;
    v47 = 4LL * (int)v46;
    v15 = (int)v46 - (unsigned __int64)v46;
    v48 = 4 * v15;
    while ( 1 )
    {
      if ( !v39 || *v39 > 1 )
      {
        m128i_i64 = 0;
        v86 = v39;
        v87 = v24;
        v88 = v38;
        sub_187120((__int64)&v86, 0, 0, 0, v17, v23);
        v39 = (int *)v86;
        v24 = v87;
        v38 = v88;
      }
      v16 = a1;
      v50 = (__m128i *)((char *)v24 + v47);
      v51 = *(int *)((char *)v24->m128i_i32 + v47);
      if ( (unsigned int)v51 >= *(_DWORD *)(a1 + 80) )
      {
        if ( under_debugger )
          BUG();
        interr(1321, m128i_i64, v15, a1, 0.0);
        goto LABEL_151;
      }
      m128i_i64 = a1;
      v15 = *(_QWORD *)(a1 + 72);
      if ( *(int *)(*(_QWORD *)(v15 + 8 * v51) + 120LL) > 3 )
        break;
      v49 = v47 - 4;
      if ( v48 == v47 )
        goto LABEL_72;
LABEL_59:
      v47 = v49;
    }
    if ( !v39 || *v39 > 1 )
    {
      v86 = v39;
      v87 = v24;
      v88 = v38;
      sub_187120((__int64)&v86, 0, 0, 0, v17, v23);
      v24 = v87;
      v39 = (int *)v86;
      v38 = v88;
      v50 = (__m128i *)((char *)v87 + v47);
    }
    m128i_i64 = (__int64)v50->m128i_i64 + 4;
    v15 = (size_t)v24 + 4 * v38;
    if ( v50 == v24 )
    {
      if ( m128i_i64 != v15 )
        v24 = (__m128i *)((char *)v50->m128i_i64 + 4);
    }
    else if ( m128i_i64 != v15 )
    {
      memmove(v50, (const void *)m128i_i64, v15 - m128i_i64);
    }
    --v38;
    v49 = v47 - 4;
    if ( v48 != v47 )
      goto LABEL_59;
LABEL_72:
    if ( v38 <= 1 )
      goto LABEL_102;
LABEL_73:
    if ( !v82 )
    {
      if ( v39 && *v39 <= 1 )
      {
        v52 = 4 * v38;
        v53 = &v24->m128i_i8[4 * v38];
      }
      else
      {
        m128i_i64 = 0;
        v86 = v39;
        v87 = v24;
        v88 = v38;
        sub_187120((__int64)&v86, 0, 0, 0, v17, v23);
        v38 = v88;
        v24 = v87;
        v39 = (int *)v86;
        v52 = 4 * v88;
        v53 = &v87->m128i_i8[4 * v88];
        if ( !v86 )
          goto LABEL_77;
      }
      if ( *v39 <= 1 )
      {
        if ( v24 != (__m128i *)v53 )
          goto LABEL_78;
        goto LABEL_86;
      }
LABEL_77:
      m128i_i64 = 0;
      v86 = v39;
      v87 = v24;
      v88 = v38;
      sub_187120((__int64)&v86, 0, 0, 0, v17, v23);
      v38 = v88;
      v24 = v87;
      v39 = (int *)v86;
      v52 = 4 * v88;
      if ( v87 != (__m128i *)v53 )
      {
LABEL_78:
        v54 = -2;
        if ( (v53 - (char *)v24) >> 2 )
        {
          _BitScanReverse64(&v55, (v53 - (char *)v24) >> 2);
          v54 = 2LL * (int)v55;
        }
        sub_185500(v24, v53, v54);
        if ( v53 - (char *)v24 <= 64 )
        {
          m128i_i64 = (__int64)v53;
          sub_185440(v24->m128i_i8, v53);
        }
        else
        {
          v56 = v24 + 4;
          m128i_i64 = (__int64)v24[4].m128i_i64;
          sub_185440(v24->m128i_i8, v24[4].m128i_i8);
          if ( &v24[4] != (__m128i *)v53 )
          {
            do
            {
              while ( 1 )
              {
                v57 = v56->m128i_i32[0];
                v58 = v56[-1].m128i_i32[3];
                v59 = &v56[-1].m128i_i32[3];
                if ( v56->m128i_i32[0] < v58 )
                  break;
                m128i_i64 = (__int64)v56;
                v56 = (__m128i *)((char *)v56 + 4);
                *(_DWORD *)m128i_i64 = v57;
                if ( v56 == (__m128i *)v53 )
                  goto LABEL_85;
              }
              do
              {
                v59[1] = v58;
                m128i_i64 = (__int64)v59;
                v58 = *--v59;
              }
              while ( v57 < v58 );
              v56 = (__m128i *)((char *)v56 + 4);
              *(_DWORD *)m128i_i64 = v57;
            }
            while ( v56 != (__m128i *)v53 );
          }
        }
      }
LABEL_85:
      if ( v39 )
LABEL_86:
        _InterlockedAdd(v39, 1u);
      v16 = v81;
      v15 = (size_t)v24->m128i_u64 + v52;
      for ( i = v24; (__m128i *)v15 != i; i = (__m128i *)((char *)i + 4) )
      {
        if ( v81 == i->m128i_i32[0] )
        {
          if ( (__int64 *)((char *)i->m128i_i64 + 4) != (__int64 *)v15 )
          {
            v61 = i->m128i_u32[1];
            v68 = v39;
            goto LABEL_132;
          }
          if ( v39 && *v39 <= 1 )
          {
            v61 = v24->m128i_i32[0];
            v68 = v39;
            if ( _InterlockedSub(v39, 1u) )
              goto LABEL_135;
          }
          else
          {
            m128i_i64 = 0;
            v86 = v39;
            v87 = v24;
            v88 = v38;
            sub_187120((__int64)&v86, 0, 0, 0, v17, v23);
            v68 = v86;
            v61 = v87->m128i_i32[0];
LABEL_132:
            if ( !v39 || _InterlockedSub(v39, 1u) )
              goto LABEL_134;
          }
          free(v39);
          if ( v68 )
            goto LABEL_135;
          goto LABEL_107;
        }
      }
      if ( !v39 )
        goto LABEL_105;
      if ( !_InterlockedSub(v39, 1u) )
        free(v39);
      if ( _InterlockedSub(v39, 1u) )
        goto LABEL_105;
LABEL_104:
      free(v39);
LABEL_105:
      if ( ++v73 >= (unsigned __int64)v85 )
      {
        v61 = -1;
        goto LABEL_107;
      }
      continue;
    }
    break;
  }
  v68 = v39;
  v61 = 0;
LABEL_134:
  if ( v68 )
  {
LABEL_135:
    if ( !_InterlockedSub((volatile signed __int32 *)v68, 1u) )
      free(v68);
  }
LABEL_107:
  v62 = v84;
  v63 = v84;
  if ( v84 )
  {
    v64 = v85;
    if ( (_QWORD)v85 )
    {
      v65 = 0;
      do
      {
        v15 = v62 + 24 * v65;
        v66 = *(_QWORD *)v15;
        if ( *(_QWORD *)v15 )
        {
          *(_QWORD *)(v15 + 8) = 0;
          qfree(v66, m128i_i64, v15, v16, v17);
          v62 = v84;
        }
        ++v65;
        v63 = v62;
      }
      while ( v64 != v65 );
    }
LABEL_113:
    *(_QWORD *)&v85 = 0;
    qfree(v63, m128i_i64, v15, v16, v17);
  }
  return v61;
}
