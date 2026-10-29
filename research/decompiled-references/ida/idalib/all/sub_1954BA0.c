__int64 __fastcall sub_1954BA0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __m128i *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int16 **i; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm0
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int16 **v27; // rax
  unsigned __int16 **v28; // r12
  unsigned __int16 *v29; // rdx
  unsigned __int16 *v30; // rsi
  unsigned __int16 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int16 *k; // rbp
  unsigned int v35; // ecx
  __int64 *v36; // rsi
  __int64 v37; // r8
  unsigned __int64 v38; // r15
  _QWORD *v39; // rdx
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  _BYTE *v47; // r12
  char *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // esi
  int v54; // r8d
  __int64 v55; // rax
  unsigned __int64 v56; // [rsp+8h] [rbp-120h]
  unsigned __int16 *v57; // [rsp+10h] [rbp-118h]
  unsigned __int64 v58; // [rsp+10h] [rbp-118h]
  unsigned __int16 **j; // [rsp+20h] [rbp-108h]
  unsigned __int16 **v63; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v64; // [rsp+50h] [rbp-D8h]
  __m128i v65; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v66; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v67; // [rsp+88h] [rbp-A0h]
  __m128 v68; // [rsp+90h] [rbp-98h] BYREF
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-80h]
  _BYTE v71[120]; // [rsp+B0h] [rbp-78h] BYREF

  v10 = *(unsigned int *)(a2 + 16);
  if ( *((_DWORD *)a3 + 3) < *(_DWORD *)(a2 + 16) )
  {
    sub_2237220(a3, a3 + 2, v10, 8);
    v10 = *(unsigned int *)(a2 + 16);
  }
  v11 = a2 + 8 * v10 + 104;
  for ( i = (unsigned __int16 **)(a2 + 104); (unsigned __int16 **)v11 != i; ++*((_DWORD *)a3 + 2) )
  {
    v14 = sub_1944E10((__int64 *)a1, *i, a7, a8);
    if ( v14 == 1 )
      return 1;
    v15 = *((unsigned int *)a3 + 2);
    v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
    if ( v15 + 1 <= (unsigned __int64)*((unsigned int *)a3 + 3) )
    {
      v13 = *a3;
    }
    else
    {
      v56 = v16;
      sub_2237220(a3, a3 + 2, v15 + 1, 8);
      v15 = *((unsigned int *)a3 + 2);
      v13 = *a3;
      v16 = v56;
    }
    ++i;
    *(_QWORD *)(v13 + 8 * v15) = v16;
  }
  v18 = *(_QWORD *)(a2 + 40);
  v19 = 0;
  if ( v18 )
  {
    v18 = sub_1949260(a1, v18, *(void **)(a2 + 48), 0, 0);
    if ( !v18 )
      return 1;
  }
  sub_15AB8B0(a4, v18, v19);
  v22 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 56));
  *a5 = (__m128i)v22;
  v23 = a5->m128i_i64[0] == 0;
  a5[1].m128i_i64[0] = *(_QWORD *)(a2 + 72);
  if ( !v23 )
  {
    sub_1947EF0(&v65, (__int64 *)a1, a5, v22, a8);
    v24 = v65.m128i_i64[0];
    *a5 = _mm_loadu_si128(&v65);
    a5[1].m128i_i64[0] = v66;
    if ( !v24 )
      return 1;
  }
  v25 = 8LL * *(unsigned int *)(a2 + 16);
  v26 = v25 + 104;
  v27 = (unsigned __int16 **)(a2 + v25 + 104 + v25);
  v28 = (unsigned __int16 **)(v26 + a2);
  v63 = v27;
  if ( v27 != v28 )
  {
    for ( j = v28; v63 != j; ++j )
    {
      v29 = *j;
      if ( *j )
      {
        v30 = v29 + 32;
        ptr = v71;
        v70 = 0x800000000LL;
        v33 = *v29;
        v31 = v29 + 40;
        v32 = *((unsigned int *)v29 + 1);
        LOWORD(v33) = v33 & 0x1FF;
        if ( (_WORD)v33 == 24 )
          v31 = v30;
        v57 = &v31[4 * v32];
        if ( v31 != v57 )
        {
          for ( k = v31; ; v31 = k )
          {
            v45 = *(_QWORD *)(a1 + 8);
            v41 = *(_QWORD *)v31 & 0xFFFFFFFFFFFFFFF8LL;
            v40 = v41;
            v46 = *(unsigned int *)(a1 + 24);
            if ( (_DWORD)v46 )
            {
              v35 = (v46 - 1) & (((unsigned int)v41 >> 9) ^ ((unsigned int)v41 >> 4));
              v36 = (__int64 *)(v45 + 16LL * v35);
              v37 = *v36;
              if ( v41 == *v36 )
                goto LABEL_23;
              v53 = 1;
              if ( v37 != -4096 )
                break;
            }
LABEL_31:
            sub_AEAAD0(
              &v68,
              (_QWORD *)(v45 + 16LL * (unsigned int)v46),
              (_QWORD *)(v45 + 16LL * (unsigned int)v46),
              a1 + 8,
              1);
            v38 = v68.m128_u64[0];
LABEL_24:
            v39 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
            sub_AEAAD0(&v68, v39, v39, a1 + 8, 1);
            if ( v38 != v68.m128_u64[0] )
            {
              v40 = *(_QWORD *)(v38 + 8);
              v41 = v40;
            }
            v42 = v41 | (*(_BYTE *)(v40 + 29) >> 5) & 3;
            v67 = v42;
            v33 = (unsigned int)v70;
            v43 = (unsigned int)v70 + 1LL;
            if ( v43 > HIDWORD(v70) )
            {
              v64 = v42;
              sub_2237220(&ptr, v71, v43, 8);
              v33 = (unsigned int)v70;
              v42 = v64;
            }
            v32 = (__int64)ptr;
            *((_QWORD *)ptr + v33) = v42;
            k += 4;
            v44 = (unsigned int)(v70 + 1);
            LODWORD(v70) = v70 + 1;
            if ( v57 == k )
            {
              v47 = ptr;
              v48 = (char *)ptr + 8 * v44;
              goto LABEL_33;
            }
          }
          while ( 1 )
          {
            v54 = v53 + 1;
            v35 = (v46 - 1) & (v53 + v35);
            v36 = (__int64 *)(v45 + 16LL * v35);
            if ( v41 == *v36 )
              break;
            if ( *v36 == -4096 )
              goto LABEL_31;
            v53 = v54;
          }
LABEL_23:
          sub_AEAAD0(&v68, v36, (_QWORD *)(16 * v46 + v45), a1 + 8, 1);
          v38 = v68.m128_u64[0];
          goto LABEL_24;
        }
        v47 = v71;
        v48 = v71;
LABEL_33:
        v49 = sub_15AB9E0(a4, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v32, v33, v20, v21);
        v51 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v49, v50, a5, 1, v47, (__int64)v48, 0, 0);
        v52 = *(unsigned int *)(a6 + 8);
        if ( v52 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
        {
          v58 = v51;
          sub_2237220(a6, a6 + 16, v52 + 1, 8);
          v52 = *(unsigned int *)(a6 + 8);
          v51 = v58;
        }
        *(_QWORD *)(*(_QWORD *)a6 + 8 * v52) = v51;
        ++*(_DWORD *)(a6 + 8);
        if ( ptr != v71 )
          free(ptr);
      }
      else
      {
        v55 = *(unsigned int *)(a6 + 8);
        if ( v55 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
        {
          sub_2237220(a6, a6 + 16, v55 + 1, 8);
          v55 = *(unsigned int *)(a6 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a6 + 8 * v55) = 0;
        ++*(_DWORD *)(a6 + 8);
      }
    }
  }
  return 0;
}
