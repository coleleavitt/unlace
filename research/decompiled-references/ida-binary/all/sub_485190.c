__int64 __fastcall sub_485190(__int64 a1, char **a2, __int64 *a3, __int64 a4, const __m128i *a5, __int64 a6)
{
  char *v9; // rbx
  const char *v10; // r14
  const char *v11; // rsi
  char *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  signed __int64 v15; // r15
  __int64 v16; // rdi
  double v17; // xmm0_8
  __int64 v18; // rdi
  const char *v19; // rsi
  size_t v20; // rax
  size_t v21; // r14
  size_t v22; // r13
  void *v23; // rax
  __int128 v24; // kr00_16
  char *v25; // rdi
  double v26; // xmm0_8
  __int64 v27; // rdi
  void *v29; // rdi
  signed __int64 v30; // rdx
  __int64 v31; // [rsp+0h] [rbp-88h]
  __int64 v32; // [rsp+8h] [rbp-80h]
  char *s1; // [rsp+10h] [rbp-78h] BYREF
  __int128 v34; // [rsp+18h] [rbp-70h]
  __int64 v35; // [rsp+30h] [rbp-58h] BYREF
  __int128 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v34 = 0;
  s1 = nullptr;
  sub_169980((__int64 *)&s1, a4, a5, a4, (__int64)a5, a6);
  v9 = s1;
  if ( !strncmp(s1, "FILTER ", 7u) )
  {
    v10 = v9 + 7;
    v11 = byte_9 + 1;
    v12 = strchr(v9 + 7, 10);
    if ( !v12 )
      v12 = (char *)&v10[strlen(v10)];
    v13 = 0;
    v14 = 0;
    v35 = 0;
    v36 = 0;
    v15 = v12 - v10;
    if ( v12 != v10 )
    {
      v29 = nullptr;
      v30 = v15 + 1;
      if ( v15 != -1 )
      {
        v35 = qvector_reserve(&v35, 0, v30, 1);
        v30 = v15 + 1;
        v29 = (void *)v35;
      }
      *(_QWORD *)&v36 = v30;
      v11 = v10;
      memmove(v29, v10, v12 - v10);
      *(_BYTE *)(v35 + v15) = 0;
      v14 = v35;
      v13 = *((_QWORD *)&v36 + 1);
      v15 = v36;
    }
    v16 = *a3;
    v35 = 0;
    v36 = 0;
    if ( v16 )
    {
      a3[1] = 0;
      v32 = v13;
      v31 = v14;
      v17 = qfree(v16, v11);
      a3[1] = v15;
      v18 = v35;
      *a3 = v31;
      a3[2] = v32;
      if ( v18 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v18, v11, v17);
      }
    }
    else
    {
      *a3 = v14;
      a3[1] = v15;
      a3[2] = v13;
    }
    v9 = &v12[-(*v12 == 0) + 1];
  }
  *(_QWORD *)a1 = 0;
  v19 = nullptr;
  *(_OWORD *)(a1 + 8) = 0;
  sub_4BEF60(a1, 0, v9);
  v35 = 0;
  v36 = 0;
  if ( v9 )
  {
    v20 = strlen(v9);
    v21 = v20 + 1;
    v22 = v20;
    v23 = (void *)qvector_reserve(&v35, 0, v20 + 1, 1);
    v19 = v9;
    *(_QWORD *)&v36 = v21;
    v35 = (__int64)v23;
    memmove(v23, v9, v22);
    *(_BYTE *)(v35 + v22) = 0;
    v9 = (char *)v35;
    v24 = v36;
  }
  else
  {
    v24 = 0u;
  }
  v25 = *a2;
  v26 = 0.0;
  v35 = 0;
  v36 = 0;
  if ( v25 )
  {
    a2[1] = nullptr;
    v26 = qfree(v25, v19);
    v27 = v35;
    *a2 = v9;
    *(_OWORD *)(a2 + 1) = v24;
    if ( v27 )
    {
      *(_QWORD *)&v36 = 0;
      v26 = qfree(v27, v19, v26);
    }
  }
  else
  {
    *a2 = v9;
    *(_OWORD *)(a2 + 1) = v24;
  }
  if ( s1 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(s1, v19, v26);
  }
  return a1;
}
