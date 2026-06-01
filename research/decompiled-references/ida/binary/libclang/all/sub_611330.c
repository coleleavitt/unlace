_BOOL8 __fastcall sub_611330(unsigned __int8 *a1, const char *a2, __int64 *a3)
{
  _BYTE *v5; // r15
  bool v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  void *v9; // rdx
  __int64 (*v10)(); // rsi
  __m128i si128; // xmm0
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r14d
  size_t v20; // rax
  void *v21; // rdi
  size_t v22; // r15
  __int64 v23; // r14
  char v24; // al
  unsigned __int64 *v25; // rax
  __m128i v26; // xmm1
  unsigned __int64 *v27; // r15
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  void *v30; // rdi
  int v31; // eax
  volatile signed __int32 *v32; // r15
  __int64 v33; // r12
  unsigned int v34; // eax
  unsigned int v35; // ecx
  __int64 *v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r12
  int v39; // eax
  __int64 v40; // rsi
  volatile signed __int32 *v41; // rdx
  signed __int32 v42; // eax
  void *v43; // rbp
  bool v44; // zf
  volatile signed __int32 *v45; // rbp
  volatile signed __int32 *v46; // rdx
  signed __int32 v47; // eax
  volatile signed __int32 *v48; // rbp
  volatile signed __int32 *v49; // rdx
  signed __int32 v50; // eax
  __int64 v51; // rdi
  void *v52; // rax
  __int64 v53; // rax
  void *v54; // rbx
  void *v55; // rbx
  _BOOL4 v56; // ebp
  void *v57; // rbx
  signed __int32 v58; // eax
  __int64 v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // rax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  void *v67; // rdi
  __int64 v68; // rax
  volatile signed __int32 *v69; // rdi
  int v71; // [rsp+38h] [rbp-B0h]
  unsigned int v72; // [rsp+3Ch] [rbp-ACh]
  __int64 *v73; // [rsp+40h] [rbp-A8h]
  void *v74; // [rsp+50h] [rbp-98h] BYREF
  void *v75; // [rsp+58h] [rbp-90h] BYREF
  void *v76; // [rsp+60h] [rbp-88h] BYREF
  __int64 v77; // [rsp+68h] [rbp-80h] BYREF
  __int64 v78; // [rsp+70h] [rbp-78h] BYREF
  volatile signed __int32 *v79; // [rsp+78h] [rbp-70h]
  void *v80[2]; // [rsp+80h] [rbp-68h] BYREF
  void *v81[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v82[9]; // [rsp+A0h] [rbp-48h] BYREF

  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v5 = (_BYTE *)qword_4AD21C8;
  v6 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
  {
    v6 = *v5 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_5;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_5;
  }
  if ( __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
    if ( !qword_4AD21C8 )
      goto LABEL_11;
    goto LABEL_6;
  }
LABEL_5:
  if ( !qword_4AD21C8 )
    goto LABEL_11;
LABEL_6:
  v81[0] = &qword_18 + 4;
  v7 = operator new(0xC0u);
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = v7 + 24;
  v8 = std::string::_M_create();
  v9 = v81[0];
  v10 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E390);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 24) = v9;
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 12) = _mm_load_si128((const __m128i *)&xmmword_3C7E3A0);
  v12 = v81[0];
  v13 = *(_QWORD *)(v7 + 8);
  v14 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *(void **)(v7 + 16) = v81[0];
  v12[v13] = 0;
  *(_QWORD *)(v7 + 48) = v7 + 72;
  *(_BYTE *)(v7 + 40) = v6;
  *(_DWORD *)(v7 + 144) = 2;
  *(_QWORD *)(v7 + 136) = &off_49DA340;
  *(_QWORD *)(v7 + 184) = v7 + 48;
  *(_BYTE *)(v7 + 176) = 0;
  *(_DWORD *)(v7 + 180) = 1;
  *(_QWORD *)(v7 + 168) = 0;
  *(__m128i *)(v7 + 56) = v14;
  *(_OWORD *)(v7 + 152) = 0;
  sub_2623850(v7 + 136, 0, 0, 0, v15, v16);
  v19 = (*(_DWORD *)v7)++;
  if ( a2 )
  {
    v20 = strlen(a2);
    v21 = *(void **)(v7 + 168);
    v22 = v20;
    if ( *(_QWORD *)(v7 + 160) - (_QWORD)v21 < v20 )
    {
      v10 = (__int64 (*)())a2;
      sub_26240F0(v7 + 136, a2, v20);
      v63 = (*(_DWORD *)v7)--;
      if ( v63 != 1 )
        goto LABEL_11;
LABEL_78:
      sub_60C330((pthread_mutex_t *)v7, v10, v17, v18);
      operator delete((void *)v7, 0xC0u);
      goto LABEL_11;
    }
    if ( v20 )
    {
      v10 = (__int64 (*)())a2;
      memcpy(v21, a2, v20);
      *(_QWORD *)(v7 + 168) += v22;
      v19 = *(_DWORD *)v7 - 1;
    }
  }
  *(_DWORD *)v7 = v19;
  if ( !v19 )
    goto LABEL_78;
