__int64 __fastcall sub_67C020(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r15
  unsigned int *v4; // rdx
  unsigned int *v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _DWORD *v9; // rax
  unsigned int *v11; // [rsp+8h] [rbp-80h]
  __int64 v12; // [rsp+10h] [rbp-78h]
  _BYTE v13[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v14[88]; // [rsp+30h] [rbp-58h] BYREF

  if ( a1[169] )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v2 = (_QWORD *)a1[25];
    if ( v2 )
    {
      v3 = &v2[*((unsigned int *)v2 - 1)];
      while ( v3 != v2 )
      {
        v5 = (unsigned int *)*v2;
        sub_1606360(v13, *v2, a1[18], 0, 0, 0);
        sub_160E8B0(a2, v13);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v14);
        v6 = a1[23];
        v7 = a1[18];
        if ( !v6
          || (v8 = *v5, (unsigned int)v8 >= *(_DWORD *)(v6 - 4))
          || (v4 = *(unsigned int **)(v6 + 8 * v8)) == nullptr )
        {
          if ( *((_WORD *)v5 + 2)
            || (v9 = *(_DWORD **)(*((_QWORD *)v5 + 2) + 24LL)) == nullptr
            || *v9
            || v9[1] != 8
            || v5[6] != 1 )
          {
            sub_1872CE0("");
            sub_1873130(114, 365);
          }
          v12 = a1[18];
          v11 = (unsigned int *)sub_15E1A70(v12);
          sub_67B850(a1 + 18, v11);
          v7 = v12;
          v4 = v11;
        }
        ++v2;
        sub_1648CA0(a2, v7, v4, 2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return a2;
}

