_QWORD *__fastcall sub_4E1880(_QWORD *a1, _QWORD **a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v7; // rax
  __int64 *v9; // rdx

  v7 = ((__int64 (__fastcall *)(_QWORD **, __int64))(*a2)[50])(a2, a5);
  if ( v7 == -1 || (v9 = sub_4E07A0(a2[2], v7)) == nullptr )
  {
    *a1 = -1;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    ((void (__fastcall *)(_QWORD *, _QWORD **, __int64 *, _QWORD, _QWORD))(*a2)[51])(a1, a2, v9, a3, a4);
  }
  return a1;
}
