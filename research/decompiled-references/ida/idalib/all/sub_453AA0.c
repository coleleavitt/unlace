__int64 __fastcall sub_453AA0(_QWORD *a1, unsigned int *a2)
{
  __int64 result; // rax

  *a1 = *a2;
  a1[1] = a2[1];
  result = a2[2];
  a1[2] = result;
  return result;
}
