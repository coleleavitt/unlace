__int64 __fastcall sub_9FB9F0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rax

  if ( !*(_QWORD *)(a1 + 32) || !(unsigned __int8)((__int64 (*)(void))sub_2259B60)() )
    return 0;
  v1 = *(_QWORD **)(a1 + 32);
  if ( !v1 || !(unsigned __int8)sub_2259B60(v1) )
    BUG();
  v2 = *(__int64 (__fastcall **)(__int64))(*v1 + 80LL);
  if ( v2 == sub_9FAD20 )
    v3 = v1[11];
  else
    v3 = v2((__int64)v1);
  return v1[4] - v1[2] + v3;
}

