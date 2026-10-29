/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056BFC
// Address: 0x0000000100056BFC

//----- (0000000100056BFC) ----------------------------------------------------
__int64 __fastcall sub_100056BFC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        __int64 *a9,
        unsigned int a10)
{
  __int64 *v15; // x8
  __int64 **v16; // x24
  __int64 **v17; // x23
  int v18; // w8
  __int64 v19; // x8
  __int64 *v20; // x1
  void *v21; // x22
  char **v22; // x0
  int v23; // w24
  char **v24; // x28
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x26
  unsigned __int64 v30; // x1
  size_t v31; // x25
  unsigned __int64 v32; // x22
  unsigned __int64 v33; // x27
  char *v34; // x8
  size_t v35; // x25
  unsigned __int64 v36; // x22
  unsigned __int64 v37; // x27
  char *v38; // x8
  __int64 v39; // x8
  unsigned __int64 v40; // x9
  unsigned __int64 v41; // x25
  char *v42; // x8
  unsigned __int64 v43; // x8
  int v44; // w0
  __int64 v45; // x23
  _QWORD *v46; // x9
  unsigned __int64 i; // x27
  unsigned int *v48; // x26
  int v49; // w23
  __int64 v50; // x0
  unsigned int v51; // w8
  bool v52; // cc
  int v53; // w8
  bool v54; // zf
  __int64 v55; // x25
  void *v56; // x0
  size_t v57; // x2
  __int64 *v58; // x8
  __int64 **v59; // x26
  __int64 **v60; // x22
  int v61; // w8
  _DWORD *v62; // x25
  __int64 *v63; // x1
  __int64 **v64; // x0
  __int64 **v65; // x0
  __int64 *v66; // x23
  __int64 *v67; // x9
  __int64 **v68; // x8
  __int64 *v69; // x23
  __int64 v70; // x9
  int v71; // w27
  __int64 v72; // x26
  __int64 *v73; // x28
  int v74; // w22
  int nsec_stamp; // w0
  int v76; // w0
  int v77; // w8
  int v78; // w8
  __int64 v79; // x8
  __int64 *v80; // x8
  const char *v81; // x23
  size_t v82; // x0
  size_t v83; // x22
  unsigned __int64 v84; // x24
  _QWORD *v85; // x1
  __int64 v87; // x22
  unsigned __int64 v88; // x23
  int *v89; // x24
  char *v90; // x1
  _QWORD *v91; // x1
  int v92; // t1
  void *v93; // [xsp+0h] [xbp-150h]
  _QWORD *v94; // [xsp+8h] [xbp-148h]
  _QWORD *__src; // [xsp+10h] [xbp-140h]
  _QWORD *v96; // [xsp+18h] [xbp-138h]
  __int64 v100; // [xsp+38h] [xbp-118h]
  char *v101[3]; // [xsp+40h] [xbp-110h] BYREF
  void *__ptr; // [xsp+58h] [xbp-F8h] BYREF
  unsigned __int64 v103; // [xsp+60h] [xbp-F0h]
  unsigned __int64 v104; // [xsp+68h] [xbp-E8h]
  __int64 **v105; // [xsp+70h] [xbp-E0h] BYREF
  __int64 *v106; // [xsp+78h] [xbp-D8h] BYREF
  __int64 v107; // [xsp+80h] [xbp-D0h]
  __int64 v108; // [xsp+88h] [xbp-C8h] BYREF
  void *v109; // [xsp+90h] [xbp-C0h]
  _BYTE v110[56]; // [xsp+98h] [xbp-B8h] BYREF
  int v111; // [xsp+D0h] [xbp-80h] BYREF
  __int64 v112; // [xsp+D8h] [xbp-78h] BYREF
  __int64 v113; // [xsp+E0h] [xbp-70h]
  __int64 v114; // [xsp+E8h] [xbp-68h]

  v111 = -2;
  v113 = 0;
  v114 = 0;
  v112 = -1;
  v15 = *(__int64 **)(a1 + 312);
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        v17 = (__int64 **)v15;
        v18 = *((_DWORD *)v15 + 8);
        if ( v18 <= (int)a3 )
          break;
        v15 = *v17;
        v16 = v17;
        if ( !*v17 )
          goto LABEL_9;
      }
      if ( v18 >= (int)a3 )
      {
        v21 = v17;
        goto LABEL_12;
      }
      v15 = v17[1];
    }
    while ( v15 );
    v16 = v17 + 1;
  }
  else
  {
    v16 = (__int64 **)(a1 + 312);
    v17 = (__int64 **)(a1 + 312);
  }
