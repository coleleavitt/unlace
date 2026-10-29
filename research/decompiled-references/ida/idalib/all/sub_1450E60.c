void __fastcall sub_1450E60(__int64 a1, const __m128i *a2)
{
  char v3; // al
  __int64 v4; // r13
  __m128i *v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rax
  __m128i *v9; // r14
  unsigned __int64 v10; // rdx
  __m128i *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128i *v14; // rax
  int v15; // eax
  char *v16; // rdi
  _BYTE *v17; // rdx
  char *v18; // rdx
  void *v19; // rax
  unsigned __int64 v20; // rdx
  size_t v21; // r8
  char *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // rbx
  char *v28; // rax
  char *v29; // r10
  char *v30; // rdx
  __int64 v31; // rbx
  unsigned int v32; // ebp
  __int64 v33; // rax
  __int64 v34; // rdi
  __m128i *v35; // rax
  __m128i *v36; // roff
  __m128i *v37; // rax
  _DWORD *v38; // roff
  signed __int64 v39; // r14
  signed __int64 v40; // r14
  int v41; // [rsp+Ch] [rbp-19Ch]
  size_t v42; // [rsp+10h] [rbp-198h]
  size_t v43; // [rsp+10h] [rbp-198h]
  size_t v44; // [rsp+10h] [rbp-198h]
  size_t v45; // [rsp+10h] [rbp-198h]
  void *v46; // [rsp+18h] [rbp-190h]
  char v47; // [rsp+2Fh] [rbp-179h] BYREF
  __m128i v48; // [rsp+30h] [rbp-178h] BYREF
  __int64 v49; // [rsp+40h] [rbp-168h]
  _QWORD v50[2]; // [rsp+50h] [rbp-158h] BYREF
  int v51; // [rsp+60h] [rbp-148h]
  void *dest; // [rsp+A0h] [rbp-108h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-100h]
  _BYTE v54[72]; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v55; // [rsp+100h] [rbp-A8h]
  char v56; // [rsp+108h] [rbp-A0h]
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __int64 v58; // [rsp+118h] [rbp-90h]
  __m128i v59; // [rsp+120h] [rbp-88h] BYREF
  __int64 v60; // [rsp+130h] [rbp-78h]
  __m128i *v61; // [rsp+168h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 547);
  v4 = a2->m128i_u32[0];
  v55 = a1;
  v56 = v3;
  ptr = &v59;
  v58 = 0x300000000LL;
  v61 = (__m128i *)a2;
  if ( v3 )
  {
    v12 = a2[1].m128i_i64[0];
    LODWORD(v58) = 1;
    v59 = _mm_loadu_si128(a2);
    v60 = v12;
  }
  sub_14634E0(a1, a2);
  if ( a2[1].m128i_i16[0] != 22 )
    goto LABEL_15;
  v5 = v61;
  if ( v56 )
  {
    v13 = (unsigned int)v58 + 1LL;
    v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v58);
    if ( v13 > HIDWORD(v58) )
    {
      if ( ptr > v61 || v14 <= v61 )
      {
        sub_2237220(&ptr, &v59, v13, 24);
        v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v58);
      }
      else
      {
        v39 = (char *)v61 - (_BYTE *)ptr;
        sub_2237220(&ptr, &v59, v13, 24);
        v5 = (__m128i *)((char *)ptr + v39);
        v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v58);
      }
    }
    *v14 = _mm_loadu_si128(v5);
    v14[1].m128i_i64[0] = v5[1].m128i_i64[0];
    v5 = v61;
    LODWORD(v58) = v58 + 1;
  }
  sub_14634E0(v55, v5);
  v6 = a2[1].m128i_i16[0];
  if ( (unsigned __int16)(v6 - 14) > 1u && (unsigned __int16)(v6 - 17) > 2u )
  {
    sub_FC70B0((__int64)&dest, *(_QWORD *)(a1 + 48), v4, 1022);
    sub_AEA040((__int64)&dest);
    v7 = a2[1].m128i_i16[0];
    if ( (unsigned __int16)(v7 - 1) <= 1u || v7 == 23 )
      goto LABEL_22;
    while ( 1 )
    {
      sub_14634E0(a1, a2);
      v7 = a2[1].m128i_i16[0];
LABEL_22:
      if ( v7 == 23 )
        goto LABEL_23;
      if ( (a2[1].m128i_i8[2] & 1) != 0 || (unsigned __int16)(v7 - 1) <= 1u )
        goto LABEL_16;
    }
  }
  if ( (a2[1].m128i_i8[2] & 0x20) != 0 )
  {
    sub_FC70B0((__int64)&dest, *(_QWORD *)(a1 + 48), a2->m128i_i32[0], 29);
    sub_AEA040((__int64)&dest);
    sub_14634E0(a1, a2);
    if ( a2[1].m128i_i16[0] == 23 )
LABEL_23:
      sub_14634E0(a1, a2);
  }
  else
  {
    v8 = a2[1].m128i_i64[0];
    v9 = v61;
    v48 = _mm_loadu_si128(a2);
    v49 = v8;
    if ( v56 )
    {
      v10 = (unsigned int)v58 + 1LL;
      v11 = (__m128i *)((char *)ptr + 24 * (unsigned int)v58);
      if ( v10 > HIDWORD(v58) )
      {
        if ( ptr > v61 || v11 <= v61 )
        {
          sub_2237220(&ptr, &v59, v10, 24);
          v11 = (__m128i *)((char *)ptr + 24 * (unsigned int)v58);
        }
        else
        {
          v40 = (char *)v61 - (_BYTE *)ptr;
          sub_2237220(&ptr, &v59, v10, 24);
          v9 = (__m128i *)((char *)ptr + v40);
          v11 = (__m128i *)((char *)ptr + 24 * (unsigned int)v58);
        }
      }
      *v11 = _mm_loadu_si128(v9);
      v11[1].m128i_i64[0] = v9[1].m128i_i64[0];
      v9 = v61;
      LODWORD(v58) = v58 + 1;
    }
    sub_14634E0(v55, v9);
    if ( a2[1].m128i_i16[0] != 23 )
    {
LABEL_15:
      sub_FC70B0((__int64)&dest, *(_QWORD *)(a1 + 48), v4, 1022);
      sub_AEA040((__int64)&dest);
      goto LABEL_16;
    }
    if ( *(_BYTE *)(a1 + 547) )
    {
      v26 = (unsigned int)v58;
      v27 = 24LL * (unsigned int)v58;
      v28 = (char *)operator new[](v27);
      v29 = v28;
      v30 = &v28[v27];
      if ( v26 )
      {
        do
        {
          *(_DWORD *)v28 = 0;
          v28 += 24;
          *((_DWORD *)v28 - 5) = 0;
          *((_QWORD *)v28 - 2) = 0;
          *((_WORD *)v28 - 4) = 0;
          *((_WORD *)v28 - 3) = 0;
        }
        while ( v28 != v30 );
      }
      v31 = (unsigned int)v58;
      v32 = v58;
      v33 = 24LL * (unsigned int)v58;
      if ( (char *)ptr + 24 != (char *)ptr + v33 )
        v29 = (char *)memmove(v29, (char *)ptr + 24, v33 - 24);
      v34 = v55;
      v35 = (__m128i *)&v29[24 * v31 - 24];
      v36 = v61;
      *v35 = _mm_loadu_si128(v61);
      v35[1].m128i_i32[0] = v36[1].m128i_i32[0];
      sub_14368B0(v34, v29, v32, 1u, 1u, 1u);
      v37 = v61;
      v38 = ptr;
      *v61 = _mm_loadu_si128((const __m128i *)ptr);
      v37[1].m128i_i32[0] = v38[4];
    }
    else
    {
      v15 = a2->m128i_i32[0];
      v47 = 0;
      v16 = v54;
      v41 = v15;
      dest = v54;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      if ( v48.m128i_i32[1] )
      {
        v17 = v54;
        if ( v48.m128i_u32[1] > 0x40uLL )
        {
          sub_2236E10(&dest, v54, v48.m128i_u32[1], 1);
          v17 = dest;
          v16 = (char *)dest + si128.m128i_i64[0];
        }
        v18 = &v17[v48.m128i_u32[1]];
        if ( v16 != v18 )
          memset(v16, 0, v18 - v16);
        si128.m128i_i64[0] = v48.m128i_u32[1];
      }
      v19 = (void *)sub_145C740(a1, &v48, &dest, &v47);
      v21 = v20;
      if ( v47 )
      {
        sub_FC70B0((__int64)v50, *(_QWORD *)(a1 + 48), v4, 1022);
        sub_AEA040((__int64)v50);
      }
      else
      {
        v22 = (char *)dest;
        if ( v19 == dest )
        {
          v25 = si128.m128i_i64[0];
          if ( v20 != si128.m128i_i64[0] )
          {
            if ( v20 >= si128.m128i_i64[0] )
            {
              if ( v20 > si128.m128i_i64[1] )
              {
                v45 = v20;
                sub_2236E10(&dest, v54, v20, 1);
                v22 = (char *)dest;
                v21 = v45;
                v25 = si128.m128i_i64[0];
              }
              if ( &v22[v25] != &v22[v21] )
              {
                v44 = v21;
                memset(&v22[v25], 0, v21 - v25);
                v21 = v44;
              }
            }
            si128.m128i_i64[0] = v21;
          }
        }
        else
        {
          si128.m128i_i64[0] = 0;
          v23 = 0;
          if ( v21 > si128.m128i_i64[1] )
          {
            v46 = v19;
            v43 = v21;
            sub_2236E10(&dest, v54, v21, 1);
            v19 = v46;
            v21 = v43;
            v23 = si128.m128i_i64[0];
            v22 = (char *)dest + si128.m128i_i64[0];
          }
          if ( v21 )
          {
            v42 = v21;
            memcpy(v22, v19, v21);
            v23 = si128.m128i_i64[0];
            v21 = v42;
          }
          si128.m128i_i64[0] = v23 + v21;
        }
        sub_1450C50(&dest);
        v50[0] = 0;
        v50[1] = 0;
        v51 = 0;
        sub_145C860(a1, dest, si128.m128i_i64[0], v50, 0, 0);
        v24 = sub_13D4D60(v50[0], v4, v41, si128.m128i_u32[0], a1);
        sub_1437090(a1, v24, 0, 0);
        sub_1450BC0(a1, (v4 << 32) | 1);
        sub_14634E0(a1, a2);
      }
      if ( dest != v54 )
        free(dest);
    }
  }
LABEL_16:
  if ( ptr != &v59 )
    free(ptr);
}
