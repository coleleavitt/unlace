__int64 __fastcall sub_87F1E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rax
  void *i; // rbp
  __int64 v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 *v11; // r10
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // ecx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 j; // rax
  int v19; // ecx
  __int64 v20; // r14
  __int64 v21; // r14
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  _DWORD *v25; // rax
  int v26; // eax
  void *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r14
  void *v30; // r14
  void *v31; // [rsp+8h] [rbp-90h]
  void *v32; // [rsp+10h] [rbp-88h]
  _BYTE v33[16]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v34[16]; // [rsp+30h] [rbp-68h] BYREF
  void *v35; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+48h] [rbp-50h] BYREF
  __int64 v37; // [rsp+50h] [rbp-48h] BYREF

  sub_1016D10(*(_QWORD *)(a1 + 496), a2);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v4 )
    sub_1021D10(v4, a2);
  v5 = *(_QWORD *)(a1 + 88);
  if ( !v5 )
    return a2;
  v6 = (void *)*(unsigned int *)(v5 - 4);
  if ( !(_DWORD)v6 )
    return a2;
  v31 = v6;
  for ( i = nullptr; i != v31; i = (char *)i + 1 )
  {
    v8 = 8LL * (_QWORD)i;
    v9 = sub_FF9FB0(*(_QWORD *)(a1 + 496), (unsigned int)i);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 72), **(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * (_QWORD)i)) )
    {
      if ( v9 == -1 )
      {
        v23 = (unsigned __int64)"null";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        sub_FF9F70(*(_QWORD *)(a1 + 496), v9);
        std::__ostream_insert<char,std::char_traits<char>>();
        v23 = v9;
        std::ostream::_M_insert<unsigned long>();
      }
      v24 = *(_QWORD *)(a1 + 472);
      if ( v24 && (unsigned __int8)sub_1021D60(v24, v23) && (unsigned __int8)sub_829810(a1, (int)i) )
      {
        v27 = (void *)sub_1021D80(*(_QWORD *)(a1 + 472));
        v28 = *(_QWORD *)(a1 + 472);
        v36 = 0;
        v35 = v27;
        v32 = (void *)sub_1021D80(v28);
        v29 = sub_8333F0((_QWORD *)a1, (unsigned int)i, (__int64)&v35);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17B24F0(v32, a2, v29, 10);
        sub_17B1E70(v35, &v36);
      }
      else if ( (unsigned __int8)sub_829810(a1, (int)i)
             && *(_BYTE *)(a1 + 952)
             && !(unsigned __int8)sub_FF9CD0(*(_QWORD *)(a1 + 496)) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_8299C0((__int64)v33, a1, (unsigned int)i);
        sub_1850940(&v35, qword_1C7F2C0, v33);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v35 != &v37 )
          operator delete(v35, v37 + 1);
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v33);
        sub_182CBA0(v30, v34);
      }
      v25 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8LL * (_QWORD)i)) + 24);
      if ( v25 && *v25 == 5 && v25[1] == 1 )
        std::__ostream_insert<char,std::char_traits<char>>();
      if ( (unsigned __int8)sub_79AAE0(*(_QWORD *)(a1 + 80), *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * (_QWORD)i)) )
        std::__ostream_insert<char,std::char_traits<char>>();
      v11 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL * (_QWORD)i);
      goto LABEL_17;
    }
    v10 = *(_QWORD *)(a1 + 296);
    v11 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL * (_QWORD)i);
    v12 = *(unsigned int *)(a1 + 304);
    v13 = *((_DWORD *)v11 + 7);
    v14 = v12 - 1;
    v12 *= 24;
    v15 = v10 + v12;
    v16 = 24LL * (v13 & v14);
    v17 = v10 + v16;
    if ( v16 != v12 )
    {
      for ( j = v10 + v16; v15 != j; j += 24 )
      {
        v19 = *(_DWORD *)(j + 4);
        if ( v19 == 2 )
        {
          if ( v13 == *(_DWORD *)j && v13 == *(_DWORD *)(j + 8) )
          {
            v20 = *(unsigned int *)(*(_QWORD *)(j + 16) + 8LL);
            if ( (_DWORD)v20 == -2 )
              goto LABEL_40;
            goto LABEL_15;
          }
        }
        else if ( !v19 )
        {
          goto LABEL_17;
        }
      }
    }
    if ( v10 == v17 )
      goto LABEL_17;
    while ( 1 )
    {
      v26 = *(_DWORD *)(v10 + 4);
      if ( v26 != 2 )
      {
        if ( !v26 )
          goto LABEL_17;
        goto LABEL_35;
      }
      if ( v13 == *(_DWORD *)v10 && v13 == *(_DWORD *)(v10 + 8) )
        break;
LABEL_35:
      v10 += 24;
      if ( v17 == v10 )
        goto LABEL_17;
    }
    v20 = *(unsigned int *)(*(_QWORD *)(v10 + 16) + 8LL);
    if ( (_DWORD)v20 != -2 )
    {
LABEL_15:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      goto LABEL_16;
    }
LABEL_40:
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_16:
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_17F35B0(a2, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4 * v20));
    v11 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8LL * (_QWORD)i);
LABEL_17:
    v21 = *v11;
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v21 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    sub_1648CA0(a2, *(_QWORD *)(a1 + 72), **(_QWORD **)(*(_QWORD *)(a1 + 88) + v8), 3);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return a2;
}