LABEL_9:
  v21 = operator new(0x40u);
  *((_DWORD *)v21 + 8) = a3;
  *((_QWORD *)v21 + 6) = 0;
  *((_QWORD *)v21 + 7) = 0;
  *((_QWORD *)v21 + 5) = 0;
  *(_QWORD *)v21 = 0;
  *((_QWORD *)v21 + 1) = 0;
  *((_QWORD *)v21 + 2) = v17;
  *v16 = (__int64 *)v21;
  v19 = **(_QWORD **)(a1 + 304);
  v20 = (__int64 *)v21;
  if ( v19 )
  {
    *(_QWORD *)(a1 + 304) = v19;
    v20 = *v16;
  }
  sub_10000B394(*(__int64 **)(a1 + 312), v20);
  ++*(_QWORD *)(a1 + 320);
LABEL_12:
  v22 = sub_10005794C((char ***)v21 + 5);
  v106 = nullptr;
  v107 = 0;
  v105 = &v106;
  if ( (*(_DWORD *)(a1 + 188) & 0xFFFFFFF) == 7 )
  {
    v23 = 11;
    goto LABEL_161;
  }
  v24 = v22;
  v25 = *(_QWORD *)(a1 + 552);
  if ( !v25 )
    LODWORD(v25) = *(_DWORD *)(a1 + 648);
  if ( v22[1] != (char *)(int)v25 )
  {
    LODWORD(v108) = -2;
    *(_OWORD *)v110 = 0u;
    v109 = (void *)-1LL;
    sub_100054D84((void **)v22, (int)v25, (unsigned __int64)&v108);
    if ( (int)v108 >= -1 )
    {
      if ( v109 )
      {
        *(_QWORD *)v110 = 0;
        qfree(v109);
      }
    }
  }
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64, char *, _QWORD))(*(_QWORD *)a1 + 224LL))(
         a1,
         a3,
         0xFFFFFFFFLL,
         *v24,
         0) != 1 )
  {
    v23 = 1;
    goto LABEL_161;
  }
  v26 = (*(__int64 (__fastcall **)(__int64, char **))(*(_QWORD *)a1 + 456LL))(a1, v24);
  if ( v26 == -1 )
  {
    v23 = 2;
    goto LABEL_161;
  }
  __ptr = nullptr;
  v103 = 0;
  v104 = 0;
  v27 = *(int *)(a1 + 244);
  v28 = a6;
  v29 = (*(_QWORD *)(a6 + 8) + (int)v27 - 1) & -(int)v27;
  v30 = (v26 - (v29 + v27)) & 0xFFFFFFFFFFFFFFF0LL;
  v24[4] = (char *)(v30 + v29);
  v94 = a7;
  __src = v24 + 4;
  v96 = (_QWORD *)v28;
  v100 = v30;
  if ( (relocate_relobj(v28, v30, 0) & 1) == 0 )
  {
    v23 = 4;
    goto LABEL_157;
  }
  v31 = *(int *)(a1 + 244);
  if ( (_DWORD)v31 )
  {
    v32 = v103;
    if ( __CFADD__(v103, v31) )
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v33 = v103 + v31;
    if ( v103 >= v33 )
    {
      if ( v103 != v33 )
      {
        LOBYTE(v108) = 0;
        sub_100019CE4((_QWORD **)&__ptr, v33, &v108);
      }
    }
    else
    {
      v34 = (char *)__ptr;
      if ( v104 < v33 )
      {
        v34 = (char *)qvector_reserve(&__ptr, __ptr, v33, 1u);
        __ptr = v34;
      }
      bzero(&v34[v103], v33 - v103);
      v103 = v33;
    }
    memcpy((char *)__ptr + v32, __src, v31);
  }
  v35 = v96[1];
  if ( v35 )
  {
    v93 = (void *)*v96;
    v36 = v103;
    if ( __CFADD__(v103, v35) )
      v37 = 0x7FFFFFFFFFFFFFFFLL;
    else
      v37 = v103 + v35;
    if ( v103 >= v37 )
    {
      if ( v103 != v37 )
      {
        LOBYTE(v108) = 0;
        sub_100019CE4((_QWORD **)&__ptr, v37, &v108);
      }
    }
    else
    {
      v38 = (char *)__ptr;
      if ( v104 < v37 )
      {
        v38 = (char *)qvector_reserve(&__ptr, __ptr, v37, 1u);
        __ptr = v38;
      }
      bzero(&v38[v103], v37 - v103);
      v103 = v37;
    }
    memcpy((char *)__ptr + v36, v93, v35);
  }
  v39 = *(int *)(a1 + 244);
  v40 = v103;
  v41 = v29 + v39;
  if ( v103 >= v29 + v39 )
  {
    if ( v103 != v29 + v39 )
    {
      LOBYTE(v108) = 0;
      sub_100019CE4((_QWORD **)&__ptr, v29 + v39, &v108);
    }
  }
  else
  {
    v42 = (char *)__ptr;
    if ( v104 < v41 )
    {
      v42 = (char *)qvector_reserve(&__ptr, __ptr, v41, 1u);
      __ptr = v42;
      v40 = v103;
    }
    bzero(&v42[v40], v41 - v40);
    v103 = v41;
  }
  v43 = v100 - *(int *)(a1 + 244);
  v24[3] = (char *)v43;
  if ( v43 >= v26 )
  {
    v23 = 2;
    goto LABEL_157;
  }
  v44 = (*(__int64 (__fastcall **)(__int64, char **, __int64 ***, void **))(*(_QWORD *)a1 + 448LL))(
          a1,
          v24,
          &v105,
          &__ptr);
  v24[3] += v44;
  v45 = (unsigned int)(v103 - v44);
  if ( (int)v45 >= 1 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1) != v45 )
  {
    v23 = 5;
    goto LABEL_157;
  }
  (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64))(*(_QWORD *)a1 + 312LL))(
    a1,
    0,
    4,
    *__src,
    0xFFFFFFFFLL);
  v46 = a5;
  if ( a5[1] )
  {
    for ( i = 0; i < a5[1]; ++i )
    {
      v48 = (unsigned int *)(*v46 + 32 * i);
      v49 = *v48;
      if ( *v48 == *(_DWORD *)(a1 + 652) || v49 == *(_DWORD *)(a1 + 656) )
      {
        v23 = 3;
        goto LABEL_157;
      }
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 608LL))(a1, *v48);
      v51 = *(unsigned __int8 *)(v50 + 13);
      v52 = v51 > 0x12;
      v53 = (1 << v51) & 0x48038;
      v54 = v52 || v53 == 0;
      if ( v54 )
      {
        if ( *((_QWORD *)v48 + 2) <= 8u && (*(_BYTE *)(v50 + 9) & 1) == 0 )
        {
          sub_100057A40((__int64)&v111);
          memcpy(&v112, *((const void **)v48 + 1), *((_QWORD *)v48 + 2));
          if ( v48[1] )
            v112 += v100;
          goto LABEL_80;
        }
        if ( v111 >= -1 && v112 )
        {
          v113 = 0;
          qfree((void *)v112);
        }
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v111 = 0;
        v55 = *((_QWORD *)v48 + 2);
        if ( !v55 )
        {
LABEL_78:
          v57 = 0;
          v56 = nullptr;
          goto LABEL_79;
        }
      }
      else
      {
        if ( v111 >= -1 && v112 )
        {
          v113 = 0;
          qfree((void *)v112);
        }
        v112 = 0;
        v113 = 0;
        v114 = 0;
        v111 = -1;
        v55 = *((_QWORD *)v48 + 2);
        if ( !v55 )
          goto LABEL_78;
      }
      v112 = (__int64)qvector_reserve(&v112, nullptr, *((_QWORD *)v48 + 2), 1u);
      bzero((void *)(v112 + v113), v55 - v113);
      v113 = v55;
      v56 = (void *)v112;
      v57 = *((_QWORD *)v48 + 2);
