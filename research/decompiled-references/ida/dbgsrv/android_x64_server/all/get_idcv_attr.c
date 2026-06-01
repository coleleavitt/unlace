/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_attr
// Address: 0x0000000000073B70

//----- (0000000000073B70) ----------------------------------------------------
__int64 __fastcall get_idcv_attr(char *a1, __int64 a2, char *a3, char a4, double a5, __m128 a6)
{
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r14
  const char *v14; // r15
  __int64 v15; // rbp
  const char *v16; // rdi
  int v17; // eax
  char v18; // r14
  const char *v19; // rsi
  _QWORD *v20; // rbp
  char *idc_gvar; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  int v24; // eax
  void *v25; // rdi
  int v26; // ebx
  __int128 v27; // xmm0
  __int128 v28; // xmm0
  __int64 v29; // rbx
  int v30; // ebp
  char v31; // bl
  __int64 v32; // rax
  const char *v33; // rdx
  const char *v35; // rsi
  char v36; // [rsp+Ch] [rbp-11Ch]
  _DWORD *v37; // [rsp+10h] [rbp-118h]
  void *v38; // [rsp+18h] [rbp-110h]
  char *v39; // [rsp+28h] [rbp-100h] BYREF
  __m256i v40[5]; // [rsp+30h] [rbp-F8h] BYREF
  __m256i ptr; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+F0h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  v39 = a1;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v9 = sub_6B0F0();
  if ( !a2 )
  {
    v20 = (_QWORD *)v9;
    idc_gvar = (char *)find_idc_gvar(a3);
    if ( idc_gvar )
    {
      if ( a1 )
      {
        ptr.m256i_i8[0] = 2;
        memset(&ptr.m256i_u64[1], 0, 24);
        copy_idcv(ptr.m256i_i8, idc_gvar, 0.0, a6);
        v22 = *(_OWORD *)a1;
        *(_OWORD *)&v40[0].m256i_u64[2] = *((_OWORD *)a1 + 1);
        *(_OWORD *)v40[0].m256i_i8 = v22;
        v23 = *(_OWORD *)ptr.m256i_i8;
        *((_OWORD *)a1 + 1) = *(_OWORD *)&ptr.m256i_u64[2];
        *(_OWORD *)a1 = v23;
        ptr = v40[0];
        if ( v40[0].m256i_i8[0] == 5 )
        {
          sub_72DD0(
            (char **)ptr.m256i_i64[1],
            ptr.m256i_i8,
            *(double *)v40[0].m256i_i64,
            *(__m128 *)&v40[0].m256i_u64[2]);
          goto LABEL_53;
        }
        if ( v40[0].m256i_i8[0] != 7 || !ptr.m256i_i64[1] )
          goto LABEL_53;
        ptr.m256i_i64[2] = 0;
        qfree((void *)ptr.m256i_i64[1]);
        goto LABEL_39;
      }
LABEL_53:
      qmutex_unlock((pthread_mutex_t *)qword_1557E8);
      return 0;
    }
    v24 = sub_6DD10(v20, a3);
    if ( v24 != 0x7FFFFFFF )
    {
      if ( a1 )
      {
        v26 = v24;
        free_idcv(a1, a5, a6);
        *a1 = 6;
        *((_DWORD *)a1 + 2) = v26;
      }
      goto LABEL_53;
    }
    set_error_string(0, a3);
    v10 = 1538;
    goto LABEL_23;
  }
  v10 = 1532;
  if ( *(_BYTE *)a2 != 5 )
  {
LABEL_23:
    qmutex_unlock((pthread_mutex_t *)qword_1557E8);
    set_qerrno(v10);
    return v10;
  }
  v36 = a4;
  v11 = *(_QWORD *)(a2 + 8);
  sub_37F60((__int64)v40, a3);
  v12 = v11 + 8;
  v37 = (_DWORD *)v11;
  v13 = *(_QWORD *)(v11 + 8);
  if ( v13 )
  {
    v14 = (const char *)v40[0].m256i_i64[0];
    v38 = (void *)v40[0].m256i_i64[0];
    if ( !v40[0].m256i_i64[1] )
      v14 = s1;
    v15 = v11 + 8;
    do
    {
      v16 = s1;
      if ( *(_QWORD *)(v13 + 40) )
        v16 = *(const char **)(v13 + 32);
      v17 = strcmp(v16, v14);
      if ( v17 >= 0 )
        v15 = v13;
      v13 = *(_QWORD *)(v13 + 8LL * (v17 < 0));
    }
    while ( v13 );
    if ( v15 == v12 )
    {
      v18 = v36;
      v25 = v38;
    }
    else
    {
      v18 = v36;
      if ( *(_QWORD *)(v15 + 40) )
        v19 = *(const char **)(v15 + 32);
      else
        v19 = s1;
      v25 = v38;
      if ( strcmp(v14, v19) >= 0 )
        goto LABEL_31;
    }
  }
  else
  {
    v25 = (void *)v40[0].m256i_i64[0];
    v18 = v36;
  }
  v15 = v12;
LABEL_31:
  if ( v25 )
  {
    v40[0].m256i_i64[1] = 0;
    qfree(v25);
    v40[0].m256i_i64[0] = 0;
    v40[0].m256i_i64[2] = 0;
  }
  if ( v15 != v12 )
  {
    if ( a1 )
    {
      ptr.m256i_i8[0] = 2;
      memset(&ptr.m256i_u64[1], 0, 24);
      copy_idcv(ptr.m256i_i8, (char *)(v15 + 56), 0.0, a6);
      v27 = *(_OWORD *)a1;
      *(_OWORD *)&v40[0].m256i_u64[2] = *((_OWORD *)a1 + 1);
      *(_OWORD *)v40[0].m256i_i8 = v27;
      v28 = *(_OWORD *)ptr.m256i_i8;
      *((_OWORD *)a1 + 1) = *(_OWORD *)&ptr.m256i_u64[2];
      *(_OWORD *)a1 = v28;
      ptr = v40[0];
      if ( v40[0].m256i_i8[0] == 5 )
      {
        sub_72DD0((char **)ptr.m256i_i64[1], ptr.m256i_i8, *(double *)v40[0].m256i_i64, *(__m128 *)&v40[0].m256i_u64[2]);
        goto LABEL_53;
      }
      if ( v40[0].m256i_i8[0] != 7 || !ptr.m256i_i64[1] )
        goto LABEL_53;
      ptr.m256i_i64[2] = 0;
      qfree((void *)ptr.m256i_i64[1]);
LABEL_39:
      ptr.m256i_i64[1] = 0;
      ptr.m256i_i64[3] = 0;
      goto LABEL_53;
    }
    goto LABEL_53;
  }
  v29 = sub_6D420((int)v37[7]);
  sub_37F60((__int64)v40, a3);
  v30 = sub_75750(v29, (__int64)v40);
  if ( v40[0].m256i_i64[0] )
  {
    v40[0].m256i_i64[1] = 0;
    qfree((void *)v40[0].m256i_i64[0]);
    v40[0].m256i_i64[0] = 0;
    v40[0].m256i_i64[2] = 0;
  }
  if ( v30 != -1 )
  {
    if ( a1 )
    {
      free_idcv(a1, a5, a6);
      *a1 = 6;
      *((_DWORD *)a1 + 2) = v30;
    }
    goto LABEL_53;
  }
  qmutex_unlock((pthread_mutex_t *)qword_1557E8);
  if ( !v18 )
    goto LABEL_50;
  sub_37F60((__int64)&ptr, a3);
  sub_78CB0((__int64)v40, 0, 1);
  v31 = sub_75820(v40, v37, (const char **)&ptr, &v39, a5, a6);
  sub_78F40((__int64)v40, a5, a6);
  if ( ptr.m256i_i64[0] )
  {
    ptr.m256i_i64[1] = 0;
    qfree((void *)ptr.m256i_i64[0]);
    ptr.m256i_i64[0] = 0;
    ptr.m256i_i64[2] = 0;
  }
  v10 = 0;
  if ( !v31 )
  {
LABEL_50:
    memset(v40, 0, 24);
    v32 = sub_6D420((int)v37[7]);
    if ( *(_QWORD *)(v32 + 40) )
      v33 = *(const char **)(v32 + 32);
    else
      v33 = s1;
    sub_3BBA0((__int64)v40, "%s.%s", v33, a3);
    if ( v40[0].m256i_i64[1] )
      v35 = (const char *)v40[0].m256i_i64[0];
    else
      v35 = s1;
    set_error_string(0, v35);
    v10 = set_qerrno(0x602u);
    if ( v40[0].m256i_i64[0] )
    {
      v40[0].m256i_i64[1] = 0;
      qfree((void *)v40[0].m256i_i64[0]);
      v40[0].m256i_i64[0] = 0;
      v40[0].m256i_i64[2] = 0;
    }
  }
  return v10;
}
