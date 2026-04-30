__int64 __fastcall sub_1F9D90(double a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v8; // rax

  v3 = sub_17D870(a3);
  if ( !v3 )
    return 6;
  if ( *(_QWORD *)(v3 + 424) )
  {
    v6 = *(_DWORD *)(v3 + 416);
    if ( v6 == 2 )
    {
      v8 = *(_QWORD *)(v3 + 888);
    }
    else
    {
      if ( (v6 & 0xFFFFFFFD) != 1 )
        return 6;
      v8 = *(_QWORD *)(v3 + 896);
    }
    return v8 == 0 ? 6 : 2;
  }
  else
  {
    sub_1E69C0(a1, a3, a3, v4, v5);
    return sub_1F9E00();
  }
}
