__int64 __fastcall sub_4113B0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5, __m128 a6)
{
  char **exception; // r12
  char **v7; // r12
  char **v8; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 i; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  std::chrono::_V2::steady_clock **v21; // rax
  std::chrono::_V2::steady_clock *v22; // rcx
  int v23; // edx
  std::chrono::_V2::steady_clock **v24; // r13
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // rdi
  __int64 v29; // r15
  __int64 v30; // rbp
  int v31; // r9d
  int v32; // ecx
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  unsigned int v38; // r8d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // r13
  __m128i *v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  _QWORD *v48; // r15
  unsigned int **v49; // r12
  unsigned int j; // r13d
  __int64 m128i_i64; // r14
  __int64 result; // rax
  __int64 v53; // rax
  unsigned int v54; // eax
  int v55; // [rsp+0h] [rbp-318h]
  void *v56; // [rsp+0h] [rbp-318h]
  __int64 *v57; // [rsp+8h] [rbp-310h]
  __int64 *v58; // [rsp+10h] [rbp-308h]
  unsigned int v59; // [rsp+18h] [rbp-300h]
  int v60; // [rsp+18h] [rbp-300h]
  int v61[2]; // [rsp+18h] [rbp-300h]
  int v62[2]; // [rsp+18h] [rbp-300h]
  std::chrono::_V2::steady_clock *v63; // [rsp+20h] [rbp-2F8h]
  __int64 *v64; // [rsp+20h] [rbp-2F8h]
  unsigned int v65; // [rsp+20h] [rbp-2F8h]
  int v66; // [rsp+28h] [rbp-2F0h]
  unsigned int v67; // [rsp+2Ch] [rbp-2ECh]
  int v68; // [rsp+2Ch] [rbp-2ECh]
  __int64 v69; // [rsp+30h] [rbp-2E8h]
  __int64 v70; // [rsp+30h] [rbp-2E8h]
  _QWORD *ptr; // [rsp+38h] [rbp-2E0h]
  int v72[2]; // [rsp+48h] [rbp-2D0h] BYREF
  int v73[2]; // [rsp+50h] [rbp-2C8h] BYREF
  __int64 v74; // [rsp+58h] [rbp-2C0h]
  __int64 v75; // [rsp+60h] [rbp-2B8h] BYREF
  int v76[2]; // [rsp+68h] [rbp-2B0h]
  int v77[2]; // [rsp+70h] [rbp-2A8h] BYREF
  __int64 v78; // [rsp+78h] [rbp-2A0h]
  int v79[2]; // [rsp+80h] [rbp-298h] BYREF
  std::chrono::_V2::steady_clock **v80; // [rsp+88h] [rbp-290h]
  int v81[2]; // [rsp+90h] [rbp-288h] BYREF
  __int64 v82; // [rsp+98h] [rbp-280h]
  __m128i v83; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-258h] BYREF
  __int64 v85; // [rsp+C8h] [rbp-250h] BYREF
  __int64 v86[15]; // [rsp+D0h] [rbp-248h] BYREF
  int v87; // [rsp+148h] [rbp-1D0h]
  __int64 v88; // [rsp+150h] [rbp-1C8h]
  _QWORD v89[19]; // [rsp+158h] [rbp-1C0h] BYREF
  int v90; // [rsp+1F0h] [rbp-128h]
  __int64 (__fastcall **v91)(); // [rsp+1F8h] [rbp-120h] BYREF
  int v92; // [rsp+288h] [rbp-90h]
  __int64 v93; // [rsp+290h] [rbp-88h]
  __int64 v94; // [rsp+298h] [rbp-80h]
  __int64 v95; // [rsp+2A0h] [rbp-78h]
  __int64 v96; // [rsp+2A8h] [rbp-70h]
  __int64 v97; // [rsp+2B0h] [rbp-68h]
  __int64 v98; // [rsp+2B8h] [rbp-60h]
  __int64 v99; // [rsp+2C0h] [rbp-58h]
  _BYTE v100[80]; // [rsp+2C8h] [rbp-50h] BYREF

  v69 = a1 + 352;
  if ( !*(_BYTE *)(a1 + 368) )
  {
    v53 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
    *(_BYTE *)(a1 + 368) = 1;
    *(_QWORD *)(a1 + 352) = v53;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(unsigned int *)(a3 + 68);
  v13 = *(_QWORD *)(a3 + 40);
  v74 = 0;
  *(_QWORD *)v73 = v11;
  v75 = v11;
  v67 = v12;
  v59 = *(_DWORD *)(a3 + 56);
  *(_QWORD *)v76 = 0;
  sub_409970((__int64 *)a1, a2, v13, &v75, (int)v73, -1);
  v14 = *(_QWORD *)v76;
  if ( (_DWORD)v12 )
  {
    for ( i = 0; i != v12; ++i )
    {
      v16 = *(_QWORD *)(a3 + 8 * i + 80);
      if ( (v16 & 7) == 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3FCFD0(v83.m128i_i64, "SPACER does not support negated predicates in rule tails");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v83);
        sub_233E40((__int64)&v83);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      *(_QWORD *)v76 = v14;
      sub_409970((__int64 *)a1, a2, v16 & 0xFFFFFFFFFFFFFFF8LL, &v75, (int)v73, i);
      v14 = *(_QWORD *)v76;
    }
  }
  v17 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v77 = 0;
  v78 = v17;
  *(_QWORD *)v79 = v17;
  if ( (unsigned int)v12 >= v59 )
  {
    v24 = nullptr;
  }
  else
  {
    v18 = a3 + 8LL * (unsigned int)v12;
    v19 = *(_QWORD *)(v18 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v18 + 80) > 7u )
      ++*(_DWORD *)(v19 + 8);
    v63 = (std::chrono::_V2::steady_clock *)v19;
    v20 = (_QWORD *)sub_186B270(0x18u);
    *v20 = 2;
    v21 = (std::chrono::_V2::steady_clock **)(v20 + 1);
    v22 = v63;
    v23 = 1;
    v24 = v21;
    v25 = a3 + 8 * (v67 + (unsigned __int64)(v59 - 1 - v67)) + 8;
    while ( 1 )
    {
      v18 += 8LL;
      *v21 = v22;
      *((_DWORD *)v24 - 1) = v23;
      if ( v25 == v18 )
        break;
      while ( 1 )
      {
        v26 = *(_QWORD *)(v18 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v18 + 80) > 7u )
          ++*(_DWORD *)(v26 + 8);
        v27 = *((_DWORD *)v24 - 1);
        if ( v27 == *((_DWORD *)v24 - 2) )
          break;
        v18 += 8LL;
        v24[v27] = (std::chrono::_V2::steady_clock *)v26;
        *((_DWORD *)v24 - 1) = v27 + 1;
        if ( v25 == v18 )
          goto LABEL_16;
      }
      v38 = (3 * v27 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v39 || v27 >= v38 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_3FCFD0(v83.m128i_i64, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, &v83);
        sub_233E40((__int64)&v83);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v65 = (3 * v27 + 1) >> 1;
      *(_QWORD *)v62 = v26;
      v40 = (unsigned int *)sub_186B300(v24 - 1, v39);
      v24 = (std::chrono::_V2::steady_clock **)(v40 + 2);
      v22 = *(std::chrono::_V2::steady_clock **)v62;
      *v40 = v65;
      v41 = v40[1];
      v42 = v41;
      v21 = &v24[v41];
      v23 = v42 + 1;
    }
  }
