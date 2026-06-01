__int64 __fastcall sub_882C40(_QWORD *a1, _QWORD *a2, double a3)
{
  _QWORD *exception; // r15
  _QWORD *v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // r15
  _QWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 **v20; // r13
  unsigned int v21; // ebx
  unsigned int v22; // edx
  unsigned int v23; // esi
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 *v26; // r15
  unsigned int v27; // r14d
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 result; // rax
  __int64 **v31; // rbx
  __int64 **v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned int v36; // r9d
  _DWORD *v37; // r14
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 (*v43)(void); // rax
  __int64 v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // r12
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdi
  bool v53; // zf
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // r12
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned int v66; // [rsp+Ch] [rbp-74h]
  __int64 v67; // [rsp+10h] [rbp-70h]
  __int64 v68; // [rsp+10h] [rbp-70h]
  _QWORD *v70; // [rsp+30h] [rbp-50h] BYREF
  __int64 v71; // [rsp+38h] [rbp-48h]
  _QWORD v72[8]; // [rsp+40h] [rbp-40h] BYREF

  v13 = *((unsigned int *)a2 + 38);
  v14 = a2[22];
  v15 = 0;
  do
  {
    if ( (int)v15 + 1 >= (unsigned int)v13 )
    {
      result = *(_QWORD *)(v14 + 8 * v13 + 176);
      if ( *(_QWORD *)(result + 64) != a2[8] )
      {
        sub_1872CE0("");
        sub_1873130(114, 113);
      }
      return result;
    }
    v16 = a2[v15 + 23];
    v17 = *(_QWORD *)(*(_QWORD *)(v14 + 8 * v15++ + 184) + 64LL);
  }
  while ( *(_QWORD *)(v16 + 64) == v17 );
  v18 = *(_QWORD *)(v14 + 176);
  v19 = (_QWORD *)sub_186B270(0x18u);
  v19[1] = v18;
  v20 = (__int64 **)(v19 + 1);
  v21 = 1;
  *v19 = 0x100000002LL;
  v22 = 2;
  v23 = *((_DWORD *)a2 + 38);
  v24 = 1;
  if ( v23 > 1 )
  {
    do
    {
      v26 = (__int64 *)a2[v21 + 22];
      if ( v22 == v24 )
      {
        v27 = (3 * v22 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v28 || v22 >= v27 )
        {
          exception = __cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v70, "Overflow encountered when expanding vector");
          v4 = v70;
          exception[1] = exception + 3;
          v5 = v71;
          *exception = off_1C63128;
          if ( v4 == v72 )
          {
            qmemcpy(exception + 3, v72, (unsigned int)(v5 + 1));
          }
          else
          {
            v10 = v72[0];
            exception[1] = v4;
            exception[3] = v10;
          }
          exception[2] = v5;
          v71 = 0;
          v70 = v72;
          LOBYTE(v72[0]) = 0;
          sub_233E40((__int64)&v70);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v20 - 1, v28);
        *v29 = v27;
        v20 = (__int64 **)(v29 + 2);
        v22 = v27;
        v24 = v29[1];
        v23 = *((_DWORD *)a2 + 38);
      }
      v25 = v24;
      ++v21;
      ++v24;
      v20[v25] = v26;
      *((_DWORD *)v20 - 1) = v24;
    }
    while ( v21 < v23 );
    v63 = v24;
  }
  else
  {
    v63 = 1;
  }
  v31 = &v20[v63];
  if ( v31 == v20 )
  {
    v40 = a1[9];
    v37 = nullptr;
  }
  else
  {
    v32 = v20;
    v67 = **v20;
    v33 = (_QWORD *)sub_186B270(0x18u);
    *v33 = 2;
    v34 = v67;
    v35 = v33 + 1;
    v36 = 1;
    v37 = v35;
    while ( 1 )
    {
      ++v32;
      *v35 = v34;
      *(v37 - 1) = v36;
      if ( v31 == v32 )
        break;
      while ( 1 )
      {
        v38 = **v32;
        if ( *(v37 - 2) == v36 )
          break;
        v39 = v36;
        ++v32;
        ++v36;
        *(_QWORD *)&v37[2 * v39] = v38;
        *(v37 - 1) = v36;
        if ( v31 == v32 )
          goto LABEL_19;
      }
      v54 = (3 * v36 + 1) >> 1;
      v55 = 8 * v54 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v55 || v36 >= v54 )
      {
        v6 = __cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v70, "Overflow encountered when expanding vector");
        v7 = v70;
        v6[1] = v6 + 3;
        v8 = v71;
        *v6 = off_1C63128;
        if ( v7 == v72 )
        {
          qmemcpy(v6 + 3, v72, (unsigned int)(v8 + 1));
        }
        else
        {
          v9 = v72[0];
          v6[1] = v7;
          v6[3] = v9;
        }
        v6[2] = v8;
        v70 = v72;
        v71 = 0;
        LOBYTE(v72[0]) = 0;
        sub_233E40((__int64)&v70);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v66 = (3 * v36 + 1) >> 1;
      v68 = **v32;
      v56 = (unsigned int *)sub_186B300(v37 - 2, v55);
      v37 = v56 + 2;
      v34 = v68;
      *v56 = v66;
      v57 = v56[1];
      v58 = v57;
      v35 = &v37[2 * v57];
      v36 = v58 + 1;
    }
LABEL_19:
    v40 = a1[9];
  }
  v41 = sub_15DCAD0(a1[15], (int)v37, 0);
  v71 = v40;
  v70 = (_QWORD *)v41;
  if ( v41 )
    ++*(_DWORD *)(v41 + 8);
  v42 = a1[10];
  v43 = *(__int64 (**)(void))(*(_QWORD *)v42 + 440LL);
  if ( (char *)v43 == (char *)sub_79F010 )
  {
    v44 = v42 + 1592;
  }
  else
  {
    v41 = (__int64)v70;
    v44 = v43();
  }
  v45 = sub_13D3600(v44, v41, *((unsigned int *)v20 - 1), v20);
  if ( v45 && a2[8] == *(_QWORD *)(v45 + 64) )
  {
    v64 = (__int64)v70;
    if ( v70 )
    {
      v65 = v71;
      v53 = (*((_DWORD *)v70 + 2))-- == 1;
      if ( v53 )
        sub_15D7BC0(v65, v64);
    }
    if ( v37 )
      sub_186B220(v37 - 2);
    return sub_186B220(v20 - 1);
  }
  else
  {
    sub_180B130(v44);
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(v44, v41);
      v46 = a1[10];
      v47 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v47, *(_QWORD *)(v46 + 1592), *a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v48 = sub_180B150(v47, "\n");
      v49 = sub_160EBE0(v48, &v70);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_180B150(v49, "\n");
      std::ostream::_M_insert<void const*>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v50 = std::ostream::_M_insert<void const*>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v50, "\n");
    }
    else
    {
      sub_180B150(v44, v41);
      v59 = a1[10];
      v60 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v60, *(_QWORD *)(v59 + 1592), *a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v61 = sub_180B150(v60, "\n");
      v62 = sub_160EBE0(v61, &v70);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_180B150(v62, "\n");
      std::ostream::_M_insert<void const*>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<void const*>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    v51 = (__int64)v70;
    if ( v70 )
    {
      v52 = v71;
      v53 = (*((_DWORD *)v70 + 2))-- == 1;
      if ( v53 )
        sub_15D7BC0(v52, v51);
    }
    if ( v37 )
      sub_186B220(v37 - 2);
    return sub_186B220(v20 - 1);
  }
}

