__int64 __fastcall sub_3BF470(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  v2 = sub_3BF260(a2, 1);
  result = 0;
  if ( v2 )
  {
    sub_3912F0(a2, 1);
    return 1;
  }
  return result;
}
