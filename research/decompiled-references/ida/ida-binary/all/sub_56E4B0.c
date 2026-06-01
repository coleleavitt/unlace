char *sub_56E4B0()
{
  char *v0; // rbx
  void *v1; // rax
  void *v2; // rax
  _QWORD *v3; // rax
  bool v4; // zf

  v0 = (char *)off_8C52B0(1u, 0x5E8u);
  sub_5658E0((__int64)v0);
  *((_QWORD *)v0 + 160) = 0;
  *((_QWORD *)v0 + 159) = 0;
  v1 = off_8C52B8(0x40u);
  *((_DWORD *)v0 + 321) = 4;
  *((_QWORD *)v0 + 159) = v1;
  v2 = off_8C52B8(0x100u);
  *((_QWORD *)v0 + 155) = 0;
  *((_QWORD *)v0 + 153) = v2;
  *((_QWORD *)v0 + 156) = 0;
  *((_QWORD *)v0 + 154) = 0x2000000000LL;
  v3 = sub_56E320((__int64)(v0 + 1224));
  v4 = *((_QWORD *)v0 + 168) == 0;
  *((_QWORD *)v0 + 161) = 0;
  *((_QWORD *)v0 + 152) = v3;
  *((_QWORD *)v0 + 171) = 0;
  *((_QWORD *)v0 + 172) = 0;
  *((_QWORD *)v0 + 175) = 0;
  *((_QWORD *)v0 + 178) = 0;
  *((_QWORD *)v0 + 157) = 0;
  v0[1510] = 0;
  *((_WORD *)v0 + 754) = 0;
  *((_DWORD *)v0 + 359) = 0;
  *((_QWORD *)v0 + 182) = 0;
  *((_QWORD *)v0 + 183) = 0;
  *((_DWORD *)v0 + 376) = 0;
  *(_OWORD *)(v0 + 1384) = 0;
  *((_OWORD *)v0 + 88) = 0;
  *((_OWORD *)v0 + 90) = 0;
  if ( !v4 )
    sub_56C9A0((__int64)(v0 + 1224), *((volatile signed __int32 **)v0 + 168));
  if ( *((_QWORD *)v0 + 169) )
    sub_56C9A0((__int64)(v0 + 1224), *((volatile signed __int32 **)v0 + 169));
  *((_DWORD *)v0 + 340) = 0;
  *((_OWORD *)v0 + 84) = 0;
  return v0;
}
