unsigned __int64 __fastcall sub_2D17F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rbp
  const char *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  const char *v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  size_t v17; // r9
  size_t v18; // r10
  unsigned __int64 v19; // r14
  __int64 v20; // rbx
  __int64 i; // rbp
  size_t v22; // rbp
  unsigned __int64 v23; // r12
  const char *v24; // rbx
  void *v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned __int64 v29; // rbp
  _BYTE *v30; // rsi
  size_t v31; // r14
  __int64 v32; // rbp
  size_t v33; // r8
  _BYTE *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-70h]
  size_t v37; // [rsp+8h] [rbp-70h]
  size_t v38; // [rsp+10h] [rbp-68h]
  size_t v39; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v41; // [rsp+28h] [rbp-50h]
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( (unsigned __int64)a2[1] > 1 )
  {
    if ( !under_debugger )
      interr(40684, a2, a3, a4, a5);
    BUG();
  }
  v5 = *(_QWORD *)(a1 + 56);
  src = nullptr;
  v41 = 0;
  if ( !(_BYTE)a3 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v5 > 1;
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    if ( v9 >= v8 )
    {
LABEL_34:
      v23 = v41;
      if ( !(_QWORD)v41 )
        goto LABEL_36;
      v22 = v41 - 1;
      if ( (_QWORD)v41 == 1 )
        goto LABEL_36;
      v24 = nullptr;
      goto LABEL_38;
    }
    goto LABEL_7;
  }
  if ( v5 > 1 )
  {
    src = (void *)qvector_reserve(&src, 0, 9, 1);
    *(_QWORD *)&v41 = 9;
    strcpy((char *)src, "CAPTION ");
    v27 = *(_QWORD *)(a1 + 56);
    if ( v27 )
    {
      v31 = v27 - 1;
      if ( v27 != 1 )
      {
        v32 = v41;
        v33 = v27 - 1;
        if ( (_QWORD)v41 )
        {
          v32 = v41 - 1;
          v33 = v31 + v41 - 1;
          v27 += v41 - 1;
        }
        v34 = src;
        if ( *((_QWORD *)&v41 + 1) < v27 )
        {
          v37 = v33;
          src = (void *)qvector_reserve(&src, src, v27, 1);
          v33 = v37;
          v34 = src;
        }
        *(_QWORD *)&v41 = v27;
        v34[v33] = 0;
        memcpy((char *)src + v32, *(const void **)(a1 + 48), v31);
      }
    }
    v28 = v41;
    v29 = 2;
    if ( (_QWORD)v41 )
    {
      v29 = v41 + 1;
      v28 = v41 - 1;
    }
    v30 = src;
    if ( *((_QWORD *)&v41 + 1) < v29 )
    {
      src = (void *)qvector_reserve(&src, src, v29, 1);
      v30 = src;
    }
    *(_QWORD *)&v41 = v29;
    v30[v28] = 10;
    *((_BYTE *)src + v28 + 1) = 0;
  }
  v20 = *(_QWORD *)(a1 + 72);
  for ( i = v20 + 80LL * *(_QWORD *)(a1 + 80); i != v20; v20 += 80 )
    sub_2D11B0((__int64 *)&src, v20 + 8, *(_BYTE *)(v20 + 72) & 1, 1);
  v12 = v41;
  v10 = (const char *)src;
  v8 = *(_QWORD *)(a1 + 8);
  v13 = v41;
  v14 = (const char *)src;
  if ( v8 )
  {
    v11 = *((_QWORD *)&v41 + 1);
    v9 = 0;
    while ( 1 )
    {
LABEL_7:
      v15 = *(_QWORD *)a1 + 24 * v9;
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v16 != 1 )
        {
          v18 = v16 - 1;
          if ( v12 )
          {
            --v12;
            v18 = v17 + v12;
            v16 += v12;
          }
          if ( v11 < v16 )
          {
            v39 = v18;
            v38 = v17;
            v36 = *(_QWORD *)a1 + 24 * v9;
            src = (void *)qvector_reserve(&src, v10, v16, 1);
            v18 = v39;
            v10 = (const char *)src;
            v17 = v38;
            v15 = v36;
          }
          *(_QWORD *)&v41 = v16;
          v10[v18] = 0;
          memcpy((char *)src + v12, *(const void **)v15, v17);
          v11 = *((_QWORD *)&v41 + 1);
          v12 = v41;
          v10 = (const char *)src;
        }
      }
      v19 = 2;
      if ( v12 )
        v19 = v12-- + 1;
      if ( v11 < v19 )
      {
        src = (void *)qvector_reserve(&src, v10, v19, 1);
        v10 = (const char *)src;
      }
      *(_QWORD *)&v41 = v19;
      ++v9;
      v10[v12] = 10;
      *((_BYTE *)src + v12 + 1) = 0;
      v12 = v41;
      v10 = (const char *)src;
      v13 = v41;
      v14 = (const char *)src;
      if ( v9 >= v8 )
        break;
      v11 = *((_QWORD *)&v41 + 1);
    }
  }
  v22 = v13 - 1;
  v23 = v13;
  v24 = v14;
  if ( (__int64)(v13 - 1) <= 1 )
  {
    if ( !v14 )
    {
      if ( v13 < 2 )
      {
LABEL_36:
        a2[1] = 0;
        return v42 - __readfsqword(0x28u);
      }
      goto LABEL_38;
    }
    *(_QWORD *)&v41 = 0;
    qfree(v14, v10);
    src = nullptr;
    *((_QWORD *)&v41 + 1) = 0;
    goto LABEL_34;
  }
  if ( *((_QWORD *)&v41 + 1) < v22 )
  {
    v10 = v14;
    src = (void *)qvector_reserve(&src, v14, v13 - 1, 1);
    v24 = (const char *)src;
  }
  *(_QWORD *)&v41 = v13 - 1;
  v24[v13 - 2] = 0;
  v23 = v41;
  v24 = (const char *)src;
  if ( (_QWORD)v41 )
  {
    v22 = v41 - 1;
    if ( (_QWORD)v41 != 1 )
    {
LABEL_38:
      v26 = (void *)*a2;
      if ( a2[2] < v23 )
      {
        v35 = qvector_reserve(a2, *a2, v23, 1);
        *a2 = v35;
        v26 = (void *)v35;
      }
      a2[1] = v23;
      v10 = v24;
      memmove(v26, v24, v22);
      *(_BYTE *)(*a2 + v22) = 0;
      v24 = (const char *)src;
      goto LABEL_29;
    }
  }
  a2[1] = 0;
LABEL_29:
  if ( v24 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v24, v10);
  }
  return v42 - __readfsqword(0x28u);
}
