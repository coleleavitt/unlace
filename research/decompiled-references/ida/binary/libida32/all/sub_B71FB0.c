unsigned __int64 __fastcall sub_B71FB0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 50) & 1) != 0 )
  {
    v1 = *(unsigned int *)(a1 + 76);
  }
  else if ( sub_B6AC50(a1 + 40) )
  {
    v1 = *(unsigned int *)(a1 + 24);
  }
  else
  {
    v3 = sub_B6AC30(a1 + 40);
    v1 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) >> 32;
  }
  return *(unsigned int *)(a1 + 72) | (v1 << 32);
}

