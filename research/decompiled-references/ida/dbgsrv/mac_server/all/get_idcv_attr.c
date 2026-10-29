/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_attr
// Address: 0x00000001000390F0

//----- (00000001000390F0) ----------------------------------------------------
__int64 __fastcall get_idcv_attr(unsigned __int8 *a1, __int64 a2, char *a3, char a4)
{
  __int64 v6; // rax
  unsigned int v7; // r15d
  size_t v8; // rax
  size_t v9; // r15
  __int64 v10; // r12
  void *v11; // rdi
  __int64 v12; // r15
  unsigned __int8 *idc_gvar; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  int v16; // eax
  char *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r12
  const char *v20; // r15
  __int64 v21; // r13
  int v22; // eax
  const char *v23; // rdi
  const char *v24; // rsi
  int v25; // ecx
  int v26; // ebx
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  const char *v29; // r13
  __int64 v30; // r15
  size_t v31; // rax
  size_t v32; // r12
  __int64 v33; // r13
  void *v34; // rdi
  int v35; // r15d
  int v36; // eax
  size_t v37; // rax
  size_t v38; // r14
  __int64 v39; // r15
  void *v40; // rdi
  char v42; // r14
  __int64 v43; // rax
  const char *v44; // rdx
  const char *v45; // rsi
  char *__s; // [rsp+0h] [rbp-120h]
  char *v48; // [rsp+10h] [rbp-110h]
  char v49; // [rsp+1Ch] [rbp-104h]
  __int64 v50; // [rsp+20h] [rbp-100h]
  unsigned __int8 *v51; // [rsp+28h] [rbp-F8h] BYREF
  __m256i v52[5]; // [rsp+30h] [rbp-F0h] BYREF
  __m256i __p; // [rsp+D0h] [rbp-50h] BYREF

  v51 = a1;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v6 = sub_100032010();
  if ( !a2 )
  {
    v12 = v6;
    idc_gvar = (unsigned __int8 *)find_idc_gvar(a3);
    if ( idc_gvar )
    {
      if ( a1 )
      {
        __p.i8[0] = 2;
        memset(&__p.u32[2], 0, 24);
        copy_idcv((unsigned __int8 *)&__p, idc_gvar);
        v14 = *(_OWORD *)a1;
        v52[0].i128[1] = *((_OWORD *)a1 + 1);
        v52[0].i128[0] = v14;
        v15 = __p.i128[0];
        *((_OWORD *)a1 + 1) = __p.i128[1];
        *(_OWORD *)a1 = v15;
        __p = v52[0];
        if ( v52[0].u8[0] == 5 )
        {
          sub_1000380B0((unsigned __int8 **)__p.i64[1], (unsigned __int8 *)&__p);
        }
        else if ( v52[0].u8[0] == 7 && __p.i64[1] )
        {
          __p.i64[2] = 0;
          qfree((void *)__p.i64[1]);
        }
      }
      goto LABEL_68;
    }
    v16 = sub_1000347E0(v12, a3);
    if ( v16 == 0x7FFFFFFF )
    {
      set_error_string(0, a3);
      v7 = 1538;
      goto LABEL_14;
    }
    if ( !a1 )
    {
LABEL_68:
      qmutex_unlock((pthread_mutex_t *)qword_1000AD0F0);
      return 0;
    }
    v25 = *a1;
    if ( v25 == 5 )
    {
      v26 = v16;
      sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
    }
    else
    {
      if ( v25 != 7 )
      {
LABEL_67:
        *((_QWORD *)a1 + 1) = 0;
        *a1 = 6;
        *((_DWORD *)a1 + 2) = v16;
        goto LABEL_68;
      }
      v26 = v16;
      sub_100006E30((void **)a1 + 1);
    }
    v16 = v26;
    goto LABEL_67;
  }
  v49 = a4;
  v7 = 1532;
  if ( *(_BYTE *)a2 != 5 )
  {
LABEL_14:
    qmutex_unlock((pthread_mutex_t *)qword_1000AD0F0);
    set_qerrno();
    return v7;
  }
  v50 = *(_QWORD *)(a2 + 8);
  memset(v52, 0, 24);
  __s = a3;
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = v8;
    v10 = v8 + 1;
    if ( v8 == -1 )
    {
      v11 = nullptr;
    }
    else
    {
      v11 = qvector_reserve((__int64)v52, nullptr, v8 + 1, 1u);
      v52[0].i64[0] = (__int64)v11;
    }
    v52[0].i64[1] = v10;
    memmove(v11, a3, v9);
    *(_BYTE *)(v52[0].i64[0] + v9) = 0;
    v17 = (char *)v52[0].i64[0];
  }
  else
  {
    v17 = nullptr;
  }
  v18 = v50 + 8;
  v19 = *(_QWORD *)(v50 + 8);
  if ( !v19 )
    goto LABEL_36;
  v48 = v17;
  v20 = v17;
  if ( !v52[0].i64[1] )
    v20 = _s1;
  v21 = v50 + 8;
  do
  {
    v23 = _s1;
    if ( *(_QWORD *)(v19 + 40) )
      v23 = *(const char **)(v19 + 32);
    v22 = strcmp(v23, v20);
    if ( v22 >= 0 )
      v21 = v19;
    v19 = *(_QWORD *)(v19 + 8LL * ((unsigned int)v22 >> 31));
  }
  while ( v19 );
  v17 = v48;
  if ( v21 == v18
    || (!*(_QWORD *)(v21 + 40) ? (v24 = _s1) : (v24 = *(const char **)(v21 + 32)), v17 = v48, strcmp(v20, v24) < 0) )
  {
LABEL_36:
    v21 = v50 + 8;
  }
  if ( v17 )
  {
    v52[0].i64[1] = 0;
    qfree(v17);
  }
  if ( v21 != v18 )
  {
    if ( a1 )
    {
      __p.i8[0] = 2;
      memset(&__p.u32[2], 0, 24);
      copy_idcv((unsigned __int8 *)&__p, (unsigned __int8 *)(v21 + 56));
      v27 = *(_OWORD *)a1;
      v52[0].i128[1] = *((_OWORD *)a1 + 1);
      v52[0].i128[0] = v27;
      v28 = __p.i128[0];
      *((_OWORD *)a1 + 1) = __p.i128[1];
      *(_OWORD *)a1 = v28;
      __p = v52[0];
      if ( v52[0].u8[0] == 5 )
      {
        sub_1000380B0((unsigned __int8 **)__p.i64[1], (unsigned __int8 *)&__p);
      }
      else if ( v52[0].u8[0] == 7 && __p.i64[1] )
      {
        __p.i64[2] = 0;
        qfree((void *)__p.i64[1]);
      }
    }
    goto LABEL_68;
  }
  v29 = __s;
  v30 = sub_100033F10(*(int *)(v50 + 28));
  memset(v52, 0, 24);
  if ( __s )
  {
    v31 = strlen(__s);
    v32 = v31;
    v33 = v31 + 1;
    if ( v31 == -1 )
    {
      v34 = nullptr;
    }
    else
    {
      v34 = qvector_reserve((__int64)v52, nullptr, v31 + 1, 1u);
      v52[0].i64[0] = (__int64)v34;
    }
    v52[0].i64[1] = v33;
    v29 = __s;
    memmove(v34, __s, v32);
    *(_BYTE *)(v52[0].i64[0] + v32) = 0;
  }
  v35 = sub_10003B410(v30, (__int64)v52);
  if ( v52[0].i64[0] )
  {
    v52[0].i64[1] = 0;
    qfree((void *)v52[0].i64[0]);
  }
  if ( v35 != -1 )
  {
    if ( a1 )
    {
      v36 = *a1;
      if ( v36 == 5 )
      {
        sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
      }
      else if ( v36 == 7 )
      {
        sub_100006E30((void **)a1 + 1);
      }
      *((_QWORD *)a1 + 1) = 0;
      *a1 = 6;
      *((_DWORD *)a1 + 2) = v35;
    }
    goto LABEL_68;
  }
  qmutex_unlock((pthread_mutex_t *)qword_1000AD0F0);
  if ( !v49 )
    goto LABEL_75;
  memset(&__p, 0, 24);
  if ( v29 )
  {
    v37 = strlen(v29);
    v38 = v37;
    v39 = v37 + 1;
    if ( v37 == -1 )
    {
      v40 = nullptr;
    }
    else
    {
      v40 = qvector_reserve((__int64)&__p, nullptr, v37 + 1, 1u);
      __p.i64[0] = (__int64)v40;
    }
    __p.i64[1] = v39;
    memmove(v40, v29, v38);
    *(_BYTE *)(__p.i64[0] + v38) = 0;
  }
  sub_10003E3D0((__int64)v52, 0, 1);
  v42 = sub_10003B500((__int64)v52, (_DWORD *)v50, (const char **)&__p, &v51);
  sub_10003E5C0((__int64)v52);
  if ( __p.i64[0] )
  {
    __p.i64[1] = 0;
    qfree((void *)__p.i64[0]);
  }
  v7 = 0;
  if ( !v42 )
  {
LABEL_75:
    memset(v52, 0, 24);
    v43 = sub_100033F10(*(int *)(v50 + 28));
    if ( *(_QWORD *)(v43 + 40) )
      v44 = *(const char **)(v43 + 32);
    else
      v44 = _s1;
    sub_100002D00((__int64)v52, "%s.%s", v44, v29);
    if ( v52[0].i64[1] )
      v45 = (const char *)v52[0].i64[0];
    else
      v45 = _s1;
    set_error_string(0, v45);
    v7 = set_qerrno();
    if ( v52[0].i64[0] )
    {
      v52[0].i64[1] = 0;
      qfree((void *)v52[0].i64[0]);
    }
  }
  return v7;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
