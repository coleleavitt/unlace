_QWORD *__fastcall sub_215ED20(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  bool v8; // cf
  unsigned __int64 v9; // rdx
  __int64 v10; // rax

  v8 = __CFADD__(a2, a3);
  v9 = a2 + a3;
  if ( v8 || (a4 = a7 + a8, v9 > a7 + a8) || a7 > a2 )
  {
    v10 = sub_2195B10(a1, a2, v9, a4);
    sub_2220500(a1, 4, v10);
  }
  else
  {
    *a1 = 0;
  }
  return a1;
}
