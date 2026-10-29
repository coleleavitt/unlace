__int64 __fastcall sub_11A890(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(void); // rdx
  __int64 result; // rax

  if ( a2 <= 7 )
    return 1;
  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 208LL);
  result = 0;
  if ( v2 != sub_118FE0 )
    return v2();
  return result;
}
