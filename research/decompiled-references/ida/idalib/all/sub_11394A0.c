__int64 __fastcall sub_11394A0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(a1 + 8);
  if ( result == *(_QWORD *)(a1 + 16) )
  {
    sub_1075D80(a1, (char *)result, a2);
    return *(_QWORD *)(a1 + 8) - 16LL;
  }
  else
  {
    v3 = *a2;
    *(_QWORD *)(result + 8) = a2[1];
    *(_QWORD *)result = v3;
    *(_QWORD *)(a1 + 8) = result + 16;
  }
  return result;
}
