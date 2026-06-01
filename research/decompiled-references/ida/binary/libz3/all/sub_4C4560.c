unsigned __int64 __fastcall sub_4C4560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r14
  unsigned __int64 result; // rax
  __int64 *v5; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // r9d
  __int64 *v11; // rsi
  unsigned int v12; // edx
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // r10
  __int64 *v16; // rax
  __int64 v17; // rdx
  const char *v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rax

  v3 = *(__int64 **)(a2 + 152);
  result = *(unsigned int *)(a2 + 160);
  v5 = &v3[result];
  if ( v3 != v5 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      if ( v5 == ++v3 )
        return result;
    }
    if ( v5 != v3 )
    {
      v8 = *v3;
      while ( 1 )
      {
        v9 = *(unsigned int *)(a1 + 128);
        v10 = *(_DWORD *)(v8 + 12);
        v11 = *(__int64 **)(a1 + 120);
        v12 = v9 - 1;
        v9 *= 16;
        v13 = (__int64 *)((char *)v11 + v9);
        v14 = 16LL * (v10 & v12);
        v15 = &v11[(unsigned __int64)v14 / 8];
        if ( v14 == v9 )
        {
LABEL_28:
          while ( v15 != v11 )
          {
            v20 = *v11;
            if ( (unsigned __int64)*v11 > 1 )
            {
              if ( *(_DWORD *)(v20 + 12) == v10 && v20 == v8 )
              {
                v16 = v11;
                goto LABEL_26;
              }
            }
            else if ( !v20 )
            {
              break;
            }
            v11 += 2;
          }
LABEL_14:
          std::__ostream_insert<char,std::char_traits<char>>();
          v18 = *(const char **)(v8 + 16);
          if ( ((unsigned __int8)v18 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v18 )
              strlen(v18);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_19;
        }
        v16 = &v11[(unsigned __int64)v14 / 8];
        while ( 1 )
        {
          v17 = *v16;
          if ( (unsigned __int64)*v16 > 1 )
            break;
          if ( !v17 )
            goto LABEL_14;
LABEL_11:
          v16 += 2;
          if ( v13 == v16 )
            goto LABEL_28;
        }
        if ( *(_DWORD *)(v17 + 12) != v10 || v17 != v8 )
          goto LABEL_11;
LABEL_26:
        v19 = v16[1];
        if ( !v19 )
          goto LABEL_14;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 136LL))(v19, v8, a3);
LABEL_19:
        result = (unsigned __int64)(v3 + 1);
        if ( v5 != v3 + 1 )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)result;
            v3 = (__int64 *)result;
            if ( *(_QWORD *)result > 1u )
              break;
            result += 8LL;
            if ( v5 == (__int64 *)result )
              return result;
          }
          if ( v5 != (__int64 *)result )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}

