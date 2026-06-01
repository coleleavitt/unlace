__int64 __fastcall sub_7B86A0(unsigned int *a1, size_t a2, __m128i a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  char **v5; // rbp
  __int64 v6; // rdx
  char **v7; // rbp
  __int64 v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // eax
  _DWORD *v13; // rdi
  unsigned int v14; // r12d
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 result; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  char v28; // cl
  int v29; // eax
  size_t v30; // rsi
  _QWORD *v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 *v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // r12d
  unsigned int *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // [rsp+8h] [rbp-50h] BYREF
  __int64 v43[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = a2;
  (*(void (__fastcall **)(__int64 *))(*(_QWORD *)a2 + 72LL))(&v42);
  if ( *(_BYTE *)(a2 + 48) )
  {
    v11 = *((_QWORD *)a1 + 94);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 - 4);
      if ( v12 != *(_DWORD *)(v11 - 8) )
      {
        *(_QWORD *)(v11 + 8LL * v12) = a2;
        *(_DWORD *)(v11 - 4) = v12 + 1;
        v13 = *((_DWORD **)a1 + 3);
        v14 = *(_DWORD *)(a2 + 16);
        if ( v13 )
          goto LABEL_5;
        goto LABEL_35;
      }
      v22 = (3 * v12 + 1) >> 1;
      v30 = 8 * v22 + 8;
      if ( 8 * v12 + 8 >= (unsigned int)v30 || v12 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v43, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300((void *)(v11 - 8), v30);
      v25 = v24 + 2;
      *((_QWORD *)a1 + 94) = v24 + 2;
LABEL_32:
      v26 = v24[1];
      *v24 = v22;
      a2 = (size_t)&v25[v26];
      v27 = v26;
      v28 = *(_BYTE *)(v10 + 48);
      v29 = v27 + 1;
      goto LABEL_33;
    }
    v37 = (_QWORD *)sub_186B270(0x18u);
    v25 = v37 + 1;
    *v37 = 2;
    v28 = *(_BYTE *)(a2 + 48);
    v29 = 1;
    *((_QWORD *)a1 + 94) = v25;
    a2 = (size_t)v25;
  }
  else
  {
    v15 = *((_QWORD *)a1 + 93);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 - 4);
      if ( v16 != *(_DWORD *)(v15 - 8) )
      {
        *(_QWORD *)(v15 + 8LL * v16) = a2;
        *(_DWORD *)(v15 - 4) = v16 + 1;
        v14 = *(_DWORD *)(a2 + 16);
        goto LABEL_12;
      }
      v22 = (3 * v16 + 1) >> 1;
      v23 = 8 * v22 + 8;
      if ( 8 * v16 + 8 >= (unsigned int)v23 || v16 >= v22 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v43, "Overflow encountered when expanding vector", v6);
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300((void *)(v15 - 8), v23);
      v25 = v24 + 2;
      *((_QWORD *)a1 + 93) = v24 + 2;
      goto LABEL_32;
    }
    v36 = (_QWORD *)sub_186B270(0x18u);
    v25 = v36 + 1;
    *v36 = 2;
    v28 = *(_BYTE *)(a2 + 48);
    v29 = 1;
    *((_QWORD *)a1 + 93) = v25;
    a2 = (size_t)v25;
  }
LABEL_33:
  *(_QWORD *)a2 = v10;
  *((_DWORD *)v25 - 1) = v29;
  v14 = *(_DWORD *)(v10 + 16);
  if ( !v28 )
  {
LABEL_12:
    if ( v14 != -2 )
    {
      v13 = *((_DWORD **)a1 + 3);
      if ( !v13 )
      {
LABEL_15:
        sub_7E4540(v10, a1 + 20, v14);
        a2 = (size_t)(a1 + 20);
        sub_7E4540(v10, a1 + 20, v14 ^ 1);
        goto LABEL_16;
      }
LABEL_14:
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, v14 >> 1);
      goto LABEL_15;
    }
LABEL_7:
    a2 = v10;
    sub_7AFDF0(a1, v10);
    if ( *(_DWORD *)(v10 + 8) == 1 )
    {
      a2 = sub_81AF20(v10);
      sub_7B09F0(a1, (unsigned int *)a2, -2, a3);
    }
    goto LABEL_16;
  }
  v13 = *((_DWORD **)a1 + 3);
  if ( !v13 )
  {
LABEL_35:
    if ( v14 != -2 )
      goto LABEL_15;
    goto LABEL_7;
  }
LABEL_5:
  if ( !v13[903] )
  {
    if ( v14 == -2 )
      goto LABEL_7;
    goto LABEL_14;
  }
  v31 = *((_QWORD **)a1 + 95);
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    if ( v32 == *((_DWORD *)v31 - 2) )
    {
      v38 = (3 * v32 + 1) >> 1;
      a2 = 8 * v38 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)a2 || v32 >= v38 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_113C8C(v43, "Overflow encountered when expanding vector", v8);
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v31 - 1, a2);
      v40 = v39[1];
      v31 = v39 + 2;
      *v39 = v38;
      *((_QWORD *)a1 + 95) = v39 + 2;
      LODWORD(v39) = v40;
      v35 = &v31[v40];
      v34 = (_DWORD)v39 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v31[v33];
    }
  }
  else
  {
    v41 = (_QWORD *)sub_186B270(0x18u);
    v31 = v41 + 1;
    *v41 = 2;
    v34 = 1;
    *((_QWORD *)a1 + 95) = v31;
    v35 = v31;
  }
  *v35 = v10;
  *((_DWORD *)v31 - 1) = v34;
LABEL_16:
  if ( !(unsigned __int8)sub_7E4620(v10) )
  {
    sub_180B130(v10);
    if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
    {
      sub_186A4C0(*(double *)a3.m128i_i64);
      v17 = sub_180B150(v10, a2);
      v18 = sub_7E42B0(v17, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v18, "\n");
    }
    else
    {
      v21 = sub_180B150(v10, a2);
      sub_7E42B0(v21, v10);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  if ( !(unsigned __int8)sub_7E4620(v10) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1411);
  }
  result = *((_QWORD *)a1 + 3);
  if ( result )
  {
    if ( *(_BYTE *)(result + 352) )
    {
      v20 = *(_QWORD *)(result + 1144);
      if ( v20 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_7E42B0(v20, v10);
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  if ( v42 )
    return sub_186B220((void *)(v42 - 8));
  return result;
}

