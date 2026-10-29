__int64 __fastcall sub_74C5A0(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // eax
  unsigned __int64 v5; // rax
  int v7; // eax

  v1 = -2;
  if ( a1 && *(_QWORD *)(a1 + 64) && *(_QWORD *)(a1 + 72) )
  {
    v1 = sub_74C540(a1);
    if ( v1 )
      return (unsigned int)-2;
    v2 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 88) = 2;
    v3 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v2 + 40) = 0;
    *(_QWORD *)(v2 + 32) = v3;
    v4 = *(_DWORD *)(v2 + 48);
    if ( v4 < 0 )
    {
      v7 = -v4;
      *(_DWORD *)(v2 + 48) = v7;
      if ( v7 != 2 )
        goto LABEL_7;
    }
    else if ( v4 != 2 )
    {
LABEL_7:
      *(_DWORD *)(v2 + 8) = 42;
      v5 = sub_74AAF0(0, nullptr, 0);
LABEL_8:
      *(_QWORD *)(a1 + 96) = v5;
      *(_DWORD *)(v2 + 76) = -2;
      sub_7520B0(v2);
      return v1;
    }
    *(_DWORD *)(v2 + 8) = 57;
    v5 = sub_74AED0(0, nullptr, 0);
    goto LABEL_8;
  }
  return v1;
}
