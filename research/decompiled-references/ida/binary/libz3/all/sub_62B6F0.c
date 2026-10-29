__int64 __fastcall sub_62B6F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rdi
  _QWORD *exception; // rax
  _QWORD *v10; // r13
  _BYTE *v11; // rax
  size_t v12; // rax
  size_t v13; // rbx
  _QWORD *v14; // r15
  _QWORD *v15; // rdx
  size_t v16; // rcx
  unsigned __int64 v17; // rdi
  _QWORD *v18; // rax
  unsigned int v19; // eax
  size_t v20; // rbx
  void *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  unsigned __int64 v24; // rsi
  char *v25; // rdx
  char *v26; // r14
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rdi
  size_t v31; // r15
  unsigned __int64 v32; // rdi
  char **v33; // r13
  __int64 v34; // [rsp+0h] [rbp-1F8h]
  _QWORD *v35; // [rsp+0h] [rbp-1F8h]
  void *v36; // [rsp+8h] [rbp-1F0h]
  void *v37; // [rsp+10h] [rbp-1E8h] BYREF
  size_t v38; // [rsp+18h] [rbp-1E0h]
  _QWORD dest[4]; // [rsp+20h] [rbp-1D8h] BYREF
  _OWORD v40[2]; // [rsp+40h] [rbp-1B8h] BYREF
  void *src[2]; // [rsp+60h] [rbp-198h]
  __int128 v42; // [rsp+70h] [rbp-188h]
  char v43[8]; // [rsp+80h] [rbp-178h] BYREF
  int v44; // [rsp+88h] [rbp-170h]
  void *v45; // [rsp+90h] [rbp-168h]
  size_t n; // [rsp+98h] [rbp-160h]
  char v47; // [rsp+A0h] [rbp-158h] BYREF
  _QWORD v48[28]; // [rsp+B0h] [rbp-148h] BYREF
  __int16 v49; // [rsp+190h] [rbp-68h]
  __int128 v50; // [rsp+198h] [rbp-60h]
  __int128 v51; // [rsp+1A8h] [rbp-50h]

  v3 = a2;
  if ( *(_WORD *)(a2 + 4)
    || !sub_629E80(*(_QWORD **)(a1[1] + 2288LL), *(_DWORD *)(a1[1] + 2296LL), *(_QWORD *)(a2 + 16)) )
  {
    std::ios_base::ios_base((std::ios_base *)v48);
    v50 = 0;
    v51 = 0;
    v48[0] = (char *)&`vtable for'std::ios + 16;
    v49 = 0;
    v48[27] = 0;
    v7 = `VTT for'std::ostringstream[2];
    v8 = *(_QWORD *)(`VTT for'std::ostringstream[1] - 24LL);
    *(_QWORD *)&v40[0] = `VTT for'std::ostringstream[1];
    *(_QWORD *)((char *)v40 + v8) = v7;
    std::ios::init();
    v48[0] = (char *)&`vtable for'std::ostringstream + 64;
    v40[0] = _mm_unpacklo_epi64(
               (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
               (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
    v40[1] = 0;
    *(_OWORD *)src = 0;
    v42 = 0;
    std::locale::locale((std::locale *)v43);
    v44 = 16;
    v47 = 0;
    *((_QWORD *)&v40[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
    v45 = &v47;
    n = 0;
    std::ios::init();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(&v37, a2, *a1, 0, 0, 0);
    sub_160E8B0(v40, &v37);
    sub_18572D0(dest);
    exception = __cxa_allocate_exception(0x28u);
    v37 = dest;
    v10 = exception;
    v11 = (_BYTE *)v42;
    LOBYTE(dest[0]) = 0;
    v38 = 0;
    if ( (_QWORD)v42 )
    {
      if ( src[0] >= (void *)v42 )
        v11 = src[0];
      if ( !src[0] )
        v11 = (_BYTE *)v42;
      v12 = v11 - (char *)src[1];
      v13 = v12;
      if ( (v12 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_replace");
      if ( v12 > 0xF )
      {
        if ( v12 <= 0x1D )
        {
          v34 = 30;
          v17 = 31;
        }
        else
        {
          v34 = v12;
          v17 = v12 + 1;
          if ( (__int64)(v12 + 1) < 0 )
            std::__throw_bad_alloc();
        }
        v36 = src[1];
        v18 = (_QWORD *)operator new(v17);
        v14 = v18;
        if ( v36 )
          memcpy(v18, v36, v13);
        sub_233E40((__int64)&v37);
        v37 = v14;
        dest[0] = v34;
      }
      else if ( src[1] == dest )
      {
        std::string::_M_replace_cold();
        v14 = v37;
      }
      else
      {
        if ( v12 )
        {
          if ( v12 == 1 )
            LOBYTE(dest[0]) = *(_BYTE *)src[1];
          else
            memcpy(dest, src[1], v12);
        }
        v14 = dest;
      }
      v38 = v13;
      *((_BYTE *)v14 + v13) = 0;
LABEL_19:
      v15 = v10 + 3;
      v16 = v38;
      v10[1] = v10 + 3;
      *v10 = off_1C63128;
      if ( v37 == dest )
      {
        v19 = v16 + 1;
        if ( (unsigned int)(v16 + 1) >= 8 )
        {
          v10[3] = dest[0];
          *(_QWORD *)((char *)v15 + v19 - 8) = *(_QWORD *)((char *)&dest[-1] + v19);
          v24 = (unsigned __int64)(v10 + 4) & 0xFFFFFFFFFFFFFFF8LL;
          v25 = (char *)v15 - v24;
          v26 = (char *)((char *)dest - v25);
          v27 = ((_DWORD)v25 + v19) & 0xFFFFFFF8;
          if ( v27 >= 8 )
          {
            v28 = v27 & 0xFFFFFFF8;
            v29 = 0;
            do
            {
              v30 = v29;
              v29 += 8;
              *(_QWORD *)(v24 + v30) = *(_QWORD *)&v26[v30];
            }
            while ( v29 < v28 );
          }
        }
        else if ( (v19 & 4) != 0 )
        {
          *((_DWORD *)v10 + 6) = dest[0];
          *(_DWORD *)((char *)v15 + v19 - 4) = *(_DWORD *)((char *)&v38 + v19 + 4);
        }
        else if ( (_DWORD)v16 != -1 )
        {
          *((_BYTE *)v10 + 24) = dest[0];
          if ( (v19 & 2) != 0 )
            *(_WORD *)((char *)v15 + v19 - 2) = *(_WORD *)((char *)&v38 + v19 + 6);
        }
      }
      else
      {
        v10[1] = v37;
        v10[3] = dest[0];
      }
      v10[2] = v16;
      __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v20 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v31 = n;
        v32 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v31 = 30;
        v32 = 31;
      }
      v35 = (_QWORD *)operator new(v32);
      sub_233E40((__int64)&v37);
      v22 = v35;
      dest[0] = v31;
      v21 = v45;
      v37 = v35;
    }
    else
    {
      if ( !n )
      {
LABEL_38:
        v23 = dest;
LABEL_39:
        v38 = v20;
        *((_BYTE *)v23 + v20) = 0;
        goto LABEL_19;
      }
      v21 = v45;
      v22 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v45;
        goto LABEL_38;
      }
    }
    memcpy(v22, v21, v20);
    v23 = v37;
    goto LABEL_39;
  }
  result = *(unsigned int *)(a2 + 24);
  v5 = a2 + 8 * result;
  if ( (_DWORD)result )
  {
    do
    {
      v6 = *(_QWORD *)(v3 + 32);
      if ( *(_WORD *)(v6 + 4) != 1 )
      {
        result = sub_15D26C0(*a1, *(_QWORD *)(v3 + 32));
        if ( !(_BYTE)result )
        {
          std::ostringstream::basic_ostringstream(v40);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(&v37, v6, *a1, 0, 0, 0);
          sub_160E8B0(v40, &v37);
          sub_18572D0(dest);
          v33 = (char **)__cxa_allocate_exception(0x28u);
          std::stringbuf::str(&v37, (char *)v40 + 8);
          *v33 = (char *)off_1C63128;
          sub_2333C0(v33 + 1, &v37);
          if ( v37 != dest )
            operator delete(v37, dest[0] + 1LL);
          __cxa_throw(v33, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
      }
      v3 += 8;
    }
    while ( v5 != v3 );
  }
  return result;
}

