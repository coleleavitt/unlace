__int64 __fastcall sub_470C90(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  a1[2] = a2;
  *a1 = qword_1C657C8;
  result = *(_QWORD *)(a2 + 8);
  a1[1] = result;
  return result;
}

