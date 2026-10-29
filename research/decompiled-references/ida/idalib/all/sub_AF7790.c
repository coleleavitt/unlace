unsigned __int64 sub_AF7790()
{
  __int64 v0; // rax
  char v1; // dl

  v0 = sub_B709C0();
  v1 = *(_BYTE *)(v0 + 87);
  if ( (v1 & 0x40) != 0 )
    return *(_QWORD *)(v0 + 16LL * ((v1 & 0x20) != 0) + 176);
  else
    return (unsigned __int64)v1 >> 63;
}
