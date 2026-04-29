__int64 sub_1D17E0()
{
  __int64 result; // rax

  result = qalloc_or_throw(24);
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  return result;
}
