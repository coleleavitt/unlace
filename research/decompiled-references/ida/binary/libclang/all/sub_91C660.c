__int64 __fastcall sub_91C660(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 result; // rax

  v2 = sub_A1A4E0(a1, 16);
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 8) = v3;
  if ( v3 > 0x40 )
    return sub_2585B30(v2);
  result = *(_QWORD *)a2;
  *(_QWORD *)v2 = *(_QWORD *)a2;
  return result;
}

