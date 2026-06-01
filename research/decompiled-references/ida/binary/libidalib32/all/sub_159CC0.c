__int64 __fastcall sub_159CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  bool v6; // zf
  __int64 v8; // r14
  __int64 v9; // r13
  double (*v10)(); // rax
  __int64 v11; // rdx
  int *v12; // rax
  int *v13; // rcx
  int *v14; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  __int64 v18; // rdx
  unsigned int tinfo_property4; // ebx
  unsigned __int64 v21; // rdx
  size_t v22; // rbx
  const char *v23; // r12
  __int64 v24; // r13
  void *v25; // rax
  unsigned __int64 v26; // r13
  _BYTE *v27; // r12
  _BYTE *v28; // rbx
  char *v29; // r14
  unsigned int v30; // edi
  __int64 v31; // r8
  unsigned __int64 v32; // r15
  void *v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  struct _Unwind_Exception *v36; // rbx
  __int64 v37; // [rsp+8h] [rbp-70h]
  char v38; // [rsp+17h] [rbp-61h] BYREF
  __int64 v39; // [rsp+18h] [rbp-60h]
  void *dest; // [rsp+20h] [rbp-58h]
  __m128i v41; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-40h]

  v6 = *(_BYTE *)(a1 + 984) == 0;
  v42 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      v36 = (struct _Unwind_Exception *)sub_1582F0(a1);
      if ( dest )
      {
        v41.m128i_i64[0] = 0;
        qfree();
      }
      _Unwind_Resume(v36);
    }
    v8 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v8 = *(_QWORD *)(a1 + 848);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, 0, a6 & 1);
  if ( !v9 )
    return (unsigned int)-1;
  v10 = *(double (**)())(*(_QWORD *)v8 + 232LL);
  if ( v10 != sub_8E1F0 )
    ((void (__fastcall *)(__int64))v10)(v8);
  v11 = sub_90AD0(v9, (__int64)&v38, a1);
  v12 = *(int **)(v11 + 120);
  v13 = &v12[5 * *(_QWORD *)(v11 + 128)];
  if ( v12 == v13 )
    return (unsigned int)-1;
  v14 = nullptr;
  do
  {
    v15 = *v12;
    if ( a5 >= *v12 && a5 < v15 + v12[1] && *((_BYTE *)v12 + 16) == 12 )
    {
      if ( v14 )
      {
        if ( v15 > *v14 )
          v14 = v12;
      }
      else
      {
        v14 = v12;
      }
    }
    v12 += 5;
  }
  while ( v13 != v12 );
  dest = nullptr;
  v41 = 0;
  if ( !v14 )
    return (unsigned int)-1;
  if ( v14[1] < 0 )
    return (unsigned int)-1;
  if ( !*((_BYTE *)v14 + 16) )
    return (unsigned int)-1;
  v16 = v14[2];
  if ( v16 < 0 )
    return (unsigned int)-1;
  v17 = v14[3];
  if ( v16 > v17 )
    return (unsigned int)-1;
  v18 = *(_QWORD *)(v9 + 16);
  if ( v18 )
  {
    v21 = v18 - 1;
    if ( v21 < v16 || v21 < v17 )
      return (unsigned int)-1;
    v22 = v17 - v16;
    v23 = (const char *)(*(_QWORD *)(v9 + 8) + v16);
    v24 = v22 + 1;
    if ( v22 == -1 )
    {
      v22 = -1;
      v25 = nullptr;
      goto LABEL_34;
    }
  }
  else
  {
    if ( v16 || v17 )
      return (unsigned int)-1;
    v22 = 0;
    v24 = 1;
    v23 = s1;
  }
  v25 = (void *)qvector_reserve();
  dest = v25;
LABEL_34:
  v41.m128i_i64[0] = v24;
  *((_BYTE *)v25 + v22) = 0;
  memmove(dest, v23, v22);
  v26 = v41.m128i_i64[0];
  if ( v41.m128i_i64[0] > 1uLL )
  {
    v27 = dest;
    v28 = (char *)dest + v41.m128i_i64[0] - 1;
    v29 = (char *)dest;
    if ( dest < v28 )
    {
      while ( 1 )
      {
        v30 = (char)*(v28 - 1);
        if ( v30 > 0x7F || !isspace(v30) )
          break;
        if ( v27 == --v28 )
          goto LABEL_51;
      }
    }
    v31 = v28 - v27;
    if ( v28 == v27 )
    {
LABEL_51:
      if ( !v27 )
      {
        v39 = 0;
        goto LABEL_43;
      }
      v41.m128i_i64[0] = 0;
      qfree();
      dest = nullptr;
      v41.m128i_i64[1] = 0;
    }
    else
    {
      v32 = v31 + 1;
      if ( v26 < v31 + 1 )
      {
        if ( v41.m128i_i64[1] < v32 )
        {
          dest = (void *)qvector_reserve();
          v26 = v41.m128i_i64[0];
          v29 = (char *)dest;
          v31 = v28 - v27;
        }
        v37 = v31;
        memset(&v29[v26], 0, v32 - v26);
        v41.m128i_i64[0] = v32;
        v28 = (char *)dest + v37;
      }
      else if ( v26 != v31 + 1 )
      {
        v41.m128i_i64[0] = v31 + 1;
      }
      *v28 = 0;
    }
  }
  v39 = 0;
LABEL_43:
  if ( get_tinfo_by_edm_name() < 0 )
  {
    tinfo_property4 = -1;
  }
  else
  {
    tinfo_property4 = get_tinfo_property4();
    if ( tinfo_property4 != -1 && a2 )
    {
      v33 = *(void **)a2;
      v34 = _mm_loadu_si128((const __m128i *)(a2 + 8));
      v35 = _mm_loadu_si128(&v41);
      *(_QWORD *)a2 = dest;
      dest = v33;
      *(__m128i *)(a2 + 8) = v35;
      v41 = v34;
    }
  }
  clear_tinfo_t();
  if ( dest )
  {
    v41.m128i_i64[0] = 0;
    qfree();
  }
  return tinfo_property4;
}

