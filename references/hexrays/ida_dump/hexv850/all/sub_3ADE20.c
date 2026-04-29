unsigned __int64 __fastcall sub_3ADE20(__int64 *a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5, __m128 a6)
{
  __int64 v7; // rdi
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __m128i *v17; // r9
  __int64 *v18; // r8
  unsigned __int64 *v19; // rsi
  char v20; // dl
  unsigned __int64 v21; // rax
  __m128i *v22; // rcx
  unsigned __int64 v23; // r13
  unsigned __int64 *v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // r13
  int v30; // eax
  _BYTE *v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm1
  unsigned __int64 v34; // rcx
  int v35; // eax
  char v36; // al
  _BYTE *v37; // rax
  int v38; // eax
  char v39; // al
  _QWORD *exception; // rdi
  __int64 *v41; // [rsp+0h] [rbp-F8h]
  __int64 *v42; // [rsp+0h] [rbp-F8h]
  __m128i *v43; // [rsp+0h] [rbp-F8h]
  __int64 *v44; // [rsp+0h] [rbp-F8h]
  __m128i *v45; // [rsp+8h] [rbp-F0h]
  __int64 *v46; // [rsp+8h] [rbp-F0h]
  __m128i *v47; // [rsp+8h] [rbp-F0h]
  __m128i *v48; // [rsp+10h] [rbp-E8h]
  __m128i *v49; // [rsp+10h] [rbp-E8h]
  char v50; // [rsp+1Fh] [rbp-D9h]
  __int64 v51; // [rsp+20h] [rbp-D8h] BYREF
  const __m128i *v52; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+30h] [rbp-C8h] BYREF
  int v54; // [rsp+38h] [rbp-C0h]
  __int64 v55; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+48h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A0h]
  __int64 *v58; // [rsp+60h] [rbp-98h]
  __int64 v59; // [rsp+68h] [rbp-90h] BYREF
  __int128 v60; // [rsp+70h] [rbp-88h]
  __int64 v61; // [rsp+80h] [rbp-78h]
  __int64 *v62; // [rsp+90h] [rbp-68h] BYREF
  __int64 v63; // [rsp+98h] [rbp-60h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v66; // [rsp+B8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a3 + 8);
  if ( (v7 & 0x100) == 0 )
    return v66 - __readfsqword(0x28u);
  v54 = 0;
  v53 = 0xFFFFFFFFLL;
  if ( a2 )
  {
    v12 = (_QWORD *)a1[10];
    if ( !v12 )
      return v66 - __readfsqword(0x28u);
    v13 = 24;
    v14 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v14 )
    {
LABEL_5:
      if ( (*(_BYTE *)v14 & 2) != 0 )
        return v66 - __readfsqword(0x28u);
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 24);
        v13 = v14 + 24;
        if ( a2 < v15 )
        {
          v14 = *(_QWORD *)(v14 + 8);
          goto LABEL_5;
        }
        if ( v15 >= a2 )
          break;
        v14 = *(_QWORD *)(v14 + 16);
        if ( (*(_BYTE *)v14 & 2) != 0 )
          return v66 - __readfsqword(0x28u);
      }
      if ( v12 == (_QWORD *)v14 )
        return v66 - __readfsqword(0x28u);
    }
    a5 = &v53;
    v53 = *(_QWORD *)(v13 + 8);
    v54 = *(_DWORD *)(v13 + 16);
  }
  v17 = (__m128i *)a1[9];
  v18 = *(__int64 **)a1[8];
  v62 = (__int64 *)a3;
  v19 = (unsigned __int64 *)v17->m128i_i64[0];
  if ( !v17->m128i_i64[0] )
  {
    v45 = v17;
    v42 = v18;
    v32 = qalloc(64);
    v18 = v42;
    v17 = v45;
    v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)v32);
    if ( !v32 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v32 + 16) = 0;
    *(_OWORD *)(v32 + 32) = 0;
    *(_OWORD *)(v32 + 48) = 0;
    *(_QWORD *)v32 = v32 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v32 + 8) = v33;
    v45->m128i_i64[0] = v32;
    *(_QWORD *)v32 = v32 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v32 & 3LL;
    a6 = (__m128)_mm_unpacklo_epi64((__m128i)v45->m128i_u64[0], (__m128i)v45->m128i_u64[0]);
    *(__m128 *)(v45->m128i_i64[0] + 8) = a6;
    *(_QWORD *)v45->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v45->m128i_i64[0] |= 2uLL;
    v19 = (unsigned __int64 *)v45->m128i_i64[0];
    goto LABEL_14;
  }
  if ( !v17->m128i_i64[1] )
  {
LABEL_14:
    v41 = v18;
    v20 = 1;
LABEL_15:
    v21 = sub_3ADBF0(v17, v19, v20, &v62);
    v18 = v41;
    v22 = (__m128i *)v21;
    v23 = v21 + 24;
    goto LABEL_16;
  }
  v34 = *v19 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v34 & 2) != 0 )
  {
    v20 = 1;
LABEL_52:
    v41 = v18;
    goto LABEL_15;
  }
  v50 = 1;
  while ( 1 )
  {
    v23 = v34 + 24;
    v48 = v17;
    v46 = v18;
    v43 = (__m128i *)v34;
    v35 = lexcompare_tinfo(v7, *(_QWORD *)(v34 + 32), 0);
    v22 = v43;
    v18 = v46;
    v17 = v48;
    if ( v35 )
    {
      if ( v35 < 0 )
      {
LABEL_41:
        v50 = 1;
        v37 = (_BYTE *)v43->m128i_i64[1];
        goto LABEL_42;
      }
    }
    else
    {
      v36 = *(_BYTE *)(a3 + 16);
      if ( v36 == *(_BYTE *)(v23 + 16) )
      {
        if ( *(_QWORD *)a3 < *(_QWORD *)v23 )
          goto LABEL_41;
      }
      else if ( v36 )
      {
        goto LABEL_41;
      }
    }
    v49 = v43;
    v47 = v17;
    v44 = v18;
    v38 = lexcompare_tinfo(*(_QWORD *)(v23 + 8), *(_QWORD *)(a3 + 8), 0);
    v18 = v44;
    v17 = v47;
    v22 = v49;
    if ( v38 )
    {
      if ( v38 >= 0 )
        break;
      goto LABEL_48;
    }
    v39 = *(_BYTE *)(v23 + 16);
    if ( v39 != *(_BYTE *)(a3 + 16) )
    {
      if ( !v39 )
        break;
      goto LABEL_48;
    }
    if ( *(_QWORD *)v23 >= *(_QWORD *)a3 )
      break;
LABEL_48:
    v50 = 0;
    v37 = (_BYTE *)v49[1].m128i_i64[0];
LABEL_42:
    if ( (*v37 & 2) != 0 )
      goto LABEL_43;
    v7 = *(_QWORD *)(a3 + 8);
    v34 = (unsigned __int64)v37;
  }
  if ( !v49 )
  {
LABEL_43:
    v20 = v50;
    v19 = (unsigned __int64 *)v22;
    goto LABEL_52;
  }
