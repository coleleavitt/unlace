__int64 __fastcall sub_259B70(__int64 a1, __int64 a2, char *a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 result; // rax
  char v7; // dl

  v4 = sub_1C8060(*(_QWORD *)(a1 + 8));
  if ( !v4 )
    return -1;
  v5 = v4;
  result = get_func_cmt(a2, v4, 0);
  v7 = 0;
  if ( result > 0 || (result = get_func_cmt(a2, v5, 1), v7 = 1, result > 0) )
  {
    if ( a3 )
      *a3 = v7;
  }
  return result;
}
