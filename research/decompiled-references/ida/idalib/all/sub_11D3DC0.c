void __fastcall sub_11D3DC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        double a8)
{
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v17; // r10
  const __m128i *v18; // r12
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r14
  void *v23; // r13
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // rsi
  void **v29; // rdx
  void *v30; // rdi
  _QWORD *v31; // r13
  void (__fastcall *v32)(_QWORD *); // rax
  __int64 v33; // r14
  __int64 v34; // rbp
  void *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  void **v38; // r14
  void **v39; // rbp
  void *v40; // rdi
  _QWORD *v41; // rdi
  unsigned __int64 v42; // r14
  __int64 v43; // rdi
  _QWORD *v45; // [rsp+20h] [rbp-118h]
  const __m128i *v46; // [rsp+20h] [rbp-118h]
  __int64 v47; // [rsp+28h] [rbp-110h]
  __int64 v48; // [rsp+30h] [rbp-108h]
  const __m128i *v49; // [rsp+38h] [rbp-100h]
  void *v50; // [rsp+48h] [rbp-F0h] BYREF
  void *v51[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-C0h]
  _QWORD v55[23]; // [rsp+80h] [rbp-B8h] BYREF

  sub_11BB1A0(a6);
  v12 = *(_QWORD *)(a1 + 24);
  ptr = v55;
  v54 = 0x1000000000LL;
  switch ( *(_DWORD *)(v12 + 48) )
  {
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
      LODWORD(v54) = 1;
      v55[0] = "--64";
      break;
    case 1:
    case 3:
    case 0x23:
      break;
    case 0x25:
      LODWORD(v54) = 1;
      v55[0] = "--32";
      break;
  }
  sub_21B6F20(a6, &ptr, 3403, 3487, 0);
  v13 = (unsigned int)v54;
  v14 = (unsigned int)v54 + 1LL;
  if ( v14 > HIDWORD(v54) )
  {
    sub_2237220(&ptr, v55, v14, 8);
    v13 = (unsigned int)v54;
  }
  *((_QWORD *)ptr + v13) = "-o";
  v15 = *a4;
  LODWORD(v54) = v54 + 1;
  v16 = (unsigned int)v54;
  if ( (unsigned __int64)(unsigned int)v54 + 1 > HIDWORD(v54) )
  {
    sub_2237220(&ptr, v55, (unsigned int)v54 + 1LL, 8);
    v16 = (unsigned int)v54;
  }
  v17 = v55;
  *((_QWORD *)ptr + v16) = v15;
  v18 = *(const __m128i **)a5;
  v19 = (unsigned int)(v54 + 1);
  v20 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  LODWORD(v54) = v54 + 1;
  if ( v18 != (const __m128i *)v20 )
  {
    do
    {
      while ( 1 )
      {
        v21 = v18->m128i_i64[0];
        if ( v19 + 1 > (unsigned __int64)HIDWORD(v54) )
          break;
        v18 = (const __m128i *)((char *)v18 + 40);
        *((_QWORD *)ptr + v19) = v21;
        v19 = (unsigned int)(v54 + 1);
        LODWORD(v54) = v54 + 1;
        if ( (const __m128i *)v20 == v18 )
          goto LABEL_12;
      }
      v49 = (const __m128i *)v20;
      v48 = v18->m128i_i64[0];
      v18 = (const __m128i *)((char *)v18 + 40);
      v45 = v17;
      sub_2237220(&ptr, v17, v19 + 1, 8);
      v20 = (__int64)v49;
      v17 = v45;
      *((_QWORD *)ptr + (unsigned int)v54) = v48;
      v19 = (unsigned int)(v54 + 1);
      LODWORD(v54) = v54 + 1;
    }
    while ( v49 != v18 );
  }
LABEL_12:
  sub_112D530(v51, v12, "as");
  v22 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a6 + 16LL))(a6, v51[0], v51[1]);
  v46 = *(const __m128i **)a5;
  v47 = *(unsigned int *)(a5 + 8);
  v23 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v23, a3, a1, 2, 0, v22, (__int64)&ptr, v46, v47, (__int64)a4, 1, 0);
  v24 = *(unsigned int *)(a2 + 160);
  v25 = *(unsigned int *)(a2 + 164);
  v50 = v23;
  v26 = v24 + 1;
  v27 = v24;
  if ( v24 + 1 > v25 )
  {
    v42 = *(_QWORD *)(a2 + 152);
    v43 = a2 + 152;
    if ( v42 > (unsigned __int64)&v50 || (unsigned __int64)&v50 >= v42 + 8 * v24 )
    {
      sub_11673D0(v43, v26, a7, a8);
      v24 = *(unsigned int *)(a2 + 160);
      v28 = *(_QWORD *)(a2 + 152);
      v29 = &v50;
      v27 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v43, v26, a7, a8);
      v28 = *(_QWORD *)(a2 + 152);
      v24 = *(unsigned int *)(a2 + 160);
      v29 = (void **)((char *)&v51[-1] + v28 - v42);
      v27 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v28 = *(_QWORD *)(a2 + 152);
    v29 = &v50;
  }
  v30 = *v29;
  *v29 = nullptr;
  v31 = v50;
  *(_QWORD *)(v28 + 8 * v24) = v30;
  *(_DWORD *)(a2 + 160) = v27 + 1;
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
              goto LABEL_34;
            }
          }
          v39 += 4;
        }
        while ( v38 != v39 );
        v39 = (void **)v31[28];
      }
LABEL_34:
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
  if ( v51[0] != &v52 )
    operator delete(v51[0]);
  if ( ptr != v55 )
    free(ptr);
}
