__int64 __fastcall sub_AA5A10(_QWORD *a1, void *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // r13d
  void *v8; // [rsp+0h] [rbp-48h]
  int v9; // [rsp+8h] [rbp-40h]
  __int64 v10; // [rsp+10h] [rbp-38h]

  result = a1[1070];
  v8 = a2;
  if ( result )
  {
    v3 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v3 )
    {
      v4 = 0;
      v9 = (_DWORD)a1 + 10384;
      do
      {
        v5 = a1[13];
        v6 = *(_QWORD *)(a1[1105] + 8 * v4++);
        v7 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        result = sub_164ACB0(v7, v5, v6, v9, 1, 0, v8, v9, v10);
      }
      while ( v3 != v4 );
    }
  }
  return result;
}

