__int64 __fastcall sub_2AF540(__int64 a1, __int64 a2, __int64 *a3)
{
  char **exception; // rax
  unsigned __int64 v4; // r13
  char **v5; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  _BYTE *v10; // r12
  _OWORD *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // [rsp+8h] [rbp-90h]
  char *v21[4]; // [rsp+20h] [rbp-78h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h] BYREF

  *(_QWORD *)a1 = a2;
  v12 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 16) = 8;
  *(_QWORD *)(a1 + 8) = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = qword_1C7A350;
  sub_16511B0(a1 + 40);
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 32) = &off_1C63D10;
  sub_16669D0(a1 + 96, a2);
  sub_16744A0(a1 + 112, a2);
  sub_1684300(a1 + 136, a2);
  sub_15C5470(a1 + 152, a2);
  *(_QWORD *)(a1 + 216) = a2;
  sub_180C5A0(&src, "seq");
  v13 = sub_15DA4C0(a2 + 560, &src);
  v14 = sub_15D2690(a2, v13);
  *(__m128 *)(a1 + 224) = _mm_loadh_ps((const double *)(v14 + 88));
  LODWORD(v14) = *(_DWORD *)(v14 + 16);
  *(_QWORD *)(a1 + 296) = 0;
  v15 = _mm_loadh_ps((const double *)(a1 + 216));
  *(_DWORD *)(a1 + 240) = v14;
  *(_DWORD *)(a1 + 264) = v14;
  *(_DWORD *)(a1 + 288) = v14;
  v16 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 304) = v16;
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 344) = 0;
  *(__m128 *)(a1 + 248) = v15;
  *(__m128 *)(a1 + 272) = v15;
  sub_15F01E0(a1 + 352, a2);
  sub_1624F90(a1 + 376, a2);
  *(_QWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 480) = a2;
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0;
  sub_15C0990(a1 + 504, a2);
  std::ios_base::ios_base((std::ios_base *)(a1 + 952));
  *(_OWORD *)(a1 + 1184) = 0;
  *(_OWORD *)(a1 + 1200) = 0;
  *(_QWORD *)(a1 + 952) = (char *)&`vtable for'std::ios + 16;
  *(_WORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  v17 = `VTT for'std::ofstream[1];
  v18 = *(_QWORD *)(v17 - 24);
  *(_QWORD *)(a1 + 704) = v17;
  *(_QWORD *)(a1 + 704 + v18) = `VTT for'std::ofstream[2];
  std::ios::init();
  *(_QWORD *)(a1 + 704) = (char *)&`vtable for'std::ofstream + 24;
  *(_QWORD *)(a1 + 952) = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  result = std::ios::clear();
  *(_QWORD *)(a1 + 1216) = a2;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1232) = 0;
  if ( (*(_BYTE *)(a1 + 984) & 5) != 0 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    v4 = a3[1];
    LOBYTE(v24) = 0;
    v5 = exception;
    v20 = *a3;
    src = &v24;
    v23 = 0;
    v6 = v4 + 15;
    if ( v4 < 0xFFFFFFFFFFFFFFF1LL && v4 != 0 )
    {
      if ( v6 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v8 = 30;
      if ( (unsigned __int64)v6 >= 0x1E )
        v8 = v4 + 15;
      v9 = v8;
      if ( v8 + 1 < 0 )
        std::__throw_bad_alloc();
      v10 = (_BYTE *)operator new(v8 + 1);
      if ( v23 )
      {
        if ( v23 != -1 )
          memcpy(v10, src, v23 + 1);
      }
      else
      {
        *v10 = *(_BYTE *)src;
      }
      sub_233E40((__int64)&src);
      src = v10;
      v24 = v9;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v23) <= 0xE )
        std::__throw_length_error("basic_string::append");
    }
    sub_2B33E0(&src, "could not open ", 15);
    if ( 0x7FFFFFFFFFFFFFFFLL - v23 >= v4 )
    {
      sub_2B33E0(&src, v20, v4);
      v7 = (_QWORD *)sub_2B3190(&src, " for output");
      sub_2333C0(v21, v7);
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v21);
      sub_233E40((__int64)v21);
      sub_233E40((__int64)&src);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    std::__throw_length_error("basic_string::append");
  }
  return result;
}

