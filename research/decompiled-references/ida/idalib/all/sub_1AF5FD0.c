_DWORD *__fastcall sub_1AF5FD0(
        __int64 a1,
        int a2,
        const void *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7)
{
  _QWORD *v11; // rax

  v11 = (_QWORD *)sub_168B6C0(a1);
  if ( a2 )
    return sub_EBF1D0(v11, a3, a4, a5, a6, a7);
  else
    return sub_EBF110(v11, a3, a4, a5, a6, a7);
}
