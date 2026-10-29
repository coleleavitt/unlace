__int64 __fastcall sub_792DD0(__int64 a1, __int64 *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edx
  unsigned __int16 *v14; // rax
  char *v15; // rsi
  char *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  __int64 v20; // rax
  size_t v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rax
  void *v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rcx
  void *v29; // rdx
  int v31; // r15d
  unsigned int v32; // edx
  unsigned __int64 v33; // r9
  char *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rax
  void *v42; // rcx
  void *v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm0
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r12
  char *v49; // r13
  __int64 v50; // rax
  __int64 v51; // r15
  __int128 v52; // xmm1
  __int64 v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rax
  __m128i v56; // xmm0
  void *v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rsi
  size_t v60; // rax
  char *v61; // r13
  __int64 v62; // rsi
  unsigned int v63; // eax
  __int64 v64; // r12
  __int128 v65; // xmm1
  __int64 v66; // rbx
  __int64 v67; // rdx
  __m128i v68; // xmm0
  __int64 v69; // rdx
  __m128i v70; // xmm0
  void *v71; // rdi
  unsigned __int64 v72; // rdx
  __int64 v73; // [rsp+0h] [rbp-C0h]
  __int64 v74; // [rsp+0h] [rbp-C0h]
  void **v75; // [rsp+0h] [rbp-C0h]
  unsigned __int64 v78; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v79; // [rsp+18h] [rbp-A8h]
  unsigned int v80; // [rsp+18h] [rbp-A8h]
  __int64 v81; // [rsp+18h] [rbp-A8h]
  __int64 v82; // [rsp+20h] [rbp-A0h]
  size_t n; // [rsp+28h] [rbp-98h]
  size_t na; // [rsp+28h] [rbp-98h]
  unsigned __int16 *v87; // [rsp+38h] [rbp-88h]
  unsigned int v88; // [rsp+38h] [rbp-88h]
  __int64 v89; // [rsp+38h] [rbp-88h]
  __int64 v90; // [rsp+38h] [rbp-88h]
  unsigned int v91; // [rsp+4Ch] [rbp-74h] BYREF
  void *ptr; // [rsp+50h] [rbp-70h] BYREF
  __m128i v93; // [rsp+58h] [rbp-68h]
  void *dest; // [rsp+70h] [rbp-50h] BYREF
  __m128i v95; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v96; // [rsp+88h] [rbp-38h]

  v96 = __readfsqword(0x28u);
  v82 = *(_QWORD *)a1;
LABEL_2:
  while ( 1 )
  {
    v6 = v82;
    if ( a4 )
      break;
    while ( 1 )
    {
      v7 = sub_720F10(v6);
      if ( !v7 )
        return 0;
LABEL_4:
      v8 = v7 - 1;
      if ( v7 == 1 )
        return 0;
      if ( *(_BYTE *)(v8 + 3) != 46 )
        return 0;
      v9 = *(_DWORD *)(v8 + 4);
      v10 = _byteswap_ulong(v9);
      if ( a4 != v10 < a3 )
        return 0;
      v11 = a2[1];
      if ( v11 > 0x1FFF && v9 != *(_DWORD *)(*(_QWORD *)(*a2 + 48 * v11 - 48) + 4LL) )
        return 1;
      ptr = nullptr;
      v93 = 0;
      v12 = *(unsigned __int16 *)(v8 + 1);
      n = v12 + 3;
      if ( (unsigned __int16)v12 <= 5u )
      {
        if ( !under_debugger )
          interr(2095);
        goto LABEL_87;
      }
      if ( a5 )
      {
        v13 = v12 - 6;
        if ( *(_WORD *)(v8 + 1) == 7 )
        {
          v88 = *(unsigned __int8 *)(v8 + 9);
        }
        else
        {
          if ( v13 != 4 )
            goto LABEL_13;
          v88 = _byteswap_ulong(*(_DWORD *)(v8 + 9));
        }
        v31 = *(unsigned __int8 *)(v8 + 8);
        if ( (unsigned __int8)sub_792D30(a5, *(_BYTE *)(v8 + 8), v88) )
          break;
      }
LABEL_13:
      v14 = (unsigned __int16 *)sub_723E90(v82, (unsigned __int16 *)(v8 + 1));
      v15 = (char *)ptr;
      v87 = v14;
      v16 = (char *)ptr;
      if ( v14 )
      {
        v17 = v93.m128i_i64[0];
        v18 = *v14;
        v19 = v93.m128i_i64[0] + n;
        if ( !__CFADD__(v93.m128i_i64[0], n) )
          goto LABEL_15;
        if ( v93.m128i_i64[0] <= 0x7FFFFFFFFFFFFFFEuLL )
        {
          v19 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_15:
          v20 = v93.m128i_i64[0];
          if ( v93.m128i_i64[1] < v19 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
            v16 = (char *)ptr;
            v20 = v93.m128i_i64[0];
          }
          memset(&v16[v20], 0, v19 - v20);
          v93.m128i_i64[0] = v19;
          v15 = (char *)ptr;
        }
        else if ( v93.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
        {
          v93.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy(&v15[v17], (const void *)v8, n);
        v21 = *(unsigned __int16 *)((char *)v87 + v18 + 2);
        dest = nullptr;
        v95 = 0;
        if ( v21 )
        {
          dest = (void *)qvector_reserve(&dest, 0, v21, 1);
          memset((char *)dest + v95.m128i_i64[0], 0, v21 - v95.m128i_i64[0]);
          v95.m128i_i64[0] = v21;
          memcpy(dest, (char *)v87 + v18 + 4, v21);
        }
        v22 = a2[1];
        v23 = a2[2];
        if ( v23 < v22 + 1 )
        {
          v24 = qvector_reserve(a2, 0, v22 + 1, 48);
          v47 = a2[1];
          v48 = a2[2];
          a2[2] = v23;
          v49 = (char *)*a2;
          v50 = v47 - 1;
          if ( v50 >= 0 )
          {
            v89 = v50;
            v51 = v24;
            v52 = 0;
            do
            {
              v53 = *(_QWORD *)v49;
              v54 = _mm_loadu_si128((const __m128i *)(v49 + 8));
              *(_QWORD *)v49 = 0;
              *(_OWORD *)(v49 + 8) = v52;
              *(_QWORD *)v51 = v53;
              *(__m128i *)(v51 + 8) = v54;
              v55 = *((_QWORD *)v49 + 3);
              v56 = _mm_loadu_si128((const __m128i *)v49 + 2);
              *((_QWORD *)v49 + 3) = 0;
              *(_QWORD *)(v51 + 24) = v55;
              *(__m128i *)(v51 + 32) = v56;
              v57 = *(void **)v49;
              *((_QWORD *)v49 + 5) = 0;
              if ( v57 )
              {
                *((_QWORD *)v49 + 1) = 0;
                qfree(v57);
                v52 = 0;
              }
              --v89;
              v49 += 48;
              v51 += 48;
            }
            while ( v89 != -1 );
            v49 = (char *)*a2;
          }
          qfree(v49);
          *a2 = v24;
          v22 = a2[1];
          a2[2] = v48;
        }
        else
        {
          v24 = *a2;
        }
        v25 = v24 + 48 * v22;
        *(_QWORD *)v25 = 0;
        v26 = ptr;
        *(_OWORD *)(v25 + 8) = 0;
        *(_QWORD *)(v25 + 24) = 0;
        *(_OWORD *)(v25 + 32) = 0;
        ++a2[1];
        v16 = *(char **)v25;
        v27 = _mm_loadu_si128((const __m128i *)(v25 + 8));
        v28 = *(_QWORD *)(v25 + 40);
        *(_QWORD *)v25 = v26;
        ptr = v16;
        *(__m128i *)(v25 + 8) = v93;
        v29 = *(void **)(v25 + 24);
        v93 = v27;
        *(_QWORD *)(v25 + 24) = dest;
        *(__m128i *)(v25 + 32) = _mm_loadu_si128(&v95);
        dest = v29;
        v95.m128i_i64[1] = v28;
        if ( v29 )
        {
          v95.m128i_i64[0] = 0;
          qfree(v29);
          v16 = (char *)ptr;
        }
      }
      if ( !v16 )
        goto LABEL_2;
      v93.m128i_i64[0] = 0;
      qfree(v16);
      v6 = v82;
      if ( a4 )
        goto LABEL_3;
    }
    dest = nullptr;
    v91 = v32;
    v95 = 0;
    if ( *(_WORD *)(v8 + 1) == 7 )
      v31 |= 0x800u;
    if ( a4 )
    {
      v33 = n;
      v34 = nullptr;
      v35 = 0;
      goto LABEL_37;
    }
    while ( v88 && (sub_7921F0(a1, v10, v88 - 1, nullptr, 0, v31) & 0x8000000000000000LL) == 0LL )
      --v88;
    if ( *(_WORD *)(v8 + 1) == 7 )
      *(_BYTE *)(v8 + 9) = v88;
    else
      *(_DWORD *)(v8 + 9) = _byteswap_ulong(v88);
    v35 = v93.m128i_i64[0];
    v36 = v93.m128i_i64[0];
    v33 = v93.m128i_i64[0] + n;
    if ( __CFADD__(v93.m128i_i64[0], n) )
    {
      if ( v93.m128i_i64[0] > 0x7FFFFFFFFFFFFFFEuLL )
      {
        if ( v93.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
          v93.m128i_i64[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_48;
      }
      v72 = v93.m128i_u64[1];
      v34 = (char *)ptr;
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v72 = v93.m128i_u64[1];
      v34 = (char *)ptr;
    }
    if ( v72 < v33 )
    {
LABEL_37:
      v73 = v35;
      v78 = v33;
      ptr = (void *)qvector_reserve(&ptr, v34, v33, 1);
      v34 = (char *)ptr;
      v35 = v73;
      v36 = v93.m128i_i64[0];
      v33 = v78;
    }
    v74 = v35;
    v79 = v33;
    memset(&v34[v36], 0, v33 - v36);
    v35 = v74;
    v93.m128i_i64[0] = v79;
LABEL_48:
    memcpy((char *)ptr + v35, (const void *)v8, n);
    if ( !sub_7969C0(a1, v10, (unsigned int)&dest, 1, v88, v31, (__int64)&v91) )
    {
      v37 = dest;
      goto LABEL_50;
    }
    v38 = a2[1];
    v39 = a2[2];
    if ( v39 < v38 + 1 )
    {
      v58 = qvector_reserve(a2, 0, v38 + 1, 48);
      v59 = a2[1];
      v60 = a2[2];
      a2[2] = v39;
      v61 = (char *)*a2;
      na = v60;
      v62 = v59 - 1;
      if ( v62 >= 0 )
      {
        v63 = v88;
        v90 = v62;
        v64 = v58;
        v65 = 0;
        v75 = (void **)a2;
        v66 = v58;
        v80 = v63;
        do
        {
          v67 = *(_QWORD *)v61;
          v68 = _mm_loadu_si128((const __m128i *)(v61 + 8));
          *(_QWORD *)v61 = 0;
          *(_OWORD *)(v61 + 8) = v65;
          *(_QWORD *)v66 = v67;
          *(__m128i *)(v66 + 8) = v68;
          v69 = *((_QWORD *)v61 + 3);
          v70 = _mm_loadu_si128((const __m128i *)v61 + 2);
          *((_QWORD *)v61 + 3) = 0;
          *(_QWORD *)(v66 + 24) = v69;
          *(__m128i *)(v66 + 32) = v70;
          v71 = *(void **)v61;
          *((_QWORD *)v61 + 5) = 0;
          if ( v71 )
          {
            *((_QWORD *)v61 + 1) = 0;
            qfree(v71);
            v65 = 0;
          }
          --v90;
          v61 += 48;
          v66 += 48;
        }
        while ( v90 != -1 );
        a2 = (__int64 *)v75;
        v58 = v64;
        v88 = v80;
        v61 = (char *)*v75;
      }
      v81 = v58;
      qfree(v61);
      v40 = v81;
      a2[2] = na;
      v38 = a2[1];
      *a2 = v81;
    }
    else
    {
      v40 = *a2;
    }
    v41 = v40 + 48 * v38;
    *(_QWORD *)v41 = 0;
    v42 = ptr;
    *(_OWORD *)(v41 + 8) = 0;
    *(_OWORD *)(v41 + 32) = 0;
    *(_QWORD *)(v41 + 24) = 0;
    ++a2[1];
    v43 = *(void **)v41;
    v44 = _mm_loadu_si128((const __m128i *)(v41 + 8));
    v37 = *(void **)(v41 + 24);
    *(_QWORD *)v41 = v42;
    ptr = v43;
    *(__m128i *)(v41 + 8) = v93;
    v93 = v44;
    v45 = _mm_loadu_si128((const __m128i *)(v41 + 32));
    *(_QWORD *)(v41 + 24) = dest;
    *(__m128i *)(v41 + 32) = _mm_loadu_si128(&v95);
    dest = v37;
    v95 = v45;
    if ( a4 )
    {
      if ( v88 < v91 )
      {
        v46 = v91 - 1;
        *(_BYTE *)(a1 + 52) = v31;
        *(_DWORD *)(a1 + 48) = v9;
        if ( (v31 & 0x800) != 0 )
        {
          *(_BYTE *)(a1 + 53) = v46;
          *(_WORD *)(a1 + 45) = 7;
        }
        else
        {
          *(_WORD *)(a1 + 45) = 10;
          *(_DWORD *)(a1 + 53) = _byteswap_ulong(v46);
        }
        goto LABEL_50;
      }
      if ( !under_debugger )
        interr(2096);
LABEL_87:
      BUG();
    }
LABEL_50:
    if ( v37 )
    {
      v95.m128i_i64[0] = 0;
      qfree(v37);
    }
    if ( ptr )
    {
      v93.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
LABEL_3:
  sub_720F20(v6);
  if ( v7 )
    goto LABEL_4;
  return 0;
}

