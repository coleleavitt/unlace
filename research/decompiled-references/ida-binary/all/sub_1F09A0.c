__int64 __fastcall sub_1F09A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = *(_QWORD *)(a3 + 40);
  result = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a2 + 40);
    result = 1;
    if ( v5 )
      return (unsigned __int8)sub_1F0940(a1, v3, v5) ^ 1u;
  }
  return result;
}
