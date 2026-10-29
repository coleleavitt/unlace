__int64 __fastcall sub_A39D90(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // dl
  __int64 v3; // rax
  unsigned int v4; // edx
  int v6; // edx

  v2 = *(_BYTE *)(a2 + 19);
  v3 = *(_QWORD *)(a2 + 40);
  if ( (v2 & 2) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(a1 + 8) = v4;
    if ( v4 > 0x40 )
      sub_21E17D0(a1);
    else
      *(_QWORD *)a1 = *(_QWORD *)v3;
    return a1;
  }
  else
  {
    v6 = 8 * ((v2 >> 2) & 0x1F);
    *(_DWORD *)(a1 + 8) = v6;
    if ( v6 > 64 )
      sub_21E1730(a1, v3, 0);
    else
      *(_QWORD *)a1 = v3;
    return a1;
  }
}

