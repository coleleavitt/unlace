__int64 __fastcall sub_14A350(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_BYTE *)a2 == 4 && *(_QWORD *)(a2 + 8) == a1[6] )
  {
    a1[7] = a1[4];
    return 1;
  }
  return result;
}
