unsigned __int64 sub_AD3A50()
{
  __int64 v0; // rax
  char v1; // dl

  v0 = sub_B4CC80();
  v1 = *(_BYTE *)(v0 + 87);
  if ( (v1 & 0x40) != 0 )
    return *(_QWORD *)(v0 + 16LL * ((v1 & 0x20) != 0) + 176);
  else
    return (unsigned __int64)v1 >> 63;
}

