char __fastcall sub_20CFFD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax
  _BYTE *v4; // rdi
  char v5; // al

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
  v4 = *(_BYTE **)(*(_QWORD *)(a1 + 16) + 8 * v3);
  v5 = v4[10] & 0xC;
  if ( v5 == 8 )
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 16LL))(v4);
  else
    return v5 == 0;
}
