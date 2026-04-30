__int64 __fastcall sub_2A6DC0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v5 = *(_QWORD *)(a1 + 168);
  if ( !v5 || *(_BYTE *)(v5 + 48) )
    return 0;
  v6 = *(_QWORD *)(v5 + 40);
  if ( !v6 )
    return 0;
  if ( a2 )
    *a2 = v6;
  if ( (unsigned int)sub_1EB590(v6, (__int64)a2, a3, a4, a5) != 2 || (result = *(_QWORD *)(v6 + 896)) == 0 )
  {
    if ( (unsigned int)sub_1EB590(v6, (__int64)a2, v7, v8, a5) == 3 )
      return *(_QWORD *)(v6 + 904);
    return 0;
  }
  return result;
}
