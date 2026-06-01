__int64 *__fastcall sub_AE8870(_QWORD *a1, _BYTE *a2, _DWORD *a3, __m128i a4, __m128 a5)
{
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 *result; // rax
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // r15
  const char *v15; // r12
  const char *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rcx

  v7 = a1[5];
  v8 = (__int64 *)sub_9537D0(v7);
  result = (__int64 *)sub_9537E0(v7);
  if ( result != v8 )
  {
    v10 = (__int64)result;
    while ( 1 )
    {
      v11 = *v8;
      if ( !(unsigned __int8)sub_953550(a1[5])
        || (v12 = a1[6], (unsigned int)sub_8E7030(v12))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12 + 7488) + 56LL))(
              *(_QWORD *)(v12 + 7488),
              v11)
        || (v13 = (_QWORD *)a1[6], (unsigned int)sub_8E80A0(v13, (unsigned int *)v11) != 1)
        || *(_BYTE *)(*(_QWORD *)(a1[6] + 112LL) + 562LL) && *(_QWORD *)(*a1 + 936LL) == *(_QWORD *)(v11 + 56) )
      {
        result = (__int64 *)sub_953550(a1[5]);
        if ( !(_BYTE)result )
          goto LABEL_23;
LABEL_20:
        if ( (__int64 *)v10 == ++v8 )
          return result;
      }
      else
      {
        if ( *(_BYTE *)(a1[1] + 124LL) && *(_QWORD *)(v11 + 56) && (unsigned int)sub_180B130(v13) )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
          {
            sub_186A4C0(*(double *)a4.m128i_i64);
            v17 = sub_180B150(v13, v11);
            std::__ostream_insert<char,std::char_traits<char>>();
            v18 = *(_QWORD *)(v11 + 56);
            if ( (v18 & 7) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            else
            {
              if ( v18 )
                strlen(*(const char **)(v11 + 56));
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v17, ")\n");
          }
          else
          {
            sub_180B150(v13, v11);
            std::__ostream_insert<char,std::char_traits<char>>();
            v19 = *(_QWORD *)(v11 + 56);
            if ( (v19 & 7) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            else
            {
              if ( v19 )
                strlen(*(const char **)(v11 + 56));
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        *a2 = 1;
        result = (__int64 *)sub_AE8580((__int64)a1, v11, a4, a5);
        if ( (_BYTE)result )
          goto LABEL_20;
        if ( *(_BYTE *)(a1[1] + 124LL) )
        {
          sub_180B130(a1);
          if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
            goto LABEL_15;
LABEL_27:
          sub_180B150(a1, v11);
          std::__ostream_insert<char,std::char_traits<char>>();
          v16 = *(const char **)(v11 + 56);
          if ( ((unsigned __int8)v16 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v16 )
              strlen(v16);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          result = (__int64 *)std::__ostream_insert<char,std::char_traits<char>>();
          goto LABEL_23;
        }
        result = (__int64 *)sub_180B130(a1);
        if ( (unsigned int)result > 4 )
        {
          sub_180B130(a1);
          if ( (unsigned __int8)sub_186A530(*(double *)a4.m128i_i64) )
          {
LABEL_15:
            sub_186A4C0(*(double *)a4.m128i_i64);
            v14 = sub_180B150(a1, v11);
            std::__ostream_insert<char,std::char_traits<char>>();
            v15 = *(const char **)(v11 + 56);
            if ( ((unsigned __int8)v15 & 7) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            else
            {
              if ( v15 )
                strlen(v15);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            result = (__int64 *)sub_186A500(v14, ")\n");
            ++*a3;
            goto LABEL_20;
          }
          goto LABEL_27;
        }
LABEL_23:
        ++v8;
        ++*a3;
        if ( (__int64 *)v10 == v8 )
          return result;
      }
    }
  }
  return result;
}

