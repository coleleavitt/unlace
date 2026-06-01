char *__fastcall sub_9E060(
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
  size_t v23; // r15
  size_t v24; // r13
  double v25; // xmm4_8
  double v26; // xmm5_8
  char v27; // al
  __int64 v28; // rbx
  const char *v29; // rcx
  _QWORD *v30; // r12
  _QWORD *v31; // r14
  const char *v32; // r15
  const char *v33; // rdi
  _QWORD *v34; // r13
  const char *v35; // rsi
  int v36; // eax
  _QWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  char *v40; // r8
  const char *v41; // rsi
  const char *v42; // rdi
  _QWORD *v43; // rax
  __int64 v44; // rax
  int v45; // r9d
  char *v46; // rbx
  const char *v47; // r14
  const char *v48; // rcx
  _QWORD *v49; // r15
  __int64 v50; // r12
  const char *v51; // rsi
  const char *v52; // rbx
  const char *v53; // rdi
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  const char *v58; // r8
  const char *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // r15
  int v62; // [rsp+0h] [rbp-1C8h]
  _QWORD *v63; // [rsp+8h] [rbp-1C0h]
  char *s; // [rsp+10h] [rbp-1B8h]
  char *sa; // [rsp+10h] [rbp-1B8h]
  const char *v66; // [rsp+18h] [rbp-1B0h]
  const char *v67; // [rsp+18h] [rbp-1B0h]
  char *v68; // [rsp+18h] [rbp-1B0h]
  _QWORD *v69; // [rsp+20h] [rbp-1A8h]
  char *dest; // [rsp+30h] [rbp-198h]
  char *s1; // [rsp+38h] [rbp-190h]
  int v72[2]; // [rsp+40h] [rbp-188h]
  char *v73; // [rsp+48h] [rbp-180h]
  int v74[2]; // [rsp+50h] [rbp-178h] BYREF
  void **p_ptr; // [rsp+58h] [rbp-170h] BYREF
  void *ptr; // [rsp+60h] [rbp-168h] BYREF
  __int128 v77; // [rsp+68h] [rbp-160h]
  int v78[2]; // [rsp+78h] [rbp-150h]
  char v79[8]; // [rsp+80h] [rbp-148h] BYREF
  int v80; // [rsp+88h] [rbp-140h]
  int v81; // [rsp+90h] [rbp-138h]
  int v82; // [rsp+98h] [rbp-130h]
  int v83; // [rsp+A0h] [rbp-128h]
  int v84; // [rsp+A8h] [rbp-120h]
  int v85; // [rsp+B0h] [rbp-118h]
  int v86; // [rsp+B8h] [rbp-110h]
  int v87; // [rsp+C0h] [rbp-108h]
  int v88; // [rsp+C8h] [rbp-100h]
  int v89; // [rsp+D0h] [rbp-F8h]
  int v90; // [rsp+D8h] [rbp-F0h]
  int v91; // [rsp+E0h] [rbp-E8h]
  int v92; // [rsp+E8h] [rbp-E0h]
  int v93; // [rsp+F0h] [rbp-D8h]
  int v94; // [rsp+F8h] [rbp-D0h]
  int v95; // [rsp+100h] [rbp-C8h]
  int v96; // [rsp+108h] [rbp-C0h]
  int v97; // [rsp+110h] [rbp-B8h]
  int v98; // [rsp+118h] [rbp-B0h]
  int v99; // [rsp+120h] [rbp-A8h]
  int v100; // [rsp+128h] [rbp-A0h]
  int v101; // [rsp+130h] [rbp-98h]
  int v102; // [rsp+138h] [rbp-90h]
  int v103; // [rsp+140h] [rbp-88h]
  int v104; // [rsp+148h] [rbp-80h]
  int v105; // [rsp+150h] [rbp-78h]
  int v106; // [rsp+158h] [rbp-70h]
  int v107; // [rsp+160h] [rbp-68h]
  int v108; // [rsp+168h] [rbp-60h]
  int v109; // [rsp+170h] [rbp-58h]
  int v110; // [rsp+178h] [rbp-50h]
  __int64 v111; // [rsp+180h] [rbp-48h]
  unsigned __int64 v112; // [rsp+188h] [rbp-40h]

  v63 = a1;
  v112 = __readfsqword(0x28u);
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
    v15 = v79;
    if ( v13 == 1 )
    {
      v79[0] = 1;
      --v14;
      ++v11;
      v15 = &v79[1];
    }
    if ( v14 - 1 > 0xFE )
    {
LABEL_80:
      if ( byte_1671A1 )
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
        if ( byte_1671A1 )
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
      if ( byte_1671A1 )
        goto LABEL_106;
      return nullptr;
    }
    ptr = nullptr;
    v77 = 0;
    v21 = strlen(v79);
    LODWORD(v66) = v21 + 1;
    v22 = sub_96080((__int64)&ptr, nullptr, v21 + 1, 1u);
    ptr = v22;
    *(_QWORD *)&v77 = v21 + 1;
    if ( (unsigned int)v21 >= 8 )
    {
      *v22 = *(_QWORD *)v79;
      *(_QWORD *)((char *)v22 + (unsigned int)v21 - 8) = *(_QWORD *)((char *)v78 + (unsigned int)v21);
      qmemcpy(
        (void *)((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v79 - ((char *)v22 - ((unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v21 + (_DWORD)v22 - (((_DWORD)v22 + 8) & 0xFFFFFFF8)) >> 3));
    }
    else if ( (v21 & 4) != 0 )
    {
      *(_DWORD *)v22 = *(_DWORD *)v79;
      *(_DWORD *)((char *)v22 + (unsigned int)v21 - 4) = *(int *)((char *)&v78[1] + (unsigned int)v21);
    }
    else if ( (_DWORD)v21 )
    {
      *(_BYTE *)v22 = v79[0];
      if ( (v21 & 2) != 0 )
        *(_WORD *)((char *)v22 + (unsigned int)v21 - 2) = *(_WORD *)((char *)&v78[1] + (unsigned int)v21 + 2);
    }
    *((_BYTE *)ptr + v21) = 0;
    v69 = v63 + 1;
    if ( v63 + 1 != sub_9CAB0((__int64)v63, (__int64)&ptr) )
    {
LABEL_96:
      if ( byte_1671A1 )
        goto LABEL_106;
      goto LABEL_29;
    }
    if ( v79[0] == 1 )
    {
      v44 = operator new(0x30u);
      *(_QWORD *)(v44 + 16) = 0;
      v46 = (char *)v44;
      v44 += 8;
      *(_DWORD *)v44 = 0;
      *((_QWORD *)v46 + 3) = v44;
      *((_QWORD *)v46 + 4) = v44;
      *((_QWORD *)v46 + 5) = 0;
      v47 = (const char *)v63[2];
      if ( !v47 )
      {
        v49 = v63 + 1;
        goto LABEL_88;
      }
      *(_QWORD *)v72 = v12;
      v48 = haystack;
      s1 = v46;
      v49 = v63 + 1;
      dest = (char *)ptr;
      v50 = v77;
      if ( (_QWORD)v77 )
        v48 = (const char *)ptr;
      v66 = v48;
      while ( 1 )
      {
        v55 = *((_QWORD *)v47 + 5);
        if ( !v50 )
          break;
        if ( v55 )
          goto LABEL_74;
        v51 = dest;
        v52 = v47;
        v53 = haystack;
LABEL_67:
        v54 = strcmp(v53, v51);
        v48 = *((const char **)v47 + 2);
        v47 = *((const char **)v47 + 3);
        if ( v54 >= 0 )
        {
          v49 = v52;
          v47 = v48;
        }
        if ( !v47 )
        {
          v57 = v50;
          v46 = s1;
          v58 = dest;
          v12 = *(char **)v72;
          goto LABEL_83;
        }
      }
      if ( !v55 )
      {
        while ( 1 )
        {
          v56 = *((_QWORD *)v47 + 2);
          if ( !v56 )
            break;
          v49 = v47;
          v47 = *((const char **)v47 + 2);
          if ( *(_QWORD *)(v56 + 40) )
            goto LABEL_74;
        }
        v57 = 0;
        v46 = s1;
        v58 = dest;
        v49 = v47;
        v12 = *(char **)v72;
LABEL_83:
        if ( v49 == v69 )
          goto LABEL_88;
        if ( v49[5] )
        {
          v59 = (const char *)v49[4];
          if ( !v57 )
            v58 = haystack;
LABEL_87:
          if ( strcmp(v58, v59) < 0 )
          {
LABEL_88:
            *(_QWORD *)v74 = &ptr;
            v49 = sub_9D670(v63, v49, (__int64 *)v74);
          }
        }
        else
        {
          v59 = haystack;
          if ( v57 )
            goto LABEL_87;
        }
        v49[7] = v46;
        v60 = sub_9E060(
                (int)v46,
                (int)sa,
                (int)v12,
                (int)v48,
                (int)v58,
                v45,
                v62,
                (int)v63,
                (int)sa,
                (int)v66,
                (int)v69,
                (int)&ptr,
                (int)dest,
                (int)s1,
                v72[0],
                (int)v73,
                v74[0],
                p_ptr,
                (__int64)ptr,
                v77,
                SDWORD2(v77),
                v78[0],
                *(int *)v79,
                v80,
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
                v111);
        if ( v60 && v12 != (char *)v60 )
        {
          v40 = (char *)ptr;
          v11 = (char *)(v60 + 1);
          goto LABEL_55;
        }
        if ( byte_1671A1 )
LABEL_106:
          BUG();
LABEL_29:
        if ( ptr )
        {
          *(_QWORD *)&v77 = 0;
          j__free(ptr);
        }
        return nullptr;
      }
LABEL_74:
      v53 = *((const char **)v47 + 4);
      v51 = v66;
      v52 = v47;
      goto LABEL_67;
    }
    if ( (unsigned __int64)(v12 - sa) <= 4 )
      goto LABEL_96;
    v23 = *(unsigned int *)(v11 + 1);
    v24 = v23 + 5;
    if ( v12 - sa < v23 + 5 )
      goto LABEL_96;
    dest = (char *)sub_95F50(v23 + 5);
    if ( !dest )
      sub_9C1E0((__m128)0LL, a5, a6, a7, v25, v26, a10, a11, v23 + 5, (__int64)&ptr);
    memcpy(dest, sa, v23 + 5);
    v27 = dest[4];
    if ( v27 != 3 )
    {
      if ( v27 == 4 )
      {
        if ( v23 != 4 )
        {
LABEL_28:
          if ( byte_1671A1 )
            goto LABEL_106;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v27 != 1 )
          goto LABEL_28;
        if ( memchr(dest + 5, 0, v23) )
        {
          if ( byte_1671A1 )
            goto LABEL_106;
          goto LABEL_29;
        }
      }
    }
    if ( !v63[2] )
    {
      v31 = v63 + 1;
      goto LABEL_53;
    }
    v28 = v77;
    v73 = v12;
    v29 = haystack;
    v30 = (_QWORD *)v63[2];
    s1 = (char *)haystack;
    v31 = v63 + 1;
    *(_QWORD *)v72 = v23 + 5;
    v32 = (const char *)ptr;
    if ( (_QWORD)v77 )
      v29 = (const char *)ptr;
    v67 = v29;
    while ( 1 )
    {
      v38 = v30[5];
      if ( !v28 )
        break;
      if ( v38 )
        goto LABEL_46;
      v33 = haystack;
      v34 = v30;
      v35 = v32;
LABEL_39:
      v36 = strcmp(v33, v35);
      v37 = (_QWORD *)v30[2];
      v30 = (_QWORD *)v30[3];
      if ( v36 >= 0 )
      {
        v31 = v34;
        v30 = v37;
      }
      if ( !v30 )
      {
        v24 = *(_QWORD *)v72;
        v12 = v73;
        v40 = (char *)v32;
        goto LABEL_48;
      }
    }
    if ( v38 )
    {
LABEL_46:
      v33 = (const char *)v30[4];
      v35 = v67;
      v34 = v30;
      goto LABEL_39;
    }
    while ( 1 )
    {
      v39 = v30[2];
      if ( !v39 )
        break;
      v31 = v30;
      v30 = (_QWORD *)v30[2];
      if ( *(_QWORD *)(v39 + 40) )
        goto LABEL_46;
    }
    v40 = (char *)v32;
    v61 = v30;
    v24 = *(_QWORD *)v72;
    v12 = v73;
    v31 = v61;
LABEL_48:
    if ( v69 == v31 )
      goto LABEL_53;
    if ( v31[5] )
    {
      v41 = (const char *)v31[4];
      v42 = haystack;
      if ( v28 )
        goto LABEL_51;
LABEL_52:
      v68 = v40;
      if ( strcmp(v42, v41) >= 0 )
      {
        v40 = v68;
      }
      else
      {
LABEL_53:
        p_ptr = &ptr;
        v43 = sub_9D670(v63, v31, (__int64 *)&p_ptr);
        v40 = (char *)ptr;
        v31 = v43;
      }
    }
    else
    {
      v41 = haystack;
      if ( v28 )
      {
LABEL_51:
        v42 = v40;
        goto LABEL_52;
      }
    }
    v31[7] = dest;
    v11 = &sa[v24];
LABEL_55:
    if ( v40 )
    {
      *(_QWORD *)&v77 = 0;
      j__free(v40);
    }
  }
  while ( v11 < v12 );
  return v11;
}

