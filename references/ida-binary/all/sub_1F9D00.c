__int64 __fastcall sub_1F9D00(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = sub_17D870(a1);
  if ( !v3 )
    return 0;
  if ( *(_QWORD *)(v3 + 424) )
  {
    v6 = *(_DWORD *)(v3 + 416);
    if ( v6 == 2 )
    {
      v8 = *(_QWORD *)(v3 + 888);
      v9 = 1;
    }
    else
    {
      if ( (v6 & 0xFFFFFFFD) != 1 )
        return 1;
      v8 = *(_QWORD *)(v3 + 896);
      v9 = 2;
    }
    if ( v8 )
    {
      *(_DWORD *)(v3 + 944) = v9;
      sub_1F8860(v3, (_BYTE *)&dword_0 + 1, v8, v9, a3);
    }
    return 1;
  }
  sub_1E69C0(a3, a1, a2, v4, v5);
  return sub_1F9D90();
}
