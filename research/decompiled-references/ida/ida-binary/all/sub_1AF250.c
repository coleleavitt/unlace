unsigned __int64 __fastcall sub_1AF250(int a1, char a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  _QWORD *v6; // rdi

  v2 = a1;
  result = qword_8CAD90;
  if ( (int)qword_8CAD90 > 0 )
  {
    v4 = 0;
    v5 = 8LL * (unsigned int)(qword_8CAD90 - 1) + 8;
    do
    {
      v6 = *(_QWORD **)(qword_8CAD88 + v4);
      v4 += 8;
      result = sub_1AF0E0(v6, v2);
    }
    while ( v4 != v5 );
  }
  if ( (v2 & 0x80000000) == 0LL && a2 && v2 < (unsigned __int64)xmmword_8CAE08 )
    return reg_str_set("LastCLIExtlang", 0, *(_QWORD *)(**((_QWORD **)qword_8CAE00 + v2) + 16LL));
  return result;
}
