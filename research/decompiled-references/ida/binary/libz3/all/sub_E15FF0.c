__int64 __fastcall sub_E15FF0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _QWORD *v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 *v8; // rsi
  unsigned int v9; // r12d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  size_t v18; // r14
  _BYTE *v19; // r15
  _BYTE *v20; // rbx
  size_t v21; // r12
  unsigned __int64 v22; // rbp
  _BYTE *v23; // rdi
  _QWORD *v24; // rax
  char *v25; // rdi
  __m128i v26; // xmm0
  size_t v27; // rdx
  char **exception; // rbx
  __m128i v29; // xmm0
  size_t v30; // rdx
  signed __int64 v31; // rbp
  unsigned __int64 v32; // rdi
  _BYTE *v33; // rax
  size_t v34; // r9
  signed __int64 *v35; // r15
  _BYTE *v36; // rdi
  char **v37; // rbx
  _QWORD *v38; // [rsp+0h] [rbp-D8h]
  _QWORD *v39; // [rsp+8h] [rbp-D0h]
  int v40; // [rsp+10h] [rbp-C8h]
  size_t v41; // [rsp+18h] [rbp-C0h]
  size_t v42; // [rsp+18h] [rbp-C0h]
  void *dest; // [rsp+20h] [rbp-B8h] BYREF
  size_t v44[2]; // [rsp+28h] [rbp-B0h] BYREF
  int v45; // [rsp+38h] [rbp-A0h]
  void *src; // [rsp+40h] [rbp-98h] BYREF
  size_t n; // [rsp+48h] [rbp-90h]
  signed __int64 v48; // [rsp+50h] [rbp-88h] BYREF
  int v49; // [rsp+58h] [rbp-80h]
  char *v50; // [rsp+60h] [rbp-78h] BYREF
  int v51; // [rsp+68h] [rbp-70h]
  int v52; // [rsp+70h] [rbp-68h]
  int v53; // [rsp+78h] [rbp-60h]
  size_t *v54; // [rsp+80h] [rbp-58h] BYREF
  size_t v55[2]; // [rsp+88h] [rbp-50h] BYREF
  int v56; // [rsp+98h] [rbp-40h]
  int v57; // [rsp+A0h] [rbp-38h]
  void *v58; // [rsp+A8h] [rbp-30h]
  int v59; // [rsp+B0h] [rbp-28h]
  __int64 v60; // [rsp+B8h] [rbp-20h]

  if ( !sub_DF8AC0(a2, a3) )
  {
    sub_24ABB0((__int64 *)&dest, "unknown command '");
    sub_180CE20(
      (int)&src,
      (int)a3,
      v14,
      v15,
      v16,
      v17,
      (int)&src,
      &dest,
      v40,
      v41,
      (int)dest,
      v44[0],
      v44[1],
      v45,
      (int)src,
      n,
      v48,
      v49,
      (int)v50,
      v51,
      v52,
      v53,
      (int)v54,
      v55[0],
      v55[1],
      v56,
      v57,
      v58,
      v59,
      v60);
    v18 = v44[0];
    v19 = dest;
    if ( 0x7FFFFFFFFFFFFFFFLL - n < v44[0] )
      std::__throw_length_error("basic_string::_M_replace");
    v20 = src;
    v21 = v44[0] + n;
    if ( src == &v48 )
      v22 = 15;
    else
      v22 = v48;
    if ( v22 >= v21 )
    {
      if ( dest >= src && (char *)src + n >= dest )
      {
        std::string::_M_replace_cold();
      }
      else
      {
        if ( n )
        {
          if ( !v44[0] )
            goto LABEL_22;
          v23 = (char *)src + v44[0];
          if ( n == 1 )
            *v23 = *(_BYTE *)src;
          else
            memmove(v23, src, n);
        }
        else if ( !v44[0] )
        {
          goto LABEL_22;
        }
        if ( v18 != 1 )
        {
          memcpy(v20, v19, v18);
          v20 = src;
          goto LABEL_22;
        }
        *v20 = *v19;
      }
      v20 = src;
LABEL_22:
      n = v21;
      v20[v21] = 0;
      sub_2333C0(&v50, v38);
      v24 = (_QWORD *)sub_2B3190((__int64)&v50, "'");
      sub_2333C0((char **)&v54, v24);
      v25 = (char *)dest;
      if ( dest == &v44[1] )
      {
        if ( v54 != &v55[1] )
        {
          v29 = _mm_loadu_si128((const __m128i *)v55);
          dest = v54;
          *(__m128i *)v44 = v29;
LABEL_31:
          v54 = &v55[1];
          goto LABEL_26;
        }
      }
      else if ( v54 != &v55[1] )
      {
        v26 = _mm_loadu_si128((const __m128i *)v55);
        v27 = v44[1];
        dest = v54;
        *(__m128i *)v44 = v26;
        if ( v25 )
        {
          v54 = (size_t *)v25;
          v55[1] = v27;
          goto LABEL_26;
        }
        goto LABEL_31;
      }
      v30 = v55[0];
      if ( v55[0] )
      {
        if ( v55[0] == 1 )
          *(_BYTE *)dest = v55[1];
        else
          memcpy(dest, &v55[1], v55[0]);
        v25 = (char *)dest;
        v30 = v55[0];
      }
      v44[0] = v30;
      v25[v30] = 0;
LABEL_26:
      v55[0] = 0;
      *(_BYTE *)v54 = 0;
      sub_233E40((__int64)&v54);
      sub_233E40((__int64)&v50);
      sub_233E40((__int64)v38);
      exception = (char **)__cxa_allocate_exception(0x30u);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v39);
      exception[5] = (char *)-1LL;
      *exception = (char *)off_1C64218;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    if ( (v21 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v31 = 2 * v22;
    if ( v21 >= v31 )
    {
      v31 = v44[0] + n;
      v32 = v21 + 1;
      if ( (__int64)(v21 + 1) >= 0 )
      {
LABEL_40:
        v42 = n;
        v33 = (_BYTE *)operator new(v32);
        v34 = v42;
        v20 = v33;
        if ( v19 && v18 )
        {
          if ( v18 == 1 )
          {
            *v33 = *v19;
          }
          else
          {
            memcpy(v33, v19, v18);
            v34 = v42;
          }
        }
        v35 = (signed __int64 *)src;
        if ( v34 )
        {
          v36 = &v20[v18];
          if ( v34 == 1 )
            *v36 = *(_BYTE *)src;
          else
            memcpy(v36, src, v34);
        }
        if ( v35 != &v48 )
          operator delete(v35, v48 + 1);
        src = v20;
        v48 = v31;
        goto LABEL_22;
      }
    }
    else
    {
      v32 = v31 + 1;
      if ( v31 >= 0 )
        goto LABEL_40;
    }
    std::__throw_bad_alloc();
  }
  v4 = *(_QWORD **)(a1 + 24);
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v9 = (3 * v5 + 1) >> 1;
      v10 = 8 * v9 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
      {
        v37 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v54, "Overflow encountered when expanding vector");
        *v37 = (char *)off_1C63128;
        sub_2333C0(v37 + 1, &v54);
        sub_233E40((__int64)&v54);
        __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v4 - 1, v10);
      v12 = v11[1];
      v4 = v11 + 2;
      *v11 = v9;
      *(_QWORD *)(a1 + 24) = v11 + 2;
      v8 = (unsigned __int64 *)&v11[2 * v12 + 2];
      result = (unsigned int)(v12 + 1);
    }
    else
    {
      v6 = v5;
      result = v5 + 1;
      v8 = &v4[v6];
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    v4 = v13 + 1;
    *v13 = 2;
    result = 1;
    *(_QWORD *)(a1 + 24) = v4;
    v8 = v4;
  }
  *v8 = *a3;
  *((_DWORD *)v4 - 1) = result;
  return result;
}