LABEL_11:
  v81[1] = nullptr;
  v81[0] = v82;
  LOBYTE(v82[0]) = 0;
  v23 = operator new(0x288u);
  *(_WORD *)(v23 + 32) = 47;
  *(_QWORD *)(v23 + 8) = 0x100000001LL;
  *(_WORD *)(v23 + 280) = 24946;
  *(_OWORD *)(v23 + 48) = 0;
  *(_QWORD *)v23 = off_47CFEC8;
  *(_QWORD *)(v23 + 16) = v23 + 32;
  *(_QWORD *)(v23 + 96) = v23 + 112;
  *(_QWORD *)(v23 + 128) = v23 + 144;
  *(_QWORD *)(v23 + 160) = v23 + 176;
  *(_QWORD *)(v23 + 216) = v23 + 200;
  *(_QWORD *)(v23 + 224) = v23 + 200;
  *(_OWORD *)(v23 + 64) = 0;
  *(_OWORD *)(v23 + 80) = 0;
  *(_OWORD *)(v23 + 240) = 0;
  *(_QWORD *)(v23 + 264) = v23 + 280;
  *(_QWORD *)(v23 + 24) = 1;
  *(_QWORD *)(v23 + 104) = 0;
  *(_BYTE *)(v23 + 112) = 0;
  *(_QWORD *)(v23 + 136) = 0;
  *(_BYTE *)(v23 + 144) = 0;
  *(_QWORD *)(v23 + 168) = 0;
  *(_BYTE *)(v23 + 176) = 0;
  *(_DWORD *)(v23 + 200) = 0;
  *(_QWORD *)(v23 + 208) = 0;
  *(_QWORD *)(v23 + 232) = 0;
  *(_QWORD *)(v23 + 256) = 0;
  *(_BYTE *)(v23 + 282) = 119;
  *(_QWORD *)(v23 + 272) = 3;
  *(_BYTE *)(v23 + 283) = 0;
  *(_BYTE *)(v23 + 296) &= 0xE0u;
  *(_WORD *)(v23 + 640) = 17415;
  *(_QWORD *)(v23 + 300) = 0x28DE8000093A80LL;
  *(_QWORD *)(v23 + 344) = v23 + 360;
  *(_QWORD *)(v23 + 312) = 0;
  *(_QWORD *)(v23 + 352) = 0x1000000000LL;
  v24 = *(_BYTE *)(v23 + 642);
  *(_DWORD *)(v23 + 336) = 0;
  *(_QWORD *)(v23 + 320) = 0;
  *(_OWORD *)(v23 + 616) = 0;
  *(_QWORD *)(v23 + 328) = 0;
  *(_QWORD *)(v23 + 632) = 0;
  *(_BYTE *)(v23 + 642) = v24 & 0xF0 | 8;
  v25 = (unsigned __int64 *)operator new(0x108u);
  v26 = _mm_load_si128((const __m128i *)&xmmword_3C7E380);
  v27 = v25;
  v25[6] = (unsigned __int64)(v25 + 8);
  v25[10] = (unsigned __int64)(v25 + 12);
  v25[14] = (unsigned __int64)(v25 + 16);
  v28 = *v25 & 0xFF80000000000000LL | 0x6F000000000LL;
  v27[7] = 0;
  *v27 = v28;
  *((_BYTE *)v27 + 64) = 0;
  v27[3] = 0x1000000032LL;
  v29 = v27[4];
  v27[11] = 0;
  *((_BYTE *)v27 + 96) = 0;
  *((_BYTE *)v27 + 44) = 0;
  v27[4] = (unsigned int)v29 & 0xFFFFFFFE | 0x800000001LL;
  v27[15] = 0;
  *((_BYTE *)v27 + 128) = 0;
  v27[32] = 0;
  *((_DWORD *)v27 + 10) = 0;
  *((_OWORD *)v27 + 9) = 0;
  *((_OWORD *)v27 + 10) = 0;
  *((_OWORD *)v27 + 11) = 0;
  *((_OWORD *)v27 + 12) = 0;
  *((_OWORD *)v27 + 13) = 0;
  *((_OWORD *)v27 + 14) = 0;
  *((_OWORD *)v27 + 15) = 0;
  *(__m128i *)(v27 + 1) = v26;
  sub_25FEFB0(v80);
  sub_1009C90(&v74, v80[0], v27, 0, 1, 0);
  v30 = v80[0];
  if ( v80[0] && !_InterlockedSub((volatile signed __int32 *)v80[0] + 2, 1u) )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v30 + 8LL))(v30);
  sub_25FEFB0(&v77);
  v31 = *a1;
  v78 = v23 + 16;
  v71 = v31;
  v79 = (volatile signed __int32 *)v23;
  *(_OWORD *)v80 = 0;
  if ( &_pthread_key_create )
    _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
  else
    ++*(_DWORD *)(v23 + 8);
  v76 = v74;
  if ( v74 )
    ++*(_DWORD *)v74;
  v32 = *((volatile signed __int32 **)a1 + 6);
  v33 = *((_QWORD *)a1 + 5);
  if ( v32 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v32 + 2, 1u);
    else
      ++*((_DWORD *)v32 + 2);
  }
  v34 = sub_25E2710("raw", 3);
  v35 = sub_25E2870(v33 + 24, "raw", 3, v34);
  v36 = (__int64 *)(*(_QWORD *)(v33 + 24) + 8LL * v35);
  v37 = *v36;
  if ( *v36 )
  {
    if ( v37 != -8 )
      goto LABEL_23;
    --*(_DWORD *)(v33 + 40);
  }
  v73 = v36;
  v72 = v35;
  v60 = sub_25CC9C0(20, 8);
  *(_WORD *)(v60 + 16) = 24946;
  *(_BYTE *)(v60 + 18) = 119;
  *(_BYTE *)(v60 + 19) = 0;
  *(_QWORD *)v60 = 3;
  *(_QWORD *)(v60 + 8) = 0;
  *v73 = v60;
  ++*(_DWORD *)(v33 + 36);
  v61 = (__int64 *)(*(_QWORD *)(v33 + 24) + 8LL * (unsigned int)sub_25E2C40(v33 + 24, v72));
  v37 = *v61;
  if ( !*v61 || v37 == -8 )
  {
    v62 = v61 + 1;
    do
    {
      do
        v37 = *v62++;
      while ( !v37 );
    }
    while ( v37 == -8 );
  }
