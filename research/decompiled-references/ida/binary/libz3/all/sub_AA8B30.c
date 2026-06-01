__int64 __fastcall sub_AA8B30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v3; // r12
  unsigned int v4; // r13d
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned int *v8; // [rsp+10h] [rbp-58h]
  int v9; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v10[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  result = std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(unsigned int **)(a1 + 8920);
  if ( v3 )
  {
    result = *(v3 - 1);
    if ( v3 != &v3[result] )
    {
      v8 = &v3[result];
      v4 = 0;
      while ( 1 )
      {
        v10[0] = *v3;
        v6 = *(_QWORD *)(a1 + 8872) + 16LL * (v10[0] >> 1);
        if ( v4 < (*(_DWORD *)(v6 + 8) & 0xFFFFFFu) )
        {
          v9 = *(_DWORD *)(v6 + 8) & 0xFFFFFF;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v4 = v9;
          if ( v10[0] == -2 )
          {
LABEL_15:
            std::__ostream_insert<char,std::char_traits<char>>();
            goto LABEL_8;
          }
        }
        else if ( v10[0] == -2 )
        {
          goto LABEL_15;
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
LABEL_8:
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA4870(a2, v10[0]);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (v10[0] >> 1));
        if ( (unsigned int)sub_8E7030(a1) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 56LL))(
                  *(_QWORD *)(a1 + 7488),
                  v7) )
            std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA4CA0(a2, *(_QWORD *)(a1 + 104), 1, v10, *(_QWORD *)(a1 + 8840), "\n");
        if ( v4 )
        {
          ++v3;
          v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * (v10[0] >> 1));
          std::__ostream_insert<char,std::char_traits<char>>();
          result = sub_AA87F0(a1, a2, v5);
          if ( v8 == v3 )
            return result;
        }
        else
        {
          ++v3;
          result = std::__ostream_insert<char,std::char_traits<char>>();
          if ( v8 == v3 )
            return result;
        }
      }
    }
  }
  return result;
}

