__int64 __fastcall sub_2938F0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // edx

  v2 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL) + 24LL);
  v3 = v2[2];
  if ( !v3 )
  {
    *(_DWORD *)(a2 + 8) = 75;
    return 1;
  }
  v4 = 0;
  if ( v3 == 1 )
  {
    v6 = *v2;
    if ( *(_DWORD *)(*v2 + 24LL) == 70 )
    {
      v7 = *(_DWORD *)(a2 + 12) == -1;
      *(_DWORD *)(a2 + 8) = 75;
      if ( v7 )
      {
        v8 = *(_DWORD *)(v6 + 28);
        if ( v8 != -1 )
        {
          *(_DWORD *)(a2 + 12) = v8;
          *(_DWORD *)(v6 + 28) = -1;
        }
      }
      return 1;
    }
  }
  return v4;
}