LABEL_16:
  v24 = *(unsigned __int64 **)(v23 + 24);
  if ( !v24 )
    goto LABEL_19;
  v25 = *v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v25 )
  {
    v26 = *(_QWORD *)(v23 + 24);
    if ( (*(_BYTE *)v25 & 2) != 0 )
      goto LABEL_19;
    while ( 1 )
    {
      v31 = *(_BYTE **)(v25 + 8);
      if ( *(_QWORD *)(v25 + 24) < (unsigned __int64)v18 )
      {
        v31 = *(_BYTE **)(v25 + 16);
        if ( (*v31 & 2) != 0 )
          goto LABEL_30;
      }
      else
      {
        v26 = v25;
        if ( (*v31 & 2) != 0 )
        {
LABEL_30:
          if ( v24 != (unsigned __int64 *)v26 )
            goto LABEL_31;
LABEL_19:
          v27 = a1[8];
          a6.m128_u64[0] = 0;
          v55 = 0;
          v56 = 0;
          v28 = *(_DWORD *)(v27 + 104);
          v51 = v27;
          v57 = v27;
          *(_DWORD *)(v27 + 104) = v28 + 1;
          v58 = v18;
          v59 = 0;
          v60 = 0;
          if ( v27 )
          {
            v62 = v18;
            v63 = 0;
            v65 = v27;
            v64 = 0;
            v61 = v27;
            *(_DWORD *)(v27 + 104) = v28 + 4;
          }
          else
          {
            v61 = 0;
            v62 = v18;
            v63 = 0;
            v65 = 0;
            v64 = 0;
          }
          v52 = (const __m128i *)&v62;
          v26 = sub_3AC400(v22 + 3, (unsigned __int64 *)&v62, v24, &v52);
          sub_3A6A30(&v63);
          sub_3A6A30(&v59);
          sub_3A6A30(&v55);
          sub_13B580(&v51, (__int64)&v62);
          goto LABEL_22;
        }
      }
      v25 = (unsigned __int64)v31;
    }
  }
  v26 = 0;
LABEL_31:
  if ( v18 != *(__int64 **)(v26 + 24) )
  {
    v24 = (unsigned __int64 *)v26;
    goto LABEL_19;
  }
LABEL_22:
  v29 = sub_3A7C40((__int64 *)(v26 + 32));
  *(_QWORD *)(v29 + 16) = *a5;
  v30 = *((_DWORD *)a5 + 2);
  *(_QWORD *)v29 = a2;
  *(_DWORD *)(v29 + 24) = v30;
  *(_DWORD *)(v29 + 28) = a4;
  *(_QWORD *)(v29 + 8) = *(_QWORD *)a3;
  *(_BYTE *)(v29 + 32) = *(_BYTE *)(a3 + 16);
  if ( a2 && *(_DWORD *)(a2 + 8) == 77 )
    *(_DWORD *)(v29 + 16) = sub_385820(
                              a1[8],
                              *(_QWORD *)a2,
                              *(_QWORD *)a3,
                              *(_DWORD *)(v29 + 16),
                              *(double *)a6.m128_u64);
  ++a1[12];
  return v66 - __readfsqword(0x28u);
}
