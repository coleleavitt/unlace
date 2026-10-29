__int64 __fastcall sub_E16520(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rax
  char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  char **v8; // rbp
  unsigned int v9; // r15d
  char *v10; // rax
  char *v11; // rcx
  char *v12; // r12
  size_t v13; // rdx
  char *v14; // r14
  char *v15; // r15
  __int64 v16; // rsi
  void *v17; // rdi
  bool v18; // zf
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  __int64 (__fastcall *v24)(__int64); // rcx
  __int64 (__fastcall *v25)(__int64); // rax
  char *v26; // rsi
  __int64 (__fastcall *v27)(__int64); // rax
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64); // rax
  std::ostream *v30; // rbx
  _BYTE *v31; // rbp
  char v32; // si
  std::ostream *v33; // rax
  __int64 result; // rax
  void (__fastcall ***v35)(_QWORD); // rbx
  char *v36; // r14
  __int64 (__fastcall *v37)(__int64, unsigned int); // rax
  _QWORD *exception; // rbp
  char **v39; // [rsp+0h] [rbp-A8h]
  int v40[2]; // [rsp+8h] [rbp-A0h]
  int v41[2]; // [rsp+10h] [rbp-98h]
  __int64 *v42; // [rsp+18h] [rbp-90h]
  char v43; // [rsp+20h] [rbp-88h]
  int v44[2]; // [rsp+20h] [rbp-88h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  int v46; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+38h] [rbp-70h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  void *v49; // [rsp+48h] [rbp-60h]
  void *v50[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v51; // [rsp+60h] [rbp-48h] BYREF

  ptr = nullptr;
  v43 = sub_E02DB0(a2, (__int64 *****)&ptr);
  if ( !v43 || !*(_QWORD *)(a2 + 872) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "model is not available");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v3 != sub_305010 )
    v3(a2);
  v4 = "(";
  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(_QWORD *)(a2 + 696);
  v45 = v5 + 24LL * *(unsigned int *)(a2 + 704);
  v6 = v45;
  if ( v45 != v5 )
  {
    while ( 1 )
    {
      v7 = v5;
      if ( *(_DWORD *)(v5 + 4) == 2 )
        break;
      v5 += 24;
      if ( v45 == v5 )
        goto LABEL_50;
    }
    if ( v45 != v5 )
    {
      while ( 1 )
      {
        *(_QWORD *)v41 = v7 + 8;
        v8 = **(char ****)(v7 + 16);
        if ( v8 )
        {
          v39 = &v8[2 * *((unsigned int *)v8 - 1)];
          if ( v39 != v8 )
            break;
        }
LABEL_45:
        v6 = v45;
        v28 = v7 + 24;
        if ( v45 != v7 + 24 )
        {
          while ( 1 )
          {
            v7 = v28;
            if ( *(_DWORD *)(v28 + 4) == 2 )
              break;
            v28 += 24;
            if ( v45 == v28 )
              goto LABEL_50;
          }
          if ( v28 != v45 )
            continue;
        }
        goto LABEL_50;
      }
      v42 = &v48;
      while ( 1 )
      {
        v12 = *v8;
        if ( *v8 )
          break;
        v14 = v8[1];
LABEL_22:
        sub_DFBCB0(a2);
        v4 = v14;
        if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a2 + 296), v14) )
        {
          v15 = (char *)ptr + 128;
          LOBYTE(v40[0]) = sub_13608A0((char *)ptr + 128);
          sub_1360B80(v15, 1);
          sub_1374250(v42, ptr, v14);
          sub_DFBCB0(a2);
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 296) + 856LL) == v48
            || (sub_DFBCB0(a2), v16 = v48, *(_QWORD *)(*(_QWORD *)(a2 + 296) + 864LL) == v48) )
          {
            if ( !v43 )
            {
              v19 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
              if ( v19 != sub_305010 )
                v19(a2);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v20 != sub_305010 )
              v20(a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            v21 = (unsigned int)sub_17E8F70(*(_QWORD *)v41);
            v24 = sub_305010;
            v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( (_BYTE)v21 )
            {
              if ( v25 == sub_305010 )
                *(_QWORD *)v44 = *(_QWORD *)(a2 + 408);
              else
                v44[0] = ((__int64 (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v25)(
                           a2,
                           "(",
                           v21,
                           sub_305010);
              sub_17E8F90(
                (int)v50,
                v41[0],
                v21,
                (int)v24,
                v22,
                v23,
                (int)v39,
                v40[0],
                v41[0],
                (int)v42,
                v44[0],
                v45,
                v46,
                (int)ptr,
                v48,
                v49,
                (int)v50[0],
                (__int64)v50[1]);
              v26 = (char *)v50[0];
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v50[0] != &v51 )
              {
                v26 = (char *)(v51 + 1);
                operator delete(v50[0], v51 + 1);
              }
            }
            else
            {
              if ( v25 != sub_305010 )
                ((void (__fastcall *)(__int64, char *, __int64, __int64 (__fastcall *)(__int64)))v25)(
                  a2,
                  "(",
                  v21,
                  sub_305010);
              v36 = *(char **)(v7 + 8);
              if ( ((unsigned __int8)v36 & 7) != 0 )
              {
                std::__ostream_insert<char,std::char_traits<char>>();
                v26 = (char *)((unsigned __int64)v36 >> 3);
                std::ostream::operator<<();
              }
              else
              {
                if ( v36 )
                {
                  strlen(*(const char **)(v7 + 8));
                  v26 = v36;
                }
                else
                {
                  v26 = "null";
                }
                std::__ostream_insert<char,std::char_traits<char>>();
              }
            }
            v27 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v27 != sub_305010 )
              ((void (__fastcall *)(__int64, char *))v27)(a2, v26);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_DFBCB0(a2);
            std::__ostream_insert<char,std::char_traits<char>>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v43 = 0;
            v16 = v48;
          }
          if ( v16 )
          {
            v17 = v49;
            v18 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v18 )
              sub_15D7BC0(v17, v16);
          }
          v4 = (char *)LOBYTE(v40[0]);
          sub_1360B80(v15, LOBYTE(v40[0]));
        }
        if ( !v12 )
          goto LABEL_19;
        v11 = v12 - 8;
