__int64 __fastcall sub_EDF20(__int64 a1, __int64 a2, __int64 a3, __m128i *a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  int v10; // eax
  unsigned int v11; // edx
  __int8 v12; // dl
  unsigned int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rax
  void *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  size_t v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rbx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rbx
  unsigned __int64 v40; // r12
  const void *v41; // r15
  void *v42; // rax
  int v43; // eax
  __int64 *v46; // [rsp+38h] [rbp-120h]
  int v48; // [rsp+48h] [rbp-110h]
  unsigned __int8 v49; // [rsp+4Dh] [rbp-10Bh]
  char v50; // [rsp+4Eh] [rbp-10Ah]
  unsigned __int8 v51; // [rsp+4Fh] [rbp-109h]
  __int64 v52; // [rsp+50h] [rbp-108h] BYREF
  __int128 v53; // [rsp+58h] [rbp-100h]
  _QWORD v54[2]; // [rsp+70h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+80h] [rbp-D8h] BYREF
  void *src; // [rsp+90h] [rbp-C8h]
  size_t n[2]; // [rsp+98h] [rbp-C0h]
  __int64 v58; // [rsp+A8h] [rbp-B0h]
  __int64 v59; // [rsp+B0h] [rbp-A8h]
  int v60; // [rsp+B8h] [rbp-A0h]
  _BYTE v61[16]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-88h]
  __int64 v63; // [rsp+D8h] [rbp-80h]
  void *v64; // [rsp+E0h] [rbp-78h]
  __m128i v65; // [rsp+E8h] [rbp-70h] BYREF
  int v66; // [rsp+F8h] [rbp-60h]
  int v67; // [rsp+108h] [rbp-50h]
  unsigned __int64 v68; // [rsp+118h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v7 = sub_120380(a3, 0);
  if ( !v7 )
  {
    if ( !under_debugger )
      sub_383060(52005);
LABEL_71:
    BUG();
  }
  *(_QWORD *)a1 = a2;
  v8 = *(_QWORD *)(v7 + 72);
  v48 = *(_DWORD *)(v8 + 280) & 0x100;
  if ( v48 )
    return 0;
  v10 = *(_QWORD *)(v8 + 32);
  if ( *(_DWORD *)(a1 + 348) <= v10 )
  {
    v10 = *(_DWORD *)(a1 + 348);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 20) & 0xFFFFFFF0;
    if ( v11 != 64 && v11 != 208 )
      sub_E3A20();
  }
  *(_DWORD *)(a1 + 348) = v10;
  v49 = sub_EB240((_QWORD *)a1, a4, a3, a5, (_QWORD *)(*(_QWORD *)(v8 + 24) + 80LL * (v10 - 1)));
  if ( !v49 )
    return 0;
  v12 = a4[5].m128i_i8[8];
  v13 = v12 & 0xF0;
  if ( (v12 & 0xF0) == 0xC0 )
    v13 = a4[1].m128i_u32[3];
  if ( v13 <= 0x10 )
    v13 = getinf();
  if ( v13 - 208 > 0x2F && !(unsigned __int8)calc_arglocs() )
    return 0;
  v14 = *(_QWORD *)(v8 + 32);
  v15 = v14 - 1;
  if ( (int)v14 - 1 < 0 )
  {
    v17 = (int)v14;
  }
  else
  {
    v16 = *(_QWORD *)(v8 + 24) + 80LL * v15;
    while ( 1 )
    {
      if ( *(_DWORD *)(v16 + 56) != 1 )
      {
        v17 = (int)(v15 + 1);
        goto LABEL_20;
      }
      if ( *(_QWORD *)(v16 + 64) < a4[3].m128i_i64[1] )
        break;
      --v15;
      v16 -= 80;
      if ( v15 == -1 )
      {
        v17 = 0;
        goto LABEL_62;
      }
    }
    v17 = (int)(v15 + 1);
  }
