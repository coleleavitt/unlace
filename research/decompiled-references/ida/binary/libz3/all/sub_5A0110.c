__int64 __fastcall sub_5A0110(__int64 a1, __int64 a2, std::ostream *a3)
{
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  void *v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64); // rdx
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // rbp
  void *v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64); // rdx
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rbp
  std::ostream *v21; // rdi
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  const char *v26; // rax
  void (__fastcall ***v27)(_QWORD); // rbp
  bool v28; // zf
  void (__fastcall ***v29)(_QWORD); // rbp
  __int64 v30; // [rsp+8h] [rbp-B0h]
  int v31; // [rsp+34h] [rbp-84h]
  __int64 v32; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+50h] [rbp-68h] BYREF
  __int64 v34; // [rsp+58h] [rbp-60h] BYREF
  void *v35; // [rsp+60h] [rbp-58h] BYREF
  void *v36; // [rsp+68h] [rbp-50h] BYREF
  void *v37; // [rsp+70h] [rbp-48h] BYREF
  void *ptr; // [rsp+78h] [rbp-40h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v5 )
      strlen(*(const char **)(a2 + 16));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 32LL) != 1 )
    return (*(__int64 (__fastcall **)(__int64, std::ostream *))(*(_QWORD *)a1 + 120LL))(a1, a3);
  v33 = 0;
  v7 = *(_QWORD *)(a1 + 8);
  v34 = 0;
  v30 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
    v31 = *(_DWORD *)(v8 - 4);
  else
    v31 = 0;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = 0xFFFFFFFFLL;
  if ( v9 )
    v10 = (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 104) + 200LL))(&v35);
  (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 104) + 208LL))(&v36);
  v32 = 8 * v10;
LABEL_13:
  v11 = v36;
  v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 40LL);
  if ( v12 == sub_4C9890 )
  {
    if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v35 + 16LL))() )
    {
LABEL_17:
      v14 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v35 + 24LL))(v35);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v33);
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL * *(unsigned int *)(v33 + v32)) + 32LL);
      (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v15 + 200LL))(&v37, v15);
      (*(void (__fastcall **)(void **, __int64))(*(_QWORD *)v15 + 208LL))(&ptr, v15);
      while ( 1 )
      {
        v16 = ptr;
        v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 40LL);
        if ( v17 == sub_4C9890 )
        {
          if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v37 + 16LL))() )
            goto LABEL_22;
          v18 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
        }
        else
        {
          v18 = v17((__int64)v37, (__int64)ptr);
        }
        if ( v18 )
        {
          v27 = (void (__fastcall ***)(_QWORD))ptr;
          if ( ptr )
          {
            v28 = (*((_DWORD *)ptr + 2))-- == 1;
            if ( v28 )
            {
              (**v27)(v27);
              sub_186B220(v27);
            }
          }
          v29 = (void (__fastcall ***)(_QWORD))v37;
          if ( v37 )
          {
            v28 = (*((_DWORD *)v37 + 2))-- == 1;
            if ( v28 )
            {
              (**v29)(v29);
              sub_186B220(v29);
            }
          }
          (*(void (__fastcall **)(void *))(*(_QWORD *)v35 + 32LL))(v35);
          goto LABEL_13;
        }
LABEL_22:
        v19 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v37 + 24LL))(v37);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v34);
        std::__ostream_insert<char,std::char_traits<char>>();
        v20 = 0;
        if ( v31 )
        {
          while ( 1 )
          {
            v22 = v20;
            if ( v20 )
            {
              if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
                std::__ostream_insert<char,std::char_traits<char>>();
              else
                std::ostream::put(a3, 44);
              v22 = v20;
              v23 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 4 * v20);
              if ( (_DWORD)v23 == -1 )
              {
LABEL_44:
                v24 = *(_QWORD *)(v34 + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 80) + 4 * v20));
                goto LABEL_32;
              }
            }
            else
            {
              v23 = **(unsigned int **)(a1 + 56);
              if ( (_DWORD)v23 == -1 )
                goto LABEL_44;
            }
            v24 = *(_QWORD *)(v33 + 8 * v23);
LABEL_32:
            v25 = *(_QWORD *)(a2 + 8 * v20 + 48);
            v26 = (const char *)sub_64DD10(v30, a2, v22);
            if ( ((unsigned __int8)v26 & 7) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            else
            {
              if ( v26 )
                strlen(v26);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
              std::__ostream_insert<char,std::char_traits<char>>();
            else
              std::ostream::put(a3, 61);
            sub_64B9F0(v30, v25, v24, a3);
            if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
              std::__ostream_insert<char,std::char_traits<char>>();
            else
              std::ostream::put(a3, 40);
            v21 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
            if ( *(_QWORD *)((char *)v21 + *(_QWORD *)(*(_QWORD *)v21 - 24LL) + 16) )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v31 == ++v20 )
                break;
            }
            else
            {
              std::ostream::put(v21, 41);
              if ( v31 == ++v20 )
                break;
            }
          }
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(void *, char *))(*(_QWORD *)v37 + 32LL))(v37, ")\n");
      }
    }
    v13 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v13 = v12((__int64)v35, (__int64)v36);
  }
  if ( !v13 )
    goto LABEL_17;
  sub_59FDF0((void (__fastcall ***)(_QWORD))v36);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v35);
  if ( v34 )
    sub_186B220((void *)(v34 - 8));
  result = v33;
  if ( v33 )
    return sub_186B220((void *)(v33 - 8));
  return result;
}

