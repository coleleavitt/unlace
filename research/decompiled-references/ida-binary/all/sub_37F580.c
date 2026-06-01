unsigned __int64 __fastcall appsgn_chooser_t__::vfunc_6(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int idasgn_desc; // r12d
  const char *v8; // rdi
  const char *v9; // rdx
  const char *v10; // rdi
  const char *v11; // rax
  const char *v12; // r13
  size_t v13; // r15
  __int64 v14; // r13
  const char *v15; // r15
  __int64 *v16; // r14
  __int64 v17; // r13
  unsigned int v18; // eax
  const char *v19; // rax
  __int64 *v20; // r14
  const char *v21; // rbp
  size_t v22; // rax
  size_t v23; // r13
  const char *v24; // rsi
  void *v26; // rdi
  size_t v27; // r15
  __int64 *v28; // rdi
  const char *v29; // rdx
  const char *v30; // rcx
  void *v31; // r8
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  const char *v35; // [rsp+0h] [rbp-1098h]
  void *v36; // [rsp+0h] [rbp-1098h]
  __int64 v37; // [rsp+8h] [rbp-1090h]
  void *src; // [rsp+10h] [rbp-1088h] BYREF
  __int128 v39; // [rsp+18h] [rbp-1080h]
  char *v40; // [rsp+30h] [rbp-1068h] BYREF
  __int128 v41; // [rsp+38h] [rbp-1060h]
  char v42[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v43; // [rsp+1058h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  v39 = 0;
  src = nullptr;
  idasgn_desc = get_idasgn_desc(&src, 0, a5);
  v8 = &s1;
  if ( (_QWORD)v39 )
    v8 = (const char *)src;
  if ( (unsigned __int8)qisabspath(v8) )
  {
    v9 = &s1;
    if ( (_QWORD)v39 )
      v9 = (const char *)src;
    if ( (unsigned __int8)qdirname(v42, 4096, v9) )
    {
      v10 = &s1;
      if ( (_QWORD)v39 )
        v10 = (const char *)src;
      v11 = (const char *)qbasename(v10);
      v40 = nullptr;
      v12 = v11;
      v41 = 0;
      if ( v11
        && (v13 = strlen(v11),
            v40 = (char *)qvector_reserve(&v40, 0, v13 + 1, 1),
            *(_QWORD *)&v41 = v13 + 1,
            memmove(v40, v12, v13),
            v40[v13] = 0,
            (v14 = v41) != 0) )
      {
        v15 = v40;
        if ( (unsigned __int64)(v41 - 1) > 3 )
        {
          v37 = v41 - 5;
          v35 = &v40[v41 - 5];
          if ( !strncmp(v35, ".sig", 4u) )
          {
            if ( v37 )
            {
              *(_QWORD *)&v41 = v14 - 4;
              *v35 = 0;
LABEL_38:
              v28 = *a2;
              v15 = &s1;
              if ( (_QWORD)v41 )
                v15 = v40;
              goto LABEL_31;
            }
            if ( v15 )
            {
              *(_QWORD *)&v41 = 0;
              qfree(v15, ".sig");
              v40 = nullptr;
              *((_QWORD *)&v41 + 1) = 0;
              goto LABEL_38;
            }
          }
        }
        v28 = *a2;
      }
      else
      {
        v28 = *a2;
        v15 = &s1;
      }
LABEL_31:
      sub_169A50(v28, (__int64)"%s (%s)", v15, v42);
      if ( v40 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v40, "%s (%s)", v29, v30);
      }
      goto LABEL_19;
    }
  }
  v16 = *a2;
  if ( *a2 != (__int64 *)&src )
  {
    v17 = v39;
    if ( (unsigned __int64)v39 > 1 )
    {
      v31 = src;
      v32 = (void *)*v16;
      if ( v16[2] < (unsigned __int64)v39 )
      {
        v36 = src;
        v34 = qvector_reserve(*a2, *v16, v39, 1);
        *v16 = v34;
        v31 = v36;
        v32 = (void *)v34;
      }
      v16[1] = v17;
      memmove(v32, v31, v17 - 1);
      *(_BYTE *)(*v16 + v17 - 1) = 0;
    }
    else
    {
      v16[1] = 0;
    }
  }
LABEL_19:
  v18 = calc_idasgn_state(a5);
  v19 = (const char *)strarray(&unk_867AC0, 4, v18);
  v20 = *a2;
  v21 = v19;
  if ( v19 && (v22 = strlen(v19), (v23 = v22) != 0) )
  {
    v26 = (void *)v20[3];
    v27 = v22 + 1;
    if ( v20[5] < v22 + 1 )
    {
      v33 = qvector_reserve(v20 + 3, v20[3], v27, 1);
      v20[3] = v33;
      v26 = (void *)v33;
    }
    v20[4] = v27;
    memmove(v26, v21, v23);
    *(_BYTE *)(v20[3] + v23) = 0;
  }
  else
  {
    v20[4] = 0;
  }
  sub_169A50(*a2 + 6, (__int64)"%d", idasgn_desc);
  v24 = &s1;
  if ( (_QWORD)v39 )
    v24 = (const char *)src;
  get_idasgn_title(*a2 + 9, v24);
  if ( src )
  {
    *(_QWORD *)&v39 = 0;
    qfree(src, v24);
  }
  return v43 - __readfsqword(0x28u);
}
