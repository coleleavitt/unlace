char __fastcall sub_20CFEA0(__int64 a1)
{
  _BYTE *v1; // rdi
  char v2; // al

  v1 = *(_BYTE **)(a1 + 16);
  v2 = v1[10] & 0xC;
  if ( v2 == 8 )
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v1 + 16LL))(v1);
  else
    return v2 == 0;
}
