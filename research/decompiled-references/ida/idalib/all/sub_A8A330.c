__int64 __fastcall sub_A8A330(_QWORD *a1)
{
  __int64 result; // rax
  size_t v2; // rax

  result = a1[182];
  if ( !result )
  {
    v2 = j__strlen("__uint128_t");
    result = sub_A8A070(a1, a1[2349], "__uint128_t", v2);
    a1[182] = result;
  }
  return result;
}
