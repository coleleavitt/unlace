unsigned __int64 __fastcall sub_504CF0(_QWORD *a1, __int64 a2, char **a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  char *v9; // rax
  unsigned __int64 v10; // r13
  __int64 *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // r9
  size_t v14; // r8
  char *v15; // rax
  size_t v16; // rdx
  char *v17; // rsi
  char *v18; // rdx
  unsigned __int8 v20; // dl
  unsigned __int64 v21; // r13
  unsigned int v22; // eax
  __int64 v23; // r10
  size_t v24; // r9
  char *v25; // rax
  size_t v26; // rdx
  char *v27; // rsi
  char *v28; // rdx
  __int64 *v29; // r13
  unsigned __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // r9
  size_t v33; // r8
  char *v34; // rax
  size_t v35; // rdx
  char *v36; // rsi
  char *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  char *v41; // rbx
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __int64 v46; // rcx
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  void *v49; // rdi
  void *v50; // rdi
  __int64 v52; // rax
  bool v53; // dl
  char *v54; // rax
  bool v55; // dl
  char *v56; // rax
  __int64 v57; // [rsp+0h] [rbp-78h]
  size_t v58; // [rsp+0h] [rbp-78h]
  size_t v59; // [rsp+0h] [rbp-78h]
  size_t v60; // [rsp+0h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-68h]
  __int64 v63; // [rsp+10h] [rbp-68h]
  __int64 v64; // [rsp+10h] [rbp-68h]
  size_t v65; // [rsp+18h] [rbp-60h]
  size_t v66; // [rsp+18h] [rbp-60h]
  size_t v67; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v69; // [rsp+28h] [rbp-50h]
  unsigned __int64 v70; // [rsp+38h] [rbp-40h]

  v70 = __readfsqword(0x28u);
LABEL_2:
  while ( *a3 < a3[1] )
  {
    while ( 1 )
    {
      v5 = a1[12];
      v6 = a1[13];
      if ( v6 < v5 + 1 )
      {
        v38 = qvector_reserve(a1 + 11, 0, v5 + 1, 88);
        v39 = a1[12];
        v7 = v38;
        v40 = a1[13];
        a1[13] = v6;
        v41 = (char *)a1[11];
        v57 = v40;
        v42 = v39 - 1;
        if ( v42 >= 0 )
        {
          v43 = v7;
          do
          {
            *(_BYTE *)v43 = *v41;
            v44 = *((_QWORD *)v41 + 1);
            v45 = _mm_loadu_si128((const __m128i *)v41 + 1);
            *((_QWORD *)v41 + 1) = 0;
            *(_QWORD *)(v43 + 8) = v44;
            *(__m128i *)(v43 + 16) = v45;
            v46 = *((_QWORD *)v41 + 4);
            v47 = _mm_loadu_si128((const __m128i *)(v41 + 40));
            *((_OWORD *)v41 + 1) = 0;
            *(_QWORD *)(v43 + 32) = v46;
            *(__m128i *)(v43 + 40) = v47;
            LODWORD(v46) = *((_DWORD *)v41 + 14);
            v48 = _mm_loadu_si128((const __m128i *)v41 + 4);
            *((_QWORD *)v41 + 4) = 0;
            *((_QWORD *)v41 + 6) = 0;
            *(_DWORD *)(v43 + 56) = v46;
            LOWORD(v46) = *((_WORD *)v41 + 40);
            *(__m128i *)(v43 + 64) = v48;
            *(_WORD *)(v43 + 80) = v46;
            v49 = *((void **)v41 + 4);
            if ( v49 )
            {
              *((_QWORD *)v41 + 5) = 0;
              qfree(v49);
            }
            v50 = *((void **)v41 + 1);
            if ( v50 )
            {
              *((_QWORD *)v41 + 2) = 0;
              qfree(v50);
            }
            v41 += 88;
            v43 += 88;
          }
          while ( v42-- != 0 );
          v41 = (char *)a1[11];
        }
        qfree(v41);
        a1[11] = v7;
        a1[13] = v57;
        v5 = a1[12];
      }
      else
      {
        v7 = a1[11];
      }
      v8 = v7 + 88 * v5;
      *(_BYTE *)v8 = 6;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 40) = 0;
      ++a1[12];
      v9 = *a3;
      if ( *a3 >= a3[1] )
      {
        *(_BYTE *)v8 = 0;
        goto LABEL_7;
      }
      v20 = *v9;
      *a3 = v9 + 1;
      *(_BYTE *)v8 = v20;
      if ( v20 > 4u )
        break;
      if ( v20 > 2u )
      {
        *(_DWORD *)(v8 + 56) = unpack_dd(a3);
        *(_QWORD *)(v8 + 64) = unpack_dq(a3);
        *(_QWORD *)(v8 + 72) = unpack_dq(a3);
        goto LABEL_2;
      }
      if ( v20 == 2 )
      {
        v21 = (unsigned __int64)a3[1];
        ptr = nullptr;
        v69 = 0;
        v22 = unpack_dd(a3);
        if ( v22 )
        {
          v23 = v69;
          v24 = v22;
          v25 = (char *)ptr;
          v26 = v69 + v24;
          if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)v69 + v24 )
          {
            v65 = v24;
            v62 = v69;
            v58 = v69 + v24;
            v25 = (char *)qvector_reserve(&ptr, ptr, v26, 1);
            v24 = v65;
            v23 = v62;
            ptr = v25;
            v26 = v58;
          }
          v27 = *a3;
          *(_QWORD *)&v69 = v26;
          v28 = &v27[v24];
          if ( !__CFADD__(v24, v27) && v21 >= (unsigned __int64)v28 )
          {
            *a3 = v28;
            memcpy(&v25[v23], v27, v24);
          }
        }
        sub_503BD0(a2, (__int64 *)(v8 + 8), (char **)&ptr);
        if ( ptr )
        {
          *(_QWORD *)&v69 = 0;
          qfree(ptr);
        }
        v29 = (__int64 *)(v8 + 32);
        v30 = (unsigned __int64)a3[1];
        ptr = nullptr;
        v69 = 0;
        v31 = unpack_dd(a3);
        if ( v31 )
        {
          v32 = v69;
          v33 = v31;
          v34 = (char *)ptr;
          v35 = v69 + v33;
          if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)v69 + v33 )
          {
            v67 = v33;
            v64 = v69;
            v60 = v69 + v33;
            v34 = (char *)qvector_reserve(&ptr, ptr, v35, 1);
            v33 = v67;
            v32 = v64;
            ptr = v34;
            v35 = v60;
          }
          v36 = *a3;
          *(_QWORD *)&v69 = v35;
          v37 = &v36[v33];
          if ( !__CFADD__(v33, v36) && v30 >= (unsigned __int64)v37 )
          {
            *a3 = v37;
            memcpy(&v34[v32], v36, v33);
          }
        }
        sub_503BD0(a2, v29, (char **)&ptr);
        if ( ptr )
        {
          *(_QWORD *)&v69 = 0;
          qfree(ptr);
        }
        goto LABEL_2;
      }
