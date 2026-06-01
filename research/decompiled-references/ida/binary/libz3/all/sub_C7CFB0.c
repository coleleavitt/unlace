__int64 __fastcall sub_C7CFB0(
        __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7,
        char **a8)
{
  char *v9; // r15
  __int64 v10; // rax
  __int64 result; // rax
  __m128i *v12; // r10
  char *v13; // r15
  __int64 v14; // rdi
  const __m128i *v15; // r12
  unsigned int v16; // r13d
  unsigned __int32 v17; // esi
  __int64 v18; // rax
  int v19; // r11d
  __int64 v20; // r14
  unsigned int *v21; // rdx
  unsigned int v22; // esi
  char v23; // r8
  __int64 v24; // r13
  char *v25; // r14
  __int64 v26; // rdi
  unsigned int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rcx
  int v31; // esi
  int v32; // ebx
  int v33; // eax
  int v34; // r10d
  int v35; // r15d
  __int64 v36; // rcx
  unsigned int *v37; // rdx
  unsigned int v38; // esi
  char v39; // r8
  __int64 v40; // rdx
  unsigned int *v41; // rcx
  __int64 v42; // [rsp-10h] [rbp-B0h]
  __int64 v43; // [rsp-8h] [rbp-A8h]
  __m128i *v44; // [rsp+8h] [rbp-98h]
  int v45; // [rsp+8h] [rbp-98h]
  int v46; // [rsp+8h] [rbp-98h]
  __int64 v47; // [rsp+10h] [rbp-90h]
  __m128i *v48; // [rsp+10h] [rbp-90h]
  __m128i *v49; // [rsp+10h] [rbp-90h]
  int v54; // [rsp+30h] [rbp-70h]
  __int64 v55; // [rsp+38h] [rbp-68h]
  char *v56; // [rsp+48h] [rbp-58h] BYREF
  __int64 v57; // [rsp+50h] [rbp-50h] BYREF
  char *v58; // [rsp+58h] [rbp-48h] BYREF
  __int64 v59; // [rsp+60h] [rbp-40h] BYREF
  char *v60[7]; // [rsp+68h] [rbp-38h] BYREF

  v9 = *a8;
  v10 = a5;
  v55 = a5;
  if ( a4 <= a5 )
    v10 = a4;
  if ( a7 < v10 )
  {
    if ( a4 <= a5 )
    {
      v24 = a5 / 2;
      v15 = (const __m128i *)((char *)a2 + 8 * (a5 / 2));
      if ( v9 && (v58 = nullptr, sub_C7B020(&v58, a8), (v25 = v58) != nullptr) )
      {
        v59 = 0;
        sub_C7B020(&v59, &v58);
        v26 = v59;
      }
      else
      {
        v25 = nullptr;
        v26 = 0;
      }
      v12 = a1;
      v27 = v15->m128i_u32[1];
      v28 = ((char *)a2 - (char *)a1) >> 3;
      if ( v27 )
      {
        while ( v28 > 0 )
        {
          while ( 1 )
          {
            v36 = v28 >> 1;
            v37 = (unsigned int *)v12 + 2 * (v28 >> 1);
            v38 = v37[1];
            if ( !v38 )
              break;
            v39 = *(_BYTE *)(v26 + v15->m128i_u32[0]);
            if ( (v39 || !*(_BYTE *)(v26 + *v37)) && ((v39 != 0) != (*(_BYTE *)(v26 + *v37) != 0) || v27 >= v38) )
              break;
            v28 >>= 1;
            if ( v36 <= 0 )
              goto LABEL_32;
          }
          v12 = (__m128i *)(v37 + 2);
          v28 = v28 - v36 - 1;
        }
      }
      else
      {
        while ( v28 > 0 )
        {
          while ( 1 )
          {
            v29 = v28 >> 1;
            v30 = &v12->m128i_i64[v28 >> 1];
            if ( v15->m128i_u32[0] >= (unsigned __int64)*v30 )
              break;
            v28 >>= 1;
            if ( v29 <= 0 )
              goto LABEL_32;
          }
          v12 = (__m128i *)(v30 + 1);
          v28 = v28 - v29 - 1;
        }
      }
LABEL_32:
      if ( v26 )
      {
        v48 = v12;
        sub_186B220((void *)(v26 - 8));
        v12 = v48;
      }
      if ( v25 )
      {
        v49 = v12;
        sub_186B220(v25 - 8);
        v12 = v49;
      }
      v47 = ((char *)v12 - (char *)a1) >> 3;
    }
    else
    {
      v47 = a4 / 2;
      v12 = (__m128i *)((char *)a1 + 8 * (a4 / 2));
      if ( v9
        && (v44 = (__m128i *)((char *)a1 + 8 * (a4 / 2)), v56 = nullptr, sub_C7B020(&v56, a8), v13 = v56, v12 = v44, v56) )
      {
        v57 = 0;
        sub_C7B020(&v57, &v56);
        v14 = v57;
        v12 = v44;
      }
      else
      {
        v13 = nullptr;
        v14 = 0;
      }
      v15 = a2;
      v16 = v12->m128i_u32[1];
      v17 = v12->m128i_i32[0];
      v18 = ((char *)a3 - (char *)a2) >> 3;
      if ( v16 )
      {
        v19 = v55;
        v20 = v17;
        while ( v18 > 0 )
        {
          while ( 1 )
          {
            v21 = (unsigned int *)v15 + 2 * (v18 >> 1);
            v22 = v21[1];
            if ( v22 )
            {
              v23 = *(_BYTE *)(v14 + *v21);
              if ( (v23 || !*(_BYTE *)(v14 + v20)) && ((v23 != 0) != (*(_BYTE *)(v14 + v20) != 0) || v22 >= v16) )
                break;
            }
            v15 = (const __m128i *)(v21 + 2);
            v18 = v18 - (v18 >> 1) - 1;
            if ( v18 <= 0 )
              goto LABEL_20;
          }
          v18 >>= 1;
        }
      }
      else
      {
        v19 = v55;
        while ( v18 > 0 )
        {
          while ( 1 )
          {
            v40 = v18 >> 1;
            v41 = (unsigned int *)v15 + 2 * (v18 >> 1);
            if ( *(_QWORD *)v41 < (unsigned __int64)v17 )
              break;
            v18 >>= 1;
            if ( v40 <= 0 )
              goto LABEL_20;
          }
          v15 = (const __m128i *)(v41 + 2);
          v18 = v18 - v40 - 1;
        }
      }
LABEL_20:
      LODWORD(v55) = v19;
      if ( v14 )
      {
        v45 = (int)v12;
        sub_186B220((void *)(v14 - 8));
        LODWORD(v12) = v45;
      }
      if ( v13 )
      {
        v46 = (int)v12;
        sub_186B220(v13 - 8);
        LODWORD(v12) = v46;
      }
      v24 = ((char *)v15 - (char *)a2) >> 3;
    }
    v31 = (int)a2;
    v32 = a4 - v47;
    v54 = (int)v12;
    v33 = std::__rotate_adaptive<std::pair<unsigned int,unsigned int> *,std::pair<unsigned int,unsigned int> *,long>(
            (int)v12,
            v31,
            (int)v15,
            v32,
            v24,
            (int)a6,
            a7);
    v60[0] = nullptr;
    v34 = v54;
    v35 = v33;
    if ( *a8 )
    {
      sub_C7B020(v60, a8);
      v34 = v54;
    }
    sub_C7CFB0((_DWORD)a1, v34, v35, v47, v24, (_DWORD)a6, a7, (__int64)v60);
    if ( v60[0] )
      sub_186B220(v60[0] - 8);
    v60[0] = nullptr;
    if ( *a8 )
      sub_C7B020(v60, a8);
    sub_C7CFB0(v35, (_DWORD)v15, (_DWORD)a3, v32, v55 - v24, (_DWORD)a6, a7, (__int64)v60);
    result = v42;
    if ( v60[0] )
      return sub_186B220(v60[0] - 8);
  }
  else
  {
    if ( v9 )
    {
      v60[0] = nullptr;
      sub_C7B020(v60, a8);
      v9 = v60[0];
    }
    v60[0] = v9;
    sub_C7B0C0(a1, a2, a3, a4, v55, a6, v60);
    result = v43;
    if ( v9 )
      return sub_186B220(v9 - 8);
  }
  return result;
}

