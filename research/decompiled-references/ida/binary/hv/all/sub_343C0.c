__int64 __fastcall sub_343C0(
        __int64 a1,
        __int64 *a2,
        __m128i *a3,
        const char *a4,
        const char *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v17; // rax
  _QWORD *v18; // rbp
  size_t v19; // r14
  size_t v20; // rax
  size_t v21; // r14
  size_t v22; // r13
  const __m128i *v23; // r12
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // r13d
  __m128i v27; // xmm7
  __m128i v28; // xmm6
  __m128i v29; // xmm5
  __m128i v30; // xmm4
  __m128i v31; // xmm3
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  __m128i v34; // xmm8
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __m128i v37; // xmm8
  __m128i v38; // xmm8
  __m128i v39; // xmm8
  __m128i v40; // xmm8
  __m128i v41; // xmm8
  const char *v43; // rax
  const char *v44; // rbx
  size_t v45; // rax
  size_t v46; // r8
  void *v47; // rdi
  size_t v48; // rdx
  __int64 v49; // rax
  size_t v50; // [rsp+0h] [rbp-128h]
  size_t v51; // [rsp+0h] [rbp-128h]
  size_t v52; // [rsp+8h] [rbp-120h]
  __int64 (__fastcall **v53)(); // [rsp+10h] [rbp-118h] BYREF
  char v54; // [rsp+18h] [rbp-110h]
  void *ptr; // [rsp+20h] [rbp-108h] BYREF
  __int128 v56; // [rsp+28h] [rbp-100h]
  void *v57; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v58; // [rsp+40h] [rbp-E8h]
  int v59; // [rsp+50h] [rbp-D8h]
  char v60; // [rsp+54h] [rbp-D4h]
  __m128i v61; // [rsp+60h] [rbp-C8h]
  __m128i v62; // [rsp+70h] [rbp-B8h]
  __m128i v63; // [rsp+80h] [rbp-A8h]
  __m128i v64; // [rsp+90h] [rbp-98h]
  __m128i v65; // [rsp+A0h] [rbp-88h]
  __m128i v66; // [rsp+B0h] [rbp-78h]
  __m128i v67; // [rsp+C0h] [rbp-68h]
  __m128i v68; // [rsp+D0h] [rbp-58h]
  __int64 v69; // [rsp+E0h] [rbp-48h]
  int v70[2]; // [rsp+E8h] [rbp-40h]

  *(_QWORD *)v70 = __readfsqword(0x28u);
  v17 = sub_33980(a1, a2, (__int64)a3, (__int64)a4, (__int64)a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( v17 )
  {
    v18 = (_QWORD *)v17;
    v54 = 102;
    ptr = nullptr;
    v56 = 0;
    v53 = &off_162528;
    if ( a4 )
    {
      v19 = strlen(a4);
      ptr = (void *)sub_96080(&ptr, 0, v19 + 1, 1);
      *(_QWORD *)&v56 = v19 + 1;
      memmove(ptr, a4, v19);
      *((_BYTE *)ptr + v19) = 0;
    }
    v57 = nullptr;
    v58 = 0;
    if ( a5 )
    {
      v20 = strlen(a5);
      v21 = v20 + 1;
      v22 = v20;
      v57 = (void *)sub_96080(&v57, 0, v20 + 1, 1);
      *(_QWORD *)&v58 = v21;
      memmove(v57, a5, v22);
      *((_BYTE *)v57 + v22) = 0;
    }
    v60 = 0;
    v59 = 8;
    v23 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)()))(v18[5] + 80LL))(
                             v18 + 5,
                             &v53);
    v26 = sub_2A6A0(v18 + 5, (__int64)v23, 103, nullptr, v24, v25);
    if ( v26 )
    {
      v43 = (const char *)sub_8FA30(0);
      v44 = v43;
      if ( v43 && (v45 = strlen(v43), (v46 = v45) != 0) )
      {
        v47 = (void *)*a2;
        v48 = v45 + 1;
        if ( a2[2] < v45 + 1 )
        {
          v51 = v45 + 1;
          v52 = v45;
          v49 = sub_96080(a2, *a2, v48, 1);
          v46 = v52;
          v48 = v51;
          *a2 = v49;
          v47 = (void *)v49;
        }
        a2[1] = v48;
        v50 = v46;
        memmove(v47, v44, v46);
        *(_BYTE *)(*a2 + v50) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    else
    {
      v27 = _mm_loadu_si128(a3);
      v28 = _mm_loadu_si128(a3 + 1);
      v29 = _mm_loadu_si128(a3 + 2);
      *a3 = _mm_loadu_si128(v23 + 1);
      v30 = _mm_loadu_si128(a3 + 3);
      v31 = _mm_loadu_si128(a3 + 4);
      v32 = _mm_loadu_si128(a3 + 5);
      v33 = _mm_loadu_si128(a3 + 6);
      v61 = v27;
      v34 = _mm_loadu_si128(v23 + 2);
      v35 = _mm_loadu_si128(a3 + 7);
      v62 = v28;
      v36 = a3[8].m128i_i64[0];
      v63 = v29;
      a3[1] = v34;
      v37 = _mm_loadu_si128(v23 + 3);
      v69 = v36;
      a3[2] = v37;
      v38 = _mm_loadu_si128(v23 + 4);
      v64 = v30;
      a3[3] = v38;
      v39 = _mm_loadu_si128(v23 + 5);
      v65 = v31;
      a3[4] = v39;
      v40 = _mm_loadu_si128(v23 + 6);
      v66 = v32;
      a3[5] = v40;
      v41 = _mm_loadu_si128(v23 + 7);
      v67 = v33;
      v68 = v35;
      a3[6] = v41;
      a3[7] = _mm_loadu_si128(v23 + 8);
      a3[8].m128i_i64[0] = v23[9].m128i_i64[0];
      v23[9].m128i_i64[0] = v36;
      v23[1] = v27;
      v23[2] = v28;
      v23[3] = v29;
      v23[4] = v30;
      v23[5] = v31;
      v23[6] = v32;
      v23[7] = v33;
      v23[8] = v35;
    }
    if ( v23 )
      (*(void (__fastcall **)(const __m128i *))(v23->m128i_i64[0] + 8))(v23);
    sub_3C150(&v53);
    (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
  }
  else
  {
    return 33;
  }
  return v26;
}

