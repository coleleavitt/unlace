__int64 __fastcall sub_C18DB0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  char v4; // al

  if ( *(_DWORD *)(a1 + 8) > 0x40u )
  {
    v3 = *(void **)a1;
    if ( v3 )
      operator delete[](v3);
  }
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v4 = *(_BYTE *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a1 + 12) = v4;
  return a1;
}
