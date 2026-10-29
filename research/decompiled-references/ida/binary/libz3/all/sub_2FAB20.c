__int64 __fastcall sub_2FAB20(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v4; // rax
  unsigned int *v5; // rbp
  int *v6; // r12
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // r15
  _QWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int *v15; // r14
  int *v16; // rbx
  void *v17; // r15
  int *v18; // rsi
  __int64 v20; // rax
  unsigned int *v21; // r14
  unsigned int v22; // r15d
  int *v23; // rdx
  char **v24; // rbx
  __int64 v25; // r13
  int v26; // eax
  unsigned int *v27; // [rsp+20h] [rbp-1F8h] BYREF
  int *v28; // [rsp+28h] [rbp-1F0h] BYREF
  int v29[2]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1E0h]
  _QWORD v31[2]; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-1C8h]
  __int64 v33; // [rsp+58h] [rbp-1C0h]
  __m128i v34; // [rsp+60h] [rbp-1B8h] BYREF
  char v35[16]; // [rsp+A0h] [rbp-178h] BYREF
  char v36[32]; // [rsp+B0h] [rbp-168h] BYREF
  char *v37; // [rsp+D0h] [rbp-148h] BYREF

  sub_2F7560(a2);
  v4 = *(_QWORD *)(a2 + 8);
  v30 = 0;
  *(_QWORD *)v29 = v4;
  sub_2FA440(a2, (__int64)v29);
  v5 = *(unsigned int **)(a2 + 608);
  if ( v5 )
  {
    if ( *(v5 - 1) > 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_2EB560(v34.m128i_i64, "only single objective weighted MaxSAT wcnf output is supported");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v34);
      sub_233E40((__int64)&v34);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    if ( *(v5 - 1) == 1 )
    {
      if ( *v5 != 2 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_2EB560(v34.m128i_i64, "only single objective weighted MaxSAT wcnf output is supported");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v34);
        sub_233E40((__int64)&v34);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v20 = *((_QWORD *)v5 + 4);
      v6 = nullptr;
      if ( v20 )
      {
        v21 = nullptr;
        v22 = 0;
        do
        {
          if ( v22 >= *(_DWORD *)(v20 - 4) )
            break;
          v31[0] = 0;
          v23 = (int *)(*((_QWORD *)v5 + 5) + 32LL * v22);
          v31[1] = 0;
          v32 = 1;
          v33 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v31, v23);
          if ( (v32 & 0x100000000LL) != 0
            || (_DWORD)v32 != 1
            || !(unsigned __int8)sub_182CFA0(qword_1C7F2C0, v31)
            || (unsigned __int64)sub_182D020(qword_1C7F2C0, v31) > 0xFFFFFFFF )
          {
            v24 = (char **)__cxa_allocate_exception(0x28u);
            sub_2EB560(v34.m128i_i64, "only single objective weighted MaxSAT wcnf output is supported");
            *v24 = (char *)off_1C63128;
            sub_2333C0(v24 + 1, &v34);
            sub_233E40((__int64)&v34);
            __cxa_throw(v24, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v25 = *(_QWORD *)(*((_QWORD *)v5 + 4) + 8LL * v22);
          if ( v21 )
          {
            v26 = *(v21 - 1);
            if ( v26 != *(v21 - 2) )
              continue;
          }
          v27 = v21;
          sub_23A6F0(&v27);
          v21 = v27;
          v26 = *(v27 - 1);
          v28 = v6;
          *(_QWORD *)&v21[2 * v26] = v25;
          *(v21 - 1) = v26 + 1;
          sub_2F0130(&v28, (int *)v31);
          v6 = v28;
          ++v22;
          sub_25A130((char *)v31);
          v20 = *((_QWORD *)v5 + 4);
        }
        while ( v20 );
        v5 = v21;
      }
      else
      {
        v5 = nullptr;
      }
    }
    else
    {
      v6 = nullptr;
      v5 = nullptr;
    }
  }
  else
  {
    v6 = nullptr;
  }
  std::ostringstream::basic_ostringstream(&v34);
  v7 = sub_68D490(*(_QWORD *)(a2 + 8), a2 + 288, 1);
  v8 = v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 48);
  sub_2EB700(*(void (****)(void))(a2 + 240));
  v9 = *(_QWORD **)(a2 + 216);
  *(_QWORD *)(a2 + 240) = v8;
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 != v10 )
    {
      v11 = v9;
      do
        sub_E5EBF0(v8, *v11++);
      while ( v10 != v11 );
      v8 = *(_QWORD *)(a2 + 240);
    }
  }
  if ( v5 )
    v12 = *(v5 - 1);
  else
    v12 = 0;
  sub_68D180(&v34, v8, v12, v5, v6);
  std::stringbuf::str(a1, &v34.m128i_u64[1]);
  v37 = (char *)&`vtable for'std::ostringstream + 64;
  v34 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  sub_233E40((__int64)v36);
  v34.m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v35);
  v13 = `VTT for'std::ostringstream[2];
  v34.m128i_i64[0] = `VTT for'std::ostringstream[1];
  *(__int64 *)((char *)v34.m128i_i64 + *(_QWORD *)(v34.m128i_i64[0] - 24)) = v13;
  v37 = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)&v37);
  if ( v6 )
  {
    v14 = (unsigned int)*(v6 - 1);
    if ( (_DWORD)v14 )
    {
      v15 = v6;
      v16 = &v6[8 * v14];
      do
      {
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v18 = v15 + 4;
        v15 += 8;
        sub_182CBA0(v17, v18);
      }
      while ( v15 != v16 );
    }
    sub_186B220(v6 - 2);
  }
  if ( v5 )
    sub_186B220(v5 - 2);
  sub_2334C0((__int64 *)v29);
  return a1;
}

