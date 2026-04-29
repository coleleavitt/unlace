__int64 __fastcall sub_138470(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 *a4, __int64 *a5)
{
  unsigned __int64 **v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 *v10; // r13
  _QWORD *v11; // r13
  __int64 *v12; // rdi
  size_t v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r14d
  __int64 (__fastcall *v34)(__int64); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // r12
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rdi
  const void *v44; // rsi
  __int64 *v45; // r12
  __int64 v46; // rax
  __int64 *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rsi
  __m128i v50; // xmm0
  __int64 v51; // rax
  __m128i v52; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+10h] [rbp-C0h]
  __int64 *v54; // [rsp+18h] [rbp-B8h]
  size_t n; // [rsp+20h] [rbp-B0h]
  int v56; // [rsp+2Ch] [rbp-A4h]
  __int64 *v57; // [rsp+30h] [rbp-A0h]
  _QWORD *v58; // [rsp+38h] [rbp-98h]
  __m128i v59; // [rsp+40h] [rbp-90h] BYREF
  __m128i v60; // [rsp+50h] [rbp-80h] BYREF
  _BYTE v61[24]; // [rsp+60h] [rbp-70h] BYREF
  __int128 v62; // [rsp+78h] [rbp-58h]
  unsigned __int64 v63; // [rsp+88h] [rbp-48h]
  char v64; // [rsp+90h] [rbp-40h]
  unsigned __int64 v65; // [rsp+98h] [rbp-38h]

  v58 = a3;
  v54 = a4;
  v65 = __readfsqword(0x28u);
  v53 = sub_1108E0((__int64)a1, 0);
  if ( !v53 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    BUG();
  }
  v8 = (unsigned __int64 **)v53;
  v9 = v58;
  ++*(_DWORD *)(v53 + 24);
  v10 = *v8;
  BYTE8(v62) = 1;
  *(_QWORD *)&v62 = (int)sub_64960(v9, 0);
  memset(v61, 0, sizeof(v61));
  v63 = 0xFFFFFFFF00000001LL;
  v64 = 1;
  v57 = (__int64 *)v61;
  v11 = sub_104DF0(v10, (__int64)v61);
  if ( *(_QWORD *)v61 )
  {
    *(_QWORD *)&v61[8] = 0;
    qfree(*(_QWORD *)v61);
  }
  if ( v11 )
  {
    v12 = v58;
    v56 = sub_64B20((__int64)v58);
    v16 = *(_DWORD *)(a1[5] + 144);
    if ( a2[1] )
    {
      v59.m128i_i32[0] = 0;
      v17 = v16;
      v18 = 0;
      n = v16;
      do
      {
        v19 = *(unsigned int *)(*a2 + 4 * v18);
        if ( (_DWORD)v19 )
        {
          v20 = a1[5];
          if ( (unsigned int)v19 >= *(_DWORD *)(v20 + 64) )
            sub_1346B0(v12, v17, v20, v13, v14, v15, v52.m128i_i64[0]);
          v21 = *(_QWORD *)(*(_QWORD *)(v20 + 528) + 8 * v19);
          v22 = sub_129150(v21, v58, *(_QWORD *)(v21 + 56), 0, nullptr, 0, 0x101u);
          v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v22);
          if ( !v22 )
            goto LABEL_27;
          if ( *(_DWORD *)v22 != 4 )
            goto LABEL_27;
          if ( *(_BYTE *)(v22 + 32) != 5 )
            goto LABEL_27;
          v13 = n;
          if ( *(_QWORD *)(*(_QWORD *)(v22 + 40) + 8LL) >= (signed __int64)n || *(_DWORD *)(v22 + 36) < v56 )
            goto LABEL_27;
          v29 = a5[1];
          v17 = *a5;
          *(__m128i *)v61 = v28;
          v23 = a5[2];
          v12 = (__int64 *)(v29 + 1);
          if ( (unsigned __int64)v57 < v17 || (v13 = v17 + 16 * v23, (unsigned __int64)v57 >= v13) )
          {
            if ( v23 < (unsigned __int64)v12 )
            {
              v12 = a5;
              v24 = qvector_reserve(a5, v17, v29 + 1, 16);
              *a5 = v24;
              v17 = v24;
              v29 = a5[1];
            }
            *(__m128i *)(v17 + 16 * v29) = _mm_load_si128((const __m128i *)v61);
          }
          else
          {
            if ( v23 < (unsigned __int64)v12 )
            {
              v12 = a5;
              v52 = v28;
              v27 = qvector_reserve(a5, v17, v29 + 1, 16);
              *a5 = v27;
              v17 = v27;
              v28 = _mm_load_si128(&v52);
              v29 = a5[1];
            }
            *(__m128i *)(v17 + 16 * v29) = v28;
          }
          ++a5[1];
        }
        v18 = ++v59.m128i_i32[0];
      }
      while ( (unsigned __int64)v59.m128i_i32[0] < a2[1] );
    }
    if ( v11[1] )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        v32 = 4 * v31;
        v33 = *(_DWORD *)(*v11 + 4 * v31);
        v34 = *(__int64 (__fastcall **)(__int64))(*a1 + 56);
        if ( v34 == sub_101AA0 )
        {
          v35 = *(_DWORD *)(a1[5] + 64);
        }
        else
        {
          v59.m128i_i64[0] = v32;
          v12 = a1;
          v35 = v34((__int64)a1);
          v32 = v59.m128i_i64[0];
        }
        if ( v33 != v35 - 1 )
        {
          v36 = a1[5];
          v37 = *(unsigned int *)(*v11 + v32);
          if ( (unsigned int)v37 >= *(_DWORD *)(v36 + 64) )
            sub_1346B0(v12, sub_101AA0, v32, v36, v14, v15, v52.m128i_i64[0]);
          v38 = v58;
          v39 = *(_QWORD *)(*(_QWORD *)(v36 + 528) + 8 * v37);
          sub_64000(v57, (__int64)v58);
          v40 = v38[3];
          *(_QWORD *)&v61[16] = 0;
          v62 = 0;
          if ( v40 )
          {
            v59.m128i_i64[0] = v40;
            n = 16 * v40;
            *(_QWORD *)&v61[16] = qalloc_or_throw(16 * v40);
            v44 = (const void *)v58[2];
            *((_QWORD *)&v62 + 1) = v59.m128i_i64[0];
            memcpy(*(void **)&v61[16], v44, n);
            *(_QWORD *)&v62 = v59.m128i_i64[0];
          }
          v41 = sub_A9D90(v39, v57, *(_QWORD *)(v39 + 48), 0, 1u);
          v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v41);
          if ( !v41
            || *(_DWORD *)v41 != 4
            || *(_BYTE *)(v41 + 32) != 1
            || *(_BYTE *)(v41 + 64) != 5
            || *(_DWORD *)(v41 + 36) < v56 )
          {
            if ( *(_QWORD *)&v61[16] )
            {
              *(_QWORD *)&v62 = 0;
              qfree(*(_QWORD *)&v61[16]);
            }
            qfree(*(_QWORD *)v61);
            goto LABEL_27;
          }
          v60 = v50;
          v49 = *v54;
          v42 = v54[2];
          v51 = v54[1];
          v43 = v51 + 1;
          if ( (unsigned __int64)&v60 < *v54 || (unsigned __int64)&v60 >= v49 + 16 * v42 )
          {
            if ( v42 < v43 )
            {
              v45 = v54;
              v46 = qvector_reserve(v54, v49, v51 + 1, 16);
              *v45 = v46;
              v49 = v46;
              v51 = v45[1];
            }
            *(__m128i *)(v49 + 16 * v51) = _mm_load_si128(&v60);
          }
          else
          {
            if ( v42 < v43 )
            {
              v47 = v54;
              v59 = v50;
              v48 = qvector_reserve(v54, v49, v51 + 1, 16);
              *v47 = v48;
              v49 = v48;
              v50 = _mm_load_si128(&v59);
              v51 = v47[1];
            }
            *(__m128i *)(v49 + 16 * v51) = v50;
          }
          ++v54[1];
          if ( *(_DWORD *)(v39 + 72) == 1 )
          {
            sub_93B40(v57);
            break;
          }
          if ( *(_QWORD *)&v61[16] )
          {
            *(_QWORD *)&v62 = 0;
            qfree(*(_QWORD *)&v61[16]);
          }
          v12 = *(__int64 **)v61;
          qfree(*(_QWORD *)v61);
        }
        v31 = ++v30;
      }
      while ( (unsigned __int64)v30 < v11[1] );
    }
    v25 = 1;
  }
  else
  {
LABEL_27:
    v25 = 0;
  }
  sub_104E10(v53);
  return v25;
}
