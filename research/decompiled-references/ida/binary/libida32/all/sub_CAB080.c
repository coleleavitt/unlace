__int64 __fastcall sub_CAB080(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( *(_QWORD *)(a1 + 576) )
  {
    v2 = sub_C70F40(a2);
    return sub_CA89D0(a1, v2, v3, v4, v5);
  }
  else
  {
    *(_QWORD *)(a1 + 576) = a2;
    v7 = sub_C70F40(a2);
    result = sub_CA89D0(a1, v7, v8, v9, v10);
    *(_QWORD *)(a1 + 576) = 0;
  }
  return result;
}

