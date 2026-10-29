__int64 __fastcall sub_5300B0(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rax

  v2 = (__int64 *)sub_52EA70(*(_QWORD *)(*(_QWORD *)a1 + 1808LL), a2);
  if ( v2 != (__int64 *)(*(_QWORD *)(v3 + 8) + 8LL * *(_QWORD *)(v3 + 16)) && (v4 = *v2, *(_QWORD *)v4 == a2) && v4 )
    return *(int *)(v4 + 36);
  else
    return (int)sub_52FF20(v3 + 32, a2);
}
