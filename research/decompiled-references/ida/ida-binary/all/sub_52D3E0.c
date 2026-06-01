__int64 __fastcall sub_52D3E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  const char *v4; // r14
  unsigned __int64 v7; // r12
  char *v8; // rax
  size_t v9; // rbp
  size_t v10; // r15
  char *v11; // rax
  signed __int64 v12; // r12
  size_t v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  const char *v16; // r13
  size_t v17; // r13
  void *v18; // r8
  const char *v19; // rsi
  const char *v20; // rax
  const char *v21; // rbp
  size_t v22; // rax
  size_t v23; // r12
  size_t v24; // r14
  const char *v25; // rdi
  __int64 v26; // rax
  void *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rax
  size_t v31; // r9
  size_t v32; // rdx
  const char *v33; // rdx
  const char *v34; // rdx
  size_t v36; // [rsp+8h] [rbp-A0h]
  void *src; // [rsp+10h] [rbp-98h]
  void *srca; // [rsp+10h] [rbp-98h]
  size_t v39; // [rsp+18h] [rbp-90h]
  size_t v40; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+30h] [rbp-78h] BYREF
  __int128 v42; // [rsp+38h] [rbp-70h]
  char *v43; // [rsp+50h] [rbp-58h] BYREF
  __int128 v44; // [rsp+58h] [rbp-50h]
  unsigned __int64 v45; // [rsp+68h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 )
    return 1;
  v4 = *(const char **)a2;
  v7 = v3 - 1;
  v8 = strstr(*(const char **)a2, "${");
  if ( !v8 )
    return 1;
  v9 = v8 - v4;
  if ( v8 - v4 == -1 )
    return 1;
  v10 = v9 + 2;
  if ( v7 < v9 + 2 || (v11 = strchr(&v4[v10], 125)) == nullptr || (v12 = v11 - v4, v11 - v4 == -1) )
  {
    sub_169A50(a3, (__int64)"Malformed variable reference: %s", v4);
    return 0;
  }
  v41 = 0;
  v42 = 0;
  v13 = v12 - v10;
  if ( v12 != v10 )
  {
    v28 = nullptr;
    v29 = v13 + 1;
    if ( v13 != -1 )
    {
      v40 = v13 + 1;
      v41 = qvector_reserve(&v41, 0, v29, 1);
      v13 = v12 - v10;
      v28 = (void *)v41;
      v29 = v40;
    }
    *(_QWORD *)&v42 = v29;
    v39 = v13;
    memmove(v28, &v4[v10], v13);
    *(_BYTE *)(v41 + v39) = 0;
  }
  v14 = sub_52D2D0(a1, (__int64)&v41);
  v15 = v14;
  if ( v14 != (_QWORD *)(a1 + 8) )
  {
    v16 = &s1;
    if ( *(_QWORD *)(a2 + 8) )
      v16 = *(const char **)a2;
    v43 = nullptr;
    v44 = 0;
    if ( v9 )
    {
      v43 = (char *)qvector_reserve(&v43, 0, v9 + 1, 1);
      *(_QWORD *)&v44 = v9 + 1;
      memmove(v43, v16, v9);
      v43[v9] = 0;
      v30 = v15[8];
      v18 = *((void **)&v44 + 1);
      v17 = v44;
      v19 = v43;
      if ( !v30 )
        goto LABEL_14;
      v31 = v30 - 1;
      if ( v30 == 1 )
        goto LABEL_14;
      if ( (_QWORD)v44 )
      {
        v9 = v44 - 1;
        v32 = v31 + v44 - 1;
        v17 = v31 + v44;
      }
      else
      {
        v32 = v30 - 1;
        v9 = 0;
        v17 = v15[8];
      }
      if ( *((_QWORD *)&v44 + 1) >= v17 )
        goto LABEL_46;
      v18 = (void *)v32;
    }
    else
    {
      v17 = v14[8];
      if ( !v17 )
      {
        v18 = nullptr;
        v19 = nullptr;
LABEL_14:
        v20 = &s1;
        if ( *(_QWORD *)(a2 + 8) )
          v20 = *(const char **)a2;
        v21 = &v20[v12 + 1];
        if ( &v20[v12] != (const char *)-1LL )
        {
          src = v18;
          v22 = strlen(&v20[v12 + 1]);
          v23 = v22;
          v24 = v22;
          if ( v17 )
          {
            --v17;
            v24 = v22 + v17;
          }
          if ( (unsigned __int64)src < v24 + 1 )
          {
            v43 = (char *)qvector_reserve(&v43, v19, v24 + 1, 1);
            v19 = v43;
          }
          *(_QWORD *)&v44 = v24 + 1;
          v19[v24] = 0;
          memmove(&v43[v17], v21, v23);
          v19 = v43;
          v18 = *((void **)&v44 + 1);
          v17 = v44;
        }
        v25 = *(const char **)a2;
        v26 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v19;
        *(_QWORD *)(a2 + 8) = v17;
        *(_QWORD *)(a2 + 16) = v18;
        v43 = (char *)v25;
        *((_QWORD *)&v44 + 1) = v26;
        if ( v25 )
        {
          *(_QWORD *)&v44 = 0;
          qfree(v25, v19);
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41, v19);
        }
        return 1;
      }
      v18 = (void *)(v17 - 1);
      if ( v17 == 1 )
      {
        v17 = 0;
        v19 = nullptr;
        goto LABEL_14;
      }
      v31 = v17 - 1;
      v19 = nullptr;
    }
    srca = v18;
    v36 = v31;
    v43 = (char *)qvector_reserve(&v43, v19, v17, 1);
    v32 = (size_t)srca;
    v19 = v43;
    v31 = v36;
LABEL_46:
    *(_QWORD *)&v44 = v17;
    v19[v32] = 0;
    memcpy(&v43[v9], (const void *)v15[7], v31);
    v18 = *((void **)&v44 + 1);
    v17 = v44;
    v19 = v43;
    goto LABEL_14;
  }
  v33 = &s1;
  if ( (_QWORD)v42 )
    v33 = (const char *)v41;
  sub_169A50(a3, (__int64)"Undefined variable \"%s\"", v33);
  if ( !v41 )
    return 0;
  *(_QWORD *)&v42 = 0;
  qfree(v41, "Undefined variable \"%s\"", v34);
  return 0;
}
