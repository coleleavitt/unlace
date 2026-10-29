bool __fastcall sub_1AE6620(_QWORD *a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rdx

  result = 0;
  v4 = a2 + 16 * a3;
  if ( v4 != a2 )
    return *(_QWORD *)(v4 - 8) == *a1;
  return result;
}