LABEL_7:
      v10 = (unsigned __int64)a3[1];
      v11 = (__int64 *)(v8 + 8);
      ptr = nullptr;
      v69 = 0;
      v12 = unpack_dd(a3);
      if ( v12 )
      {
        v13 = v69;
        v14 = v12;
        v15 = (char *)ptr;
        v16 = v69 + v14;
        if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)v69 + v14 )
        {
          v66 = v14;
          v63 = v69;
          v59 = v69 + v14;
          v15 = (char *)qvector_reserve(&ptr, ptr, v16, 1);
          v14 = v66;
          v13 = v63;
          ptr = v15;
          v16 = v59;
        }
        v17 = *a3;
        *(_QWORD *)&v69 = v16;
        v18 = &v17[v14];
        if ( !__CFADD__(v14, v17) && v10 >= (unsigned __int64)v18 )
        {
          *a3 = v18;
          memcpy(&v15[v13], v17, v14);
        }
      }
      sub_503BD0(a2, v11, (char **)&ptr);
      if ( !ptr )
        goto LABEL_2;
      *(_QWORD *)&v69 = 0;
      qfree(ptr);
      if ( *a3 >= a3[1] )
        return v70 - __readfsqword(0x28u);
    }
    if ( v20 == 5 )
    {
      v52 = unpack_dq(a3);
      v53 = 0;
      *(_QWORD *)(v8 + 72) = v52;
      v54 = *a3;
      if ( *a3 < a3[1] )
        v53 = *v54++ != 0;
      *a3 = v54;
      *(_BYTE *)(v8 + 80) = v53;
      v55 = 0;
      v56 = *a3;
      if ( *a3 < a3[1] )
        v55 = *v56++ != 0;
      *a3 = v56;
      *(_BYTE *)(v8 + 81) = v55;
    }
  }
  return v70 - __readfsqword(0x28u);
}