LABEL_16:
  v80 = v24;
  sub_41C800(&v83, v79);
  v28 = *(_QWORD *)v77;
  *(_QWORD *)v77 = v83.m128i_i64[0];
  sub_3FCDF0(v28, v83.m128i_i64[1]);
  *(_QWORD *)v76 = v14;
  *(_QWORD *)v72 = 0;
  sub_406070(a1, *(_QWORD *)v77, &v75, v72, v67 == 0);
  v29 = *(_QWORD *)(a1 + 8);
  v30 = *(_QWORD *)v76;
  v60 = v72[0];
  sub_1584DD0(&v83, v29, 0);
  v87 = 0;
  v83.m128i_i64[0] = (__int64)&off_1C4CA60;
  v86[14] = (__int64)v100;
  v88 = 0;
  sub_1584DD0(v89, v29, 0);
  v89[18] = 0;
  v90 = 0;
  v89[0] = &off_1C61DB8;
  sub_1584DD0(&v91, v29, 0);
  v94 = v29;
  v96 = v29;
  v98 = v29;
  v91 = &off_1C61DE0;
  v92 = 0;
  v93 = 0;
  v95 = 0;
  v97 = 0;
  v99 = 0;
  v83.m128i_i64[0] = (__int64)&off_1C4CA80;
  v100[8] = 0;
  if ( v30 )
    v32 = *(_DWORD *)(v30 - 4);
  else
    v32 = 0;
  sub_157BE40((int)v81, (int)&v83, v77[0], v32, v30, v31, v55, (__int64)&v75, (int)v73, v60, (int)v79, v66, v69, v81);
  v83.m128i_i64[0] = (__int64)&off_1C4CA80;
  sub_267D20(&v83);
  sub_15EEF60(*(_QWORD *)v81);
  sub_41C800(&v83, v58);
  v33 = *(_QWORD *)v77;
  *(_QWORD *)v77 = v83.m128i_i64[0];
  sub_3FCDF0(v33, v83.m128i_i64[1]);
  sub_2FCDE0(v58);
  sub_3FCDF0(*(__int64 *)v81, v82);
  sub_2334C0(v64);
  v34 = *(_QWORD *)(a1 + 8);
  v83.m128i_i64[0] = 0;
  sub_14B7810((int)v64, v34, (int)&v83, v35, v36, v37, v56);
  sub_18572D0(&v83);
  sub_14B9B80(v64, v77);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 688LL) )
  {
    sub_D03850(v77);
    sub_14B9B80(v64, v77);
  }
  if ( v68 && (*(_WORD *)(*(_QWORD *)v77 + 4LL) || (*(_BYTE *)(*(_QWORD *)v77 + 30LL) & 1) == 0) )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v83);
    std::operator<<<std::char_traits<char>>();
    sub_62AAE0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL), &v84, 0);
    v8 = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(ptr, &v85);
    *v8 = (char *)off_1C63128;
    sub_2333C0(v8 + 1, ptr);
    sub_233E40((__int64)ptr);
    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v43 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v43 + 864) != *(_QWORD *)v77 )
  {
    v83 = (__m128i)a3;
    v84 = v43;
    v85 = 0;
    v86[0] = v43;
    v86[1] = 0;
    v86[2] = 0;
    v86[3] = v43;
    v44 = sub_410F40(a1 + 64, &v83, a4, a5, a6);
    sub_2B4F40(v86);
    sub_3FCDF0(0, v43);
    v45 = v44->m128i_i64[1];
    if ( v45 != *(_QWORD *)v77 )
    {
      sub_3FCDF0(v45, v44[1].m128i_i64[0]);
      v46 = *(_QWORD *)v77;
      v44->m128i_i64[1] = *(_QWORD *)v77;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
    }
    v47 = v44[1].m128i_i64[1];
    if ( v47 )
    {
      *(_DWORD *)(v47 - 4) = 0;
      if ( *(_QWORD *)v61 && *(_DWORD *)(*(_QWORD *)v61 - 4LL) )
      {
        v48 = *(_QWORD **)v61;
        v49 = (unsigned int **)&v44[1].m128i_i64[1];
        for ( j = 0; ; v48 = (_QWORD *)(*(_QWORD *)v61 + 8LL * j) )
        {
          v54 = *(_DWORD *)(v47 - 4);
          if ( v54 == *(_DWORD *)(v47 - 8) )
          {
LABEL_44:
            sub_3A6B20(v49);
            v47 = v44[1].m128i_i64[1];
            v54 = *(_DWORD *)(v47 - 4);
          }
          ++j;
          *(_QWORD *)(v47 + 8LL * v54) = *v48;
          *(_DWORD *)(v47 - 4) = v54 + 1;
          if ( j >= *(_DWORD *)(*(_QWORD *)v61 - 4LL) )
            break;
        }
      }
    }
    else
    {
      v48 = *(_QWORD **)v61;
      if ( *(_QWORD *)v61 && *(_DWORD *)(*(_QWORD *)v61 - 4LL) )
      {
        v49 = (unsigned int **)&v44[1].m128i_i64[1];
        j = 0;
        goto LABEL_44;
      }
    }
    m128i_i64 = (__int64)v44[2].m128i_i64;
    sub_41D160(m128i_i64);
    sub_3EE030(m128i_i64, (__int64)v57);
  }
  sub_14B63F0(v64);
  sub_3FCDF0(*(__int64 *)v77, v78);
  if ( *(_QWORD *)v61 )
    sub_186B220((void *)(*(_QWORD *)v61 - 8LL));
  sub_2B4F40(v57);
  result = sub_2334C0(v58);
  if ( *(_BYTE *)(a1 + 368) )
    return sub_3FCC40(v70);
  return result;
}