LABEL_18:
        sub_186B220(v11);
LABEL_19:
        v8 += 2;
        if ( v39 == v8 )
          goto LABEL_45;
      }
      v9 = *((_DWORD *)v12 - 1);
      v40[0] = *((_DWORD *)v12 - 2);
      v10 = (char *)sub_186B270(8LL * (unsigned int)v40[0] + 8);
      v4 = *v8;
      v11 = v10;
      v12 = v10 + 8;
      *(_QWORD *)v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40[0]), _mm_cvtsi32_si128(v9)).m128i_u64[0];
      if ( v4 )
      {
        v13 = 8LL * *((unsigned int *)v4 - 1);
        if ( v13 <= 8 )
        {
          v14 = v8[1];
          if ( v13 != 8 )
          {
LABEL_17:
            if ( v9 )
              goto LABEL_18;
            goto LABEL_22;
          }
          *((_QWORD *)v10 + 1) = *(_QWORD *)v4;
        }
        else
        {
          *(_QWORD *)v40 = v10;
          memmove(v10 + 8, v4, v13);
          v11 = *(char **)v40;
        }
      }
      v14 = v8[1];
      goto LABEL_17;
    }
  }
LABEL_50:
  v29 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
  if ( v29 == sub_305010 )
    v30 = *(std::ostream **)(a2 + 408);
  else
    v30 = (std::ostream *)((__int64 (__fastcall *)(__int64, char *, __int64))v29)(a2, v4, v6);
  std::__ostream_insert<char,std::char_traits<char>>();
  v31 = *(_BYTE **)((char *)v30 + *(_QWORD *)(*(_QWORD *)v30 - 24LL) + 240);
  if ( !v31 )
    std::__throw_bad_cast();
  if ( v31[56] )
  {
    v32 = v31[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v32 = 10;
    v37 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v31 + 48LL);
    if ( v37 != sub_26BE90 )
      v32 = v37((__int64)v31, 10u);
  }
  v33 = (std::ostream *)std::ostream::put(v30, v32);
  result = std::ostream::flush(v33);
  v35 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v18 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v18 )
    {
      (**v35)(v35);
      return sub_186B220(v35);
    }
  }
  return result;
}

