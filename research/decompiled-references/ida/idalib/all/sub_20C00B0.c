int __fastcall sub_20C00B0(pthread_rwlock_t *rwlock, char *a2, char a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 writer; // r14
  char *v8; // rcx
  __int64 v9; // rbp
  __int64 *v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // rsi
  __int64 v14; // rax
  const void *v15; // r13
  size_t v16; // rbp
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // r10d
  __int64 *v25; // r8
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  unsigned __int64 pad1; // r13
  __int64 *v29; // rbp
  __int64 v30; // rdi
  void (*v31)(); // rax
  void **v33; // rsi
  __int64 v34; // rsi
  int v35; // r10d
  __int64 *v36; // r8
  unsigned int v37; // edx
  __int64 v38; // r8
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r9
  int v45; // r12d
  __int64 *v46; // r14
  _QWORD *i; // rdx
  __int64 *v48; // rax
  int v49; // r11d
  char *v50; // r10
  __int64 v51; // rdx
  _QWORD *v52; // r8
  unsigned int v53; // esi
  char *v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // r8
  int v57; // r12d
  __int64 *v58; // r11
  unsigned __int64 v59; // rdi
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  int v63; // r10d
  _QWORD *j; // rdx
  __int64 *v65; // rax
  __int64 v66; // r9
  __int64 v67; // r8
  unsigned int v68; // esi
  __int64 *v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // r12
  int v72; // r11d
  __int64 *v73; // r10
  __int64 v74; // rsi
  _QWORD *v75; // rsi
  _QWORD *v76; // rdx
  __int64 v77; // rsi
  _QWORD *v78; // rsi
  _QWORD *v79; // rdx
  char *v81; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v82; // [rsp+18h] [rbp-60h]
  _QWORD *v83; // [rsp+20h] [rbp-58h]
  __int64 v84; // [rsp+28h] [rbp-50h]
  __m128 v85[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( pthread_rwlock_wrlock(rwlock) == 35 )
    std::__throw_system_error(35);
  writer = (unsigned int)rwlock[1].__writer;
  v8 = &rwlock[1].__size[8];
  v9 = *((_QWORD *)a2 + 4);
  v10 = (__int64 *)*(&rwlock[1].__align + 1);
  if ( !(_DWORD)writer )
    goto LABEL_31;
  v11 = (unsigned int)(writer - 1);
  LODWORD(v12) = v11 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v13 = &v10[2 * (unsigned int)v12];
  v14 = *v13;
  if ( v9 == *v13 )
  {
LABEL_4:
    sub_20C0010(v85, v13, &v10[2 * (unsigned int)writer], (__int64)v8, 1);
    goto LABEL_5;
  }
  v35 = 1;
  v36 = nullptr;
  if ( v14 != -4096 )
  {
    while ( 1 )
    {
      if ( !v36 && v14 == -8192 )
        v36 = v13;
      v6 = (unsigned int)(v35 + 1);
      v12 = (unsigned int)v11 & ((_DWORD)v12 + v35);
      v13 = &v10[2 * v12];
      v14 = *v13;
      if ( v9 == *v13 )
        goto LABEL_4;
      if ( v14 == -4096 )
        break;
      ++v35;
    }
    if ( v36 )
      v13 = v36;
  }
  v37 = rwlock[1].__nr_readers_queued + 1;
  v5 = 4 * v37;
  if ( (unsigned int)v5 >= 3 * (int)writer )
  {
LABEL_31:
    v81 = &rwlock[1].__size[8];
    v40 = (((((((unsigned int)(2 * writer - 1) | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 2)
            | (unsigned int)(2 * writer - 1)
            | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * writer - 1) | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 2)
          | (unsigned int)(2 * writer - 1)
          | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * writer - 1) | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 2)
          | (unsigned int)(2 * writer - 1)
          | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * writer - 1) | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1)) >> 2)
        | (unsigned int)(2 * writer - 1)
        | ((unsigned __int64)(unsigned int)(2 * writer - 1) >> 1);
    v41 = ((v40 >> 16) | v40) + 1;
    if ( (unsigned int)v41 < 0x40 )
      LODWORD(v41) = 64;
    rwlock[1].__writer = v41;
    v42 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v41, 8, 64, v8, v5, v6);
    v8 = v81;
    *(&rwlock[1].__align + 1) = (__int64)v42;
    if ( v10 )
    {
      v43 = (unsigned int)rwlock[1].__writer;
      *(&rwlock[1].__align + 2) = 0;
      v44 = 16 * writer;
      v45 = v43;
      v46 = &v10[2 * writer];
      for ( i = &v42[2 * v43]; i != v42; v42 += 2 )
        *v42 = -4096;
      v48 = v10;
      v49 = v45 - 1;
      v50 = v8;
      if ( v10 != v46 )
      {
        do
        {
          v51 = *v48;
          if ( *v48 != -8192 && v51 != -4096 )
          {
            if ( !v45 )
            {
              *(_QWORD *)&dword_0 = *v48;
              BUG();
            }
            v52 = (_QWORD *)*(&rwlock[1].__align + 1);
            v53 = v49 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
            v54 = (char *)&v52[2 * v53];
            v55 = *(_QWORD *)v54;
            if ( v51 != *(_QWORD *)v54 && v55 != -4096 )
            {
              LODWORD(v82) = 1;
              v81 = nullptr;
              v83 = v52;
              while ( 1 )
              {
                if ( v55 == -8192 )
                {
                  if ( v81 )
                    v54 = v81;
                  v81 = v54;
                }
                v53 = v49 & ((_DWORD)v82 + v53);
                v54 = (char *)&v83[2 * v53];
                v55 = *(_QWORD *)v54;
                if ( v51 == *(_QWORD *)v54 )
                  break;
                if ( v55 == -4096 )
                {
                  if ( v81 )
                    v54 = v81;
                  break;
                }
                LODWORD(v82) = (_DWORD)v82 + 1;
              }
            }
            *(_QWORD *)v54 = v51;
            *((_QWORD *)v54 + 1) = v48[1];
            ++rwlock[1].__nr_readers_queued;
          }
          v48 += 2;
        }
        while ( v46 != v48 );
        v8 = v50;
      }
      v81 = v8;
      operator delete(v10, v44, 8);
      v42 = (_QWORD *)*(&rwlock[1].__align + 1);
      LODWORD(writer) = rwlock[1].__writer;
      v37 = rwlock[1].__nr_readers_queued + 1;
      v8 = v81;
    }
    else
    {
      v74 = (unsigned int)rwlock[1].__writer;
      *(&rwlock[1].__align + 2) = 0;
      LODWORD(writer) = v74;
      v75 = &v42[2 * v74];
      if ( v42 != v75 )
      {
        v76 = v42;
        do
        {
          *v76 = -4096;
          v76 += 2;
        }
        while ( v75 != v76 );
      }
      v37 = 1;
    }
    if ( (_DWORD)writer )
    {
      LODWORD(v56) = (writer - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v13 = &v42[2 * (unsigned int)v56];
      v39 = *v13;
      if ( v9 != *v13 )
      {
        v57 = 1;
        v58 = nullptr;
        if ( v39 != -4096 )
        {
          while ( 1 )
          {
            if ( v39 == -8192 && !v58 )
              v58 = v13;
            v56 = ((_DWORD)writer - 1) & (unsigned int)(v56 + v57);
            v13 = &v42[2 * v56];
            v39 = *v13;
            if ( v9 == *v13 )
              goto LABEL_27;
            if ( v39 == -4096 )
            {
              if ( !v58 )
                goto LABEL_48;
              v39 = *v58;
              v13 = v58;
              goto LABEL_27;
            }
            ++v57;
          }
        }
        goto LABEL_48;
      }
LABEL_27:
      rwlock[1].__nr_readers_queued = v37;
      if ( v39 != -4096 )
        --rwlock[1].__nr_writers_queued;
      goto LABEL_29;
    }
LABEL_124:
    ++rwlock[1].__nr_readers_queued;
    BUG();
  }
  v38 = (unsigned int)writer >> 3;
  if ( (_DWORD)writer - rwlock[1].__nr_writers_queued - v37 > (unsigned int)v38 )
  {
    v39 = *v13;
    goto LABEL_27;
  }
  v81 = &rwlock[1].__size[8];
  v59 = (v11 >> 1) | v11;
  v60 = (((((((v59 | (v59 >> 2)) >> 4) | v59 | (v59 >> 2)) >> 8) | ((v59 | (v59 >> 2)) >> 4) | v59 | (v59 >> 2)) >> 16)
       | ((((v59 | (v59 >> 2)) >> 4) | v59 | (v59 >> 2)) >> 8)
       | ((v59 | (v59 >> 2)) >> 4)
       | v59
       | (v59 >> 2))
      + 1;
  if ( (unsigned int)v60 < 0x40 )
    LODWORD(v60) = 64;
  rwlock[1].__writer = v60;
  v61 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v60, 8, 64, v8, v38, v6);
  v8 = v81;
  *(&rwlock[1].__align + 1) = (__int64)v61;
  if ( v10 )
  {
    v62 = (unsigned int)rwlock[1].__writer;
    writer *= 16;
    *(&rwlock[1].__align + 2) = 0;
    v63 = v62;
    for ( j = &v61[2 * v62]; j != v61; v61 += 2 )
      *v61 = -4096;
    v65 = v10;
    LODWORD(v81) = v63 - 1;
    do
    {
      v66 = *v65;
      if ( *v65 != -4096 && v66 != -8192 )
      {
        if ( !v63 )
        {
          *(_QWORD *)&dword_0 = *v65;
          BUG();
        }
        v67 = *(&rwlock[1].__align + 1);
        v68 = (unsigned int)v81 & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
        v69 = (__int64 *)(v67 + 16LL * v68);
        v70 = *v69;
        if ( *v69 != v66 && v70 != -4096 )
        {
          LODWORD(v83) = 1;
          v82 = nullptr;
          v84 = v67;
          while ( 1 )
          {
            if ( v70 == -8192 )
            {
              if ( v82 )
                v69 = v82;
              v82 = v69;
            }
            v68 = (unsigned int)v81 & ((_DWORD)v83 + v68);
            v69 = (__int64 *)(v84 + 16LL * v68);
            v70 = *v69;
            if ( v66 == *v69 )
              break;
            if ( v70 == -4096 )
            {
              if ( v82 )
                v69 = v82;
              break;
            }
            LODWORD(v83) = (_DWORD)v83 + 1;
          }
        }
        *v69 = v66;
        v69[1] = v65[1];
        ++rwlock[1].__nr_readers_queued;
      }
      v65 += 2;
    }
    while ( (__int64 *)((char *)v10 + writer) != v65 );
    v81 = v8;
    operator delete(v10, writer, 8);
    v61 = (_QWORD *)*(&rwlock[1].__align + 1);
    LODWORD(writer) = rwlock[1].__writer;
    v37 = rwlock[1].__nr_readers_queued + 1;
    v8 = v81;
  }
  else
  {
    v77 = (unsigned int)rwlock[1].__writer;
    *(&rwlock[1].__align + 2) = 0;
    LODWORD(writer) = v77;
    v78 = &v61[2 * v77];
    if ( v61 != v78 )
    {
      v79 = v61;
      do
      {
        *v79 = -4096;
        v79 += 2;
      }
      while ( v78 != v79 );
    }
    v37 = 1;
  }
  if ( !(_DWORD)writer )
    goto LABEL_124;
  LODWORD(v71) = (writer - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
  v13 = &v61[2 * (unsigned int)v71];
  v39 = *v13;
  if ( v9 == *v13 )
    goto LABEL_27;
  v72 = 1;
  v73 = nullptr;
  if ( v39 != -4096 )
  {
    while ( 1 )
    {
      if ( v39 == -8192 && !v73 )
        v73 = v13;
      v71 = ((_DWORD)writer - 1) & (unsigned int)(v71 + v72);
      v13 = &v61[2 * v71];
      v39 = *v13;
      if ( v9 == *v13 )
        goto LABEL_27;
      if ( v39 == -4096 )
      {
        if ( !v73 )
          break;
        v39 = *v73;
        v13 = v73;
        goto LABEL_27;
      }
      ++v72;
    }
  }
LABEL_48:
  rwlock[1].__nr_readers_queued = v37;
LABEL_29:
  v81 = a2;
  *(__m128 *)v13 = _mm_loadh_ps((const double *)&v81);
  sub_20C0010(v85, v13, (__int64 *)(*(&rwlock[1].__align + 1) + 16LL * (unsigned int)writer), (__int64)v8, 1);
LABEL_5:
  v15 = *((const void **)a2 + 2);
  v16 = *((_QWORD *)a2 + 3);
  v17 = sub_2244B30(v15, v16);
  v18 = sub_2244CB0(&rwlock[1].__align + 4, v15, v16, v17);
  v21 = (__int64 *)(rwlock[1].__pad1 + 8LL * v18);
  if ( *v21 )
  {
    if ( *v21 != -8 )
    {
      sub_20C0070((__int64 **)v85, v21, 0);
      v22 = v85[0].m128_u64[0];
      goto LABEL_12;
    }
    --rwlock[1].__flags;
  }
  v82 = v21;
  LODWORD(v81) = v18;
  v23 = sub_22300B0(v16 + 17, 8, v18, v19, v21, v20);
  v24 = (unsigned int)v81;
  v25 = v82;
  v26 = (_QWORD *)v23;
  if ( v16 )
  {
    v83 = (_QWORD *)v23;
    memcpy((void *)(v23 + 16), v15, v16);
    v26 = v83;
    v25 = v82;
    v24 = (unsigned int)v81;
  }
  *((_BYTE *)v26 + v16 + 16) = 0;
  *v26 = v16;
  v26[1] = 0;
  *v25 = (__int64)v26;
  ++*((_DWORD *)&rwlock[1].__align + 11);
  v27 = sub_22450D0(&rwlock[1].__align + 4, v24);
  sub_20C0070((__int64 **)v85, (__int64 *)(rwlock[1].__pad1 + 8LL * v27), 0);
  v22 = v85[0].m128_u64[0];
LABEL_12:
  pad1 = rwlock[2].__pad1;
  v29 = (__int64 *)*(&rwlock[2].__align + 3);
  *(_QWORD *)(*(_QWORD *)v22 + 8LL) = a2;
  while ( (__int64 *)pad1 != v29 )
  {
    while ( 1 )
    {
      v30 = *v29;
      v31 = *(void (**)())(*(_QWORD *)*v29 + 16LL);
      if ( v31 != nullsub_1298 )
        break;
      if ( (__int64 *)pad1 == ++v29 )
        goto LABEL_17;
    }
    ++v29;
    ((void (__fastcall *)(__int64, char *))v31)(v30, a2);
  }
LABEL_17:
  if ( a3 )
  {
    v85[0].m128_u64[0] = (unsigned __int64)a2;
    v33 = (void **)*(&rwlock[2].__align + 1);
    if ( v33 == *((void ***)&rwlock[2].__align + 2) )
    {
      sub_20BFD70((__int64)&rwlock[2], v33, v85);
    }
    else
    {
      v85[0].m128_u64[0] = 0;
      v34 = (__int64)(v33 + 1);
      *(_QWORD *)(v34 - 8) = a2;
      *(&rwlock[2].__align + 1) = v34;
    }
    if ( v85[0].m128_u64[0] )
      operator delete((void *)v85[0].m128_u64[0], 0x38u);
  }
  return pthread_rwlock_unlock(rwlock);
}