LABEL_79:
      memcpy(v56, *((const void **)v48 + 1), v57);
LABEL_80:
      v58 = v106;
      v59 = &v106;
      v60 = &v106;
      if ( v106 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v60 = (__int64 **)v58;
            v61 = *((_DWORD *)v58 + 8);
            if ( v49 >= v61 )
              break;
            v58 = *v60;
            v59 = v60;
            if ( !*v60 )
              goto LABEL_87;
          }
          if ( v61 >= v49 )
            break;
          v58 = v60[1];
          if ( !v58 )
          {
            v59 = v60 + 1;
            goto LABEL_87;
          }
        }
        v62 = v60;
      }
      else
      {
LABEL_87:
        v62 = operator new(0x48u);
        v62[8] = v49;
        v62[10] = -2;
        *((_QWORD *)v62 + 7) = 0;
        *((_QWORD *)v62 + 8) = 0;
        *((_QWORD *)v62 + 6) = -1;
        *(_QWORD *)v62 = 0;
        *((_QWORD *)v62 + 1) = 0;
        *((_QWORD *)v62 + 2) = v60;
        *v59 = (__int64 *)v62;
        v63 = (__int64 *)v62;
        if ( *v105 )
        {
          v105 = (__int64 **)*v105;
          v63 = *v59;
        }
        sub_10000B394(v106, v63);
        ++v107;
      }
      sub_100054FA8((_QWORD *)v62 + 5, (__int64)&v111);
      v46 = a5;
    }
  }
  sub_100057A40((__int64)&v111);
  v112 = (__int64)v24[3];
  v64 = sub_100057A94((__int64 **)&v105, (int *)(a1 + 652));
  sub_100054FA8(v64, (__int64)&v111);
  v112 = a2;
  v65 = sub_100057A94((__int64 **)&v105, (int *)(a1 + 656));
  sub_100054FA8(v65, (__int64)&v111);
  v66 = (__int64 *)v105;
  if ( v105 == &v106 )
  {
LABEL_105:
    if ( (a10 & 1) != 0 )
    {
      v23 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 184) = 1;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a1 + 168) == 1 )
      {
        v108 = 0xFFFFFFFFLL;
        v109 = (void *)-1LL;
        v110[0] = 0;
        memset(&v110[4], 0, 52);
        if ( a9 )
          v69 = a9;
        else
          v69 = &v108;
        if ( (a10 & 4) != 0 )
        {
          v72 = HIWORD(a10);
          if ( a10 >= 0x10000 )
            v70 = get_nsec_stamp() + 1000000LL * (unsigned int)v72;
          else
            LODWORD(v70) = 0;
          v71 = 1;
        }
        else
        {
          LODWORD(v70) = 0;
          v71 = 0;
          v72 = 40;
        }
        v23 = 0;
        if ( a9 )
          v73 = a9;
        else
          v73 = &v108;
        v74 = v70;
        while ( 1 )
        {
          do
          {
            if ( v71 )
            {
              if ( v71 == 2 )
              {
                if ( (int)v72 < 1
                  || (nsec_stamp = get_nsec_stamp(),
                      v72 = (unsigned int)((v74 - nsec_stamp) / 1000000),
                      (v74 - nsec_stamp) / 1000000 <= 0) )
                {
                  v23 = 12;
                  if ( (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, 0) < 1 )
                    goto LABEL_156;
                }
              }
              v71 = 2;
            }
            v76 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)a1 + 136LL))(a1, v69, v72);
          }
          while ( !v76 );
          if ( v76 == -1 )
          {
            v23 = 8;
            goto LABEL_156;
          }
          v77 = *((_DWORD *)v73 + 5) & 0xFFFFFFF;
          if ( v77 == 4 )
          {
            if ( *((_DWORD *)v73 + 1) == (_DWORD)a3 )
            {
LABEL_141:
              sub_100051040(a1, (__int64)v69, 8u);
              v100 = -1;
              goto LABEL_156;
            }
          }
          else if ( v77 == 2 )
          {
            goto LABEL_141;
          }
          if ( v23 == 12 )
          {
            sub_100051040(a1, (__int64)v69, 0xAu);
            set_debug_event_code((__int64)v69, 0);
            set_debug_event_code(a1 + 168, 0);
            v23 = 12;
            goto LABEL_156;
          }
          if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 464LL))(
                 a1,
                 a3,
                 v69,
                 *__src) )
          {
            break;
          }
          if ( (*((_DWORD *)v73 + 5) & 0xFFFFFFF) == 7 )
          {
            if ( (a10 & 2) == 0 )
            {
              v80 = &v108;
              if ( a9 )
                v80 = a9;
              sub_100018588((const void **)a8, (const void **)v80 + 5);
            }
            set_debug_event_code(a1 + 168, 0);
            *(_BYTE *)(a1 + 184) = 1;
            v23 = 10;
            goto LABEL_156;
          }
          if ( (unsigned int)sub_100051040(a1, (__int64)v69, 0xAu) )
          {
            v23 = 7;
            goto LABEL_156;
          }
          (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 168LL))(a1, v69);
          set_debug_event_code((__int64)v69, 0);
        }
        set_debug_event_code(a1 + 168, 0);
        v78 = a4;
        if ( a4 < 1
          || v96[1] >= (unsigned __int64)(unsigned int)a4
          && (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 296LL))(
               a1,
               v100,
               *v96,
               (unsigned int)a4,
               0) == v78 )
        {
          if ( v94 && v94[1] )
          {
            memset(v101, 0, sizeof(v101));
            v79 = *(_QWORD *)(a1 + 552);
            if ( !v79 )
              LODWORD(v79) = *(_DWORD *)(a1 + 648);
            sub_100050898((__int64)v101, (int)v79);
            if ( (*(int (__fastcall **)(__int64, __int64, __int64, char *, _QWORD))(*(_QWORD *)a1 + 224LL))(
                   a1,
                   a3,
                   0xFFFFFFFFLL,
                   v101[0],
                   0) < 1 )
            {
              v23 = 1;
            }
            else
            {
              if ( v94[1] )
              {
                v87 = 0;
                v88 = 0;
                do
                {
                  v89 = (int *)(*v94 + v87);
                  v90 = &v101[0][32 * *v89];
                  v92 = *(_DWORD *)v90;
                  v91 = v90 + 8;
                  if ( v92 >= -1 )
                    v91 = (_QWORD *)*v91;
                  memcpy(*((void **)v89 + 1), v91, *((_QWORD *)v89 + 2));
                  v89[1] = 0;
                  ++v88;
                  v87 += 32;
                }
                while ( v88 < v94[1] );
              }
              v23 = 0;
            }
            sub_100009150(v101);
          }
          else
          {
            v23 = 0;
          }
        }
        else
        {
          v23 = 5;
        }
