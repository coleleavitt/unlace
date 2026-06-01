__int64 __fastcall sub_9E9E80(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r12
  void *v4; // rbx
  __int64 result; // rax
  char *v6; // rbx
  int v7; // [rsp+0h] [rbp-188h] BYREF
  char v8; // [rsp+4h] [rbp-184h]
  int v9; // [rsp+10h] [rbp-178h] BYREF
  char v10; // [rsp+14h] [rbp-174h]
  void *v11; // [rsp+20h] [rbp-168h] BYREF
  __int64 v12; // [rsp+30h] [rbp-158h] BYREF
  void *ptr; // [rsp+40h] [rbp-148h] BYREF
  __int64 v14; // [rsp+48h] [rbp-140h]
  _BYTE v15[312]; // [rsp+50h] [rbp-138h] BYREF

  ptr = v15;
  v14 = 0x1000000000LL;
  sub_9E98E0((__int64)&v7, a1, a3, (__int64)&ptr);
  if ( (v8 & 1) != 0 || v7 != 1 || (v10 & 1) != 0 || v9 != 1 )
  {
    sub_1850940(&v11, qword_1C7F2C0, &v7);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v11 != &v12 )
      operator delete(v11, v12 + 1);
    v3 = (char *)ptr + 16 * (unsigned int)v14;
    if ( v3 != ptr )
    {
      v6 = (char *)ptr;
      goto LABEL_15;
    }
  }
  else
  {
    v6 = (char *)ptr;
    v3 = (char *)ptr + 16 * (unsigned int)v14;
    if ( ptr != v3 )
    {
      while ( 1 )
      {
        sub_1648CA0(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)v6, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        v6 += 16;
        if ( v3 == v6 )
          break;
LABEL_15:
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v7);
  result = sub_182CBA0(v4, &v9);
  if ( ptr )
  {
    if ( ptr != v15 )
      return sub_186B220(ptr);
  }
  return result;
}

