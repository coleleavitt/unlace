__int64 __fastcall sub_5A66FC(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // [rsp+18h] [rbp-8h]

  v4 = 0;
  while ( a1 != a2 )
  {
    a1 = (_QWORD *)*a1;
    ++v4;
  }
  return v4;
}