LABEL_23:
  v38 = *(_QWORD *)(v37 + 8);
  v39 = strlen(a2);
  v40 = (__int64)a2;
  sub_FFF6D0(
    (unsigned int)&v75,
    (_DWORD)a2,
    v39,
    v38,
    2,
    (unsigned int)&v76,
    (__int64)v81,
    (__int64)&v78,
    (__int64)v80,
    v71,
    1,
    1,
    1,
    (__int64)&v77);
  if ( v32 )
  {
    v41 = v32 + 2;
    if ( *((_QWORD *)v32 + 1) == 0x100000001LL )
    {
      v64 = *(_QWORD *)v32;
      *((_QWORD *)v32 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(v64 + 16))(
        v32,
        a2,
        v41);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 24LL))(v32);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v42 = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
      }
      else
      {
        v42 = *((_DWORD *)v32 + 2);
        *((_DWORD *)v32 + 2) = v42 - 1;
      }
      if ( v42 == 1 )
        sub_6111C0(v32);
    }
  }
  v43 = v76;
  if ( v76 )
  {
    v44 = (*(_DWORD *)v76)-- == 1;
    if ( v44 )
    {
      sub_C68450(v43);
      v40 = 15248;
      operator delete(v43, 0x3B90u);
    }
  }
  v45 = v79;
  if ( v79 )
  {
    v46 = v79 + 2;
    if ( *((_QWORD *)v79 + 1) == 0x100000001LL )
    {
      v68 = *(_QWORD *)v79;
      v69 = v79;
      *((_QWORD *)v79 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v68 + 16))(v69, v40, v46);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 24LL))(v45);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v47 = _InterlockedExchangeAdd(v46, 0xFFFFFFFF);
      }
      else
      {
        v47 = *((_DWORD *)v79 + 2);
        *((_DWORD *)v79 + 2) = v47 - 1;
      }
      if ( v47 == 1 )
        sub_6111C0(v45);
    }
  }
  v48 = (volatile signed __int32 *)v80[1];
  if ( v80[1] )
  {
    v49 = (volatile signed __int32 *)((char *)v80[1] + 8);
    if ( *((_QWORD *)v80[1] + 1) == 0x100000001LL )
    {
      v66 = *(_QWORD *)v80[1];
      v67 = v80[1];
      *((_QWORD *)v80[1] + 1) = 0;
      (*(void (__fastcall **)(void *, __int64, volatile signed __int32 *))(v66 + 16))(v67, v40, v49);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 24LL))(v48);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v50 = _InterlockedExchangeAdd(v49, 0xFFFFFFFF);
      }
      else
      {
        v50 = *((_DWORD *)v80[1] + 2);
        *((_DWORD *)v80[1] + 2) = v50 - 1;
      }
      if ( v50 == 1 )
        sub_6111C0(v48);
    }
  }
  v51 = v77;
  if ( v77 && !_InterlockedSub((volatile signed __int32 *)(v77 + 8), 1u) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
  v52 = v75;
  v75 = nullptr;
  v80[0] = v52;
  v53 = sub_602020((__int64)a1, (const double *)v80);
  v54 = v80[0];
  *a3 = v53;
  if ( v54 )
  {
    sub_FFE9C0(v54);
    operator delete(v54, 0x808u);
    v53 = *a3;
  }
  v55 = v75;
  v56 = v53 == 0;
  if ( v75 )
  {
    sub_FFE9C0(v75);
    operator delete(v55, 0x808u);
  }
  v75 = nullptr;
  v57 = v74;
  if ( v74 )
  {
    v44 = (*(_DWORD *)v74)-- == 1;
    if ( v44 )
    {
      sub_C68450(v57);
      operator delete(v57, 0x3B90u);
    }
  }
  if ( *(_QWORD *)(v23 + 8) == 0x100000001LL )
  {
    v65 = *(_QWORD *)v23;
    *(_QWORD *)(v23 + 8) = 0;
    (*(void (__fastcall **)(__int64))(v65 + 16))(v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v58 = _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 8), 0xFFFFFFFF);
    }
    else
    {
      v58 = *(_DWORD *)(v23 + 8);
      *(_DWORD *)(v23 + 8) = v58 - 1;
    }
    if ( v58 == 1 )
      sub_6111C0((volatile signed __int32 *)v23);
  }
  if ( v81[0] != v82 )
    operator delete(v81[0], v82[0] + 1LL);
  return v56;
}

