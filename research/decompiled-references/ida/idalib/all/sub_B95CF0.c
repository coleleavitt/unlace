unsigned __int64 __fastcall sub_B95CF0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 50) & 1) != 0 )
  {
    v1 = *(unsigned int *)(a1 + 76);
  }
  else if ( sub_B8E990(a1 + 40) )
  {
    v1 = *(unsigned int *)(a1 + 24);
  }
  else
  {
    v3 = sub_B8E970(a1 + 40);
    v1 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) >> 32;
  }
  return *(unsigned int *)(a1 + 72) | (v1 << 32);
}
