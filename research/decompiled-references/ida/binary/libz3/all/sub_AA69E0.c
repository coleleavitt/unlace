__int64 __fastcall sub_AA69E0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int64 *v5; // rbp
  __int64 v6; // rax
  char *v7; // rdx
  _QWORD *v8; // r12
  char *v9; // r12
  int v10; // eax
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned int v19; // r15d
  unsigned int *v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 **v23; // [rsp+0h] [rbp-48h]
  __int64 **v24; // [rsp+8h] [rbp-40h]

  result = std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD *)(a1 + 8664);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 - 4);
    if ( v4 != v4 + 8 * result )
    {
      v24 = (__int64 **)(v4 + 8 * result);
      v23 = *(__int64 ***)(a1 + 8664);
      while ( 1 )
      {
        v5 = *v23;
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = *a2;
        *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
        v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
        LODWORD(v6) = *((_DWORD *)v7 + 6);
        LOBYTE(v6) = v6 & 0x4F;
        *((_DWORD *)v7 + 6) = v6 | 0x20;
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
        v8 = (_QWORD *)std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 = (char *)v8 + *(_QWORD *)(*v8 - 24LL);
        v10 = *((_DWORD *)v9 + 6);
        LOBYTE(v10) = v10 & 0x4F | 0x80;
        *((_DWORD *)v9 + 6) = v10;
        v11 = *v5;
        v12 = *(_DWORD *)(*v5 + 24);
        if ( v12 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v11 = *v5;
        }
        v13 = *(_QWORD *)(v11 + 16);
        v14 = *(_QWORD *)(v13 + 16);
        if ( (v14 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v14 )
            strlen(*(const char **)(v13 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v15 = *v5;
        v16 = *(_QWORD *)(*(_QWORD *)(*v5 + 16) + 24LL);
        if ( !v16 )
          goto LABEL_29;
        if ( !*(_BYTE *)(v16 + 16) )
          break;
LABEL_15:
        if ( v12 )
        {
          v19 = 0;
          while ( 1 )
          {
            v20 = *(unsigned int **)(v15 + 8LL * v19 + 32);
            v21 = *(_QWORD *)(a1 + 8656);
            if ( v21 && (v22 = *v20, (unsigned int)v22 < *(_DWORD *)(v21 - 4)) && *(_QWORD *)(v21 + 8 * v22) )
            {
              ++v19;
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              if ( v12 == v19 )
                goto LABEL_23;
            }
            else
            {
              ++v19;
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              if ( v12 == v19 )
              {
LABEL_23:
                std::__ostream_insert<char,std::char_traits<char>>();
                v15 = *v5;
                break;
              }
            }
            v15 = *v5;
          }
        }
        if ( !(unsigned int)sub_8E7030(a1)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 56LL))(
               *(_QWORD *)(a1 + 7488),
               v15) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        result = (__int64)++v23;
        if ( v24 == v23 )
          return result;
      }
      v17 = *(_QWORD *)(v16 + 8);
      if ( v17 )
        v18 = *(unsigned int *)(v17 - 4);
      else
LABEL_29:
        v18 = 0;
      sub_15D4280(a2, v18);
      v15 = *v5;
      goto LABEL_15;
    }
  }
  return result;
}

