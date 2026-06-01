char __fastcall sub_20CFEC0(__int64 a1)
{
  _BYTE *v2; // rdi
  char v3; // al
  char result; // al

  if ( *(_BYTE *)(a1 + 32) )
    return 0;
  *(_BYTE *)(a1 + 32) = 1;
  v2 = *(_BYTE **)(a1 + 24);
  v3 = v2[10] & 0xC;
  if ( v3 == 8 )
  {
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 16LL))(v2);
    *(_BYTE *)(a1 + 32) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
    return v3 == 0;
  }
  return result;
}
