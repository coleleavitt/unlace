__int64 __fastcall process_archive(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int16 *a4,
        const char *a5,
        _QWORD *a6)
{
  const char *v6; // r13
  const char *v8; // rsi
  size_t v10; // r14
  char *v11; // rax
  char *v12; // rbx
  size_t v13; // r12
  size_t v14; // rax
  size_t v15; // r12
  size_t v16; // r12
  const char *v17; // r8
  unsigned int v18; // ebx
  void *v19; // rax
  const void *v20; // rsi
  _BYTE *v21; // r13
  char *v22; // r12
  __int64 v23; // r12
  size_t v24; // r12
  __int64 v25; // rcx
  __int64 *v26; // rdi
  const void *v27; // rbx
  void *v28; // r14
  void *v29; // rdi
  void *v30; // r14
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // [rsp+8h] [rbp-1288h]
  unsigned __int16 v39; // [rsp+4Eh] [rbp-1242h] BYREF
  void *src; // [rsp+50h] [rbp-1240h] BYREF
  __int128 v41; // [rsp+58h] [rbp-1238h]
  void *v42; // [rsp+70h] [rbp-1220h] BYREF
  __int128 v43; // [rsp+78h] [rbp-1218h]
  void *ptr; // [rsp+90h] [rbp-1200h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-11F8h]
  char v46[8]; // [rsp+B0h] [rbp-11E0h] BYREF
  void *v47[2]; // [rsp+B8h] [rbp-11D8h]
  __int64 v48; // [rsp+C8h] [rbp-11C8h]
  char v49[8]; // [rsp+D0h] [rbp-11C0h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-11B8h] BYREF
  __int64 v51; // [rsp+E8h] [rbp-11A8h]
  char v52[8]; // [rsp+F0h] [rbp-11A0h] BYREF
  __int128 v53; // [rsp+F8h] [rbp-1198h] BYREF
  __int64 v54; // [rsp+108h] [rbp-1188h]
  char v55[8]; // [rsp+110h] [rbp-1180h] BYREF
  __int64 v56; // [rsp+118h] [rbp-1178h] BYREF
  char v57[8]; // [rsp+130h] [rbp-1160h] BYREF
  __int64 v58; // [rsp+138h] [rbp-1158h]
  char v59[8]; // [rsp+150h] [rbp-1140h] BYREF
  void *v60; // [rsp+158h] [rbp-1138h]
  __int128 v61; // [rsp+160h] [rbp-1130h]
  char v62[8]; // [rsp+170h] [rbp-1120h] BYREF
  void *v63; // [rsp+178h] [rbp-1118h] BYREF
  __int128 v64; // [rsp+180h] [rbp-1110h]
  char v65[8]; // [rsp+190h] [rbp-1100h] BYREF
  __int64 v66; // [rsp+198h] [rbp-10F8h]
  char v67[8]; // [rsp+1B0h] [rbp-10E0h] BYREF
  void *v68; // [rsp+1B8h] [rbp-10D8h]
  __int128 v69; // [rsp+1C0h] [rbp-10D0h]
  _QWORD v70[10]; // [rsp+1D0h] [rbp-10C0h] BYREF
  __int128 v71; // [rsp+220h] [rbp-1070h]
  void *v72; // [rsp+230h] [rbp-1060h]
  __int128 v73; // [rsp+238h] [rbp-1058h]
  char v74; // [rsp+248h] [rbp-1048h]
  char v75; // [rsp+1248h] [rbp-48h]
  unsigned __int64 v76; // [rsp+1258h] [rbp-38h]

  v6 = &byte_22F0C30;
  v76 = __readfsqword(0x28u);
  if ( !a6 || (v6 = haystack, !a6[2]) )
  {
    if ( (debug & 0x10) == 0 )
      goto LABEL_4;
LABEL_36:
    sub_3879F0();
  }
  v6 = (const char *)a6[1];
  if ( (debug & 0x10) != 0 )
    goto LABEL_36;
LABEL_4:
  src = nullptr;
  v75 = 1;
  v70[0] = 0;
  v72 = nullptr;
  v74 = 0;
  v41 = 0;
  v71 = 0;
  v73 = 0;
  if ( !(unsigned __int8)sub_640A20(v70, (__int64)v6) )
  {
    sub_35A790((char **)&src);
    goto LABEL_6;
  }
  v42 = nullptr;
  ptr = nullptr;
  v10 = a3[1];
  v43 = 0;
  *(_OWORD *)n = 0;
  if ( v10 )
  {
    ptr = (void *)qalloc_or_throw(v10);
    n[1] = v10;
    memcpy(ptr, (const void *)*a3, v10);
    n[0] = v10;
  }
  v39 = *a4;
  qlseek(a2, 0, 0);
  if ( (debug & 0x10) != 0 )
    sub_3879F0();
  if ( *((_QWORD *)&v71 + 1) )
  {
    v11 = v57;
    do
    {
      *v11 = 2;
      v11 += 32;
      *(_OWORD *)(v11 - 24) = 0;
      *((_QWORD *)v11 - 1) = 0;
    }
    while ( v70 != (_QWORD *)v11 );
    free_idcv(v57);
    v57[0] = 8;
    v58 = a2;
    if ( !(*(unsigned __int8 (__fastcall **)(char *, char *, char *, __int64, void **, double))(*((_QWORD *)&v71 + 1)
                                                                                              + 80LL))(
            v57,
            "loader_input_t",
            v57,
            1,
            &src,
            0.0) )
      goto LABEL_29;
    free_idcv(v59);
    v13 = n[0];
    v59[0] = 7;
    v60 = nullptr;
    v61 = 0;
    if ( n[0] )
    {
      v60 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v61 + 1) = v13;
      memcpy(v60, ptr, v13);
      *(_QWORD *)&v61 = v13;
    }
    free_idcv(v62);
    if ( a5 )
    {
      v14 = strlen(a5);
      v62[0] = 7;
      v63 = nullptr;
      v15 = v14;
      v64 = 0;
      if ( v14 )
      {
        v34 = v14 + 1;
        v63 = (void *)qvector_reserve(&v63, 0, v14 + 1, 1);
        *(_QWORD *)&v64 = v34;
        memmove(v63, a5, v15);
        *((_BYTE *)v63 + v15) = 0;
      }
    }
    else
    {
      v62[0] = 7;
      v63 = nullptr;
      v64 = 0;
    }
    free_idcv(v65);
    v65[0] = 2;
    v66 = v39;
    free_idcv(v67);
    v16 = a6[5];
    v67[0] = 7;
    v68 = nullptr;
    v69 = 0;
    if ( v16 )
    {
      v19 = (void *)qalloc_or_throw(v16);
      v20 = (const void *)a6[4];
      v68 = v19;
      *((_QWORD *)&v69 + 1) = v16;
      memcpy(v19, v20, v16);
      *(_QWORD *)&v69 = v16;
    }
    v46[0] = 2;
    v48 = 0;
    *(_OWORD *)v47 = 0;
    if ( (unsigned __int8)sub_640D00(v70, (__int64)v46, "process_archive", (__int64)v57, 5, (__int64)&src) )
    {
      if ( v46[0] == 7 )
      {
        v21 = v47[1];
        v18 = -1;
        if ( v47[1] <= (char *)&dword_0 + 1 )
        {
LABEL_63:
          free_idcv(v46);
          v22 = (char *)v70;
          do
          {
            v22 -= 32;
            free_idcv(v22);
          }
          while ( v22 != v57 );
          goto LABEL_55;
        }
        v27 = v47[0];
        if ( (void *)*((_QWORD *)&v41 + 1) < v47[1] )
          src = (void *)qvector_reserve(&src, src, v47[1], 1);
        *(_QWORD *)&v41 = v21;
        memmove(src, v27, (size_t)(v21 - 1));
        v21[(_QWORD)src - 1] = 0;
      }
      else
      {
        if ( v46[0] == 5 )
        {
          v49[0] = 2;
          v51 = 0;
          v52[0] = 2;
          v54 = 0;
          v50 = 0;
          v53 = 0;
          if ( !(unsigned int)get_idcv_attr(v49, v46, "temp_file", 0)
            && v49[0] == 7
            && !(unsigned int)get_idcv_attr(v52, v46, "module_name", 0)
            && v52[0] == 7 )
          {
            sub_640170((__int64)&v42, (__int64)&v50);
            sub_640170((__int64)&ptr, (__int64)&v53);
            v25 = 6;
            v26 = &v56;
            v55[0] = 2;
            while ( v25 )
            {
              *(_DWORD *)v26 = 0;
              v26 = (__int64 *)((char *)v26 + 4);
              --v25;
            }
            if ( !(unsigned int)get_idcv_attr(v55, v46, "neflags", 0) && v55[0] == 2 )
              v39 = v56;
            v18 = 1;
            free_idcv(v55);
            free_idcv(v52);
            free_idcv(v49);
            goto LABEL_63;
          }
          free_idcv(v52);
          free_idcv(v49);
        }
        sub_35A790((char **)&src);
      }
    }
    free_idcv(v46);
LABEL_29:
    v12 = (char *)v70;
    do
    {
      v12 -= 32;
      free_idcv(v12);
    }
    while ( v12 != v57 );
LABEL_31:
    if ( ptr )
    {
      n[0] = 0;
      qfree(ptr);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
LABEL_6:
    if ( (unsigned __int8)getinf_flag(45, 16) )
    {
      v8 = haystack;
      if ( (_QWORD)v41 )
        v8 = (const char *)src;
      sub_640300((__int64)&unk_22D5D2E, v8);
    }
    sub_378D50();
  }
  v17 = haystack;
  if ( a6[5] )
    v17 = (const char *)a6[4];
  v18 = (*(__int64 (__fastcall **)(void **, __int64, void **, unsigned __int16 *, const char *, const char *, void **))(v71 + 40))(
          &v42,
          a2,
          &ptr,
          &v39,
          v17,
          a5,
          &src);
  if ( !v18 )
    goto LABEL_31;
LABEL_55:
  if ( v18 == 1 )
  {
    v23 = v43;
    if ( (unsigned __int64)v43 > 1 )
    {
      v28 = v42;
      v29 = (void *)*a1;
      if ( a1[2] < (unsigned __int64)v43 )
      {
        v32 = qvector_reserve(a1, *a1, v43, 1);
        *a1 = v32;
        v29 = (void *)v32;
      }
      a1[1] = v23;
      memmove(v29, v28, v23 - 1);
      *(_BYTE *)(*a1 + v23 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    v24 = n[0];
    if ( n[0] > 1 )
    {
      v30 = ptr;
      v31 = (void *)*a3;
      if ( a3[2] < n[0] )
      {
        v33 = qvector_reserve(a3, *a3, n[0], 1);
        *a3 = v33;
        v31 = (void *)v33;
      }
      a3[1] = v24;
      memmove(v31, v30, v24 - 1);
      *(_BYTE *)(*a3 + v24 - 1) = 0;
    }
    else
    {
      a3[1] = 0;
    }
    *a4 = v39;
  }
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v75 && v70[0] )
  {
    if ( (debug & 0x10) != 0 )
      sub_3879F0();
    free_dll(v70);
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  if ( *((_QWORD *)&v71 + 1) )
    --*(_DWORD *)(*((_QWORD *)&v71 + 1) + 12LL);
  if ( src )
  {
    *(_QWORD *)&v41 = 0;
    qfree(src);
  }
  return v18;
}
