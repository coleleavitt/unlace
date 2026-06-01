unsigned __int64 __fastcall sub_1B21D80(__int64 *a1, __int64 *a2, __int64 a3, const __m128i *a4)
{
  __int64 v8; // rax
  __m128i v9; // xmm1
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v14; // rsi
  __int64 v15; // r14
  char *v16; // rdx
  unsigned __int8 v17; // al
  unsigned __int64 *v18; // r13
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rbp
  _QWORD *v24; // rdi
  void *v25; // rdi
  void **v26; // rbp
  void **v27; // r15
  unsigned __int64 *v28; // r13
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // r15
  _QWORD *v33; // rdi
  void *v34; // rdi
  void **v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rdx
  _QWORD *v38; // [rsp+0h] [rbp-1E0h]
  void **v39; // [rsp+0h] [rbp-1E0h]
  unsigned __int64 *v40; // [rsp+10h] [rbp-1D0h]
  int v41[2]; // [rsp+18h] [rbp-1C8h] BYREF
  unsigned __int64 v42; // [rsp+20h] [rbp-1C0h]
  int v43[2]; // [rsp+38h] [rbp-1A8h] BYREF
  int v44[2]; // [rsp+40h] [rbp-1A0h]
  int v45[4]; // [rsp+48h] [rbp-198h]
  int v46[2]; // [rsp+58h] [rbp-188h]
  int v47[2]; // [rsp+68h] [rbp-178h] BYREF
  void *ptr; // [rsp+78h] [rbp-168h]
  int v49; // [rsp+80h] [rbp-160h]
  _BYTE v50[32]; // [rsp+88h] [rbp-158h] BYREF
  void *v51; // [rsp+A8h] [rbp-138h]
  unsigned __int64 *v52; // [rsp+B0h] [rbp-130h]
  int v53[2]; // [rsp+F8h] [rbp-E8h] BYREF
  int v54[2]; // [rsp+100h] [rbp-E0h]
  int v55[2]; // [rsp+108h] [rbp-D8h]
  __int64 v56; // [rsp+110h] [rbp-D0h] BYREF
  int v57[4]; // [rsp+150h] [rbp-90h]
  int v58[2]; // [rsp+160h] [rbp-80h]
  int v59[2]; // [rsp+168h] [rbp-78h]
  int v60[4]; // [rsp+170h] [rbp-70h]
  int v61[2]; // [rsp+180h] [rbp-60h]
  int v62[2]; // [rsp+188h] [rbp-58h]
  int v63[2]; // [rsp+190h] [rbp-50h]
  int v64[2]; // [rsp+198h] [rbp-48h]

  v8 = *a1;
  v9 = _mm_loadu_si128(a4);
  *(_QWORD *)v55 = 0x800000000LL;
  *(_QWORD *)v59 = v8;
  v10 = a4[1].m128i_i64[0];
  *(_QWORD *)v54 = &v56;
  *(_QWORD *)v61 = v10;
  *(_QWORD *)v53 = 0;
  *(_OWORD *)v57 = 0;
  *(_QWORD *)v58 = 0;
  *(__m128i *)v60 = v9;
  *(_QWORD *)v62 = 0;
  *(_QWORD *)v63 = 0;
  *(_QWORD *)v64 = 0x101010000LL;
  sub_1A395A0((__int64)v53);
  sub_1A5D3E0(*a1, (__int64)v53, a2, a3, 0, 1, 0.0, *(double *)v9.m128i_i64, 0);
  if ( v53[0] == 5 )
  {
LABEL_41:
    v11 = 0;
    goto LABEL_9;
  }
  *(_WORD *)((char *)v64 + 3) = 0;
  if ( v53[0] != 2 )
  {
    v14 = *a1;
    *(_OWORD *)v45 = 0;
    *(_QWORD *)v44 = 0x101010101LL;
    *(_QWORD *)v43 = &off_2BC7858;
    *(_QWORD *)v46 = v14;
    sub_1A6BD60(
      v47,
      v14,
      a4,
      0,
      (unsigned __int64)a2,
      nullptr,
      0.0,
      *(double *)v9.m128i_i64,
      (__int64)v43,
      1,
      0,
      0,
      0,
      1u);
    if ( *(_QWORD *)v47 )
    {
      v15 = *a1;
      sub_168B9B0((__int64)v41, *a1 + 8, 5351);
      sub_AE9DF0((unsigned __int8 **)v41, a4->m128i_i64[0], 9u);
      sub_1A60AF0(v15, (__int64)v47, (void **)v41, 1u);
      if ( *(_QWORD *)v41 && v42 )
        sub_1580C40(v42, *(unsigned __int64 *)v41);
      v16 = nullptr;
      if ( v49 )
      {
        v16 = *(char **)ptr;
        if ( *(_QWORD *)ptr )
        {
          v17 = v16[28] & 0x7F;
          if ( (unsigned int)v17 - 53 <= 1 || ((v17 + 52) & 0x7Fu) <= 1 )
            v16 = (char *)sub_B72ED0(*(_QWORD *)ptr);
        }
      }
      sub_1B21670((__int64)a1, 0, v16, 0, 0.0);
      v18 = v52;
      v19 = (unsigned __int64 *)v51;
      if ( v52 != v51 )
      {
        do
        {
          v20 = *v19;
          if ( *v19 )
          {
            v21 = v19[1];
            if ( v21 )
            {
              if ( v20 < v21 || v20 > v21 + 14848 )
              {
                v22 = *(_QWORD **)(v20 + 528);
                v23 = &v22[8 * (unsigned __int64)*(unsigned int *)(v20 + 536)];
                if ( v22 != v23 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v23 -= 8;
                      v24 = (_QWORD *)v23[3];
                      if ( v24 == v23 + 5 )
                        break;
                      operator delete(v24);
                      if ( v22 == v23 )
                        goto LABEL_26;
                    }
                  }
                  while ( v22 != v23 );
LABEL_26:
                  v23 = *(_QWORD **)(v20 + 528);
                }
                if ( v23 != (_QWORD *)(v20 + 544) )
                  free(v23);
                v25 = *(void **)(v20 + 416);
                if ( v25 != (void *)(v20 + 432) )
                  free(v25);
                v26 = (void **)(v20 + 384);
                v27 = (void **)(v20 + 64);
                do
                {
                  while ( *v26 != v26 + 2 )
                  {
                    operator delete(*v26);
                    v26 -= 4;
                    if ( v27 == v26 )
                      goto LABEL_34;
                  }
                  v26 -= 4;
                }
                while ( v26 != v27 );
LABEL_34:
                operator delete((void *)v20, 0x3A0u);
              }
              else
              {
                v36 = *(unsigned int *)(v21 + 14976);
                *(_DWORD *)(v21 + 14976) = v36 + 1;
                *(_QWORD *)(v21 + 8 * v36 + 14848) = v20;
              }
            }
          }
          v19 += 3;
        }
        while ( v18 != v19 );
        v19 = (unsigned __int64 *)v51;
      }
      if ( v19 )
        operator delete(v19);
      if ( ptr != v50 )
        free(ptr);
    }
    else
    {
      v28 = (unsigned __int64 *)v51;
      v40 = v52;
      if ( v52 != v51 )
      {
        do
        {
          v29 = *v28;
          if ( *v28 )
          {
            v30 = v28[1];
            if ( v30 )
            {
              if ( v29 < v30 || v29 > v30 + 14848 )
              {
                v31 = *(_QWORD **)(v29 + 528);
                v32 = &v31[8 * (unsigned __int64)*(unsigned int *)(v29 + 536)];
                if ( v31 != v32 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v32 -= 8;
                      v33 = (_QWORD *)v32[3];
                      if ( v33 == v32 + 5 )
                        break;
                      v38 = v31;
                      operator delete(v33);
                      v31 = v38;
                      if ( v38 == v32 )
                        goto LABEL_49;
                    }
                  }
                  while ( v31 != v32 );
LABEL_49:
                  v32 = *(_QWORD **)(v29 + 528);
                }
                if ( v32 != (_QWORD *)(v29 + 544) )
                  free(v32);
                v34 = *(void **)(v29 + 416);
                if ( v34 != (void *)(v29 + 432) )
                  free(v34);
                v35 = (void **)(v29 + 384);
                v39 = (void **)(v29 + 64);
                do
                {
                  while ( *v35 != v35 + 2 )
                  {
                    operator delete(*v35);
                    v35 -= 4;
                    if ( v39 == v35 )
                      goto LABEL_57;
                  }
                  v35 -= 4;
                }
                while ( v39 != v35 );
LABEL_57:
                operator delete((void *)v29, 0x3A0u);
              }
              else
              {
                v37 = *(unsigned int *)(v30 + 14976);
                *(_DWORD *)(v30 + 14976) = v37 + 1;
                *(_QWORD *)(v30 + 8 * v37 + 14848) = v29;
              }
            }
          }
          v28 += 3;
        }
        while ( v40 != v28 );
        v28 = (unsigned __int64 *)v51;
      }
      if ( v28 )
        operator delete(v28);
      if ( ptr != v50 )
        free(ptr);
      sub_168B9F0((__int64)v47, a1, a4->m128i_u32[2], 0x14E6u, 0);
      *(_QWORD *)v41 = a4->m128i_i64[0];
      sub_15894B0((__int64)v47, (__int64 *)v41);
      sub_15F7200(v47);
    }
    goto LABEL_41;
  }
  v11 = **(_QWORD **)v54 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = *(_BYTE *)(v11 + 28) & 0x7F;
  if ( (unsigned int)v12 - 53 <= 1 || ((v12 + 52) & 0x7Fu) <= 1 )
  {
    v11 = sub_B72ED0(**(_QWORD **)v54 & 0xFFFFFFFFFFFFFFF8LL);
    v12 = *(_BYTE *)(v11 + 28) & 0x7F;
  }
  if ( ((v12 + 94) & 0x7Fu) > 0xC && v12 != 71 )
  {
    sub_168B9F0((__int64)v47, a1, a4->m128i_u32[2], 0x11AAu, 0);
    *(_QWORD *)v43 = a4->m128i_i64[0];
    sub_15894B0((__int64)v47, (__int64 *)v43);
    v11 = 0;
    sub_15F7200(v47);
  }
LABEL_9:
  sub_169D230((__int64)v53);
  return v11;
}
