char *__fastcall sub_2E750(_QWORD *a1, char *a2, char *a3)
{
  char *v3; // rbx
  char *v4; // r12
  char v5; // r14
  size_t v6; // rax
  char *v7; // r13
  char *v8; // r12
  char *v9; // r14
  unsigned __int8 v10; // r15
  char v12; // al
  size_t v13; // r14
  _QWORD *v14; // rax
  size_t v15; // r15
  size_t v16; // r13
  char v17; // al
  __int64 v18; // rbx
  const char *v19; // rcx
  _QWORD *v20; // r12
  _QWORD *v21; // r14
  const char *v22; // r15
  const char *v23; // rdi
  _QWORD *v24; // r13
  const char *v25; // rsi
  int v26; // eax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  char *v30; // r8
  const char *v31; // rsi
  const char *v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  char *v36; // rbx
  const char *v37; // r14
  const char *v38; // rcx
  _QWORD *v39; // r15
  __int64 v40; // r12
  const char *v41; // rsi
  const char *v42; // rbx
  const char *v43; // rdi
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  const char *v48; // r8
  const char *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // r15
  int v52; // [rsp+0h] [rbp-1C8h]
  _QWORD *v53; // [rsp+8h] [rbp-1C0h]
  char *s; // [rsp+10h] [rbp-1B8h]
  char *sa; // [rsp+10h] [rbp-1B8h]
  const char *v56; // [rsp+18h] [rbp-1B0h]
  const char *v57; // [rsp+18h] [rbp-1B0h]
  char *v58; // [rsp+18h] [rbp-1B0h]
  _QWORD *v59; // [rsp+20h] [rbp-1A8h]
  char *dest; // [rsp+30h] [rbp-198h]
  char *s1; // [rsp+38h] [rbp-190h]
  int v62[2]; // [rsp+40h] [rbp-188h]
  char *v63; // [rsp+48h] [rbp-180h]
  int v64[2]; // [rsp+50h] [rbp-178h] BYREF
  void **p_ptr; // [rsp+58h] [rbp-170h] BYREF
  void *ptr; // [rsp+60h] [rbp-168h] BYREF
  __int128 v67; // [rsp+68h] [rbp-160h]
  int v68[2]; // [rsp+78h] [rbp-150h]
  char v69[8]; // [rsp+80h] [rbp-148h] BYREF
  int v70; // [rsp+88h] [rbp-140h]
  int v71; // [rsp+90h] [rbp-138h]
  int v72; // [rsp+98h] [rbp-130h]
  int v73; // [rsp+A0h] [rbp-128h]
  int v74; // [rsp+A8h] [rbp-120h]
  int v75; // [rsp+B0h] [rbp-118h]
  int v76; // [rsp+B8h] [rbp-110h]
  int v77; // [rsp+C0h] [rbp-108h]
  int v78; // [rsp+C8h] [rbp-100h]
  int v79; // [rsp+D0h] [rbp-F8h]
  int v80; // [rsp+D8h] [rbp-F0h]
  int v81; // [rsp+E0h] [rbp-E8h]
  int v82; // [rsp+E8h] [rbp-E0h]
  int v83; // [rsp+F0h] [rbp-D8h]
  int v84; // [rsp+F8h] [rbp-D0h]
  int v85; // [rsp+100h] [rbp-C8h]
  int v86; // [rsp+108h] [rbp-C0h]
  int v87; // [rsp+110h] [rbp-B8h]
  int v88; // [rsp+118h] [rbp-B0h]
  int v89; // [rsp+120h] [rbp-A8h]
  int v90; // [rsp+128h] [rbp-A0h]
  int v91; // [rsp+130h] [rbp-98h]
  int v92; // [rsp+138h] [rbp-90h]
  int v93; // [rsp+140h] [rbp-88h]
  int v94; // [rsp+148h] [rbp-80h]
  int v95; // [rsp+150h] [rbp-78h]
  int v96; // [rsp+158h] [rbp-70h]
  int v97; // [rsp+160h] [rbp-68h]
  int v98; // [rsp+168h] [rbp-60h]
  int v99; // [rsp+170h] [rbp-58h]
  int v100; // [rsp+178h] [rbp-50h]
  __int64 v101; // [rsp+180h] [rbp-48h]
  unsigned __int64 v102; // [rsp+188h] [rbp-40h]

  v53 = a1;
  v102 = __readfsqword(0x28u);
  v3 = a2;
  if ( a2 >= a3 )
    return v3;
  v4 = a3;
  do
  {
    v5 = *v3;
    if ( !*v3 )
      return v3;
    v6 = strlen(v3);
    if ( &v3[v6] >= v4 )
      goto LABEL_80;
    v7 = v69;
    if ( v5 == 1 )
    {
      v69[0] = 1;
      --v6;
      ++v3;
      v7 = &v69[1];
    }
    if ( v6 - 1 > 0xFE )
    {
LABEL_80:
      if ( byte_7BCA0 )
        goto LABEL_106;
      return nullptr;
    }
    s = v4;
    v8 = &v3[v6];
    do
    {
      v9 = v3;
      v10 = *v3++;
      if ( v10 <= 0x1Fu || strchr("\\/:", v10) )
      {
        if ( byte_7BCA0 )
          goto LABEL_106;
        return nullptr;
      }
      *v7++ = v10;
    }
    while ( v3 != v8 );
    v4 = s;
    sa = v9 + 2;
    v12 = *v3;
    *v7 = *v3;
    if ( v12 )
    {
      if ( byte_7BCA0 )
        goto LABEL_106;
      return nullptr;
    }
    ptr = nullptr;
    v67 = 0;
    v13 = strlen(v69);
    LODWORD(v56) = v13 + 1;
    v14 = sub_29E60((__int64)&ptr, nullptr, v13 + 1, 1u);
    ptr = v14;
    *(_QWORD *)&v67 = v13 + 1;
    if ( (unsigned int)v13 >= 8 )
    {
      *v14 = *(_QWORD *)v69;
      *(_QWORD *)((char *)v14 + (unsigned int)v13 - 8) = *(_QWORD *)((char *)v68 + (unsigned int)v13);
      qmemcpy(
        (void *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v69 - ((char *)v14 - ((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v13 + (_DWORD)v14 - (((_DWORD)v14 + 8) & 0xFFFFFFF8)) >> 3));
    }
    else if ( (v13 & 4) != 0 )
    {
      *(_DWORD *)v14 = *(_DWORD *)v69;
      *(_DWORD *)((char *)v14 + (unsigned int)v13 - 4) = *(int *)((char *)&v68[1] + (unsigned int)v13);
    }
    else if ( (_DWORD)v13 )
    {
      *(_BYTE *)v14 = v69[0];
      if ( (v13 & 2) != 0 )
        *(_WORD *)((char *)v14 + (unsigned int)v13 - 2) = *(_WORD *)((char *)&v68[1] + (unsigned int)v13 + 2);
    }
    *((_BYTE *)ptr + v13) = 0;
    v59 = v53 + 1;
    if ( v53 + 1 != sub_2D360((__int64)v53, (__int64)&ptr) )
    {
LABEL_96:
      if ( byte_7BCA0 )
        goto LABEL_106;
      goto LABEL_29;
    }
    if ( v69[0] == 1 )
    {
      v34 = operator new(0x30u);
      *(_QWORD *)(v34 + 16) = 0;
      v36 = (char *)v34;
      v34 += 8;
      *(_DWORD *)v34 = 0;
      *((_QWORD *)v36 + 3) = v34;
      *((_QWORD *)v36 + 4) = v34;
      *((_QWORD *)v36 + 5) = 0;
      v37 = (const char *)v53[2];
      if ( !v37 )
      {
        v39 = v53 + 1;
        goto LABEL_88;
      }
      *(_QWORD *)v62 = v4;
      v38 = ::s1;
      s1 = v36;
      v39 = v53 + 1;
      dest = (char *)ptr;
      v40 = v67;
      if ( (_QWORD)v67 )
        v38 = (const char *)ptr;
      v56 = v38;
      while ( 1 )
      {
        v45 = *((_QWORD *)v37 + 5);
        if ( !v40 )
          break;
        if ( v45 )
          goto LABEL_74;
        v41 = dest;
        v42 = v37;
        v43 = ::s1;
LABEL_67:
        v44 = strcmp(v43, v41);
        v38 = *((const char **)v37 + 2);
        v37 = *((const char **)v37 + 3);
        if ( v44 >= 0 )
        {
          v39 = v42;
          v37 = v38;
        }
        if ( !v37 )
        {
          v47 = v40;
          v36 = s1;
          v48 = dest;
          v4 = *(char **)v62;
          goto LABEL_83;
        }
      }
      if ( !v45 )
      {
        while ( 1 )
        {
          v46 = *((_QWORD *)v37 + 2);
          if ( !v46 )
            break;
          v39 = v37;
          v37 = *((const char **)v37 + 2);
          if ( *(_QWORD *)(v46 + 40) )
            goto LABEL_74;
        }
        v47 = 0;
        v36 = s1;
        v48 = dest;
        v39 = v37;
        v4 = *(char **)v62;
LABEL_83:
        if ( v39 == v59 )
          goto LABEL_88;
        if ( v39[5] )
        {
          v49 = (const char *)v39[4];
          if ( !v47 )
            v48 = ::s1;
LABEL_87:
          if ( strcmp(v48, v49) < 0 )
          {
LABEL_88:
            *(_QWORD *)v64 = &ptr;
            v39 = sub_2DCD0(v53, v39, (__int64 *)v64);
          }
        }
        else
        {
          v49 = ::s1;
          if ( v47 )
            goto LABEL_87;
        }
        v39[7] = v36;
        v50 = sub_2E750(
                (int)v36,
                (int)sa,
                (int)v4,
                (int)v38,
                (int)v48,
                v35,
                v52,
                (int)v53,
                (int)sa,
                (int)v56,
                (int)v59,
                (int)&ptr,
                (int)dest,
                (int)s1,
                v62[0],
                (int)v63,
                v64[0],
                p_ptr,
                (__int64)ptr,
                v67,
                SDWORD2(v67),
                v68[0],
                *(int *)v69,
                v70,
                v71,
                v72,
                v73,
                v74,
                v75,
                v76,
                v77,
                v78,
                v79,
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
                v101);
        if ( v50 && v4 != (char *)v50 )
        {
          v30 = (char *)ptr;
          v3 = (char *)(v50 + 1);
          goto LABEL_55;
        }
        if ( byte_7BCA0 )
LABEL_106:
          BUG();
LABEL_29:
        if ( ptr )
        {
          *(_QWORD *)&v67 = 0;
          j__free(ptr);
        }
        return nullptr;
      }
LABEL_74:
      v43 = *((const char **)v37 + 4);
      v41 = v56;
      v42 = v37;
      goto LABEL_67;
    }
    if ( (unsigned __int64)(v4 - sa) <= 4 )
      goto LABEL_96;
    v15 = *(unsigned int *)(v3 + 1);
    v16 = v15 + 5;
    if ( v4 - sa < v15 + 5 )
      goto LABEL_96;
    dest = (char *)sub_29D30(v15 + 5);
    if ( !dest )
      sub_2CC80();
    memcpy(dest, sa, v15 + 5);
    v17 = dest[4];
    if ( v17 != 3 )
    {
      if ( v17 == 4 )
      {
        if ( v15 != 4 )
        {
LABEL_28:
          if ( byte_7BCA0 )
            goto LABEL_106;
          goto LABEL_29;
        }
      }
      else
      {
        if ( v17 != 1 )
          goto LABEL_28;
        if ( memchr(dest + 5, 0, v15) )
        {
          if ( byte_7BCA0 )
            goto LABEL_106;
          goto LABEL_29;
        }
      }
    }
    if ( !v53[2] )
    {
      v21 = v53 + 1;
      goto LABEL_53;
    }
    v18 = v67;
    v63 = v4;
    v19 = ::s1;
    v20 = (_QWORD *)v53[2];
    s1 = (char *)::s1;
    v21 = v53 + 1;
    *(_QWORD *)v62 = v15 + 5;
    v22 = (const char *)ptr;
    if ( (_QWORD)v67 )
      v19 = (const char *)ptr;
    v57 = v19;
    while ( 1 )
    {
      v28 = v20[5];
      if ( !v18 )
        break;
      if ( v28 )
        goto LABEL_46;
      v23 = ::s1;
      v24 = v20;
      v25 = v22;
LABEL_39:
      v26 = strcmp(v23, v25);
      v27 = (_QWORD *)v20[2];
      v20 = (_QWORD *)v20[3];
      if ( v26 >= 0 )
      {
        v21 = v24;
        v20 = v27;
      }
      if ( !v20 )
      {
        v16 = *(_QWORD *)v62;
        v4 = v63;
        v30 = (char *)v22;
        goto LABEL_48;
      }
    }
    if ( v28 )
    {
LABEL_46:
      v23 = (const char *)v20[4];
      v25 = v57;
      v24 = v20;
      goto LABEL_39;
    }
    while ( 1 )
    {
      v29 = v20[2];
      if ( !v29 )
        break;
      v21 = v20;
      v20 = (_QWORD *)v20[2];
      if ( *(_QWORD *)(v29 + 40) )
        goto LABEL_46;
    }
    v30 = (char *)v22;
    v51 = v20;
    v16 = *(_QWORD *)v62;
    v4 = v63;
    v21 = v51;
LABEL_48:
    if ( v59 == v21 )
      goto LABEL_53;
    if ( v21[5] )
    {
      v31 = (const char *)v21[4];
      v32 = ::s1;
      if ( v18 )
        goto LABEL_51;
LABEL_52:
      v58 = v30;
      if ( strcmp(v32, v31) >= 0 )
      {
        v30 = v58;
      }
      else
      {
LABEL_53:
        p_ptr = &ptr;
        v33 = sub_2DCD0(v53, v21, (__int64 *)&p_ptr);
        v30 = (char *)ptr;
        v21 = v33;
      }
    }
    else
    {
      v31 = ::s1;
      if ( v18 )
      {
LABEL_51:
        v32 = v30;
        goto LABEL_52;
      }
    }
    v21[7] = dest;
    v3 = &sa[v16];
LABEL_55:
    if ( v30 )
    {
      *(_QWORD *)&v67 = 0;
      j__free(v30);
    }
  }
  while ( v3 < v4 );
  return v3;
}

