__int64 __fastcall sub_AA8DB0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  _QWORD **v8; // r13
  _QWORD **v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r12
  __int64 *v16; // r13
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(); // rax
  void *v20; // [rsp+0h] [rbp-48h]
  void *v21; // [rsp+0h] [rbp-48h]
  int v22[2]; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]

  v2 = a1 + 10384;
  sub_15D08E0(a1 + 10384);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD *)(a1 + 8560);
  if ( v4 && *(_DWORD *)(v4 - 4) )
  {
    v5 = 0;
    v22[0] = *(_DWORD *)(v4 - 4);
    do
    {
      v6 = *(_QWORD *)(a1 + 104);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8 * v5++);
      v21 = (void *)std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_164ACB0((int)v21, v6, v7, v2, 1, 0, v21, v22[0], v23);
    }
    while ( *(_QWORD *)v22 != v5 );
  }
  v8 = *(_QWORD ***)(a1 + 8664);
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    while ( v9 != v8 )
    {
      v10 = *v8++;
      sub_164ACB0((int)a2, *(_QWORD *)(a1 + 104), *v10, v2, 1, 0, v20, v22[0], v23);
    }
  }
  sub_C0F3E0(a1 + 216, a2, v2);
  sub_AA5DD0(a1, (__int64)a2);
  v11 = *(_QWORD *)(a1 + 8888);
  if ( v11 && *(_DWORD *)(v11 - 4) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_AA5CA0(a1, (__int64)a2, (unsigned int ***)(a1 + 8888));
  }
  v12 = *(_QWORD *)(a1 + 8896);
  if ( v12 && *(_DWORD *)(v12 - 4) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_AA5CA0(a1, (__int64)a2, (unsigned int ***)(a1 + 8896));
  }
  v13 = *(_QWORD *)(a1 + 8920);
  if ( v13 && *(_DWORD *)(v13 - 4) )
    sub_AA8B30(a1, (__int64)a2);
  sub_AA5F80(a1);
  nullsub_600();
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8952) + 112LL))(*(_QWORD *)(a1 + 8952), a2);
  v14 = *(_QWORD *)(a1 + 8560);
  if ( v14 && *(_DWORD *)(v14 - 4) )
    sub_AA5180(a1);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 7488) + 96LL))(*(_QWORD *)(a1 + 7488), a2);
  v15 = *(__int64 **)(a1 + 8688);
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    while ( v16 != v15 )
    {
      while ( 1 )
      {
        v17 = *v15;
        v18 = *(__int64 (__fastcall **)())(*(_QWORD *)*v15 + 272LL);
        if ( v18 != nullsub_620 )
          break;
        if ( v16 == ++v15 )
          goto LABEL_26;
      }
      ++v15;
      ((void (__fastcall *)(__int64, __int64 *))v18)(v17, a2);
    }
  }
LABEL_26:
  sub_AA6D40(a1);
  return sub_AA6200(a1, a2);
}

