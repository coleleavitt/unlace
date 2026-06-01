unsigned __int64 __fastcall sub_7A1CE0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 50) & 1) != 0 )
  {
    v1 = *(unsigned int *)(a1 + 76);
  }
  else if ( sub_79C1B0(a1 + 40) )
  {
    v1 = *(unsigned int *)(a1 + 24);
  }
  else
  {
    v3 = sub_79C190(a1 + 40);
    v1 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) >> 32;
  }
  return (v1 << 32) | *(unsigned int *)(a1 + 72);
}

