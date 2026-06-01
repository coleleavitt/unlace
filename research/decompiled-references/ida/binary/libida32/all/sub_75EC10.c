__int64 __fastcall sub_75EC10(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  char *v5; // rdi
  __m128i v6; // xmm1
  void *v7; // rax
  __m128i v8; // xmm0
  char *v12; // rax
  bool v13; // zf
  __int32 v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int *v18; // r9
  unsigned __int64 *p_ptr; // rbx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbp
  unsigned int *v25; // rbx
  char v26; // al
  char v27; // r14
  __int64 v28; // rax
  __int64 v29; // r12
  char v30; // r15
  char *v31; // rsi
  unsigned int v32; // ebx
  char *v33; // rsi
  unsigned __int64 v34; // rsi
  unsigned int v35; // r10d
  unsigned int v36; // r8d
  __int8 v37; // r9
  unsigned __int64 v38; // rax
  __int8 v39; // r11
  unsigned int v41; // [rsp+8h] [rbp-A8h]
  __int8 v42; // [rsp+16h] [rbp-9Ah]
  unsigned int v43; // [rsp+23h] [rbp-8Dh]
  __int8 v44; // [rsp+27h] [rbp-89h]
  __m128i v45; // [rsp+28h] [rbp-88h] BYREF
  void *v46; // [rsp+38h] [rbp-78h] BYREF
  __m128i v47; // [rsp+40h] [rbp-70h] BYREF
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __int128 v49; // [rsp+60h] [rbp-50h]
  unsigned __int64 v50; // [rsp+70h] [rbp-40h]

  v4 = a2[1];
  v50 = __readfsqword(0x28u);
  v47 = 0;
  v46 = nullptr;
  ptr = nullptr;
  v49 = 0;
  if ( v4 )
  {
    v12 = (char *)qvector_reserve(&ptr, 0, v4, 16);
    v13 = a2[1] == 0;
    ptr = v12;
    v5 = v12;
    if ( v13 )
    {
      v23 = v49 - 1;
    }
    else
    {
      v14 = 0;
      v15 = 0;
      do
      {
        v17 = sub_758300(a1, (unsigned int *)(*a2 + 16 * v15));
        v43 = v17;
        v44 = BYTE4(v17);
        v35 = v17;
        if ( (_DWORD)v17 == -1 )
        {
          v39 = 2;
          p_ptr = (unsigned __int64 *)&v46;
        }
        else
        {
          v39 = 0;
          p_ptr = (unsigned __int64 *)&ptr;
        }
        v36 = *v18;
        v45.m128i_i8[9] = v39;
        v37 = BYTE4(v17);
        v34 = *p_ptr;
        v45.m128i_i32[3] = v14;
        v38 = p_ptr[1];
        v45.m128i_i64[0] = __PAIR64__(v43, v36);
        v20 = p_ptr[2];
        v45.m128i_i8[8] = v44;
        v21 = v38 + 1;
        if ( (unsigned __int64)&v45 < v34 || (unsigned __int64)&v45 >= v34 + 16 * v20 )
        {
          if ( v20 < v21 )
          {
            v22 = qvector_reserve(p_ptr, v34, v38 + 1, 16);
            *p_ptr = v22;
            v34 = v22;
            v38 = p_ptr[1];
          }
          *(__m128i *)(v34 + 16 * v38) = _mm_load_si128(&v45);
        }
        else
        {
          if ( v20 < v21 )
          {
            v42 = v39;
            v41 = v36;
            v34 = qvector_reserve(p_ptr, v34, v38 + 1, 16);
            v35 = v43;
            v36 = v41;
            *p_ptr = v34;
            v37 = v44;
            v38 = p_ptr[1];
            v39 = v42;
          }
          v16 = v34 + 16 * v38;
          *(_BYTE *)(v16 + 8) = v37;
          *(_BYTE *)(v16 + 9) = v39;
          *(_DWORD *)(v16 + 12) = v14;
          *(_QWORD *)v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v35)).m128i_u64[0];
        }
        ++v14;
        ++p_ptr[1];
        v15 = v14;
      }
      while ( (unsigned __int64)v14 < a2[1] );
      v5 = (char *)ptr;
      v23 = v49 - 1;
    }
    if ( v23 >= 0 )
    {
      do
      {
        v25 = (unsigned int *)&v5[16 * v23];
        if ( !*((_BYTE *)v25 + 9) )
        {
          v26 = sub_75EB70(a1, *v25, v25 + 1);
          *((_BYTE *)v25 + 9) = v26;
          v27 = v26;
          if ( v26 )
          {
            v28 = v47.m128i_i64[0];
            v29 = *(_QWORD *)v25;
            v30 = *((_BYTE *)v25 + 8);
            v31 = (char *)v46;
            v32 = v25[3];
            if ( v47.m128i_i64[1] < (unsigned __int64)(v47.m128i_i64[0] + 1) )
            {
              v46 = (void *)qvector_reserve(&v46, v46, v47.m128i_i64[0] + 1, 16);
              v31 = (char *)v46;
              v28 = v47.m128i_i64[0];
            }
            v33 = &v31[16 * v28];
            *(_QWORD *)v33 = v29;
            v33[8] = v30;
            v33[9] = v27;
            *((_DWORD *)v33 + 3) = v32;
            ++v47.m128i_i64[0];
          }
          v5 = (char *)ptr;
        }
      }
      while ( v23-- != 0 );
    }
    if ( !a3 )
      goto LABEL_4;
  }
  else
  {
    v5 = nullptr;
    if ( !a3 )
      goto LABEL_6;
  }
  v6 = _mm_loadu_si128(&v47);
  v7 = *(void **)a3;
  v8 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  *(_QWORD *)a3 = v46;
  *(__m128i *)(a3 + 8) = v6;
  v46 = v7;
  v47 = v8;
LABEL_4:
  if ( v5 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v5);
  }
LABEL_6:
  if ( v46 )
  {
    v47.m128i_i64[0] = 0;
    qfree(v46);
  }
  return 0;
}

