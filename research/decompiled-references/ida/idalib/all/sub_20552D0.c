__int64 __fastcall sub_20552D0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rax

  v1 = *a1;
  result = *(_QWORD *)(*a1 + 1760);
  if ( !result )
  {
    v3 = sub_20C31C0();
    result = sub_2055240(v3, 0, 0);
    *(_QWORD *)(v1 + 1760) = result;
  }
  return result;
}
