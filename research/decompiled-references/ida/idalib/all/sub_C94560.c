unsigned __int64 __fastcall sub_C94560(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r12

  v2 = (*(_BYTE *)(a1 + 3) >> 1) & 0x3F;
  if ( (unsigned int)(v2 - 37) <= 1 )
  {
    v6 = *(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32);
    if ( *(_DWORD *)(a1 + 16) != 1 )
      return ((unsigned __int64)*(unsigned int *)(a1 + 20) << 32) | (unsigned int)sub_EEB7E0(v6);
    return (sub_EEC140(v6) << 32) | *(unsigned int *)(a1 + 20);
  }
  if ( v2 == 41 || v2 == 42 || v2 == 43 )
  {
    v5 = (unsigned __int64)*(unsigned int *)(a1 + 20) << 32;
    return v5 | (unsigned int)sub_EEB7E0(*(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32));
  }
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 == 1 )
  {
    v6 = *(_QWORD *)(a1 + 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL) + 32);
    return (sub_EEC140(v6) << 32) | *(unsigned int *)(a1 + 20);
  }
  if ( v3 != 2 )
    return ((unsigned __int64)*(unsigned int *)(a1 + 20) << 32) | *(unsigned int *)(a1 + 20);
  v7 = 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL);
  v8 = (unsigned int)sub_EEC140(*(_QWORD *)(a1 + v7 + 40));
  return (v8 << 32) | (unsigned int)sub_EEB7E0(*(_QWORD *)(a1 + v7 + 32));
}
