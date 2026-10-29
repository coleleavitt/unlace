/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_443F90
// Address: 0x0000000000443F90

//----- (0000000000443F90) ----------------------------------------------------
__int64 __fastcall sub_443F90(
        __int64 a1,
        const char *a2,
        __m128i *a3,
        char a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  size_t v15; // rax
  size_t v16; // r15
  size_t v17; // r14
  double v18; // xmm4_8
  double v19; // xmm5_8
  char v20; // al
  double v21; // xmm4_8
  double v22; // xmm5_8
  unsigned int v23; // ebx
  __int64 v24; // rax
  const char *v25; // r15
  const char *v26; // rbp
  __int64 v27; // r12
  const char *v28; // r14
  const char *v29; // rax
  const char *v30; // r13
  const char *v31; // rsi
  const char *v32; // rdi
  int v33; // eax
  const char *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int8 *v37; // rax
  double v38; // xmm4_8
  double v39; // xmm5_8
  __m128i *v40; // rsi
  const char *v41; // rsi
  const char *v42; // [rsp+8h] [rbp-120h]
  const char *v43; // [rsp+10h] [rbp-118h]
  _QWORD *v44; // [rsp+18h] [rbp-110h]
  void **p_ptr; // [rsp+28h] [rbp-100h] BYREF
  void *ptr; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-F0h]
  _QWORD v48[27]; // [rsp+50h] [rbp-D8h] BYREF

  v48[19] = __readfsqword(0x28u);
  if ( a1 )
  {
    if ( *(_BYTE *)a1 != 5 )
      return sub_479EB0(0x5FCu);
    ptr = nullptr;
    v47 = 0;
    if ( a2 )
    {
      v15 = strlen(a2);
      v16 = v15 + 1;
      v17 = v15;
      ptr = sub_481540((__int64)&ptr, nullptr, v15 + 1, 1u);
      *(_QWORD *)&v47 = v16;
      memmove(ptr, a2, v17);
      *((_BYTE *)ptr + v17) = 0;
    }
    if ( a4 )
    {
      sub_442B60((__int64)v48, 0, 1u);
      v20 = sub_443DD0(v48, *(_QWORD *)(a1 + 8), (const char **)&ptr, a3, 0.0, a6, a7, a8, v18, v19, a11, a12);
      v23 = 0;
      if ( !v20 )
        v23 = sub_479E90();
      sub_442CC0((__int64)v48, 0.0, a6, a7, a8, v21, v22, a11, a12);
      goto LABEL_11;
    }
    v24 = *(_QWORD *)(a1 + 8);
    v25 = *(const char **)(v24 + 16);
    v26 = (const char *)(v24 + 8);
    v44 = (_QWORD *)v24;
    v43 = (const char *)(v24 + 8);
    if ( !v25 )
    {
      v26 = (const char *)(v24 + 8);
      goto LABEL_36;
    }
    v27 = v47;
    v28 = (const char *)ptr;
    v29 = s1;
    if ( (_QWORD)v47 )
      v29 = (const char *)ptr;
    v42 = v29;
    while ( 1 )
    {
      v35 = *((_QWORD *)v25 + 5);
      if ( !v27 )
        break;
      if ( v35 )
        goto LABEL_27;
      v30 = v25;
      v31 = v28;
      v32 = s1;
LABEL_20:
      v33 = strcmp(v32, v31);
      v34 = *((const char **)v25 + 2);
      v25 = *((const char **)v25 + 3);
      if ( v33 >= 0 )
      {
        v26 = v30;
        v25 = v34;
      }
      if ( !v25 )
        goto LABEL_31;
    }
    if ( !v35 )
    {
      while ( 1 )
      {
        v36 = *((_QWORD *)v25 + 2);
        if ( !v36 )
          break;
        v26 = v25;
        v25 = *((const char **)v25 + 2);
        if ( *(_QWORD *)(v36 + 40) )
          goto LABEL_27;
      }
      v26 = v25;
LABEL_31:
      if ( v43 == v26 )
        goto LABEL_36;
      if ( *((_QWORD *)v26 + 5) )
      {
        v41 = *((const char **)v26 + 4);
        if ( !v27 )
          v28 = s1;
LABEL_35:
        if ( strcmp(v28, v41) < 0 )
        {
LABEL_36:
          p_ptr = &ptr;
          v26 = sub_441740(v44, v26, (__int64 *)&p_ptr, 0.0, a6, a7, a8, a9, a10, a11, a12);
        }
      }
      else
      {
        v41 = s1;
        if ( v27 )
          goto LABEL_35;
      }
      sub_4418C0((unsigned __int8 *)v26 + 56, (unsigned __int8 *)a3, 0.0, a6, a7, a8, a9, a10, a11, a12);
      v23 = 0;
LABEL_11:
      if ( ptr )
      {
        *(_QWORD *)&v47 = 0;
        j__free(ptr);
      }
      return v23;
    }
LABEL_27:
    v32 = *((const char **)v25 + 4);
    v31 = v42;
    v30 = v25;
    goto LABEL_20;
  }
  v37 = (unsigned __int8 *)sub_439A80(a2);
  if ( v37 )
  {
    v40 = a3;
    v23 = 0;
    sub_4418C0(v37, (unsigned __int8 *)v40, a5, a6, a7, a8, v38, v39, a11, a12);
    return v23;
  }
  sub_479F30(0, a2);
  return sub_479EB0(0x602u);
}
// 44408B: variable 'v18' is possibly undefined
// 44408B: variable 'v19' is possibly undefined
// 4440A0: variable 'v21' is possibly undefined
// 4440A0: variable 'v22' is possibly undefined
// 4441B1: variable 'v38' is possibly undefined
// 4441B1: variable 'v39' is possibly undefined
// 444206: variable 'a9' is possibly undefined
// 444206: variable 'a10' is possibly undefined
