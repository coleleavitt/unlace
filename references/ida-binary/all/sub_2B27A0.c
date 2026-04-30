__int64 __fastcall sub_2B27A0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = sub_17D870(a1);
  if ( !v3 )
    return 0;
  v6 = v3;
  if ( (unsigned int)sub_1EB590(v3, a2, v4, v5, a3) != 2 || (result = *(_QWORD *)(v6 + 896)) == 0 )
  {
    if ( (unsigned int)sub_1EB590(v6, a2, v7, v8, a3) == 3 )
      return *(_QWORD *)(v6 + 904);
    return 0;
  }
  return result;
}
