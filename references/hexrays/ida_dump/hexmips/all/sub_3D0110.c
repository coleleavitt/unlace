__int64 __fastcall sub_3D0110(_DWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // eax
  int v6; // r9d
  int v7; // eax
  _DWORD *v11; // rsi

  v11 = a1;
  v3 = *(_QWORD *)(a2 + 64);
  if ( !v3 || (unsigned int)(*(_DWORD *)(v3 + 60) - 1) > 1 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL);
  if ( a1[4] == *(_DWORD *)(v3 + 72) && (v5 = a1[5], v5 >= 0) && v5 < v4 )
  {
    if ( (unsigned __int64)v5 < *(_QWORD *)(v3 + 120)
      && (v6 = v11[6] + 1, (unsigned __int64)v6 < *(_QWORD *)(*(_QWORD *)(v3 + 112) + 24LL * v5 + 8)) )
    {
      v11[6] = v6;
      sub_3CFE30(a2, (__int64)v11, v3, a3);
    }
    else
    {
      v7 = v5 + 1;
      if ( v7 >= v4 )
        return 0;
      v11[5] = v7;
      v11[6] = 0;
      sub_3CFE30(a2, (__int64)v11, v3, a3);
    }
  }
  else if ( v4 > 0 )
  {
    v11[2] = 0;
    *(_QWORD *)(v11 + 5) = 0;
    sub_3CFE30(a2, (__int64)v11, v3, a3);
  }
  return 1;
}
