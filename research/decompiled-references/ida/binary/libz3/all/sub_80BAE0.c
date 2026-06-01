char *__fastcall sub_80BAE0(__int64 a1, unsigned int ***a2, int a3, char *a4)
{
  char **exception; // rbx
  char **v5; // rbp
  unsigned int **v7; // r12
  _DWORD *v8; // rax
  unsigned int *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  _QWORD *v12; // r14
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rbx
  int *v21; // rax
  unsigned int v22; // ebp
  void *v23; // r15
  __int64 v24; // rbx
  unsigned int v25; // ebp
  _QWORD *v26; // rcx
  __int64 v27; // rbp
  __int64 *v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  void *v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rdi
  void (__fastcall ***v35)(_QWORD); // rbx
  void *v36; // rbx
  void *v37; // rbx
  char *result; // rax
  __int64 v39; // r13
  _QWORD *v40; // rbx
  unsigned int v41; // r14d
  unsigned int v42; // ebp
  __int64 v43; // r13
  unsigned int ***v44; // rbx
  unsigned int **v45; // rsi
  __int64 v46; // rdi
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int v49; // r15d
  unsigned int *v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned int v54; // edx
  size_t v55; // rsi
  unsigned int v56; // r15d
  unsigned int *v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  unsigned int v64; // [rsp+18h] [rbp-100h]
  unsigned int v65; // [rsp+28h] [rbp-F0h]
  _QWORD *v66; // [rsp+28h] [rbp-F0h]
  void *ptr; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v68; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v69; // [rsp+48h] [rbp-D0h]
  _QWORD v70[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD v71[2]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v72[16]; // [rsp+70h] [rbp-A8h] BYREF
  char v73[16]; // [rsp+80h] [rbp-98h] BYREF
  int v74; // [rsp+90h] [rbp-88h] BYREF
  char v75; // [rsp+94h] [rbp-84h]
  __int64 v76; // [rsp+98h] [rbp-80h]
  int v77; // [rsp+A0h] [rbp-78h] BYREF
  char v78; // [rsp+A4h] [rbp-74h]
  __int64 v79; // [rsp+A8h] [rbp-70h]
  __int64 v80[2]; // [rsp+B0h] [rbp-68h] BYREF
  char v81[88]; // [rsp+C0h] [rbp-58h] BYREF

  v7 = *a2;
  if ( !*((_WORD *)*a2 + 2) )
  {
    v8 = *((_DWORD **)v7[2] + 3);
    if ( v8 )
    {
      if ( *v8 == *(_DWORD *)(a1 + 136) && !v8[1] )
      {
        v39 = **a2[8];
        result = a4;
        v40 = *((_QWORD **)a4 + 1);
        v41 = v39 + 1;
        if ( v40 )
        {
          v42 = *((_DWORD *)v40 - 1);
          if ( v42 >= v41 )
            goto LABEL_33;
        }
        else
        {
          if ( (_DWORD)v39 == -1 )
          {
LABEL_33:
            v43 = v39;
            ++*((_DWORD *)v7 + 2);
            v44 = (unsigned int ***)&v40[v43];
            v45 = *v44;
            if ( *v44 )
            {
              result = a4;
              v46 = *(_QWORD *)a4;
              v31 = (*((_DWORD *)v45 + 2))-- == 1;
              if ( v31 )
              {
                sub_15D7BC0(v46, v45);
                result = a4;
                v44 = (unsigned int ***)(v43 * 8 + *((_QWORD *)a4 + 1));
              }
            }
            *v44 = v7;
            return result;
          }
          v42 = 0;
          v61 = (_QWORD *)sub_186B270(0x18u);
          v40 = v61 + 1;
          *v61 = 2;
          *((_QWORD *)a4 + 1) = v61 + 1;
        }
        while ( 1 )
        {
          v58 = *((_DWORD *)v40 - 2);
          if ( v58 >= v41 )
            break;
          v54 = (3 * v58 + 1) >> 1;
          v55 = 8 * v54 + 8;
          v56 = v54;
          if ( 8 * v58 + 8 >= (unsigned int)v55 || v58 >= v54 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v80, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v80);
            sub_233E40((__int64)v80);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (unsigned int *)sub_186B300(v40 - 1, v55);
          v40 = v57 + 2;
          *v57 = v56;
          *((_QWORD *)a4 + 1) = v57 + 2;
        }
        *((_DWORD *)v40 - 1) = v41;
        result = (char *)(8LL * v42);
        v59 = 8LL * v41;
        if ( result != (char *)v59 )
          result = (char *)memset(&result[(_QWORD)v40], 0, v59 - (_QWORD)result);
        goto LABEL_33;
      }
    }
  }
  v70[0] = 0;
  v70[1] = 0;
  v71[0] = 1;
  v71[1] = 0;
  v9 = *(unsigned int **)(*(_QWORD *)(sub_15D1F10(v7) + 24) + 8LL);
  if ( *((_BYTE *)v9 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  sub_17F6290(v72, *v9);
  v10 = *(_QWORD *)(a1 + 280);
  if ( v10 )
  {
    v11 = *(unsigned int *)v7;
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v11);
  }
  v12 = *(_QWORD **)(a1 + 376);
  ptr = nullptr;
  (*(void (__fastcall **)(_QWORD *, void **))(*v12 + 32LL))(v12, &ptr);
  v13 = ptr;
  if ( ptr )
  {
    v14 = v12[7];
    if ( v14 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v14 + 32LL))(v12[7], &ptr);
      v13 = ptr;
    }
  }
  v15 = *(_QWORD *)(a1 + 128);
  v16 = v10;
  v68 = 0;
  v69 = v15;
  if ( !(unsigned __int8)sub_1373520(v13, v10, &v68, 1)
    || (v16 = v68, v13 = (void *)(a1 + 160), !(unsigned __int8)sub_1666AE0(a1 + 160, v68, v70, v80)) )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 112) + 24LL);
    v18 = sub_180B150(v13, v16);
    sub_11B7C70(v17, v18);
    v19 = sub_180B150(v17, v18);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1606360(v80, v10, *(_QWORD *)(a1 + 128), 0, 0, 0);
    v20 = sub_160E8B0(v19, v80);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_160EBE0(v20, &v68);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_18572D0(v81);
    sub_1872CE0("");
    sub_1873130(114, 478);
  }
  v21 = *(int **)(*(_QWORD *)(sub_15D1F10(v7) + 24) + 8LL);
  if ( *((_BYTE *)v21 + 8) )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  v22 = *v21;
  v75 &= 0xFCu;
  v23 = qword_1C7F2C0;
  v78 &= 0xFCu;
  v74 = 0;
  v76 = 0;
  v77 = 1;
  v79 = 0;
  sub_1832AB0(qword_1C7F2C0, v70, v72, &v74);
  sub_182CBA0(v23, &v77);
  v78 &= ~1u;
  v77 = 1;
  v24 = sub_1674520(a1 + 136, &v74, v22);
  v64 = **a2[8];
  v25 = v64 + 1;
  v26 = *((_QWORD **)a4 + 1);
  if ( !v26 )
  {
    if ( v64 == -1 )
      goto LABEL_17;
    v60 = (_QWORD *)sub_186B270(0x18u);
    v26 = v60 + 1;
    *v60 = 2;
    v65 = 0;
    *((_QWORD *)a4 + 1) = v60 + 1;
LABEL_40:
    while ( 1 )
    {
      v51 = *((_DWORD *)v26 - 2);
      if ( v51 >= v25 )
        break;
      v47 = (3 * v51 + 1) >> 1;
      v48 = 8 * v47 + 8;
      v49 = v47;
      if ( 8 * v51 + 8 >= (unsigned int)v48 || v51 >= v47 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v80, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v80);
        sub_233E40((__int64)v80);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v50 = (unsigned int *)sub_186B300(v26 - 1, v48);
      v26 = v50 + 2;
      *v50 = v49;
      *((_QWORD *)a4 + 1) = v50 + 2;
    }
    *((_DWORD *)v26 - 1) = v25;
    v52 = 8LL * v25;
    v53 = 8LL * v65;
    if ( v53 != v52 )
    {
      v66 = v26;
      memset(&v26[(unsigned __int64)v53 / 8], 0, v52 - v53);
      v26 = v66;
    }
    goto LABEL_17;
  }
  v65 = *((_DWORD *)v26 - 1);
  if ( v65 < v25 )
    goto LABEL_40;
LABEL_17:
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  v27 = v64;
  v28 = &v26[v27];
  v29 = *v28;
  if ( *v28 )
  {
    v30 = *(_QWORD *)a4;
    v31 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v31 )
    {
      sub_15D7BC0(v30, v29);
      v28 = (__int64 *)(v27 * 8 + *((_QWORD *)a4 + 1));
    }
  }
  *v28 = v24;
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v74);
  sub_182CBA0(v32, &v77);
  v33 = v68;
  if ( v68 )
  {
    v34 = v69;
    v31 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v31 )
      sub_15D7BC0(v34, v33);
  }
  v35 = (void (__fastcall ***)(_QWORD))ptr;
  if ( ptr )
  {
    v31 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v31 )
    {
      (**v35)(v35);
      sub_186B220(v35);
    }
  }
  v36 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v72);
  sub_182CBA0(v36, v73);
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v70);
  return (char *)sub_182CBA0(v37, v71);
}

