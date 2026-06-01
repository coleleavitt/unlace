__int64 __fastcall sub_6563A0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  __int32 v5; // r14d
  __m128i *v6; // rbx
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __m128i *v9; // rbp
  __int64 v10; // r10
  __m128i *v11; // rdi
  __m128i *v12; // rax
  __m128i *v13; // rcx
  int v14; // edx
  __int32 v15; // eax
  unsigned int v16; // ebx
  __m128i *v18; // rax
  int v19; // r8d
  __m128i *v20; // rdx
  const __m128i *v21; // r15
  __m128i *v22; // r11
  __int64 v23; // rax
  __m128i *v24; // rdx
  __m128i *v25; // rax
  __m128i v26; // xmm0
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  char **v32; // r12
  unsigned int v33; // ebp
  unsigned int v34; // ecx
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rdx
  char **exception; // rbx
  __int64 v39; // rdx
  size_t v40; // [rsp+10h] [rbp-208h]
  int v41; // [rsp+18h] [rbp-200h]
  _QWORD v42[4]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v43[2]; // [rsp+50h] [rbp-1C8h] BYREF
  char v44[8]; // [rsp+60h] [rbp-1B8h] BYREF
  char v45[432]; // [rsp+68h] [rbp-1B0h] BYREF

  v2 = a2;
  v4 = *(unsigned int *)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 60);
  if ( 3 * (int)v4 < (unsigned int)(4 * (v5 + *(_DWORD *)(a1 + 64))) )
  {
    v41 = 2 * v4;
    v40 = 24LL * (unsigned int)(2 * v4);
    v18 = (__m128i *)sub_186B270(v40);
    v19 = v41;
    v8 = v40;
    v6 = v18;
    v20 = (__m128i *)((char *)v18 + v40);
    if ( v41 )
    {
      do
      {
        v18->m128i_i64[0] = 0;
        v18 = (__m128i *)((char *)v18 + 24);
        v18[-1].m128i_i64[0] = 0;
      }
      while ( v18 != v20 );
    }
    v21 = *(const __m128i **)(a1 + 48);
    v7 = v41 - 1;
    v9 = (__m128i *)((char *)v6 + v40);
    v22 = (__m128i *)((char *)v21 + 24 * *(unsigned int *)(a1 + 56));
    if ( v21 != v22 )
    {
      do
      {
        while ( v21->m128i_i32[1] != 2 )
        {
          v21 = (const __m128i *)((char *)v21 + 24);
          if ( v22 == v21 )
            goto LABEL_41;
        }
        v23 = 24LL * (v21->m128i_i32[0] & v7);
        v24 = (__m128i *)((char *)v6 + v23);
        if ( v23 == v40 )
        {
LABEL_46:
          if ( v24 == v6 )
          {
LABEL_58:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = v6;
          while ( v25->m128i_i32[1] )
          {
            v25 = (__m128i *)((char *)v25 + 24);
            if ( v24 == v25 )
              goto LABEL_58;
          }
        }
        else
        {
          v25 = (__m128i *)((char *)v6 + v23);
          while ( v25->m128i_i32[1] )
          {
            v25 = (__m128i *)((char *)v25 + 24);
            if ( v9 == v25 )
              goto LABEL_46;
          }
        }
        v26 = _mm_loadu_si128(v21);
        v21 = (const __m128i *)((char *)v21 + 24);
        *v25 = v26;
        v25[1].m128i_i64[0] = v21[-1].m128i_i64[1];
      }
      while ( v22 != v21 );
LABEL_41:
      v22 = *(__m128i **)(a1 + 48);
    }
    if ( v22 )
    {
      sub_186B220(v22);
      v19 = v41;
      v8 = v40;
      v7 = v41 - 1;
    }
    *(_QWORD *)(a1 + 48) = v6;
    *(_DWORD *)(a1 + 56) = v19;
    *(_DWORD *)(a1 + 64) = 0;
    if ( a2 )
      goto LABEL_3;
  }
  else
  {
    v6 = *(__m128i **)(a1 + 48);
    v7 = v4 - 1;
    v8 = 24 * v4;
    v9 = (__m128i *)((char *)v6 + 24 * v4);
    if ( a2 )
    {
LABEL_3:
      if ( (a2 & 7) == 1 )
        a2 >>= 3;
      else
        LODWORD(a2) = *(_DWORD *)(a2 - 8);
      goto LABEL_5;
    }
  }
  LODWORD(a2) = -1640531495;
LABEL_5:
  v10 = (unsigned int)a2 & v7;
  v11 = (__m128i *)((char *)v6 + 24 * v10);
  if ( 24 * v10 != v8 )
  {
    v12 = (__m128i *)((char *)v6 + 24 * v10);
    v13 = nullptr;
    while ( 1 )
    {
      v14 = v12->m128i_i32[1];
      if ( v14 == 2 )
      {
        if ( (_DWORD)a2 == v12->m128i_i32[0] && v2 == v12->m128i_i64[1] )
        {
          v13 = v12;
          goto LABEL_26;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_24;
          v13 = v12;
          goto LABEL_25;
        }
        v13 = v12;
      }
      v12 = (__m128i *)((char *)v12 + 24);
      if ( v12 == v9 )
        goto LABEL_17;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_17:
    if ( v11 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v15 = v6->m128i_i32[1];
    if ( v15 != 2 )
      break;
    if ( (_DWORD)a2 == v6->m128i_i32[0] && v2 == v6->m128i_i64[1] )
    {
      v13 = v6;
      goto LABEL_26;
    }
LABEL_16:
    v6 = (__m128i *)((char *)v6 + 24);
  }
  if ( v15 )
  {
    v13 = v6;
    goto LABEL_16;
  }
  if ( v13 )
LABEL_24:
    --*(_DWORD *)(a1 + 64);
  else
    v13 = v6;
LABEL_25:
  v13->m128i_i64[1] = v2;
  v13[1].m128i_i32[0] = v5;
  v13->m128i_i32[1] = 2;
  v13->m128i_i32[0] = a2;
  ++*(_DWORD *)(a1 + 60);
LABEL_26:
  v16 = v13[1].m128i_u32[0];
  if ( v16 == v5 )
  {
    v27 = *(_QWORD **)(a1 + 72);
    if ( v27 )
    {
      v28 = *((_DWORD *)v27 - 1);
      if ( v28 == *((_DWORD *)v27 - 2) )
      {
        v33 = (3 * v28 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v28 + 8 >= v34 || v28 >= v33 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_104888(v43, "Overflow encountered when expanding vector", v39);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v43);
          sub_233E40((__int64)v43);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v27 - 1, v34);
        v36 = v35[1];
        v27 = v35 + 2;
        *v35 = v33;
        *(_QWORD *)(a1 + 72) = v35 + 2;
        LODWORD(v35) = v36;
        v31 = &v27[v36];
        v30 = (_DWORD)v35 + 1;
      }
      else
      {
        v29 = v28;
        v30 = v28 + 1;
        v31 = &v27[v29];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x18u);
      *v37 = 2;
      v30 = 1;
      v27 = v37 + 1;
      *(_QWORD *)(a1 + 72) = v27;
      v31 = v27;
    }
    *v31 = v2;
    *((_DWORD *)v27 - 1) = v30;
  }
  if ( *(_BYTE *)(a1 + 32) && (unsigned __int64)v16 >= *(_QWORD *)(a1 + 40) )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v43);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_39A600((__int64)v44, *(const char **)(*(_QWORD *)(a1 + 16) + 16LL));
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    v32 = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v42, v45);
    *v32 = (char *)off_1C63128;
    sub_2333C0(v32 + 1, v42);
    sub_233E40((__int64)v42);
    __cxa_throw(v32, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  return v16;
}

