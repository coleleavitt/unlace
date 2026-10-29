__int64 __fastcall sub_7D8130(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 (*v13)(void); // rax

  v13 = *(__int64 (**)(void))(*(_QWORD *)a1 + 240LL);
  if ( (char *)v13 == (char *)sub_7D40A0 )
    return sub_7E9B80((int)a1 + 400, a2, a3, (unsigned int)sub_7D40A0, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  else
    return v13();
}

