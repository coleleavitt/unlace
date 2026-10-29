__int64 __fastcall sub_26B3D0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *(_QWORD *)(*a1 + 144) = a2;
  return result;
}

