/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: set_idcv_slice
// Address: 0x00000000000705FC

//----- (00000000000705FC) ----------------------------------------------------
__int64 __fastcall set_idcv_slice(
        unsigned __int8 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        void ***p_p_ptr,
        char a5)
{
  int v10; // w8
  int qerrno; // w0
  __int64 v12; // x8
  unsigned __int64 v13; // x8
  unsigned __int64 v14; // x24
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x23
  void **v17; // x8
  unsigned __int64 v18; // x25
  unsigned __int8 *v19; // x19
  char *v20; // x27
  __int64 v21; // x9
  unsigned __int64 v22; // x8
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  size_t v25; // x20
  unsigned __int64 v26; // x21
  unsigned __int64 v27; // x20
  int v28; // w8
  void **v29; // x24
  void *v30; // x20
  void **v31; // x24
  void *v32; // t1
  void *v33; // x22
  unsigned __int8 *v34; // x25
  const char *v35; // x23
  const char *v36; // x0
  int v37; // w0
  int v39; // w20
  unsigned __int64 v40; // x28
  int v41; // w25
  __int64 *v42; // x24
  char *v43; // x28
  __int64 *v44; // x24
  _BYTE *v45; // x0
  char v46; // w8
  void **v47; // x8
  char *v48; // x8
  char v49; // w20
  _BYTE *v50; // x0
  size_t v51; // x2
  char *v52; // x20
  char *v53; // x21
  __int64 v54; // x8
  unsigned __int64 v55; // x24
  unsigned __int64 v56; // x22
  void *v57; // x0
  char *v58; // x0
  int v59; // w8
  unsigned __int8 *v60; // x9
  int v61; // t1
  __int64 *v62; // x0
  unsigned __int8 *v63; // x8
  __int64 v64; // x8
  __int64 v65; // x9
  unsigned __int8 *v66; // t1
  unsigned __int64 v67; // x27
  __int64 **v68; // x21
  int v69; // w29
  __int64 **v70; // x20
  __int64 **v71; // x22
  void *v72; // x24
  __int64 **v73; // x23
  const char *v74; // x25
  const char *v75; // x0
  int v76; // w0
  char *v77; // x8
  int v78; // w9
  unsigned __int8 *v79; // x10
  int v80; // t1
  __int64 *v81; // x8
  __int64 *v82; // x0
  __int64 v83; // x8
  __int64 ***v84; // x9
  __int64 *v85; // x9
  __int64 **v86; // t1
  const char **v87; // x20
  char *v88; // x8
  __int64 v89; // x8
  const char *v90; // x9
  const char **v91; // t1
  void **i; // x24
  __int64 *v93; // x0
  void **v94; // x8
  __int64 v95; // x8
  void *v96; // x9
  void **v97; // t1
  unsigned __int64 v98; // [xsp+18h] [xbp-F8h]
  unsigned __int64 v99; // [xsp+20h] [xbp-F0h] BYREF
  void *v100; // [xsp+28h] [xbp-E8h] BYREF
  __int64 v101; // [xsp+30h] [xbp-E0h]
  __int64 v102; // [xsp+38h] [xbp-D8h]
  void *v103; // [xsp+40h] [xbp-D0h] BYREF
  _QWORD *v104; // [xsp+48h] [xbp-C8h] BYREF
  __int64 v105; // [xsp+50h] [xbp-C0h]
  void **v106; // [xsp+60h] [xbp-B0h] BYREF
  void **p_ptr; // [xsp+68h] [xbp-A8h] BYREF
  void *ptr; // [xsp+70h] [xbp-A0h] BYREF
  __int64 v109; // [xsp+78h] [xbp-98h]
  __int64 v110; // [xsp+80h] [xbp-90h]
  pthread_mutex_t s; // [xsp+88h] [xbp-88h] BYREF

  s.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    v10 = *a1;
    if ( v10 != 10 )
      break;
    a1 = deref_idcv(a1, 0);
    if ( !a1 )
    {
      qerrno = get_qerrno();
LABEL_53:
      LODWORD(a2) = qerrno;
      return (unsigned int)a2;
    }
  }
  if ( v10 == 5 )
  {
    if ( (a5 & 1) != 0 )
    {
      qsnprintf(&s, 32, "%llu", a2);
      qerrno = set_idcv_attr((__int64)a1, (char *)&s, (unsigned __int8 *)p_p_ptr, 0);
      goto LABEL_53;
    }
    ptr = nullptr;
    v109 = 0;
    p_ptr = &ptr;
    v28 = *(unsigned __int8 *)p_p_ptr;
    v98 = a3;
    if ( v28 == 7 )
    {
      if ( (unsigned __int64)p_p_ptr[2] >= 2 )
      {
        v40 = 0;
        v41 = 1;
        do
        {
          v100 = (void *)v40;
          v103 = &v100;
          v42 = sub_7BFA0((__int64 **)&p_ptr, (unsigned __int64 *)&v100, (__int64)&byte_104627, (__int64 **)&v103);
          if ( (unsigned __int64)p_p_ptr[2] | v40 )
            v43 = (char *)p_p_ptr[1] + v40;
          else
            v43 = &byte_1028F3;
          free_idcv(v42 + 5);
          v42[6] = 0;
          v44 = v42 + 6;
          *((_BYTE *)v44 - 8) = 7;
          v44[1] = 0;
          v44[2] = 0;
          v45 = qvector_reserve((pthread_mutex_t *)v44, nullptr, 2u, 1u);
          *v44 = (__int64)v45;
          v44[1] = 2;
          v46 = *v43;
          v40 = v41++;
          *v45 = v46;
          *(_BYTE *)(*v44 + 1) = 0;
          v47 = p_p_ptr[2];
          if ( v47 )
            v48 = (char *)v47 - 1;
          else
            v48 = nullptr;
        }
        while ( (unsigned __int64)v48 > v40 );
      }
    }
    else
    {
      if ( v28 != 5 )
      {
        LODWORD(a2) = set_qerrno(0x620u);
        v49 = 0;
        goto LABEL_186;
      }
      v29 = p_p_ptr[1];
      sub_39140(&v103, "0");
      v32 = v29[1];
      v31 = v29 + 1;
      v30 = v32;
      if ( v32 )
      {
        v33 = v103;
        v34 = (unsigned __int8 *)v31;
        if ( v104 )
          v35 = (const char *)v103;
        else
          v35 = &byte_F154B;
        do
        {
          if ( *((_QWORD *)v30 + 5) )
            v36 = *((const char **)v30 + 4);
          else
            v36 = &byte_F154B;
          v37 = strcmp(v36, v35);
          if ( v37 >= 0 )
            v34 = (unsigned __int8 *)v30;
          v30 = *((void **)v30 + (v37 < 0));
        }
        while ( v30 );
      }
      else
      {
        v33 = v103;
        v34 = (unsigned __int8 *)v31;
      }
      if ( v33 )
      {
        v104 = nullptr;
        qfree(v33);
        v103 = nullptr;
        v105 = 0;
      }
      if ( v34 != (unsigned __int8 *)v31 )
      {
        while ( 1 )
        {
          v58 = *((_QWORD *)v34 + 5) ? *((char **)v34 + 4) : &byte_F154B;
          v59 = (unsigned __int8)*v58;
          if ( v59 != 48 )
            break;
          if ( v58[1] )
            goto LABEL_123;
LABEL_115:
          qsscanf(v58, "%llu", &v100);
          v103 = &v100;
          v62 = sub_7BE9C((__int64 **)&p_ptr, (unsigned __int64 *)&v100, (__int64)&byte_104627, (__int64 **)&v103);
          copy_idcv((unsigned __int8 *)v62 + 40, v34 + 56);
          v63 = *((unsigned __int8 **)v34 + 1);
          if ( v63 )
          {
            do
            {
              v34 = v63;
              v63 = *(unsigned __int8 **)v63;
            }
            while ( v63 );
          }
          else
          {
            v64 = (__int64)(v34 + 16);
            if ( **((unsigned __int8 ***)v34 + 2) == v34 )
            {
              v34 = *((unsigned __int8 **)v34 + 2);
            }
            else
            {
              do
              {
                v65 = *(_QWORD *)v64;
                v66 = *(unsigned __int8 **)(*(_QWORD *)v64 + 16LL);
                v64 = *(_QWORD *)v64 + 16LL;
                v34 = v66;
              }
              while ( *(_QWORD *)v66 != v65 );
            }
          }
          if ( v34 == (unsigned __int8 *)v31 )
            goto LABEL_123;
        }
        if ( *v58 )
        {
          v60 = (unsigned __int8 *)(v58 + 1);
          while ( ((char)v59 & 0x80000000) == 0 && (unsigned int)(unsigned __int8)v59 - 48 <= 9 )
          {
            v61 = *v60++;
            LOBYTE(v59) = v61;
            if ( !v61 )
              goto LABEL_115;
          }
        }
      }
    }
LABEL_123:
    v67 = v98;
    v68 = *((__int64 ***)a1 + 1);
    v69 = v109 - ((v98 - a2) & ~(unsigned int)((__int64)(v98 - a2) >> 63));
    if ( !v69 )
      goto LABEL_174;
    v104 = nullptr;
    v105 = 0;
    v103 = &v104;
    sub_39140(&v100, "0");
    v71 = v68 + 1;
    v70 = (__int64 **)v68[1];
    if ( v70 )
    {
      v72 = v100;
      v73 = v68 + 1;
      if ( v101 )
        v74 = (const char *)v100;
      else
        v74 = &byte_F154B;
      do
      {
        if ( v70[5] )
          v75 = (const char *)v70[4];
        else
          v75 = &byte_F154B;
        v76 = strcmp(v75, v74);
        if ( v76 >= 0 )
          v73 = v70;
        v70 = (__int64 **)v70[v76 < 0];
      }
      while ( v70 );
      v67 = v98;
      if ( !v72 )
      {
LABEL_138:
        if ( v71 == v73 )
          goto LABEL_164;
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v73[5] )
              v77 = (char *)v73[4];
            else
              v77 = &byte_F154B;
            v78 = (unsigned __int8)*v77;
            if ( v78 != 48 )
            {
              if ( *v77 )
              {
                v79 = (unsigned __int8 *)(v77 + 1);
                while ( ((char)v78 & 0x80000000) == 0 && (unsigned int)(unsigned __int8)v78 - 48 <= 9 )
                {
                  v80 = *v79++;
                  LOBYTE(v78) = v80;
                  if ( !v80 )
                    goto LABEL_150;
                }
              }
LABEL_164:
              v87 = (const char **)v103;
              while ( v87 != (const char **)&v104 )
              {
                sub_7BAA8(v68, v68 + 1, v87 + 4, (__int64)(v87 + 4));
                v88 = (char *)v87[1];
                if ( v88 )
                {
                  do
                  {
                    v87 = (const char **)v88;
                    v88 = *(char **)v88;
                  }
                  while ( v88 );
                }
                else
                {
                  v89 = (__int64)(v87 + 2);
                  if ( *(const char ***)v87[2] == v87 )
                  {
                    v87 = (const char **)v87[2];
                  }
                  else
                  {
                    do
                    {
                      v90 = *(const char **)v89;
                      v91 = *(const char ***)(*(_QWORD *)v89 + 16LL);
                      v89 = *(_QWORD *)v89 + 16LL;
                      v87 = v91;
                    }
                    while ( *v91 != v90 );
                  }
                }
              }
              sub_6BDF8((__int64)&v103, v104);
LABEL_174:
              for ( i = p_ptr; i != &ptr; ++a2 )
              {
                qsnprintf(&s, 32, "%llu", a2);
                sub_39140(&v103, (char *)&s);
                v100 = &v103;
                v93 = sub_7C0A4(v68, (__int64)&v103, (__int64)&byte_104627, (__int64 **)&v100);
                copy_idcv((unsigned __int8 *)v93 + 56, (unsigned __int8 *)i + 40);
                if ( v103 )
                {
                  v104 = nullptr;
                  qfree(v103);
                  v103 = nullptr;
                  v105 = 0;
                }
                v94 = (void **)i[1];
                if ( v94 )
                {
                  do
                  {
                    i = v94;
                    v94 = (void **)*v94;
                  }
                  while ( v94 );
                }
                else
                {
                  v95 = (__int64)(i + 2);
                  if ( *(void ***)i[2] == i )
                  {
                    i = (void **)i[2];
                  }
                  else
                  {
                    do
                    {
                      v96 = *(void **)v95;
                      v97 = *(void ***)(*(_QWORD *)v95 + 16LL);
                      v95 = *(_QWORD *)v95 + 16LL;
                      i = v97;
                    }
                    while ( *v97 != v96 );
                  }
                }
              }
              v49 = 1;
LABEL_186:
              sub_7BA58((__int64)&p_ptr, ptr);
              if ( (v49 & 1) != 0 )
LABEL_187:
                LODWORD(a2) = 0;
              return (unsigned int)a2;
            }
            if ( v77[1] )
              goto LABEL_164;
LABEL_150:
            qsscanf(v77, "%llu", &v99);
            if ( v99 >= a2 )
            {
              if ( v99 >= v67 )
              {
                qsnprintf(&s, 32, "%llu", v99 + v69);
                sub_39140(&v100, (char *)&s);
                v106 = &v100;
                v82 = sub_7C0A4((__int64 **)&v103, (__int64)&v100, (__int64)&byte_104627, (__int64 **)&v106);
                copy_idcv((unsigned __int8 *)v82 + 56, (unsigned __int8 *)v73 + 56);
                if ( v100 )
                {
                  v101 = 0;
                  qfree(v100);
                  v100 = nullptr;
                  v102 = 0;
                }
              }
              v73 = sub_7C1F4(v68, (__int64 *)v73);
              goto LABEL_158;
            }
            v81 = v73[1];
            if ( !v81 )
              break;
            do
            {
              v73 = (__int64 **)v81;
              v81 = (__int64 *)*v81;
            }
            while ( v81 );
LABEL_158:
            if ( v71 == v73 )
              goto LABEL_164;
          }
          v83 = (__int64)(v73 + 2);
          v84 = (__int64 ***)v73[2];
          if ( *v84 != v73 )
          {
            do
            {
              v85 = *(__int64 **)v83;
              v86 = *(__int64 ***)(*(_QWORD *)v83 + 16LL);
              v83 = *(_QWORD *)v83 + 16LL;
              v73 = v86;
            }
            while ( *v86 != v85 );
            goto LABEL_158;
          }
          v73 = (__int64 **)v73[2];
          if ( v71 == (__int64 **)v84 )
            goto LABEL_164;
        }
      }
    }
    else
    {
      v72 = v100;
      v73 = v68 + 1;
      if ( !v100 )
        goto LABEL_138;
    }
    v101 = 0;
    qfree(v72);
    v100 = nullptr;
    v102 = 0;
    goto LABEL_138;
  }
  if ( v10 != 7 )
  {
    qerrno = set_qerrno(0x620u);
    goto LABEL_53;
  }
  v12 = *((_QWORD *)a1 + 2);
  if ( v12 )
    v13 = v12 - 1;
  else
    v13 = 0;
  if ( (a2 & 0x8000000000000000LL) != 0 )
    a2 = (v13 + a2) & ~((__int64)(v13 + a2) >> 63);
  if ( a2 <= v13 )
    v14 = a2;
  else
    v14 = v13;
  if ( (a5 & 1) != 0 )
    v15 = v14 + 1;
  else
    v15 = a3;
  if ( (v15 & 0x8000000000000000LL) != 0 )
    v15 = (v15 + v13) & ~((__int64)(v15 + v13) >> 63);
  LOBYTE(p_ptr) = 2;
  v109 = 0;
  v110 = 0;
  ptr = nullptr;
  if ( v15 <= v13 )
    v13 = v15;
  if ( v14 <= v13 )
    v16 = v13;
  else
    v16 = v14;
  if ( *(_BYTE *)p_p_ptr == 7 )
    goto LABEL_26;
  LODWORD(a2) = copy_idcv((unsigned __int8 *)&p_ptr, (unsigned __int8 *)p_p_ptr);
  if ( !(_DWORD)a2 )
  {
    LODWORD(a2) = idcv_string((__int64)&p_ptr);
    if ( !(_DWORD)a2 )
    {
      p_p_ptr = &p_ptr;
LABEL_26:
      v17 = p_p_ptr[2];
      v18 = v16 - v14;
      v19 = a1 + 8;
      if ( v17 )
        v20 = (char *)v17 - 1;
      else
        v20 = nullptr;
      if ( (unsigned __int64)v20 < v18 )
      {
        v21 = *((_QWORD *)a1 + 2);
        v22 = v18 - (_QWORD)v20;
        v23 = v21 ? v21 - 1 : 0LL;
        if ( v22 && v23 > v14 )
        {
          v24 = v22 + v14;
          v25 = v23 - v24;
          if ( v23 <= v24 )
          {
            v27 = v14 + 1;
            v26 = v14;
          }
          else
          {
            memmove((void *)(*(_QWORD *)v19 + v14), (const void *)(*(_QWORD *)v19 + v24), v25);
            v26 = v25 + v14;
            v27 = v25 + v14 + 1;
          }
          if ( *((_QWORD *)v19 + 2) >= v27 )
          {
            v50 = *(_BYTE **)v19;
          }
          else
          {
            v50 = qvector_reserve((pthread_mutex_t *)v19, *(void **)v19, v27, 1u);
            *(_QWORD *)v19 = v50;
          }
          *((_QWORD *)v19 + 1) = v27;
          v50[v26] = 0;
        }
      }
      if ( (unsigned __int64)v20 >= v18 )
        v51 = v16 - v14;
      else
        v51 = (size_t)v20;
      memcpy((void *)(*(_QWORD *)v19 + v14), p_p_ptr[1], v51);
      v52 = &v20[-v18];
      if ( (unsigned __int64)v20 > v18 )
      {
        if ( (unsigned __int64)p_p_ptr[2] | v18 )
          v53 = (char *)p_p_ptr[1] + v18;
        else
          v53 = &byte_1028F3;
        v54 = *((_QWORD *)v19 + 1);
        if ( v54 )
          v55 = v54 - 1;
        else
          v55 = 0;
        v56 = (unsigned __int64)&v52[v55 + 1];
        if ( *((_QWORD *)v19 + 2) >= v56 )
        {
          v57 = *(void **)v19;
        }
        else
        {
          v57 = qvector_reserve((pthread_mutex_t *)v19, *(void **)v19, (unsigned __int64)&v52[v55 + 1], 1u);
          *(_QWORD *)v19 = v57;
        }
        *((_QWORD *)v19 + 1) = v56;
        v52[v55 + (_QWORD)v57] = 0;
        if ( v55 > v16 )
        {
          memmove(&v52[*(_QWORD *)v19 + v16], (const void *)(*(_QWORD *)v19 + v16), v55 - v16);
          v55 = v16;
        }
        memmove((void *)(*(_QWORD *)v19 + v55), v53, (size_t)&v20[-v18]);
      }
      v39 = 0;
      LODWORD(a2) = 0;
      goto LABEL_91;
    }
  }
  v39 = 1;
LABEL_91:
  if ( (unsigned __int8)p_ptr == 5 )
  {
    sub_6F17C((__int64)ptr, (unsigned __int8 *)&p_ptr);
  }
  else if ( (unsigned __int8)p_ptr == 7 && ptr )
  {
    v109 = 0;
    qfree(ptr);
    ptr = nullptr;
    v110 = 0;
    if ( !v39 )
      goto LABEL_187;
    return (unsigned int)a2;
  }
  if ( !v39 )
    goto LABEL_187;
  return (unsigned int)a2;
}
// F154B: using guessed type char byte_F154B;
// 1028F3: using guessed type char byte_1028F3;
// 104627: using guessed type char byte_104627;
