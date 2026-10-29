unsigned __int64 __fastcall sub_32BF70(
        unsigned int a1,
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
  unsigned int v10; // edx
  const char *v11; // r12
  const char *v12; // rsi
  unsigned int v13; // ebp
  __int64 extra_cmt; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  size_t v20; // r9
  size_t v21; // rbx
  const char *v22; // rsi
  unsigned __int64 v23; // r15
  const char *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  const char *v29; // rdx
  unsigned __int64 v30; // rsi
  const char *v31; // r13
  int v32; // ebp
  const char *v33; // rbx
  char *v34; // rax
  unsigned int v35; // r15d
  size_t v37; // [rsp+0h] [rbp-88h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  const char *v39; // [rsp+10h] [rbp-78h] BYREF
  __int128 v40; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v42; // [rsp+38h] [rbp-50h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v9 = 0;
  v10 = a1;
  v43 = __readfsqword(0x28u);
  v40 = 0;
  v39 = nullptr;
  v11 = (const char *)xmmword_8CC810;
  src = nullptr;
  v42 = 0;
  while ( 1 )
  {
    v12 = v11;
    v13 = v10 + 1;
    extra_cmt = get_extra_cmt(&src, v11);
    v17 = v40;
    v18 = v40;
    if ( extra_cmt < 0 )
      break;
    v19 = v42;
    if ( (_QWORD)v42 )
    {
      v20 = v42 - 1;
      if ( (_QWORD)v42 != 1 )
      {
        v21 = v42 - 1;
        if ( (_QWORD)v40 )
        {
          v18 = v40 - 1;
          v21 = v20 + v40 - 1;
          v19 = v42 + v40 - 1;
        }
        v22 = v39;
        if ( *((_QWORD *)&v40 + 1) < v19 )
        {
          v37 = v42 - 1;
          v38 = v18;
          v39 = (const char *)qvector_reserve(&v39, v39, v19, 1);
          v18 = v38;
          v22 = v39;
          v20 = v37;
        }
        *(_QWORD *)&v40 = v19;
        v22[v21] = 0;
        memcpy((void *)&v39[v18], src, v20);
        v17 = v40;
      }
    }
    v23 = 2;
    if ( v17 )
      v23 = v17-- + 1;
    v24 = v39;
    if ( *((_QWORD *)&v40 + 1) < v23 )
    {
      v39 = (const char *)qvector_reserve(&v39, v39, v23, 1);
      v24 = v39;
    }
    *(_QWORD *)&v40 = v23;
    v10 = v13;
    v24[v17] = 10;
    v39[v17 + 1] = 0;
  }
  if ( (unsigned __int64)v40 > 1 )
  {
    v12 = v39;
    if ( v39[(_QWORD)v40 - 2] == 10 )
    {
      if ( (__int64)v40 - 1 <= 1 )
      {
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          *(double *)v9.m128_u64 = qfree(v39, v39, v15, v16, v18);
          v39 = nullptr;
          *((_QWORD *)&v40 + 1) = 0;
        }
      }
      else
      {
        if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 - 1) )
        {
          v39 = (const char *)qvector_reserve(&v39, v39, v40 - 1, 1);
          v12 = v39;
        }
        *(_QWORD *)&v40 = v17 - 1;
        v12[v17 - 2] = 0;
      }
    }
  }
  v25 = itext((unsigned int)(a1 != 1000) + 1081, v12, v15);
  v29 = &s1;
  if ( (_QWORD)v40 )
    LODWORD(v29) = (_DWORD)v39;
  v30 = 0;
  if ( (unsigned __int8)sub_2B3730((int)&src, 0, (int)v29, (int)"%s", v25, v26, v9, a3, a4, a5, v27, v28, a8, a9, v37) )
  {
    if ( (unsigned __int64)v42 <= 1 )
    {
      v30 = a1;
      delete_extra_cmts(v11, a1);
    }
    else
    {
      v31 = (const char *)src;
      v32 = 0;
      while ( 1 )
      {
        v33 = nullptr;
        v34 = strchr(v31, 10);
        if ( v34 )
        {
          *v34 = 0;
          v33 = v34 + 1;
        }
        v35 = v32 + a1;
        if ( !(unsigned __int8)update_extra_cmt(v11, v32 + a1, v31) )
        {
          v30 = v35;
          delete_extra_cmts(v11, v35);
          goto LABEL_27;
        }
        ++v32;
        if ( !v33 )
          break;
        v31 = v33;
      }
      v30 = a1 + v32;
      delete_extra_cmts(v11, v30);
    }
  }
LABEL_27:
  if ( src )
  {
    *(_QWORD *)&v42 = 0;
    *(double *)v9.m128_u64 = qfree(src, (const char *)v30);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, (const char *)v30, *(double *)v9.m128_u64);
  }
  return v43 - __readfsqword(0x28u);
}
