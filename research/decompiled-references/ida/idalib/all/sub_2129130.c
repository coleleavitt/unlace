__int64 __fastcall sub_2129130(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = 0xFFFFFFFFLL;
  v3 = a2[1];
  if ( a1[1] >= v3 )
  {
    result = 1;
    if ( a1[1] <= v3 )
      return 2 * (unsigned int)(byte_26F2D28[*(int *)a1] <= byte_26F2D28[*(int *)a2]) - 1;
  }
  return result;
}
