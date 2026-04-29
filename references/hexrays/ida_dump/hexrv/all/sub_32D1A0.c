__int64 __fastcall sub_32D1A0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  *a1 = a2;
  v2 = *(_QWORD **)a2;
  result = 0;
  a1[1] = *(_QWORD *)a2;
  if ( *(_QWORD *)(a2 + 8) )
  {
    a1[2] = *v2;
    return 1;
  }
  return result;
}
