__int64 __fastcall sub_E544A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  v2 = a1[6];
  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
  v4 = result + a2 + a1[4] - a1[2];
  if ( v4 > *(_QWORD *)(v2 + 16) )
    return sub_22130D0(v2, v2 + 24, v4, 1);
  return result;
}

