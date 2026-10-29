void __fastcall sub_12C5630(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        double a8)
{
  void **v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r14
  _QWORD *v19; // rbx
  const __m128i *v20; // r8
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rbx
  void *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // rcx
  void *v30; // rsi
  _QWORD *v31; // rbp
  void (__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  void *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  void **v38; // r12
  void **v39; // rbx
  void *v40; // rdi
  _QWORD *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rbx
  __int64 v52; // rdi
  const __m128i *v57; // [rsp+30h] [rbp-F8h]
  const __m128i *v58; // [rsp+30h] [rbp-F8h]
  __int64 v59; // [rsp+38h] [rbp-F0h]
  void *v60[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-D8h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+68h] [rbp-C0h]
  _QWORD v64[23]; // [rsp+70h] [rbp-B8h] BYREF

  v10 = v60;
  sub_11BB1A0((__int64)a6);
  ptr = v64;
  v64[0] = "-o";
  v11 = *a4;
  LODWORD(v60[0]) = 3397;
  v64[1] = v11;
  v64[2] = "-c";
  v63 = 0x1000000003LL;
  v12 = sub_21B6DA0(a6, v60, 1);
  v13 = a6[1];
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 != v15 )
  {
    while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3397) )
    {
      if ( v15 == ++v14 )
        goto LABEL_5;
    }
    if ( v15 != v14 )
    {
      do
      {
        v42 = *(_QWORD *)(*v14 + 16LL);
        if ( !v42 )
          v42 = *v14;
        ++v14;
        *(_BYTE *)(v42 + 44) |= 1u;
        if ( v14 == v15 )
          break;
        while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3397) )
        {
          if ( v15 == ++v14 )
            goto LABEL_58;
        }
      }
      while ( v15 != v14 );
LABEL_58:
      v43 = (unsigned int)v63;
      v44 = (unsigned int)v63 + 1LL;
      if ( v44 > HIDWORD(v63) )
      {
        sub_2237220(&ptr, v64, v44, 8);
        v43 = (unsigned int)v63;
      }
      *((_QWORD *)ptr + v43) = "-v";
      LODWORD(v63) = v63 + 1;
    }
  }
LABEL_5:
  LODWORD(v60[0]) = 36;
  v16 = sub_21B6DA0(a6, v60, 1);
  v17 = a6[1];
  v18 = (_QWORD *)(v17 + 8LL * (unsigned int)v16);
  v19 = (_QWORD *)(v17 + 8 * HIDWORD(v16));
  if ( v18 != v19 )
  {
    while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 36) )
    {
      if ( v19 == ++v18 )
        goto LABEL_9;
    }
    if ( v19 != v18 )
    {
      do
      {
        v45 = *v18;
        v46 = *(_QWORD *)(*v18 + 16LL);
        if ( !v46 )
          v46 = *v18;
        ++v18;
        *(_BYTE *)(v46 + 44) |= 1u;
        if ( v18 == v19 )
          break;
        while ( !*v18 || !(unsigned __int8)sub_21B9810(*v18, 36) )
        {
          if ( v19 == ++v18 )
            goto LABEL_70;
        }
      }
      while ( v19 != v18 );
LABEL_70:
      if ( !(unsigned __int8)sub_21B9810(v45, 1982) )
      {
        v47 = (unsigned int)v63;
        v48 = (unsigned int)v63 + 1LL;
        if ( v48 > HIDWORD(v63) )
        {
          sub_2237220(&ptr, v64, v48, 8);
          v47 = (unsigned int)v63;
        }
        *((_QWORD *)ptr + v47) = "-g";
        LODWORD(v63) = v63 + 1;
      }
    }
  }
