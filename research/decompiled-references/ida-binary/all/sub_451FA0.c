unsigned __int64 __fastcall commits_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  size_t v9; // r14
  size_t v10; // rbx
  char *v11; // rsi
  __int64 *v12; // rbx
  char *v13; // r14
  size_t v14; // rax
  size_t v15; // r13
  void *v16; // rdi
  size_t v17; // r15
  __int64 *v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r12
  char *v24; // rbp
  void *v25; // rax
  char *v26; // r15
  void *v27; // rax
  char *v28; // r15
  void *v29; // rax
  __int64 v30; // rax
  char *v31; // [rsp+0h] [rbp-78h] BYREF
  __int128 v32; // [rsp+8h] [rbp-70h]
  char s[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 216);
  v34 = __readfsqword(0x28u);
  v7 = v5 + 88 * a5;
  sub_169A50(*a2, (__int64)"%d", *(_DWORD *)v7);
  qstrftime64(s, 20, "%F %T", *(_QWORD *)(v7 + 8));
  v31 = nullptr;
  v32 = 0;
  v8 = strlen(s);
  v9 = v8 + 1;
  v10 = v8;
  v11 = s;
  v31 = (char *)qvector_reserve(&v31, 0, v8 + 1, 1);
  *(_QWORD *)&v32 = v9;
  memmove(v31, s, v10);
  v31[v10] = 0;
  v12 = *a2;
  if ( (_QWORD)v32 && (v13 = v31) != nullptr && (v14 = strlen(v31), (v15 = v14) != 0) )
  {
    v16 = (void *)v12[3];
    v17 = v14 + 1;
    if ( v12[5] < v14 + 1 )
    {
      v30 = qvector_reserve(v12 + 3, v12[3], v17, 1);
      v12[3] = v30;
      v16 = (void *)v30;
    }
    v12[4] = v17;
    v11 = v13;
    memmove(v16, v13, v15);
    *(_BYTE *)(v12[3] + v15) = 0;
  }
  else
  {
    v12[4] = 0;
  }
  v18 = *a2;
  v19 = (__int64)(*a2 + 6);
  if ( v19 != v7 + 16 )
  {
    v20 = *(_QWORD *)(v7 + 24);
    if ( v20 > 1 )
    {
      v28 = *(char **)(v7 + 16);
      v29 = (void *)v18[6];
      if ( v18[8] < v20 )
      {
        v29 = (void *)qvector_reserve(v19, v18[6], *(_QWORD *)(v7 + 24), 1);
        v18[6] = (__int64)v29;
      }
      v18[7] = v20;
      v11 = v28;
      memmove(v29, v28, v20 - 1);
      *(_BYTE *)(v18[6] + v20 - 1) = 0;
      v18 = *a2;
    }
    else
    {
      v18[7] = 0;
      v18 = *a2;
    }
  }
  if ( v18 + 9 != (__int64 *)(v7 + 40) )
  {
    v21 = *(_QWORD *)(v7 + 48);
    if ( v21 > 1 )
    {
      v26 = *(char **)(v7 + 40);
      v27 = (void *)v18[9];
      if ( v18[11] < v21 )
      {
        v27 = (void *)qvector_reserve(v18 + 9, v18[9], *(_QWORD *)(v7 + 48), 1);
        v18[9] = (__int64)v27;
      }
      v18[10] = v21;
      v11 = v26;
      memmove(v27, v26, v21 - 1);
      *(_BYTE *)(v18[9] + v21 - 1) = 0;
      v18 = *a2;
    }
    else
    {
      v18[10] = 0;
      v18 = *a2;
    }
  }
  if ( v18 + 12 != (__int64 *)(v7 + 64) )
  {
    v22 = *(_QWORD *)(v7 + 72);
    if ( v22 > 1 )
    {
      v24 = *(char **)(v7 + 64);
      v25 = (void *)v18[12];
      if ( v18[14] < v22 )
      {
        v25 = (void *)qvector_reserve(v18 + 12, v18[12], v22, 1);
        v18[12] = (__int64)v25;
      }
      v18[13] = v22;
      v11 = v24;
      memmove(v25, v24, v22 - 1);
      *(_BYTE *)(v18[12] + v22 - 1) = 0;
    }
    else
    {
      v18[13] = 0;
    }
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31, v11);
  }
  return v34 - __readfsqword(0x28u);
}
