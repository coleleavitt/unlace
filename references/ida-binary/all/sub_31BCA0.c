__int64 __fastcall sub_31BCA0(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  const char *v10; // rbx
  const char *path; // rax
  const char *v12; // rbp
  size_t v13; // rax
  size_t v14; // r12
  const char *v15; // rax
  const char *v16; // rbp
  size_t v17; // rax
  size_t v18; // r12
  const char *v19; // rsi
  unsigned int v20; // ebp
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  const char *v31; // rsi
  const char *v32; // rsi
  void *v33; // rdi
  size_t v34; // r13
  void *v35; // rdi
  size_t v36; // r13
  void *dest; // [rsp+0h] [rbp-1098h] BYREF
  __int128 v38; // [rsp+8h] [rbp-1090h]
  void *v39; // [rsp+20h] [rbp-1078h] BYREF
  __int128 v40; // [rsp+28h] [rbp-1070h]
  const char *v41; // [rsp+40h] [rbp-1058h] BYREF
  __int128 v42; // [rsp+48h] [rbp-1050h]
  _BYTE v43[4104]; // [rsp+60h] [rbp-1038h] BYREF
  unsigned __int64 v44; // [rsp+1068h] [rbp-30h]

  v9 = 0;
  v44 = __readfsqword(0x28u);
  dest = nullptr;
  v39 = nullptr;
  v38 = 0;
  v40 = 0;
  if ( a1 )
  {
    v10 = a1;
    path = (const char *)get_path(1);
    v12 = path;
    if ( path && (v13 = strlen(path), (v14 = v13) != 0) )
    {
      v33 = dest;
      v34 = v13 + 1;
      if ( *((_QWORD *)&v38 + 1) < v13 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v13 + 1, 1);
        v33 = dest;
      }
      *(_QWORD *)&v38 = v34;
      memmove(v33, v12, v14);
      *((_BYTE *)dest + v14) = 0;
    }
    else
    {
      *(_QWORD *)&v38 = 0;
    }
    v15 = (const char *)get_path(0);
    v16 = v15;
    if ( v15 && (v17 = strlen(v15), (v18 = v17) != 0) )
    {
      v35 = v39;
      v36 = v17 + 1;
      if ( *((_QWORD *)&v40 + 1) < v17 + 1 )
      {
        v39 = (void *)qvector_reserve(&v39, v39, v36, 1);
        v35 = v39;
      }
      *(_QWORD *)&v40 = v36;
      memmove(v35, v16, v18);
      *((_BYTE *)v39 + v18) = 0;
    }
    else
    {
      *(_QWORD *)&v40 = 0;
    }
  }
  else
  {
    if ( (unsigned __int8)is_database_flag(8) )
      v24 = "*.i64";
    else
      LODWORD(v24) = get_path(1);
    v9 = 0;
    v19 = (_BYTE *)(&dword_0 + 1);
    v42 = 0;
    v41 = nullptr;
    if ( !(unsigned __int8)sub_486440((unsigned int)&v41, 1, (_DWORD)v24, 985, v22, v23, (char)dest) )
      goto LABEL_38;
    v19 = &s1;
    if ( (_QWORD)v42 )
      v19 = v41;
    v10 = v43;
    qstrncpy(v43, v19, 4096);
    if ( (unsigned __int8)qfileexist(v43) )
    {
      v19 = (_BYTE *)(elf_gnu_hash_bucket + 138);
      if ( (int)sub_300700(-1, 994, v43) <= 0 )
      {
LABEL_38:
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41, v19);
        }
        goto LABEL_29;
      }
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      *(double *)v9.m128_u64 = qfree(v41, v19);
    }
  }
  set_database_flag(8, 0);
  v19 = (_BYTE *)(&dword_0 + 1);
  v20 = sub_31C050(v10, 1);
  if ( !(_BYTE)v20 )
    goto LABEL_9;
  set_path(1, v10);
  set_path(0, v10);
  sub_30A040(nullptr, *(double *)v9.m128_u64);
  sub_37A650(v10, 0);
  if ( v10 != v43 )
  {
    v31 = &s1;
    if ( (_QWORD)v38 )
      v31 = (const char *)dest;
    set_path(1, v31);
    v32 = &s1;
    if ( (_QWORD)v40 )
      v32 = (const char *)v39;
    set_path(0, v32);
    sub_30A040(nullptr, *(double *)v9.m128_u64);
  }
  v19 = v10;
  sub_169700(
    (int)"Database has been saved in file %s\n",
    (__int64)v10,
    v25,
    v26,
    v27,
    v28,
    v9,
    a3,
    a4,
    a5,
    v29,
    v30,
    a8,
    a9,
    (char)dest);
LABEL_29:
  v20 = 1;
LABEL_9:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v19);
  }
  if ( dest )
  {
    *(_QWORD *)&v38 = 0;
    qfree(dest, v19);
  }
  return v20;
}
