__int64 __fastcall sub_657B90(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v2 = *a1;
  result = *a2;
  if ( *a2 )
  {
    *(_QWORD *)(v2 + 64) = result;
  }
  else
  {
    sub_180C5A0(&v4, "P");
    result = v4;
    *(_QWORD *)(v2 + 64) = v4;
  }
  return result;
}