LABEL_9:
  if ( (unsigned __int8)sub_21B7850(a6, 1927, 1471, 0) )
  {
    v49 = (unsigned int)v63;
    v50 = (unsigned int)v63 + 1LL;
    if ( v50 > HIDWORD(v63) )
    {
      sub_2237220(&ptr, v64, v50, 8);
      v49 = (unsigned int)v63;
    }
    *((_QWORD *)ptr + v49) = "-fverbose-asm";
    LODWORD(v63) = v63 + 1;
  }
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  v20 = *(const __m128i **)a5;
  v21 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( *(_QWORD *)a5 != v21 )
  {
    v22 = (unsigned int)v63;
    do
    {
      while ( 1 )
      {
        v23 = v20->m128i_i64[0];
        if ( v22 + 1 > (unsigned __int64)HIDWORD(v63) )
          break;
        v20 = (const __m128i *)((char *)v20 + 40);
        *((_QWORD *)ptr + v22) = v23;
        v22 = (unsigned int)(v63 + 1);
        LODWORD(v63) = v63 + 1;
        if ( (const __m128i *)v21 == v20 )
          goto LABEL_15;
      }
      v57 = v20;
      sub_2237220(&ptr, v64, v22 + 1, 8);
      *((_QWORD *)ptr + (unsigned int)v63) = v23;
      v20 = (const __m128i *)((char *)v57 + 40);
      v22 = (unsigned int)(v63 + 1);
      LODWORD(v63) = v63 + 1;
    }
    while ( (unsigned __int64 *)v21 != &v57[2].m128i_u64[1] );
  }
LABEL_15:
  sub_112D530(v60, *(_QWORD *)(a1 + 24), "xcc");
  v24 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v60[0], v60[1]);
  if ( v60[0] != &v61 )
    operator delete(v60[0]);
  v58 = *(const __m128i **)a5;
  v59 = *(unsigned int *)(a5 + 8);
  v25 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v25, a3, a1, 2, 0, v24, (__int64)&ptr, v58, v59, (__int64)a4, 1, 0);
  v60[0] = v25;
  v26 = *(unsigned int *)(a2 + 160);
  v27 = v26 + 1;
  v28 = *(_DWORD *)(a2 + 160);
  if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v51 = *(_QWORD *)(a2 + 152);
    v52 = a2 + 152;
    if ( v51 > (unsigned __int64)v60 )
    {
      sub_11673D0(v52, v27, a7, a8);
      v26 = *(unsigned int *)(a2 + 160);
      v29 = *(_QWORD *)(a2 + 152);
      v28 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      if ( (unsigned __int64)v60 < v51 + 8 * v26 )
      {
        sub_11673D0(v52, v27, a7, a8);
        v29 = *(_QWORD *)(a2 + 152);
        v26 = *(unsigned int *)(a2 + 160);
        v10 = (void **)((char *)v60 + v29 - v51);
      }
      else
      {
        sub_11673D0(v52, v27, a7, a8);
        v26 = *(unsigned int *)(a2 + 160);
        v29 = *(_QWORD *)(a2 + 152);
      }
      v28 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v29 = *(_QWORD *)(a2 + 152);
  }
  v30 = *v10;
  *v10 = nullptr;
  *(_QWORD *)(v29 + 8 * v26) = v30;
  v31 = v60[0];
  *(_DWORD *)(a2 + 160) = v28 + 1;
  if ( v31 )
  {
    v32 = *(void (__fastcall **)(_QWORD *))(*v31 + 8LL);
    if ( v32 == sub_10D4290 )
    {
      v33 = v31[58];
      v34 = v31[57];
      *v31 = &off_2BA8F30;
      if ( v33 != v34 )
      {
        do
        {
          if ( *(_BYTE *)(v34 + 32) && *(_QWORD *)v34 != v34 + 16 )
            operator delete(*(void **)v34);
          v34 += 40;
        }
        while ( v33 != v34 );
        v34 = v31[57];
      }
      if ( v34 )
        operator delete((void *)v34);
      v35 = (void *)v31[54];
      if ( v35 )
        operator delete(v35);
      v36 = (_QWORD *)v31[50];
      if ( v36 != v31 + 52 )
        operator delete(v36);
      v37 = (_QWORD *)v31[32];
      if ( v37 != v31 + 34 )
        free(v37);
      v38 = (void **)v31[29];
      v39 = (void **)v31[28];
      if ( v38 != v39 )
      {
        do
        {
          while ( *v39 != v39 + 2 )
          {
            operator delete(*v39);
            v39 += 4;
            if ( v39 == v38 )
            {
              v39 = (void **)v31[28];
              goto LABEL_39;
            }
          }
          v39 += 4;
        }
        while ( v38 != v39 );
        v39 = (void **)v31[28];
      }
LABEL_39:
      if ( v39 )
        operator delete(v39);
      v40 = (void *)v31[25];
      if ( v40 )
        operator delete(v40);
      v41 = (_QWORD *)v31[7];
      if ( v41 != v31 + 9 )
        free(v41);
      operator delete(v31, 0x208u);
    }
    else
    {
      v32(v31);
    }
  }
  if ( ptr != v64 )
    free(ptr);
}
