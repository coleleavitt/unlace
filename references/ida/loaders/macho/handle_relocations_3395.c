__int64 __fastcall sub_4AB20(__int64 a1, void *a2)
{
  __int64 v3; // rbx
  size_t v4; // r12
  char *v5; // rax
  char *v6; // r12
  char *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v10; // rbp
  char *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  size_t v15; // r12
  _QWORD *v16; // rbp
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 (__fastcall *v24)(); // rax
  __int64 v25; // rdx
  char *v26; // r14
  char *v27; // rdx
  void *v28; // rax
  char *v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // r15
  int v32; // ecx
  size_t v33; // r8
  int v34; // eax
  char *v35; // r9
  size_t v36; // rax
  _QWORD *v37; // r13
  __int64 (__fastcall *v38)(void *); // rax
  void *v39; // rdi
  void **v40; // rax
  void **v41; // rbp
  void **v42; // r12
  void *v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // r12
  void *v48; // rdi
  __int64 v49; // rsi
  void *v50; // rdi
  void *v51; // rdi
  size_t v52; // rdx
  size_t v53; // rcx
  size_t v54; // rax
  size_t v55; // r12
  size_t v56; // r14
  unsigned __int64 v57; // rax
  int v58; // ecx
  int v59; // r15d
  __int64 v60; // rdx
  unsigned __int64 v61; // rax
  unsigned __int64 *v62; // rdx
  __int64 v63; // rax
  char *v64; // rdx
  void *v65; // rax
  int v66; // edx
  int v67; // ecx
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // rdi
  __int64 v70; // rdx
  int v71; // eax
  unsigned int v72; // edx
  unsigned __int64 v73; // rax
  int v74; // ecx
  __int64 v75; // rdx
  __int16 v76; // ax
  __int16 *v77; // rdx
  char *v78; // rdx
  unsigned __int64 v79; // rax
  int v80; // ecx
  __int64 v81; // rdx
  char *v82; // rdx
  unsigned __int64 v83; // rax
  int v84; // ecx
  __int64 v85; // rdx
  char *v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 *v88; // rdx
  __int16 v89; // ax
  __int16 *v90; // rdx
  __int64 v91; // [rsp+0h] [rbp-138h]
  char *v92; // [rsp+8h] [rbp-130h]
  int v93; // [rsp+10h] [rbp-128h]
  int v94; // [rsp+14h] [rbp-124h]
  __int64 v95; // [rsp+18h] [rbp-120h]
  __int64 v96; // [rsp+20h] [rbp-118h]
  int v97; // [rsp+28h] [rbp-110h]
  unsigned int v98; // [rsp+2Ch] [rbp-10Ch] BYREF
  char *s; // [rsp+30h] [rbp-108h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-100h]
  void *v101[2]; // [rsp+50h] [rbp-E8h] BYREF
  unsigned int *v102; // [rsp+60h] [rbp-D8h]
  __int64 v103; // [rsp+68h] [rbp-D0h]
  __int128 v104; // [rsp+70h] [rbp-C8h]
  __int64 v105; // [rsp+80h] [rbp-B8h]
  __int128 v106; // [rsp+88h] [rbp-B0h]
  _BYTE v107[40]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-70h]
  unsigned int v109; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v110; // [rsp+F8h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_290B0(a1, "__PRELINK_INFO", "__info", v107)
    && !(unsigned __int8)sub_290B0(a1, "__PRELINK", "__info", v107) )
  {
    return (unsigned int)-1;
  }
  v3 = v108;
  if ( !v108 )
    return (unsigned int)-1;
  s = 0;
  *(_OWORD *)n = 0;
  v4 = v108 + 1;
  if ( v108 == -1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = (char *)qvector_reserve(&s, 0, v108 + 1, 1);
    v52 = n[0];
    s = v5;
    if ( n[0] < v4 )
    {
      do
      {
        v53 = v52;
        v5[v52++] = 0;
        v5 = s;
      }
      while ( v3 != v53 );
    }
    n[0] = v3 + 1;
  }
  v5[v3] = 0;
  v6 = (char *)(*(_QWORD *)(a1 + 120) + v109);
  v7 = v6;
  if ( (char *)qlseek(*(_QWORD *)(a1 + 48), v6, 0) == v6 )
  {
    v7 = s;
    if ( qlread(*(_QWORD *)(a1 + 48), s, v3) == v3 )
    {
      v10 = n[0];
      v11 = s;
      if ( !n[0] )
      {
        if ( !s )
          return (unsigned int)-1;
        goto LABEL_15;
      }
      v54 = strlen(s);
      v55 = v54;
      if ( !v54 )
      {
        if ( !v11 )
        {
LABEL_16:
          if ( v10 > 1 )
            goto LABEL_17;
          return (unsigned int)-1;
        }
LABEL_15:
        n[0] = 0;
        qfree(v11, v7);
        s = 0;
        v10 = n[0];
        n[1] = 0;
        goto LABEL_16;
      }
      v56 = v54 + 1;
      if ( v10 < v54 + 1 )
      {
        if ( n[1] < v56 )
        {
          s = (char *)qvector_reserve(&s, v11, v54 + 1, 1);
          v10 = n[0];
          v11 = s;
        }
        v7 = 0;
        memset(&v11[v10], 0, v56 - v10);
        n[0] = v56;
        v11 = s;
      }
      else if ( v10 != v54 + 1 )
      {
        n[0] = v54 + 1;
      }
      v11[v55] = 0;
      if ( n[0] > 1 )
      {
LABEL_17:
        v98 = 0;
        v12 = operator new(0x88u);
        v13 = operator new(0x28u);
        v15 = n[0];
        v16 = (_QWORD *)v13;
        *(_QWORD *)v13 = &off_640A0;
        *(_QWORD *)(v13 + 8) = 0;
        *(_OWORD *)(v13 + 16) = 0;
        if ( v15 )
        {
          v65 = (void *)qalloc_or_throw(v15, v7, v14);
          v16[1] = v65;
          v7 = s;
          v16[3] = v15;
          memcpy(v65, v7, v15);
          v16[2] = v15;
        }
        v16[4] = 0;
        *(_QWORD *)v12 = &off_640D0;
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 24) = 0;
        *(_QWORD *)(v12 + 48) = 0;
        *(_QWORD *)(v12 + 56) = 0x100000001LL;
        *(_OWORD *)(v12 + 32) = 0;
        v17 = (_BYTE *)operator new[](1u);
        *(_QWORD *)(v12 + 48) = v17;
        *v17 = 0;
        *(_QWORD *)(v12 + 64) = 0;
        *(_QWORD *)(v12 + 72) = 0x100000001LL;
        v18 = (_BYTE *)operator new[](1u);
        *(_QWORD *)(v12 + 64) = v18;
        *v18 = 0;
        *(_QWORD *)(v12 + 88) = 0;
        *(_QWORD *)(v12 + 96) = 0;
        *(_WORD *)(v12 + 104) = 257;
        *(_QWORD *)(v12 + 112) = 0;
        *(_QWORD *)(v12 + 120) = 0;
        *(_WORD *)(v12 + 128) = 257;
        if ( !v16 )
        {
LABEL_36:
          v101[0] = (void *)v12;
          v101[1] = a2;
          v102 = &v98;
          v103 = 0;
          v105 = 0;
          v104 = 0;
          v106 = 0;
          while ( 1 )
          {
            v8 = v98;
            if ( v98 )
              break;
            if ( !(unsigned __int8)sub_4A610(
                                     (unsigned int)v101,
                                     (_DWORD)v7,
                                     v19,
                                     v20,
                                     v21,
                                     v22,
                                     v91,
                                     (_DWORD)v92,
                                     v93,
                                     v95,
                                     v96,
                                     v97,
                                     (__int64)s) )
            {
              v8 = v98;
              break;
            }
          }
          v37 = v101[0];
          if ( v101[0] )
          {
            v38 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v101[0] + 8LL);
            if ( v38 == sub_13790 )
            {
              v39 = (void *)*((_QWORD *)v101[0] + 1);
              *(_QWORD *)v101[0] = &off_640D0;
              if ( v39 )
                operator delete[](v39);
              if ( *((_BYTE *)v37 + 128) )
              {
                v40 = (void **)v37[14];
                if ( v40 )
                {
                  v41 = &v40[4 * (_QWORD)*(v40 - 1)];
                  if ( v40 == v41 )
                  {
                    v44 = 0;
                  }
                  else
                  {
                    do
                    {
                      v42 = v41;
                      v43 = *(v41 - 2);
                      v41 -= 4;
                      if ( v43 )
                        operator delete[](v43);
                      if ( *v41 )
                        operator delete[](*v41);
                    }
                    while ( (void **)v37[14] != v41 );
                    v44 = 32LL * (_QWORD)*(v42 - 5);
                  }
                  operator delete[](v41 - 1, v44 + 8);
                }
              }
              if ( *((_BYTE *)v37 + 104) )
              {
                v45 = v37[11];
                if ( v45 )
                {
                  v46 = v45 + 16LL * *(_QWORD *)(v45 - 8);
                  if ( v45 == v46 )
                  {
                    v49 = 0;
                  }
                  else
                  {
                    do
                    {
                      v47 = v46;
                      v48 = *(void **)(v46 - 16);
                      v46 -= 16;
                      if ( v48 )
                        operator delete[](v48);
                    }
                    while ( v37[11] != v46 );
                    v49 = 16LL * *(_QWORD *)(v47 - 24);
                  }
                  operator delete[]((void *)(v46 - 8), v49 + 8);
                }
              }
              v50 = (void *)v37[8];
              if ( v50 )
                operator delete[](v50);
              v51 = (void *)v37[6];
              if ( v51 )
                operator delete[](v51);
              v7 = (_BYTE *)off_88;
              operator delete(v37, 0x88u);
            }
            else
            {
              v38(v101[0]);
            }
          }
          v102 = 0;
          if ( v105 )
          {
            *(_QWORD *)&v106 = 0;
            qfree(v105, v7);
          }
          if ( v103 )
          {
            *(_QWORD *)&v104 = 0;
            qfree(v103, v7);
          }
          goto LABEL_7;
        }
        v23 = *v16;
        *(_DWORD *)(v12 + 44) = 1;
        v24 = *(__int64 (__fastcall **)())(v23 + 24);
        if ( v24 == sub_10F60 )
        {
          v25 = v16[2];
          if ( !v25 )
          {
            LODWORD(v92) = 0;
            v26 = (char *)operator new[](4u);
            v27 = 0;
            v28 = *(void **)(*v16 + 16LL);
            if ( v28 == &sub_11130 )
            {
              v29 = (char *)v16[2];
              v7 = (char *)v16[4];
              if ( v29 )
              {
                v30 = (unsigned __int64)(v29 - 1);
                if ( v30 >= (unsigned __int64)v7 )
                  goto LABEL_89;
                v31 = 0;
                v32 = 4;
LABEL_26:
                v33 = (unsigned int)(v30 - (_DWORD)v7);
                v34 = v33;
                if ( (int)v33 > 0 )
                {
                  v35 = &v7[v33];
                  v36 = v33;
                  v29 = v27;
                  goto LABEL_28;
                }
                goto LABEL_113;
              }
              if ( !v7 )
                goto LABEL_89;
              v31 = 0;
              v32 = 4;
LABEL_111:
              v72 = -(int)v7;
              v34 = -(int)v7;
              if ( -(int)v7 >= 0 && (_DWORD)v7 != 0 )
              {
                v36 = v72;
                v35 = &v7[v72];
                goto LABEL_28;
              }
LABEL_113:
              v16[4] = &v7[v34];
LABEL_105:
              if ( v34 )
              {
                v26[(int)v31 + 3] = 0;
                v26[(int)v31 + 2] = 0;
                v26[(int)v31 + 1] = 0;
                v26[v31] = 0;
                if ( v32 <= 3 )
                {
                  if ( v32 <= 1 )
                    goto LABEL_34;
LABEL_32:
                  if ( *(_WORD *)v26 == 0xFFFE )
                  {
                    v73 = *(unsigned int *)(v12 + 44);
                    v74 = v32 >> 1;
                    *(_DWORD *)(v12 + 40) = 2;
                    v59 = v74;
                    if ( (unsigned int)v73 <= 5 )
                    {
                      v75 = 43;
                      if ( _bittest64(&v75, v73) )
                      {
                        v76 = *((_WORD *)v26 + 1);
                        v77 = (__int16 *)(v26 + 2);
                        if ( v76 )
                        {
                          do
                          {
                            *v77++ = __ROL2__(v76, 8);
                            v76 = *v77;
                          }
                          while ( *v77 );
                        }
                      }
                    }
                    v92 = (char *)v74;
                    v63 = operator new[](v74);
                    *(_QWORD *)(v12 + 8) = v63;
                    v78 = 0;
                    do
                    {
                      v7 = (char *)*(unsigned __int16 *)&v26[2 * (_QWORD)v78 + 2];
                      (v78++)[v63] = (char)v7;
                      v63 = *(_QWORD *)(v12 + 8);
                    }
                    while ( v92 != v78 );
                  }
                  else
                  {
                    if ( *(_WORD *)v26 != 0xFEFF )
                      goto LABEL_34;
                    v83 = *(unsigned int *)(v12 + 44);
                    v84 = v32 >> 1;
                    *(_DWORD *)(v12 + 40) = 3;
                    v59 = v84;
                    if ( (unsigned int)v83 > 5 || (v85 = 43, !_bittest64(&v85, v83)) )
                    {
                      v89 = *((_WORD *)v26 + 1);
                      v90 = (__int16 *)(v26 + 2);
                      if ( v89 )
                      {
                        do
                        {
                          *v90++ = __ROL2__(v89, 8);
                          v89 = *v90;
                        }
                        while ( *v90 );
                      }
                    }
                    v92 = (char *)v84;
                    v63 = operator new[](v84);
                    *(_QWORD *)(v12 + 8) = v63;
                    v86 = 0;
                    do
                    {
                      v7 = (char *)*(unsigned __int16 *)&v26[2 * (_QWORD)v86 + 2];
                      (v86++)[v63] = (char)v7;
                      v63 = *(_QWORD *)(v12 + 8);
                    }
                    while ( v92 != v86 );
                  }
                  goto LABEL_88;
                }
LABEL_30:
                if ( *(_QWORD *)v26 == -131072 )
                {
                  v57 = *(unsigned int *)(v12 + 44);
                  v58 = v32 >> 2;
                  *(_DWORD *)(v12 + 40) = 4;
                  v59 = v58;
                  if ( (unsigned int)v57 <= 5 )
                  {
                    v60 = 43;
                    if ( _bittest64(&v60, v57) )
                    {
                      v61 = *((_QWORD *)v26 + 1);
                      v62 = (unsigned __int64 *)(v26 + 8);
                      if ( v61 )
                      {
                        do
                        {
                          *v62++ = (v61 >> 8) | (v61 << 8);
                          v61 = *v62;
                        }
                        while ( *v62 );
                      }
                    }
                  }
                  v92 = (char *)v58;
                  v63 = operator new[](v58);
                  *(_QWORD *)(v12 + 8) = v63;
                  v7 = v92;
                  v64 = 0;
                  do
                  {
                    v64[v63] = *(_QWORD *)&v26[8 * (_QWORD)v64 + 8];
                    ++v64;
                    v63 = *(_QWORD *)(v12 + 8);
                  }
                  while ( v64 != v92 );
                }
                else
                {
                  if ( *(_QWORD *)v26 != 65279 )
                    goto LABEL_32;
                  v79 = *(unsigned int *)(v12 + 44);
                  v80 = v32 >> 2;
                  *(_DWORD *)(v12 + 40) = 5;
                  v59 = v80;
                  if ( (unsigned int)v79 > 5 || (v81 = 43, !_bittest64(&v81, v79)) )
                  {
                    v87 = *((_QWORD *)v26 + 1);
                    v88 = (unsigned __int64 *)(v26 + 8);
                    if ( v87 )
                    {
                      do
                      {
                        *v88++ = (v87 >> 8) | (v87 << 8);
                        v87 = *v88;
                      }
                      while ( *v88 );
                    }
                  }
                  v92 = (char *)v80;
                  v63 = operator new[](v80);
                  *(_QWORD *)(v12 + 8) = v63;
                  v7 = v92;
                  v82 = 0;
                  do
                  {
                    v82[v63] = *(_QWORD *)&v26[8 * (_QWORD)v82 + 8];
                    ++v82;
                    v63 = *(_QWORD *)(v12 + 8);
                  }
                  while ( v92 != v82 );
                }
LABEL_88:
                *(_QWORD *)(v12 + 24) = v63;
                *(_DWORD *)(v12 + 32) = v59;
                goto LABEL_89;
              }
              goto LABEL_89;
            }
            v32 = 4;
            v31 = 0;
            goto LABEL_104;
          }
          v66 = v25 - 1;
          v67 = v66 + 4;
          v31 = v66;
          v68 = v66 + 4;
        }
        else
        {
          v71 = ((__int64 (__fastcall *)(_QWORD *))v24)(v16);
          v31 = v71;
          v67 = v71 + 4;
          v68 = v71 + 4;
        }
        LODWORD(v92) = v67;
        v26 = (char *)operator new[](v68);
        v32 = (int)v92;
        v28 = *(void **)(*v16 + 16LL);
        if ( v28 == &sub_11130 )
        {
          if ( (int)v31 < 0 )
            goto LABEL_89;
          v35 = (char *)v16[4];
          v36 = (int)v31;
          v69 = (unsigned __int64)&v35[(int)v31];
          if ( __CFADD__((int)v31, v35) )
            goto LABEL_89;
          v70 = v16[2];
          if ( v70 )
          {
            LODWORD(v30) = v70 - 1;
            if ( v70 - 1 < v69 )
            {
              v27 = (char *)(int)v31;
              v7 = (char *)v16[4];
              goto LABEL_26;
            }
            if ( (_DWORD)v31 )
            {
              v7 = (char *)v16[4];
              v29 = (char *)(int)v31;
              v35 += (int)v31;
              goto LABEL_28;
            }
          }
          else
          {
            if ( v69 )
            {
              v29 = (char *)(int)v31;
              v7 = (char *)v16[4];
              goto LABEL_111;
            }
            if ( (_DWORD)v31 )
            {
              v29 = (char *)(int)v31;
              if ( !v35 )
              {
                v7 = (char *)&unk_66C09;
LABEL_29:
                v95 = (__int64)v35;
                v94 = v32;
                v92 = v29;
                memcpy(v26, v7, v36);
                v32 = v94;
                v16[4] = v95;
                v26[(int)v31 + 3] = 0;
                v26[(int)v31 + 2] = 0;
                v26[(int)v31 + 1] = 0;
                v92[(_QWORD)v26] = 0;
                if ( v94 <= 3 )
                {
LABEL_34:
                  *(_DWORD *)(v12 + 40) = 0;
                  *(_QWORD *)(v12 + 24) = v26;
                  *(_QWORD *)(v12 + 8) = v26;
                  *(_DWORD *)(v12 + 32) = v32;
LABEL_35:
                  (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
                  sub_429C0(v12);
                  *(_QWORD *)(v12 + 16) = *(_QWORD *)(v12 + 24);
                  goto LABEL_36;
                }
                goto LABEL_30;
              }
              v7 = (char *)v16[4];
              v35 = 0;
LABEL_28:
              v7 += v16[1];
              goto LABEL_29;
            }
          }
LABEL_89:
          if ( v26 )
            operator delete[](v26);
          goto LABEL_35;
        }
LABEL_104:
        LODWORD(v92) = v32;
        v7 = v26;
        v34 = ((__int64 (__fastcall *)(_QWORD *, char *, _QWORD))v28)(v16, v26, (unsigned int)v31);
        v32 = (int)v92;
        goto LABEL_105;
      }
    }
  }
  v8 = -1;
LABEL_7:
  if ( s )
  {
    n[0] = 0;
    qfree(s, v7);
  }
  return v8;
}
