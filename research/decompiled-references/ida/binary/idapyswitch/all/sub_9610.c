char *__fastcall sub_9610(
        _QWORD *a1,
        char *a2,
        char *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  char *v11; // rbx
  char *v12; // r12
  char v13; // r14
  size_t v14; // rax
  char *v15; // r13
  char *v16; // r12
  char *v17; // r14
  unsigned __int8 v18; // r15
  char v20; // al
  size_t v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rdx
  size_t v24; // r15
  size_t v25; // r13
  double v26; // xmm4_8
  double v27; // xmm5_8
  char v28; // al
  __int64 v29; // rbx
  const char *v30; // rcx
  _QWORD *v31; // r12
  _QWORD *v32; // r14
  const char *v33; // r15
  const char *v34; // rdi
  _QWORD *v35; // r13
  const char *v36; // rsi
  int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  char *v41; // r8
  const char *v42; // rsi
  const char *v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // rax
  int v46; // r9d
  char *v47; // rbx
  const char *v48; // r14
  const char *v49; // rcx
  _QWORD *v50; // r15
  __int64 v51; // r12
  const char *v52; // rsi
  const char *v53; // rbx
  const char *v54; // rdi
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  const char *v59; // r8
  const char *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // r15
  int v63; // [rsp+0h] [rbp-1C8h]
  _QWORD *v64; // [rsp+8h] [rbp-1C0h]
  char *s; // [rsp+10h] [rbp-1B8h]
  char *sa; // [rsp+10h] [rbp-1B8h]
  const char *v67; // [rsp+18h] [rbp-1B0h]
  const char *v68; // [rsp+18h] [rbp-1B0h]
  char *v69; // [rsp+18h] [rbp-1B0h]
  _QWORD *v70; // [rsp+20h] [rbp-1A8h]
  char *dest; // [rsp+30h] [rbp-198h]
  char *s1; // [rsp+38h] [rbp-190h]
  int v73[2]; // [rsp+40h] [rbp-188h]
  char *v74; // [rsp+48h] [rbp-180h]
  int v75[2]; // [rsp+50h] [rbp-178h] BYREF
  void **p_ptr; // [rsp+58h] [rbp-170h] BYREF
  void *ptr; // [rsp+60h] [rbp-168h] BYREF
  __int128 v78; // [rsp+68h] [rbp-160h]
  int v79[2]; // [rsp+78h] [rbp-150h]
  char v80[8]; // [rsp+80h] [rbp-148h] BYREF
  int v81; // [rsp+88h] [rbp-140h]
  int v82; // [rsp+90h] [rbp-138h]
  int v83; // [rsp+98h] [rbp-130h]
  int v84; // [rsp+A0h] [rbp-128h]
  int v85; // [rsp+A8h] [rbp-120h]
  int v86; // [rsp+B0h] [rbp-118h]
  int v87; // [rsp+B8h] [rbp-110h]
  int v88; // [rsp+C0h] [rbp-108h]
  int v89; // [rsp+C8h] [rbp-100h]
  int v90; // [rsp+D0h] [rbp-F8h]
  int v91; // [rsp+D8h] [rbp-F0h]
  int v92; // [rsp+E0h] [rbp-E8h]
  int v93; // [rsp+E8h] [rbp-E0h]
  int v94; // [rsp+F0h] [rbp-D8h]
  int v95; // [rsp+F8h] [rbp-D0h]
  int v96; // [rsp+100h] [rbp-C8h]
  int v97; // [rsp+108h] [rbp-C0h]
  int v98; // [rsp+110h] [rbp-B8h]
  int v99; // [rsp+118h] [rbp-B0h]
  int v100; // [rsp+120h] [rbp-A8h]
  int v101; // [rsp+128h] [rbp-A0h]
  int v102; // [rsp+130h] [rbp-98h]
  int v103; // [rsp+138h] [rbp-90h]
  int v104; // [rsp+140h] [rbp-88h]
  int v105; // [rsp+148h] [rbp-80h]
  int v106; // [rsp+150h] [rbp-78h]
  int v107; // [rsp+158h] [rbp-70h]
  int v108; // [rsp+160h] [rbp-68h]
  int v109; // [rsp+168h] [rbp-60h]
  int v110; // [rsp+170h] [rbp-58h]
  int v111; // [rsp+178h] [rbp-50h]
  __int64 v112; // [rsp+180h] [rbp-48h]
  unsigned __int64 v113; // [rsp+188h] [rbp-40h]

  v64 = a1;
  v113 = __readfsqword(0x28u);
  v11 = a2;
  if ( a2 >= a3 )
    return v11;
  v12 = a3;
  do
  {
    v13 = *v11;
    if ( !*v11 )
      return v11;
    v14 = strlen(v11);
    if ( &v11[v14] >= v12 )
      goto LABEL_80;
    v15 = v80;
    if ( v13 == 1 )
    {
      v80[0] = 1;
      --v14;
      ++v11;
      v15 = &v80[1];
    }
    if ( v14 - 1 > 0xFE )
    {
LABEL_80:
      if ( byte_1D3C0 )
        goto LABEL_106;
      return nullptr;
    }
    s = v12;
    v16 = &v11[v14];
    do
    {
      v17 = v11;
      v18 = *v11++;
      if ( v18 <= 0x1Fu || strchr("\\/:", v18) )
      {
        if ( byte_1D3C0 )
          goto LABEL_106;
        return nullptr;
      }
      *v15++ = v18;
    }
    while ( v11 != v16 );
    v12 = s;
    sa = v17 + 2;
    v20 = *v11;
    *v15 = *v11;
    if ( v20 )
    {
      if ( byte_1D3C0 )
        goto LABEL_106;
      return nullptr;
    }
    ptr = nullptr;
    v78 = 0;
    v21 = strlen(v80);
    LODWORD(v67) = v21 + 1;
    v22 = (_QWORD *)sub_11430(&ptr, 0, v21 + 1, 1);
    ptr = v22;
    *(_QWORD *)&v78 = v21 + 1;
    if ( (unsigned int)v21 >= 8 )
    {
      *v22 = *(_QWORD *)v80;
      *(_QWORD *)((char *)v22 + (unsigned int)v21 - 8) = *(_QWORD *)((char *)v79 + (unsigned int)v21);
      qmemcpy(
        (void *)((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v80 - ((char *)v22 - ((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v21 + (_DWORD)v22 - (((_DWORD)v22 + 8) & 0xFFFFFFF8)) >> 3));
    }
    else if ( (v21 & 4) != 0 )
    {
      *(_DWORD *)v22 = *(_DWORD *)v80;
      *(_DWORD *)((char *)v22 + (unsigned int)v21 - 4) = *(int *)((char *)&v79[1] + (unsigned int)v21);
    }
    else if ( (_DWORD)v21 )
    {
      *(_BYTE *)v22 = v80[0];
      if ( (v21 & 2) != 0 )
        *(_WORD *)((char *)v22 + (unsigned int)v21 - 2) = *(_WORD *)((char *)&v79[1] + (unsigned int)v21 + 2);
    }
    *((_BYTE *)ptr + v21) = 0;
    v70 = v64 + 1;
    if ( v64 + 1 != sub_8250((__int64)v64, (__int64)&ptr) )
    {
LABEL_96:
      if ( byte_1D3C0 )
        goto LABEL_106;
      goto LABEL_29;
    }
    if ( v80[0] == 1 )
    {
      v45 = operator new(0x30u);
      *(_QWORD *)(v45 + 16) = 0;
      v47 = (char *)v45;
      v45 += 8;
      *(_DWORD *)v45 = 0;
      *((_QWORD *)v47 + 3) = v45;
      *((_QWORD *)v47 + 4) = v45;
      *((_QWORD *)v47 + 5) = 0;
      v48 = (const char *)v64[2];
      if ( !v48 )
      {
        v50 = v64 + 1;
        goto LABEL_88;
      }
      *(_QWORD *)v73 = v12;
      v49 = ::s1;
      s1 = v47;
      v50 = v64 + 1;
      dest = (char *)ptr;
      v51 = v78;
      if ( (_QWORD)v78 )
        v49 = (const char *)ptr;
      v67 = v49;
      while ( 1 )
      {
        v56 = *((_QWORD *)v48 + 5);
        if ( !v51 )
          break;
        if ( v56 )
          goto LABEL_74;
        v52 = dest;
        v53 = v48;
        v54 = ::s1;
LABEL_67:
        v55 = strcmp(v54, v52);
        v49 = *((const char **)v48 + 2);
        v48 = *((const char **)v48 + 3);
        if ( v55 >= 0 )
        {
          v50 = v53;
          v48 = v49;
        }
        if ( !v48 )
        {
          v58 = v51;
          v47 = s1;
          v59 = dest;
          v12 = *(char **)v73;
          goto LABEL_83;
        }
      }
      if ( !v56 )
      {
        while ( 1 )
        {
          v57 = *((_QWORD *)v48 + 2);
          if ( !v57 )
            break;
          v50 = v48;
          v48 = *((const char **)v48 + 2);
          if ( *(_QWORD *)(v57 + 40) )
            goto LABEL_74;
        }
        v58 = 0;
        v47 = s1;
        v59 = dest;
        v50 = v48;
        v12 = *(char **)v73;
LABEL_83:
        if ( v50 == v70 )
          goto LABEL_88;
        if ( v50[5] )
        {
          v60 = (const char *)v50[4];
          if ( !v58 )
            v59 = ::s1;
LABEL_87:
          if ( strcmp(v59, v60) < 0 )
          {
LABEL_88:
            *(_QWORD *)v75 = &ptr;
            v50 = sub_8CE0(v64, v50, (__int64 *)v75);
          }
        }
        else
        {
          v60 = ::s1;
          if ( v58 )
            goto LABEL_87;
        }
        v50[7] = v47;
        v61 = sub_9610(
                (int)v47,
                (int)sa,
                (int)v12,
                (int)v49,
                (int)v59,
                v46,
                v63,
                (int)v64,
                (int)sa,
                (int)v67,
                (int)v70,
                (int)&ptr,
                (int)dest,
                (int)s1,
                v73[0],
                (int)v74,
                v75[0],
                p_ptr,
                (__int64)ptr,
                v78,
                SDWORD2(v78),
                v79[0],
                *(int *)v80,
                v81,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93,
                v94,
                v95,
                v96,
                v97,
                v98,
                v99,
                v100,
                v101,
                v102,
                v103,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109,
                v110,
                v111,
                v112);
        if ( v61 && v12 != (char *)v61 )
        {
          v41 = (char *)ptr;
          v11 = (char *)(v61 + 1);
          goto LABEL_55;
        }
        if ( byte_1D3C0 )
LABEL_106:
          BUG();
LABEL_29:
        if ( ptr )
        {
          *(_QWORD *)&v78 = 0;
          j__free(ptr);
        }
        return nullptr;
      }
LABEL_74:
      v54 = *((const char **)v48 + 4);
      v52 = v67;
      v53 = v48;
      goto LABEL_67;
    }
    if ( (unsigned __int64)(v12 - sa) <= 4 )
      goto LABEL_96;
    v24 = *(unsigned int *)(v11 + 1);
    v25 = v24 + 5;
    if ( v12 - sa < v24 + 5 )
      goto LABEL_96;
    dest = (char *)sub_11300(v24 + 5, &ptr, v23, sa);
    if ( !dest )
      sub_66D0((__m128)0LL, a5, a6, a7, v26, v27, a10, a11, v24 + 5, (__int64)&ptr);
    memcpy(dest, sa, v24 + 5);
    v28 = dest[4];
    if ( v28 != 3 )
    {
      if ( v28 == 4 )
      {
        if ( v24 != 4 )
        {
LABEL_28:
          if ( byte_1D3C0 )
            goto LABEL_106;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v28 != 1 )
          goto LABEL_28;
        if ( memchr(dest + 5, 0, v24) )
        {
          if ( byte_1D3C0 )
            goto LABEL_106;
          goto LABEL_29;
        }
      }
    }
    if ( !v64[2] )
    {
      v32 = v64 + 1;
      goto LABEL_53;
    }
    v29 = v78;
    v74 = v12;
    v30 = ::s1;
    v31 = (_QWORD *)v64[2];
    s1 = (char *)::s1;
    v32 = v64 + 1;
    *(_QWORD *)v73 = v24 + 5;
    v33 = (const char *)ptr;
    if ( (_QWORD)v78 )
      v30 = (const char *)ptr;
    v68 = v30;
    while ( 1 )
    {
      v39 = v31[5];
      if ( !v29 )
        break;
      if ( v39 )
        goto LABEL_46;
      v34 = ::s1;
      v35 = v31;
      v36 = v33;
LABEL_39:
      v37 = strcmp(v34, v36);
      v38 = (_QWORD *)v31[2];
      v31 = (_QWORD *)v31[3];
      if ( v37 >= 0 )
      {
        v32 = v35;
        v31 = v38;
      }
      if ( !v31 )
      {
        v25 = *(_QWORD *)v73;
        v12 = v74;
        v41 = (char *)v33;
        goto LABEL_48;
      }
    }
    if ( v39 )
    {
LABEL_46:
      v34 = (const char *)v31[4];
      v36 = v68;
      v35 = v31;
      goto LABEL_39;
    }
    while ( 1 )
    {
      v40 = v31[2];
      if ( !v40 )
        break;
      v32 = v31;
      v31 = (_QWORD *)v31[2];
      if ( *(_QWORD *)(v40 + 40) )
        goto LABEL_46;
    }
    v41 = (char *)v33;
    v62 = v31;
    v25 = *(_QWORD *)v73;
    v12 = v74;
    v32 = v62;
LABEL_48:
    if ( v70 == v32 )
      goto LABEL_53;
    if ( v32[5] )
    {
      v42 = (const char *)v32[4];
      v43 = ::s1;
      if ( v29 )
        goto LABEL_51;
LABEL_52:
      v69 = v41;
      if ( strcmp(v43, v42) >= 0 )
      {
        v41 = v69;
      }
      else
      {
LABEL_53:
        p_ptr = &ptr;
        v44 = sub_8CE0(v64, v32, (__int64 *)&p_ptr);
        v41 = (char *)ptr;
        v32 = v44;
      }
    }
    else
    {
      v42 = ::s1;
      if ( v29 )
      {
LABEL_51:
        v43 = v41;
        goto LABEL_52;
      }
    }
    v32[7] = dest;
    v11 = &sa[v25];
LABEL_55:
    if ( v41 )
    {
      *(_QWORD *)&v78 = 0;
      j__free(v41);
    }
  }
  while ( v11 < v12 );
  return v11;
}

