__int64 __fastcall sub_3CAC70(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  _DWORD *v10; // rsi

  v10 = a1;
  v2 = *(_QWORD *)(a2 + 64);
  if ( !v2 || (unsigned int)(*(_DWORD *)(v2 + 60) - 1) > 1 )
    return 0;
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 64) + 64LL);
  if ( a1[4] == *(_DWORD *)(v2 + 72) && (v4 = a1[5], v4 >= 0) && v4 < v3 )
  {
    if ( (unsigned __int64)v4 < *(_QWORD *)(v2 + 120)
      && (v5 = v10[6] + 1, (unsigned __int64)v5 < *(_QWORD *)(*(_QWORD *)(v2 + 112) + 24LL * v4 + 8)) )
    {
      v10[6] = v5;
      sub_3CA9E0(a2, (__int64)v10, v2);
    }
    else
    {
      v6 = v4 + 1;
      if ( v6 >= v3 )
        return 0;
      v10[5] = v6;
      v10[6] = 0;
      sub_3CA9E0(a2, (__int64)v10, v2);
    }
  }
  else if ( v3 > 0 )
  {
    v10[2] = 0;
    *(_QWORD *)(v10 + 5) = 0;
    sub_3CA9E0(a2, (__int64)v10, v2);
  }
  return 1;
}