LABEL_20:
  v51 = 0;
  if ( v17 < v14 )
  {
LABEL_62:
    sub_82440((__int64 *)(v8 + 24), v17);
    v14 = *(_QWORD *)(v8 + 32);
    v51 = v49;
  }
  v18 = *(int *)(a1 + 348);
  v19 = *(_DWORD *)(a1 + 348);
  if ( v14 < v18 )
  {
    if ( !under_debugger )
      sub_383060(52680);
    goto LABEL_71;
  }
  v52 = 0;
  v53 = 0;
  if ( v18 >= a4->m128i_i64[1] )
  {
    v36 = 0;
  }
  else
  {
    v50 = 0;
    v46 = (__int64 *)(v8 + 24);
    do
    {
      v26 = a4->m128i_i64[0] + 80 * v18;
      v54[1] = 0;
      v54[0] = 0xFFFFFFFF00000000LL;
      src = nullptr;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      *(_OWORD *)n = 0;
      v27 = sub_E7B70(a1, (__int64)v54, v19, v46, v26, a3);
      if ( v27 == -1 )
      {
        cleanup_argloc();
        if ( src )
        {
          n[0] = 0;
          qfree((__int64)src);
        }
        clear_tinfo_t();
        sub_11CDA0(v54);
        v49 = v51;
        goto LABEL_40;
      }
      v50 |= v27 & 1;
      sub_123A40(v61);
      v63 = 0;
      v62 = si128.m128i_i64[0];
      copy_tinfo_t();
      v30 = n[0];
      v64 = nullptr;
      v65 = 0;
      if ( n[0] )
      {
        v64 = (void *)qalloc_or_throw(n[0], (__int64)&si128.m128i_i64[1], v28, v29);
        v65.m128i_i64[1] = v30;
        memcpy(v64, src, v30);
        v65.m128i_i64[0] = v30;
      }
      v66 = 0;
      copy_argloc();
      v20 = v53;
      v21 = v52;
      v67 = v60;
      if ( *((_QWORD *)&v53 + 1) < (unsigned __int64)(v53 + 1) )
      {
        v52 = qvector_reserve((__int64)&v52, v52, v53 + 1, 80);
        v20 = v53;
        v21 = v52;
      }
      v22 = v21 + 80 * v20;
      sub_123A40(v22);
      v23 = v62;
      *(_QWORD *)(v22 + 24) = 0;
      *(_QWORD *)(v22 + 16) = v23;
      copy_tinfo_t();
      *(_DWORD *)(v22 + 56) = 0;
      v24 = v64;
      v25 = _mm_loadu_si128(&v65);
      v64 = nullptr;
      *(_QWORD *)(v22 + 32) = v24;
      *(__m128i *)(v22 + 40) = v25;
      v65 = 0;
      copy_argloc();
      *(_QWORD *)&v53 = v53 + 1;
      *(_DWORD *)(v22 + 72) = v67;
      cleanup_argloc();
      if ( v64 )
      {
        v65.m128i_i64[0] = 0;
        qfree((__int64)v64);
      }
      clear_tinfo_t();
      sub_11CDA0(v61);
      cleanup_argloc();
      if ( src )
      {
        n[0] = 0;
        qfree((__int64)src);
      }
      ++v19;
      clear_tinfo_t();
      sub_11CDA0(v54);
      v18 = v19;
    }
    while ( (unsigned __int64)v19 < a4->m128i_i64[1] );
    v36 = v53;
    v19 = *(_DWORD *)(a1 + 348);
    if ( v50 )
      goto LABEL_51;
    v14 = *(_QWORD *)(v8 + 32);
    v18 = v19 + (int)v53;
  }
  if ( v18 < v14 )
  {
    v46 = (__int64 *)(v8 + 24);
LABEL_51:
    sub_82440(v46, v36 + v19);
    if ( (_QWORD)v53 )
    {
      v37 = 0;
      do
      {
        v38 = v52 + 80 * v37;
        v39 = *(_QWORD *)(v8 + 24) + 80LL * (*(_DWORD *)(a1 + 348) + v48);
        sub_125180(v39);
        *(_QWORD *)(v39 + 16) = *(_QWORD *)(v38 + 16);
        copy_tinfo_t();
        if ( v39 + 32 != v38 + 32 )
        {
          v40 = *(_QWORD *)(v38 + 40);
          if ( v40 < 2 )
          {
            *(_QWORD *)(v39 + 40) = 0;
          }
          else
          {
            v41 = *(const void **)(v38 + 32);
            v42 = *(void **)(v39 + 32);
            if ( *(_QWORD *)(v39 + 48) < v40 )
            {
              v42 = (void *)qvector_reserve(v39 + 32, *(_QWORD *)(v39 + 32), *(_QWORD *)(v38 + 40), 1);
              *(_QWORD *)(v39 + 32) = v42;
            }
            *(_QWORD *)(v39 + 40) = v40;
            memmove(v42, v41, v40 - 1);
            *(_BYTE *)(*(_QWORD *)(v39 + 32) + v40 - 1) = 0;
          }
        }
        copy_argloc();
        ++v48;
        *(_DWORD *)(v39 + 72) = *(_DWORD *)(v38 + 72);
        v37 = v48;
      }
      while ( v48 < (unsigned __int64)v53 );
    }
  }
  *(_DWORD *)(v8 + 280) |= 0x100u;
  v43 = *(_DWORD *)(a2 + 24);
  BYTE1(v43) &= ~2u;
  LOBYTE(v43) = v43 | 0x80;
  *(_DWORD *)(a2 + 24) = v43;
LABEL_40:
  v31 = v52;
  if ( v52 )
  {
    v32 = v53;
    if ( (_QWORD)v53 )
    {
      v33 = 0;
      do
      {
        v34 = v31 + 80 * v33;
        cleanup_argloc();
        v35 = *(_QWORD *)(v34 + 32);
        if ( v35 )
        {
          *(_QWORD *)(v34 + 40) = 0;
          qfree(v35);
        }
        ++v33;
        clear_tinfo_t();
        sub_11CDA0(v34);
        v31 = v52;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v53 = 0;
    qfree(v31);
  }
  return v49;
}
