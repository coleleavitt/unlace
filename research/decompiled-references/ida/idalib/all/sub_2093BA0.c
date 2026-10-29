void __fastcall sub_2093BA0(__int64 *a1, __int64 a2)
{
  int v2; // r14d
  int v3; // r15d
  size_t v4; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  int v8; // edx
  int v9; // eax
  __int64 v10; // rax
  const char *v11; // rdx
  size_t v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  _BYTE *v15; // rax
  __int64 v16; // rdx
  __m128i v17; // rax
  char v18; // dl
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  __m128i v22; // xmm1
  __int64 v23; // rax
  _QWORD *i; // r14
  _BYTE *v25; // r15
  __m128i *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  bool v31; // zf
  char *v32; // rax
  __int64 *v33; // rdi
  __int64 v34; // rax
  int v35; // esi
  char *v36; // rcx
  __int64 v37; // rdx
  char *v38; // rax
  unsigned __int64 v39; // rdx
  const __m128i *v40; // rsi
  __int64 v41; // [rsp+8h] [rbp-250h]
  __int64 v42; // [rsp+10h] [rbp-248h]
  const char *v43; // [rsp+18h] [rbp-240h]
  __m128i v44; // [rsp+20h] [rbp-238h] BYREF
  __int128 v45; // [rsp+50h] [rbp-208h]
  int v46; // [rsp+60h] [rbp-1F8h] BYREF
  const char *v47; // [rsp+68h] [rbp-1F0h]
  size_t v48; // [rsp+70h] [rbp-1E8h]
  __int64 v49; // [rsp+78h] [rbp-1E0h]
  __int64 v50; // [rsp+80h] [rbp-1D8h]
  _BYTE *v51; // [rsp+88h] [rbp-1D0h]
  __int64 v52; // [rsp+90h] [rbp-1C8h]
  __int64 v53; // [rsp+98h] [rbp-1C0h]
  __int64 v54; // [rsp+A0h] [rbp-1B8h]
  int v55; // [rsp+A8h] [rbp-1B0h]
  int v56; // [rsp+ACh] [rbp-1ACh]
  char v57; // [rsp+B0h] [rbp-1A8h]
  __m128i v58; // [rsp+B8h] [rbp-1A0h]
  void *ptr; // [rsp+C8h] [rbp-190h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-188h]
  _BYTE v61[384]; // [rsp+D8h] [rbp-180h] BYREF

  v4 = 0;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = *a1;
  if ( v6 )
    v4 = strlen(*(const char **)(a2 + 40));
  if ( (unsigned __int8)sub_21E88D0(v7, v6, v4) )
  {
    v8 = 0;
    v47 = nullptr;
    v48 = 0;
    ptr = v61;
    v60 = 0x500000000LL;
    v9 = *(_DWORD *)(a2 + 8);
    v49 = 0;
    v10 = (unsigned int)(v9 - 13);
    v50 = 0;
    v51 = nullptr;
    v52 = 0;
    v57 = 0;
    v58.m128i_i8[8] = 0;
    if ( (unsigned int)v10 <= 8 )
      v8 = dword_26EA300[v10];
    v46 = v8;
    v11 = *(const char **)(a2 + 40);
    v12 = 0;
    if ( v11 )
    {
      v43 = *(const char **)(a2 + 40);
      v12 = strlen(v43);
      v11 = v43;
    }
    v47 = v11;
    v13 = *(_QWORD *)(a2 + 16);
    v48 = v12;
    v14 = *(_QWORD *)(a2 + 56);
    v49 = *(_QWORD *)(a2 + 48);
    v50 = v14;
    v15 = (_BYTE *)sub_20CC3B0(v13);
    if ( v16 && *v15 == 1 )
    {
      --v16;
      ++v15;
    }
    v51 = v15;
    v17.m128i_i64[0] = *(_QWORD *)(a2 + 24);
    v52 = v16;
    v17.m128i_i64[1] = *(_QWORD *)(a2 + 32);
    v44 = v17;
    v18 = 0;
    if ( v17.m128i_i64[0] )
    {
      v19 = sub_208C050(v44.m128i_i64);
      v3 = v44.m128i_i32[2];
      v2 = v44.m128i_i32[3];
      v42 = v19;
      v41 = v20;
      v18 = 1;
    }
    v21 = *(_QWORD **)(a2 + 80);
    v56 = v2;
    v22 = _mm_loadu_si128((const __m128i *)(a2 + 64));
    v55 = v3;
    v53 = v42;
    v57 = v18;
    v54 = v41;
    v23 = *(unsigned int *)(a2 + 88);
    v58 = v22;
    for ( i = &v21[10 * v23]; i != v21; v38[56] = 0 )
    {
      while ( 1 )
      {
        v25 = ptr;
        v26 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)(unsigned int)v60);
        if ( (unsigned int)v60 >= (unsigned __int64)HIDWORD(v60) )
        {
          v39 = (unsigned int)v60 + 1LL;
          v45 = 0;
          v40 = &v44;
          memset(&v44, 0, 48);
          BYTE8(v45) = 0;
          if ( HIDWORD(v60) < v39 )
          {
            if ( ptr > &v44 || v26 <= &v44 )
            {
              sub_2237220(&ptr, v61, v39, 64);
              v40 = &v44;
              v26 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)(unsigned int)v60);
            }
            else
            {
              sub_2237220(&ptr, v61, v39, 64);
              v40 = (const __m128i *)((char *)ptr + (char *)&v44 - v25);
              v26 = (__m128i *)((char *)ptr + 64 * (unsigned __int64)(unsigned int)v60);
            }
          }
          *v26 = _mm_loadu_si128(v40);
          v26[1] = _mm_loadu_si128(v40 + 1);
          v26[2] = _mm_loadu_si128(v40 + 2);
          v26[3] = _mm_loadu_si128(v40 + 3);
          v27 = (unsigned int)(v60 + 1);
          LODWORD(v60) = v60 + 1;
        }
        else
        {
          v26[3] = 0;
          v26[2] = 0;
          v26->m128i_i64[0] = 0;
          v26->m128i_i64[1] = 0;
          v26[1].m128i_i64[0] = 0;
          v26[1].m128i_i64[1] = 0;
          v26[3].m128i_i8[8] = 0;
          v27 = (unsigned int)(v60 + 1);
          LODWORD(v60) = v60 + 1;
        }
        v28 = v21[1];
        v29 = (char *)ptr + 64 * v27 - 64;
        *v29 = *v21;
        v29[1] = v28;
        v30 = v21[5];
        v31 = v21[8] == 0;
        v32 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v60 - 64;
        *((_QWORD *)v32 + 2) = v21[4];
        *((_QWORD *)v32 + 3) = v30;
        if ( v31 )
          break;
        v33 = v21 + 8;
        v21 += 10;
        v34 = sub_208C050(v33);
        LODWORD(v33) = *((_DWORD *)v21 - 2);
        v35 = *((_DWORD *)v21 - 1);
        v36 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v60 - 64;
        *((_QWORD *)v36 + 4) = v34;
        *((_QWORD *)v36 + 5) = v37;
        *((_DWORD *)v36 + 12) = (_DWORD)v33;
        *((_DWORD *)v36 + 13) = v35;
        v36[56] = 1;
        if ( i == v21 )
          goto LABEL_19;
      }
      v21 += 10;
      v38 = (char *)ptr + 64 * (unsigned __int64)(unsigned int)v60 - 64;
      *((_QWORD *)v38 + 4) = 0;
      *((_QWORD *)v38 + 5) = 0;
      *((_DWORD *)v38 + 12) = 0;
      *((_DWORD *)v38 + 13) = 0;
    }
LABEL_19:
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(*a1 + 24) + 16LL))(*(_QWORD *)(*a1 + 24), &v46);
    if ( ptr != v61 )
      free(ptr);
  }
}
