__int64 __fastcall sub_9A8990(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  int v4; // ebp
  int v5; // r13d
  unsigned int v6; // r15d
  __int64 *v7; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // r13
  bool v12; // dl
  int v13; // [rsp+4h] [rbp-A4h]
  int v14; // [rsp+10h] [rbp-98h]
  int v15; // [rsp+14h] [rbp-94h]
  int v16; // [rsp+18h] [rbp-90h]
  int v17; // [rsp+1Ch] [rbp-8Ch]
  int v18; // [rsp+2Ch] [rbp-7Ch]
  _QWORD *v19; // [rsp+38h] [rbp-70h]
  void *v20; // [rsp+40h] [rbp-68h]
  void *v21; // [rsp+40h] [rbp-68h]
  void *v22; // [rsp+40h] [rbp-68h]
  void *v23; // [rsp+40h] [rbp-68h]
  int v24; // [rsp+48h] [rbp-60h]
  bool v25; // [rsp+4Fh] [rbp-59h]
  bool v26; // [rsp+4Fh] [rbp-59h]
  int v27; // [rsp+50h] [rbp-58h] BYREF
  char v28; // [rsp+54h] [rbp-54h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+60h] [rbp-48h] BYREF
  char v31; // [rsp+64h] [rbp-44h]
  __int64 v32; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 696);
  if ( !v3 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    BUG();
  }
  v16 = 0;
  v4 = 0;
  v15 = 0;
  v5 = 0;
  v6 = 0;
  v14 = 0;
  v13 = 0;
  v24 = 0;
  v18 = 0;
  v19 = a2;
  while ( v6 < *(_DWORD *)(v3 - 4) )
  {
    v7 = (__int64 *)(v3 + 24LL * v6);
    if ( *((_DWORD *)v7 + 3) != -1 )
    {
      v9 = *v7;
      ++v5;
      if ( *v7 )
      {
        v10 = v9 + 40LL * *(unsigned int *)(v9 - 4);
        if ( v10 != v9 )
        {
          v17 = v5;
          v11 = *v7;
          while ( 2 )
          {
            if ( *(_DWORD *)(v11 + 32) == -1 )
              goto LABEL_20;
            ++v4;
            if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
              goto LABEL_22;
            if ( *(_DWORD *)v11 == 1 )
            {
              if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
                goto LABEL_17;
              if ( *(_DWORD *)(v11 + 16) == 1 )
              {
                ++v18;
                goto LABEL_20;
              }
            }
            else
            {
              if ( *(_DWORD *)v11 == -1 )
              {
                if ( (*(_BYTE *)(v11 + 20) & 1) == 0 )
                {
                  if ( *(_DWORD *)(v11 + 16) == 1 )
                  {
                    ++v24;
                    goto LABEL_20;
                  }
                  break;
                }
LABEL_17:
                v28 &= 0xFCu;
                v31 &= 0xFCu;
                v27 = 0;
                v29 = 0;
                v30 = 1;
                v32 = 0;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v27, (int *)v11);
                if ( (v28 & 1) != 0 )
                {
                  v20 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v27);
                  sub_182CBA0(v20, &v30);
                }
                else
                {
                  v23 = qword_1C7F2C0;
                  v26 = (v31 & 1) == 0;
                  sub_182CBA0(qword_1C7F2C0, &v27);
                  sub_182CBA0(v23, &v30);
                  if ( v26 )
                  {
                    ++v15;
                    goto LABEL_20;
                  }
                }
                ++v16;
LABEL_20:
                v11 += 40;
                if ( v10 == v11 )
                {
                  v5 = v17;
                  v3 = *(_QWORD *)(a1 + 696);
                  goto LABEL_5;
                }
                continue;
              }
LABEL_22:
              if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
                goto LABEL_17;
              if ( *(_DWORD *)(v11 + 16) == 1 )
              {
                v28 &= 0xFCu;
                v31 &= 0xFCu;
                v27 = 0;
                v29 = 0;
                v30 = 1;
                v32 = 0;
                sub_27B950((__int64)qword_1C7F2C0, (__int64)&v27, (int *)v11);
                if ( (v28 & 1) != 0 )
                {
                  v21 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v27);
                  sub_182CBA0(v21, &v30);
                  v12 = (*(_BYTE *)(v11 + 20) & 1) == 0;
                }
                else
                {
                  v22 = qword_1C7F2C0;
                  v25 = (v31 & 1) == 0;
                  sub_182CBA0(qword_1C7F2C0, &v27);
                  sub_182CBA0(v22, &v30);
                  if ( v25 )
                  {
                    ++v13;
                    goto LABEL_20;
                  }
                  v12 = (*(_BYTE *)(v11 + 20) & 1) == 0;
                }
                if ( !v12 )
                  goto LABEL_17;
              }
            }
            break;
          }
          if ( *(_DWORD *)(v11 + 16) == 1 )
          {
            v28 &= 0xFCu;
            v31 &= 0xFCu;
            v27 = 0;
            v29 = 0;
            v30 = 1;
            v32 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v27, (int *)v11);
            if ( (v28 & 1) != 0 || (v31 & 1) != 0 )
            {
              sub_25A130((char *)&v27);
              ++v14;
              goto LABEL_20;
            }
            sub_25A130((char *)&v27);
          }
          goto LABEL_17;
        }
      }
    }
LABEL_5:
    ++v6;
    if ( !v3 )
      break;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(_QWORD *)((char *)v19 + *(_QWORD *)(*v19 - 24LL) + 16) = 6;
  std::ostream::_M_insert<unsigned long>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

