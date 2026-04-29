__int64 __fastcall sub_260EF0(__int64 a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  char v5; // dl

  if ( !sub_1CE9E0(*(_QWORD *)(a1 + 8)) )
    return -1;
  result = get_func_cmt();
  v5 = 0;
  if ( result > 0 || (result = get_func_cmt(), v5 = 1, result > 0) )
  {
    if ( a3 )
      *a3 = v5;
  }
  return result;
}
