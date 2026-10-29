__int64 __fastcall sub_3C5BC0(__int64 a1)
{
  __int64 idati; // rbx
  __int64 (*v2)(void); // rdx
  __int64 result; // rax

  idati = get_idati(a1);
  v2 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 1000) + 64LL);
  result = 0;
  if ( v2 == sub_3AAC50 )
  {
    if ( idati )
      return 0;
  }
  else
  {
    result = v2();
    if ( idati != result )
      return 0;
  }
  return result;
}
