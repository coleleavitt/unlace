__int64 __fastcall sub_7A75D0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  _DWORD *v7; // r12
  int v8; // r15d
  _DWORD *v9; // rbp
  __int64 v10; // r12
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // r14
  __int64 v14; // rbp
  unsigned int *v16; // [rsp+10h] [rbp-A8h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  _BYTE v18[16]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v19[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v20[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v21[88]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a1[54] + 48LL * *(unsigned int *)(a3 + 8);
  v4 = *(unsigned int **)v3;
  if ( *(_QWORD *)v3 )
  {
    v5 = *(v4 - 1);
    if ( v4 != &v4[v5] )
    {
      v16 = &v4[v5];
      v17 = a1[54] + 48LL * *(unsigned int *)(a3 + 8);
      do
      {
        v6 = *v4;
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = *(_DWORD **)(a1[56] + 8 * v6);
        if ( v7 )
        {
          v8 = *(v7 - 1);
          if ( v8 )
          {
            if ( *v7 == -2 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
            }
            if ( v8 != 1 )
            {
              v9 = v7 + 1;
              v10 = (__int64)&v7[v8 - 2 + 2];
              do
              {
                while ( 1 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  if ( *v9 == -2 )
                    break;
                  ++v9;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                  if ( v9 == (_DWORD *)v10 )
                    goto LABEL_13;
                }
                ++v9;
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              while ( v9 != (_DWORD *)v10 );
            }
          }
        }
LABEL_13:
        ++v4;
      }
      while ( v16 != v4 );
      v3 = v17;
    }
  }
  v11 = *(_QWORD **)(v3 + 24);
  if ( v11 )
  {
    v12 = 2LL * *((unsigned int *)v11 - 1);
    v13 = &v11[v12];
    while ( v13 != v11 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v18, *v11, a1[9], 0, 0, 0);
      v14 = sub_160E8B0(a2, v18);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(v20, v11[1], a1[9], 0, 0, 0);
      sub_160E8B0(v14, v20);
      std::__ostream_insert<char,std::char_traits<char>>();
      v11 += 2;
      sub_18572D0(v21);
      sub_18572D0(v19);
    }
  }
  return a2;
}

