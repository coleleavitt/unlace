__int64 __fastcall sub_316280(__int64 a1)
{
  char **exception; // r14
  char **v2; // r15
  char **v3; // r14
  int v5; // eax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  _QWORD *v8; // rbp
  unsigned int v9; // r12d
  __int64 v10; // rax
  int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int *v28; // rax
  __int64 v29; // rax
  int v30; // esi
  __int64 v31; // rax
  __int64 v32; // r12
  unsigned int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  bool v39; // zf
  __int64 v40; // r12
  __int64 v41; // rdi
  __int64 *v42; // r12
  unsigned __int64 v43; // r13
  __int64 v44; // rsi
  __int64 result; // rax
  __int64 *v46; // rbx
  unsigned __int64 v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rdi
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r12
  unsigned int v54; // r15d
  unsigned int v55; // eax
  unsigned int *v56; // rax
  __int64 v57; // rax
  int v58; // esi
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // [rsp+8h] [rbp-C0h]
  __int64 v62; // [rsp+10h] [rbp-B8h]
  __int64 v63; // [rsp+10h] [rbp-B8h]
  __int64 v64; // [rsp+10h] [rbp-B8h]
  __int64 v65; // [rsp+10h] [rbp-B8h]
  int v66; // [rsp+18h] [rbp-B0h]
  unsigned int v67; // [rsp+1Ch] [rbp-ACh]
  __int64 v68; // [rsp+30h] [rbp-98h] BYREF
  __int64 v69; // [rsp+38h] [rbp-90h]
  __int64 v70; // [rsp+40h] [rbp-88h]
  __int64 v71; // [rsp+50h] [rbp-78h]
  _QWORD v72[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v73[11]; // [rsp+70h] [rbp-58h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v6 = *(_QWORD *)(a1 + 8);
  v68 = 0;
  v66 = v5;
  v61 = v6;
  v69 = v6;
  v70 = v6;
  v71 = v6;
  if ( v5 )
  {
    v7 = nullptr;
    v8 = nullptr;
    v9 = 0;
    do
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(
        v72,
        *(_QWORD *)(a1 + 16),
        v9,
        a1 + 40);
      v19 = v72[0];
      if ( v7 )
      {
        v20 = *((_DWORD *)v7 - 1);
        if ( v20 == *((_DWORD *)v7 - 2) )
        {
          v21 = (3 * v20 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v73, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v67 = (3 * v20 + 1) >> 1;
          v62 = v72[0];
          v23 = (unsigned int *)sub_186B300(v7 - 1, v22);
          v7 = (__int64 *)(v23 + 2);
          v19 = v62;
          *v23 = v67;
          v24 = v23[1];
          v25 = v24;
          v12 = &v7[v24];
          v11 = v25 + 1;
        }
        else
        {
          v10 = v20;
          v11 = v20 + 1;
          v12 = &v7[v10];
        }
      }
      else
      {
        v65 = v72[0];
        v52 = (_QWORD *)sub_186B270(0x18u);
        *v52 = 2;
        v12 = v52 + 1;
        v19 = v65;
        v11 = 1;
        v7 = v12;
      }
      v13 = *(_QWORD *)(a1 + 16);
      *v12 = v19;
      *((_DWORD *)v7 - 1) = v11;
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*(_QWORD *)v13 + 24LL))(v72, v13, v9, a1 + 40);
      v14 = v72[0];
      if ( v8 )
      {
        v15 = *((_DWORD *)v8 - 1);
        if ( v15 == *((_DWORD *)v8 - 2) )
        {
          v26 = (3 * v15 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v15 + 8 >= v27 || v15 >= v26 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v73, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v63 = v72[0];
          v28 = (unsigned int *)sub_186B300(v8 - 1, v27);
          v8 = v28 + 2;
          v14 = v63;
          *v28 = (3 * v15 + 1) >> 1;
          v29 = v28[1];
          v30 = v29;
          v18 = &v8[v29];
          v17 = (unsigned int)(v30 + 1);
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v8[v16];
        }
      }
      else
      {
        v64 = v72[0];
        v51 = (_QWORD *)sub_186B270(0x18u);
        v8 = v51 + 1;
        v14 = v64;
        v17 = 1;
        *v51 = 2;
        v18 = v51 + 1;
      }
      *v18 = v14;
      ++v9;
      *((_DWORD *)v8 - 1) = v17;
    }
    while ( v66 != v9 );
    v31 = sub_15EC240(v61, v17);
    v32 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    v33 = *((_DWORD *)v7 - 1);
    if ( v33 == *((_DWORD *)v7 - 2) )
    {
      v54 = (3 * v33 + 1) >> 1;
      v55 = 8 * v54 + 8;
      if ( 8 * v33 + 8 >= v55 || v33 >= v54 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v73, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v73);
        sub_233E40((__int64)v73);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = (unsigned int *)sub_186B300(v7 - 1, v55);
      v7 = (__int64 *)(v56 + 2);
      *v56 = v54;
      v57 = v56[1];
      v58 = v57;
      v36 = &v7[v57];
      v35 = (unsigned int)(v58 + 1);
    }
    else
    {
      v34 = v33;
      v35 = v33 + 1;
      v36 = &v7[v34];
    }
  }
  else
  {
    v59 = sub_15EC240(v6, 0);
    v32 = v59;
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v60 = (_QWORD *)sub_186B270(0x18u);
    *v60 = 2;
    v36 = v60 + 1;
    v8 = nullptr;
    v35 = 1;
    v7 = v36;
  }
  *v36 = v32;
  *((_DWORD *)v7 - 1) = v35;
  v37 = sub_15EC1C0(v61, v35);
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v38 = v68;
  v68 = v37;
  if ( v38 )
  {
    v39 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v39 )
      sub_15D7BC0(v61, v38);
  }
  if ( (unsigned int)sub_180B130() > 9 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v40 = sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      v41 = sub_160EBE0(v40, &v68);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v41, "\n");
    }
    else
    {
      v53 = sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v53, &v68);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_E5EBF0(*(_QWORD *)(a1 + 24), v68);
  v42 = v7;
  v43 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
  if ( (unsigned __int64)v7 < v43 )
  {
    do
    {
      while ( 1 )
      {
        v44 = *v42;
        if ( *v42 )
        {
          v39 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v39 )
            break;
        }
        if ( (unsigned __int64)++v42 >= v43 )
          goto LABEL_34;
      }
      ++v42;
      sub_15D7BC0(v61, v44);
    }
    while ( (unsigned __int64)v42 < v43 );
  }
LABEL_34:
  result = sub_186B220(v7 - 1);
  if ( v8 )
  {
    v46 = v8;
    v47 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v47 )
    {
      do
      {
        while ( 1 )
        {
          v48 = *v46;
          if ( *v46 )
          {
            v39 = (*(_DWORD *)(v48 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( (unsigned __int64)++v46 >= v47 )
            goto LABEL_41;
        }
        ++v46;
        sub_15D7BC0(v61, v48);
      }
      while ( (unsigned __int64)v46 < v47 );
    }
LABEL_41:
    result = sub_186B220(v8 - 1);
  }
  v49 = v68;
  if ( v68 )
  {
    v50 = v69;
    v39 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v39 )
      return sub_15D7BC0(v50, v49);
  }
  return result;
}

