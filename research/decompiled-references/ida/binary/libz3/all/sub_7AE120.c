__int64 __fastcall sub_7AE120(__int64 a1, _QWORD *a2, double a3)
{
  _QWORD *v3; // r8
  _QWORD *v4; // rbp
  _QWORD *v6; // r15
  int v7; // r14d
  char v8; // r13
  __int64 v9; // rdi
  int v10; // eax
  _QWORD *v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r12
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v18; // r14
  unsigned __int8 v19; // [rsp+7h] [rbp-41h]
  __int64 v20; // [rsp+8h] [rbp-40h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v3 = *(_QWORD **)(a1 + 744);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 != v4 )
    {
      v19 = 1;
      v6 = *(_QWORD **)(a1 + 744);
      while ( 1 )
      {
        v14 = *v6;
        v8 = *(_BYTE *)(*v6 + 12LL);
        if ( v8 )
          goto LABEL_13;
        v15 = *(_DWORD *)(v14 + 16);
        if ( !*(_BYTE *)(v14 + 56) )
        {
          v7 = 1;
          if ( v15 == -2 )
            goto LABEL_8;
          v7 = *(_DWORD *)(*a2 + 4LL * (v15 >> 1));
          if ( (v15 & 1) == 0 )
          {
LABEL_7:
            v8 = v7 == 0;
            goto LABEL_8;
          }
          goto LABEL_18;
        }
        if ( v15 == -2 )
        {
          v7 = 1;
LABEL_8:
          v11 = a2;
          v9 = *v6;
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v14 + 32LL))(*v6, a2);
          LOBYTE(v11) = v8 | (v10 == 0);
          if ( !(_BYTE)v11 )
          {
            if ( v10 != v7 )
            {
              sub_180B130(v9);
              if ( (unsigned __int8)sub_186A530(a3) )
              {
                sub_186A4C0(a3);
                sub_180B150(v9, v11);
                std::__ostream_insert<char,std::char_traits<char>>();
                v12 = std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                v13 = sub_7E42B0(v12, v14);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_186A500(v13, "\n");
              }
              else
              {
                sub_180B150(v9, v11);
                std::__ostream_insert<char,std::char_traits<char>>();
                v18 = std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_7E42B0(v18, v14);
                std::__ostream_insert<char,std::char_traits<char>>();
              }
              v19 = 0;
            }
            goto LABEL_13;
          }
          sub_180B130(v9);
          if ( !(unsigned __int8)sub_186A530(a3) )
          {
            sub_180B150(v9, v11);
            std::__ostream_insert<char,std::char_traits<char>>();
            v21 = std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_7E42B0(v21, v14);
            std::__ostream_insert<char,std::char_traits<char>>();
            goto LABEL_13;
          }
          sub_186A4C0(a3);
          ++v6;
          sub_180B150(v9, v11);
          std::__ostream_insert<char,std::char_traits<char>>();
          v20 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v16 = sub_7E42B0(v20, v14);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_186A500(v16, "\n");
          if ( v4 == v6 )
            return v19;
        }
        else
        {
          v7 = *(_DWORD *)(*a2 + 4LL * (v15 >> 1));
          if ( (v15 & 1) != 0 )
          {
            if ( v7 == 1 )
              goto LABEL_13;
LABEL_18:
            v8 = v7 == 0;
            v7 = -v7;
            goto LABEL_8;
          }
          if ( v7 != -1 )
            goto LABEL_7;
LABEL_13:
          if ( v4 == ++v6 )
            return v19;
        }
      }
    }
  }
  return 1;
}

