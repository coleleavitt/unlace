__int64 __fastcall sub_630850(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const char **a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdi
  __int64 v13; // rdi
  __int64 result; // rax

  v9 = a2;
  if ( !a2 )
    v9 = *(_QWORD *)(a1 + 8);
  v13 = sub_630800(v9, a3);
  result = 0;
  if ( v13 )
  {
    sub_629EE0(v13, a4, a5, a6, a7, a8);
    return 1;
  }
  return result;
}