LABEL_156:
        free_debug_event((__int64)&v108);
      }
      else
      {
        v23 = 9;
      }
    }
  }
  else
  {
    while ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64 *, _QWORD))(*(_QWORD *)a1 + 232LL))(
              a1,
              a3,
              *((unsigned int *)v66 + 8),
              v66 + 5,
              0) == 1 )
    {
      *((_BYTE *)v24 + 40) = 1;
      v67 = (__int64 *)v66[1];
      if ( v67 )
      {
        do
        {
          v68 = (__int64 **)v67;
          v67 = (__int64 *)*v67;
        }
        while ( v67 );
      }
      else
      {
        do
        {
          v68 = (__int64 **)v66[2];
          v54 = *v68 == v66;
          v66 = (__int64 *)v68;
        }
        while ( !v54 );
      }
      v66 = (__int64 *)v68;
      if ( v68 == &v106 )
        goto LABEL_105;
    }
    v23 = 6;
  }
LABEL_157:
  if ( __ptr )
  {
    v103 = 0;
    qfree(__ptr);
  }
  if ( v23 )
  {
    if ( v23 == 10 )
    {
LABEL_166:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 432LL))(a1, a3);
      v100 = -1;
      goto LABEL_167;
    }
LABEL_161:
    v81 = off_10009B3A0[v23];
    v82 = strlen(v81);
    if ( v82 )
    {
      v83 = v82;
      v84 = v82 + 1;
      v85 = *(_QWORD **)a8;
      if ( *(_QWORD *)(a8 + 16) < v82 + 1 )
      {
        v85 = qvector_reserve((_QWORD *)a8, v85, v84, 1u);
        *(_QWORD *)a8 = v85;
      }
      *(_QWORD *)(a8 + 8) = v84;
      memmove(v85, v81, v83);
      *(_BYTE *)(*(_QWORD *)a8 + v83) = 0;
    }
    else
    {
      *(_QWORD *)(a8 + 8) = 0;
    }
    goto LABEL_166;
  }
LABEL_167:
  sub_100059520((__int64)&v105, (int *)v106);
  if ( v111 >= -1 && v112 )
  {
    v113 = 0;
    qfree((void *)v112);
  }
  return v100;
}
// 100057600: conditional instruction was optimized away because w24.4==0
// 10009B3A0: using guessed type char *off_10009B3A0[28];
