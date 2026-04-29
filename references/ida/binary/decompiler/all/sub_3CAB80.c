__int64 __fastcall sub_3CAB80(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // eax
  int v5; // r8d
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  _DWORD *v12; // rsi

  v12 = a1;
  v2 = *(_QWORD *)(a2 + 64);
  if ( !v2 || (unsigned int)(*(_DWORD *)(v2 + 60) - 1) > 1 )
    return 0;
  v3 = *(_DWORD *)(*(_QWORD *)(v2 + 64) + 64LL);
  if ( a1[4] == *(_DWORD *)(v2 + 72) && (v4 = a1[5], v4 >= 0) && v4 < v3 )
  {
    v5 = v12[6];
    if ( v5 > 0 )
    {
      v12[6] = v5 - 1;
      sub_3CA9E0(a2, (__int64)v12, v2);
    }
    else
    {
      if ( !v4 )
        return 0;
      v7 = v4 - 1;
      v8 = 0;
      v12[5] = v7;
      if ( (unsigned __int64)v7 < *(_QWORD *)(v2 + 120) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v2 + 112) + 24LL * v7 + 8);
        if ( v9 )
          v8 = v9 - 1;
      }
      v12[6] = v8;
      sub_3CA9E0(a2, (__int64)v12, v2);
    }
  }
  else if ( v3 > 0 )
  {
    v12[2] = 0;
    *(_QWORD *)(v12 + 5) = 0;
    sub_3CA9E0(a2, (__int64)v12, v2);
  }
  return 1;
}
