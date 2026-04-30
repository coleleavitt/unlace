__int64 __fastcall sub_175D90(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  result = *a2;
  a1[1] = *a2;
  return result;
}
