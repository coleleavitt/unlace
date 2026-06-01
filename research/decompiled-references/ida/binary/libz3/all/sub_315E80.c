__int64 __fastcall sub_315E80(__int64 a1)
{
  char **exception; // r12
  int v3; // eax
  int v4; // r12d
  __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r13
  unsigned int v12; // esi
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // r12
  __int64 v26; // rdi
  __int64 result; // rax
  __int64 *v28; // rbp
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // r12
  __int64 v35; // [rsp+18h] [rbp-A0h]
  __int64 v36; // [rsp+30h] [rbp-88h] BYREF
  __int64 v37; // [rsp+38h] [rbp-80h]
  __int64 v38; // [rsp+40h] [rbp-78h]
  _QWORD v39[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v40[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v36 = 0;
  v4 = v3;
  v5 = *(_QWORD *)(a1 + 8);
  v35 = v5;
  v37 = v5;
  v38 = v5;
  if ( v4 )
  {
    v6 = nullptr;
    v7 = 0;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
      v39,
      *(_QWORD *)(a1 + 16),
      0,
      a1 + 40);
    while ( 1 )
    {
      v11 = v39[0];
      if ( !v6 )
        break;
      v12 = *((_DWORD *)v6 - 1);
      if ( v12 != *((_DWORD *)v6 - 2) )
      {
        v8 = v12;
        v9 = v12 + 1;
        v10 = &v6[v8];
        goto LABEL_4;
      }
      v13 = (3 * v12 + 1) >> 1;
      v14 = 8 * v13 + 8;
      if ( 8 * v12 + 8 >= v14 || v12 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v40, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v40);
        sub_233E40((__int64)v40);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
      v6 = v15 + 2;
      ++v7;
      *v15 = (3 * v12 + 1) >> 1;
      v16 = v15[1];
      v9 = (unsigned int)(v16 + 1);
      v6[v16] = v11;
      *((_DWORD *)v6 - 1) = v9;
      if ( v4 == v7 )
      {
LABEL_11:
        v17 = *(_QWORD *)(a1 + 8);
        goto LABEL_12;
      }
LABEL_5:
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
        v39,
        *(_QWORD *)(a1 + 16),
        v7,
        a1 + 40);
    }
    v33 = (_QWORD *)sub_186B270(0x18u);
    v6 = v33 + 1;
    *v33 = 2;
    v9 = 1;
    v10 = v33 + 1;
LABEL_4:
    ++v7;
    *v10 = v11;
    *((_DWORD *)v6 - 1) = v9;
    if ( v4 == v7 )
      goto LABEL_11;
    goto LABEL_5;
  }
  LODWORD(v17) = v5;
  v9 = 0;
  v6 = nullptr;
LABEL_12:
  v18 = sub_15EC1C0(v35, v9);
  v19 = v18;
  if ( v18 )
    ++*(_DWORD *)(v18 + 8);
  v20 = sub_15E1A70(v17);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  v22 = v36;
  if ( v36 )
  {
    v23 = v37;
    v24 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v23, v22);
  }
  v36 = v21;
  if ( v19 )
  {
    v24 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v24 )
      sub_15D7BC0(v35, v19);
  }
  if ( (unsigned int)sub_180B130() > 9 )
  {
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      v25 = sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      v26 = sub_160EBE0(v25, &v36);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v26, "\n");
    }
    else
    {
      v34 = sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_160EBE0(v34, &v36);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  result = sub_E5EBF0(*(_QWORD *)(a1 + 24), v36);
  if ( v6 )
  {
    v28 = v6;
    v29 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v29 )
    {
      do
      {
        while ( 1 )
        {
          v30 = *v28;
          if ( *v28 )
          {
            v24 = (*(_DWORD *)(v30 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v28 >= v29 )
            goto LABEL_32;
        }
        ++v28;
        sub_15D7BC0(v35, v30);
      }
      while ( (unsigned __int64)v28 < v29 );
    }
LABEL_32:
    result = sub_186B220(v6 - 1);
  }
  v31 = v36;
  if ( v36 )
  {
    v32 = v37;
    v24 = (*(_DWORD *)(v36 + 8))-- == 1;
    if ( v24 )
      return sub_15D7BC0(v32, v31);
  }
  return result;
}

