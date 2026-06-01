__int64 __fastcall sub_655220(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  void (__fastcall ***v10)(void *); // r14
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r12d

  v7 = *(_QWORD *)a1;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v8 = sub_646490();
  v9 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v10 = *(void (__fastcall ****)(void *))(a1 + 2952);
  if ( v10 )
  {
    v11 = (*((_DWORD *)v10 + 2))-- == 1;
    if ( v11 )
    {
      (**v10)(v10);
      sub_186B220(v10);
    }
  }
  v12 = *(_QWORD *)(a1 + 2992);
  *(_QWORD *)(a1 + 2952) = v9;
  *(_DWORD *)(a1 + 2988) = 0;
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 3000);
    v11 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  v14 = *(_QWORD *)(a1 + 3008);
  *(_QWORD *)(a1 + 2992) = 0;
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 3016);
    v11 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v15, v14);
  }
  *(_QWORD *)(a1 + 3008) = 0;
  sub_653BE0((__int64 *)a1, a2);
  if ( *(_DWORD *)(a1 + 3024) > 6u )
  {
    sub_1872CE0("");
    sub_1873130(114, 890);
  }
  sub_654110((_QWORD *)a1, a3, a4, a5, a2, v16, v17, v18);
  sub_654200(a1, a2);
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2976) + 32LL))(*(_QWORD *)(a1 + 2976), a2);
  if ( v19 && (unsigned __int8)sub_1859630(**(_QWORD **)(a1 + 32), "print_certificate", *(_QWORD *)(a1 + 32) + 8LL, 0) )
  {
    sub_654200(a1, 0);
    (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 2976) + 120LL))(*(_QWORD *)(a1 + 2976), &std::cout);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  if ( !a2 )
    return v19;
  v11 = (*(_DWORD *)(a2 + 8))-- == 1;
  if ( !v11 )
    return v19;
  sub_15D7BC0(v7, a2);
  return v19;
}

