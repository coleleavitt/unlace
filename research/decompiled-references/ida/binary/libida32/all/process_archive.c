__int64 __fastcall process_archive(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int16 *a4,
        const char *a5,
        _QWORD *a6)
{
  const char *v6; // r13
  size_t v10; // r14
  char *v11; // rax
  const char *v12; // rsi
  char *v13; // rbx
  size_t v14; // r12
  size_t v15; // rax
  size_t v16; // r12
  size_t v17; // r12
  const char *v18; // r8
  unsigned int v19; // ebx
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  _BYTE *v23; // r13
  char *v24; // r12
  __int64 v25; // r12
  size_t v26; // r12
  __int64 v27; // rcx
  int *v28; // rdi
  const void *v29; // rbx
  void *v30; // r14
  void *v31; // rdi
  void *v32; // r14
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t v36; // [rsp+8h] [rbp-1288h]
  unsigned __int16 v41; // [rsp+4Eh] [rbp-1242h] BYREF
  void *src; // [rsp+50h] [rbp-1240h] BYREF
  __int128 v43; // [rsp+58h] [rbp-1238h]
  void *v44; // [rsp+70h] [rbp-1220h] BYREF
  __int128 v45; // [rsp+78h] [rbp-1218h]
  void *ptr; // [rsp+90h] [rbp-1200h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-11F8h]
  char v48[8]; // [rsp+B0h] [rbp-11E0h] BYREF
  void *v49[2]; // [rsp+B8h] [rbp-11D8h]
  __int64 v50; // [rsp+C8h] [rbp-11C8h]
  char v51[8]; // [rsp+D0h] [rbp-11C0h] BYREF
  __int128 v52; // [rsp+D8h] [rbp-11B8h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-11A8h]
  char v54[8]; // [rsp+F0h] [rbp-11A0h] BYREF
  __int128 v55; // [rsp+F8h] [rbp-1198h] BYREF
  __int64 v56; // [rsp+108h] [rbp-1188h]
  char v57[8]; // [rsp+110h] [rbp-1180h] BYREF
  int v58; // [rsp+118h] [rbp-1178h] BYREF
  char v59[8]; // [rsp+130h] [rbp-1160h] BYREF
  __int64 v60; // [rsp+138h] [rbp-1158h]
  char v61[8]; // [rsp+150h] [rbp-1140h] BYREF
  void *v62; // [rsp+158h] [rbp-1138h]
  __int128 v63; // [rsp+160h] [rbp-1130h]
  char v64[8]; // [rsp+170h] [rbp-1120h] BYREF
  void *v65; // [rsp+178h] [rbp-1118h] BYREF
  __int128 v66; // [rsp+180h] [rbp-1110h]
  char v67[8]; // [rsp+190h] [rbp-1100h] BYREF
  int v68; // [rsp+198h] [rbp-10F8h]
  char v69[8]; // [rsp+1B0h] [rbp-10E0h] BYREF
  void *v70; // [rsp+1B8h] [rbp-10D8h]
  __int128 v71; // [rsp+1C0h] [rbp-10D0h]
  _QWORD v72[10]; // [rsp+1D0h] [rbp-10C0h] BYREF
  __int128 v73; // [rsp+220h] [rbp-1070h]
  void *v74; // [rsp+230h] [rbp-1060h]
  __int128 v75; // [rsp+238h] [rbp-1058h]
  char v76; // [rsp+248h] [rbp-1048h]
  char v77; // [rsp+1248h] [rbp-48h]
  unsigned __int64 v78; // [rsp+1258h] [rbp-38h]

  v6 = &byte_22CD811;
  v78 = __readfsqword(0x28u);
  if ( !a6 || (v6 = haystack, !a6[2]) )
  {
    if ( (debug & 0x10) == 0 )
      goto LABEL_4;
LABEL_34:
    sub_383DA0();
  }
  v6 = (const char *)a6[1];
  if ( (debug & 0x10) != 0 )
    goto LABEL_34;
LABEL_4:
  src = nullptr;
  v77 = 1;
  v72[0] = 0;
  v74 = nullptr;
  v76 = 0;
  v43 = 0;
  v73 = 0;
  v75 = 0;
  if ( !(unsigned __int8)sub_6237A0(v72, (__int64)v6) )
  {
    sub_3573A0((char **)&src);
    goto LABEL_6;
  }
  v44 = nullptr;
  ptr = nullptr;
  v10 = a3[1];
  v45 = 0;
  *(_OWORD *)n = 0;
  if ( v10 )
  {
    ptr = (void *)qalloc_or_throw(v10, v6);
    n[1] = v10;
    memcpy(ptr, (const void *)*a3, v10);
    n[0] = v10;
  }
  v41 = *a4;
  qlseek(a2, 0, 0);
  if ( (debug & 0x10) != 0 )
    sub_383DA0();
  if ( *((_QWORD *)&v73 + 1) )
  {
    v11 = v59;
    do
    {
      *v11 = 2;
      v11 += 32;
      *(_OWORD *)(v11 - 24) = 0;
      *((_QWORD *)v11 - 1) = 0;
    }
    while ( v72 != (_QWORD *)v11 );
    free_idcv(v59);
    v12 = "loader_input_t";
    v59[0] = 8;
    v60 = a2;
    if ( !(*(unsigned __int8 (__fastcall **)(char *, char *, char *, __int64, void **, double))(*((_QWORD *)&v73 + 1)
                                                                                              + 80LL))(
            v59,
            "loader_input_t",
            v59,
            1,
            &src,
            0.0) )
      goto LABEL_27;
    free_idcv(v61);
    v14 = n[0];
    v61[0] = 7;
    v62 = nullptr;
    v63 = 0;
    if ( n[0] )
    {
      v22 = (void *)qalloc_or_throw(n[0], "loader_input_t");
      v12 = (const char *)ptr;
      v62 = v22;
      *((_QWORD *)&v63 + 1) = v14;
      memcpy(v22, ptr, v14);
      *(_QWORD *)&v63 = v14;
    }
    free_idcv(v64);
    if ( a5 )
    {
      v15 = strlen(a5);
      v64[0] = 7;
      v65 = nullptr;
      v16 = v15;
      v66 = 0;
      if ( v15 )
      {
        v36 = v15 + 1;
        v12 = a5;
        v65 = (void *)qvector_reserve(&v65, 0, v15 + 1, 1);
        *(_QWORD *)&v66 = v36;
        memmove(v65, a5, v16);
        *((_BYTE *)v65 + v16) = 0;
      }
    }
    else
    {
      v64[0] = 7;
      v65 = nullptr;
      v66 = 0;
    }
    free_idcv(v67);
    v67[0] = 2;
    v68 = v41;
    free_idcv(v69);
    v17 = a6[5];
    v69[0] = 7;
    v70 = nullptr;
    v71 = 0;
    if ( v17 )
    {
      v20 = (void *)qalloc_or_throw(v17, v12);
      v21 = (const void *)a6[4];
      v70 = v20;
      *((_QWORD *)&v71 + 1) = v17;
      memcpy(v20, v21, v17);
      *(_QWORD *)&v71 = v17;
    }
    v48[0] = 2;
    v50 = 0;
    *(_OWORD *)v49 = 0;
    if ( (unsigned __int8)sub_623A80(v72, (__int64)v48, "process_archive", (__int64)v59, 5, (__int64)&src) )
    {
      if ( v48[0] == 7 )
      {
        v23 = v49[1];
        v19 = -1;
        if ( v49[1] <= (char *)&dword_0 + 1 )
        {
LABEL_61:
          free_idcv(v48);
          v24 = (char *)v72;
          do
          {
            v24 -= 32;
            free_idcv(v24);
          }
          while ( v24 != v59 );
          goto LABEL_53;
        }
        v29 = v49[0];
        if ( (void *)*((_QWORD *)&v43 + 1) < v49[1] )
          src = (void *)qvector_reserve(&src, src, v49[1], 1);
        *(_QWORD *)&v43 = v23;
        memmove(src, v29, (size_t)(v23 - 1));
        v23[(_QWORD)src - 1] = 0;
      }
      else
      {
        if ( v48[0] == 5 )
        {
          v51[0] = 2;
          v53 = 0;
          v54[0] = 2;
          v56 = 0;
          v52 = 0;
          v55 = 0;
          if ( !(unsigned int)get_idcv_attr() && v51[0] == 7 && !(unsigned int)get_idcv_attr() && v54[0] == 7 )
          {
            sub_622F00((__int64)&v44, (__int64)&v52);
            sub_622F00((__int64)&ptr, (__int64)&v55);
            v27 = 6;
            v28 = &v58;
            v57[0] = 2;
            while ( v27 )
            {
              *v28++ = 0;
              --v27;
            }
            if ( !(unsigned int)get_idcv_attr() && v57[0] == 2 )
              v41 = v58;
            v19 = 1;
            free_idcv(v57);
            free_idcv(v54);
            free_idcv(v51);
            goto LABEL_61;
          }
          free_idcv(v54);
          free_idcv(v51);
        }
        sub_3573A0((char **)&src);
      }
    }
    free_idcv(v48);
LABEL_27:
    v13 = (char *)v72;
    do
    {
      v13 -= 32;
      free_idcv(v13);
    }
    while ( v13 != v59 );
LABEL_29:
    if ( ptr )
    {
      n[0] = 0;
      qfree(ptr);
    }
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
LABEL_6:
    if ( (unsigned __int8)getinf_flag(45, 16) )
      sub_623090();
    sub_375400();
  }
  v18 = haystack;
  if ( a6[5] )
    v18 = (const char *)a6[4];
  v19 = (*(__int64 (__fastcall **)(void **, __int64, void **, unsigned __int16 *, const char *, const char *, void **))(v73 + 40))(
          &v44,
          a2,
          &ptr,
          &v41,
          v18,
          a5,
          &src);
  if ( !v19 )
    goto LABEL_29;
LABEL_53:
  if ( v19 == 1 )
  {
    v25 = v45;
    if ( (unsigned __int64)v45 > 1 )
    {
      v30 = v44;
      v31 = (void *)*a1;
      if ( a1[2] < (unsigned __int64)v45 )
      {
        v34 = qvector_reserve(a1, *a1, v45, 1);
        *a1 = v34;
        v31 = (void *)v34;
      }
      a1[1] = v25;
      memmove(v31, v30, v25 - 1);
      *(_BYTE *)(*a1 + v25 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    v26 = n[0];
    if ( n[0] > 1 )
    {
      v32 = ptr;
      v33 = (void *)*a3;
      if ( a3[2] < n[0] )
      {
        v35 = qvector_reserve(a3, *a3, n[0], 1);
        *a3 = v35;
        v33 = (void *)v35;
      }
      a3[1] = v26;
      memmove(v33, v32, v26 - 1);
      *(_BYTE *)(*a3 + v26 - 1) = 0;
    }
    else
    {
      a3[1] = 0;
    }
    *a4 = v41;
  }
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( v77 && v72[0] )
  {
    if ( (debug & 0x10) != 0 )
      sub_383DA0();
    free_dll(v72);
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( *((_QWORD *)&v73 + 1) )
    --*(_DWORD *)(*((_QWORD *)&v73 + 1) + 12LL);
  if ( src )
  {
    *(_QWORD *)&v43 = 0;
    qfree(src);
  }
  return v19;
}

