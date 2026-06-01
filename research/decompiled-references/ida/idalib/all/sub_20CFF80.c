char __fastcall sub_20CFF80(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a2 + 36) == -1 )
  {
    *(_DWORD *)(a2 + 36) = v2;
    v3 = 0;
    *(_DWORD *)(a2 + 32) = 0;
  }
  else
  {
    v3 = *(unsigned int *)(a2 + 32);
  }
  if ( v3 >= v2 )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v3);
  if ( (*(_BYTE *)(v4 + 9) & 0xC0) == 0x80 )
    return (**(__int64 (__fastcall ***)(__int64))v4)(v4);
  else
    return (*(_BYTE *)(v4 + 9) & 0xC0) == 0;
}
