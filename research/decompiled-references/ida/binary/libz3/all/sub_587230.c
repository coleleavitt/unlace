__int64 __fastcall sub_587230(_QWORD *a1, double a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64); // r13
  __int64 v10; // rbp
  _QWORD **v11; // r12
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rdi
  char *v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64); // r13
  __int64 v16; // rbp
  _QWORD **v17; // r12
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+8h] [rbp-30h]

  v3 = a1[4];
  v4 = a1[5];
  v19 = 0;
  v5 = *(_QWORD *)v4;
  v20 = v3;
  result = *(_QWORD *)(v5 + 144);
  if ( (__int64 (__fastcall *)(__int64, __int64 *))result != sub_586990 )
  {
    result = ((__int64 (__fastcall *)(unsigned __int64, __int64 *))result)(v4, &v19);
    v8 = v19;
    if ( a1[6] == v19 )
    {
LABEL_11:
      if ( !v8 )
        return result;
      v3 = v20;
      result = (unsigned int)(*(_DWORD *)(v8 + 8) - 1);
      goto LABEL_13;
    }
    goto LABEL_4;
  }
  v7 = *(_QWORD *)(v4 + 48);
  v8 = a1[6];
  if ( !v7 )
  {
    if ( !v8 )
      return result;
    goto LABEL_4;
  }
  result = *(unsigned int *)(v7 + 8);
  v19 = *(_QWORD *)(v4 + 48);
  v4 = (unsigned int)(result + 1);
  *(_DWORD *)(v7 + 8) = v4;
  if ( v7 != v8 )
  {
LABEL_4:
    sub_180B130(v4);
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v9 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 120LL);
      v10 = sub_180B150(v4, v8);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v9 == sub_586DF0 )
      {
        v11 = (_QWORD **)a1[5];
        v12 = (__int64 (__fastcall *)(__int64, __int64))(*v11)[15];
        if ( v12 == v9 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v11[5] + 120LL))(v11[5], v10);
          sub_160EBE0(v10, v11 + 6);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          v12(a1[5], v10);
        }
        v13 = sub_160EBE0(v10, a1 + 6);
        v14 = "\n";
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        v14 = (char *)v10;
        v13 = (__int64)a1;
        v9((__int64)a1, v10);
      }
      result = sub_186A500(v13, v14);
    }
    else
    {
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 120LL);
      v16 = sub_180B150(v4, v8);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v15 == sub_586DF0 )
      {
        v17 = (_QWORD **)a1[5];
        v18 = (__int64 (__fastcall *)(__int64, __int64))(*v17)[15];
        if ( v18 == v15 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*v17[5] + 120LL))(v17[5], v16);
          sub_160EBE0(v16, v17 + 6);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          v18(a1[5], v16);
        }
        sub_160EBE0(v16, a1 + 6);
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        result = v15((__int64)a1, v16);
      }
    }
    v8 = v19;
    goto LABEL_11;
  }
LABEL_13:
  *(_DWORD *)(v8 + 8) = result;
  if ( !(_DWORD)result )
    return sub_15D7BC0(v3, v8);
  return result;
}

