void __fastcall sub_21FB4C0(__int64 a1, char a2)
{
  _DWORD *v2; // rax
  unsigned int v3; // edx

  v2 = *(_DWORD **)a1;
  if ( *(_DWORD *)(*(_QWORD *)a1 + 16LL) == 1 )
  {
    sub_21F9270((__int64 *)a1, 0, a2, nullptr);
  }
  else
  {
    *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF0 | (8 * (a2 & 1));
    *(_DWORD *)(a1 + 16) = *v2 + 1;
    v3 = v2[2] + 64;
    if ( v3 > 0x7F )
      sub_22096E0(*(_QWORD *)(a1 + 8), 0, v3 >> 6);
    else
      sub_22096E0(a1 + 8, 0, 1);
  }
}
