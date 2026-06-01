_QWORD **__fastcall sub_786820(
        _QWORD ***a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        char a39)
{
  _QWORD **result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = (_QWORD **)(*(__int64 (__fastcall **)(_QWORD *))(*result[24] + 88LL))(result[24]);
    if ( result )
    {
      result = (_QWORD **)__dynamic_cast(
                            result,
                            (const struct __class_type_info *)&`typeinfo for'sat::extension,
                            (const struct __class_type_info *)&`typeinfo for'euf::solver,
                            0);
      if ( result )
        return (_QWORD **)sub_794C80(
                            (int)result,
                            a7,
                            a8,
                            a9,
                            a10,
                            a11,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17,
                            a18,
                            a19,
                            a20,
                            a21,
                            a22,
                            a23,
                            a24,
                            a25,
                            a26,
                            a27,
                            a28,
                            a29,
                            a30,
                            a31,
                            a32,
                            a33,
                            a34,
                            a35,
                            a36,
                            a37,
                            a38,
                            a39);
    }
  }
  return result;
}

