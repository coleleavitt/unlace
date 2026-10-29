char __fastcall sub_8318F0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  _QWORD *v3; // rax
  char result; // al
  unsigned int v5; // r12d

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 <= 0x40 )
  {
    v3 = *(_QWORD **)a1;
    return a2 < (unsigned __int64)v3;
  }
  v5 = v2 - sub_2587400(a1);
  result = 1;
  if ( v5 <= 0x40 )
  {
    v3 = **(_QWORD ***)a1;
    return a2 < (unsigned __int64)v3;
  }
  return result;
}

