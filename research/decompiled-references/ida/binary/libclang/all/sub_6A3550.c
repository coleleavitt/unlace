void __fastcall sub_6A3550(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v7; // eax
  void *v8; // rdi

  *(_QWORD *)(a1 + 8) = a2;
  *(_BYTE *)(a1 + 36) &= ~2u;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 24) = *a4;
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 != -1 )
  {
    if ( v7 > 2 )
    {
      v8 = *(void **)(a1 + 40);
      if ( v8 )
        operator delete[](v8);
    }
    *(_DWORD *)(a1 + 32) = -1;
  }
  *(_BYTE *)(a1 + 36) = a5 & 1 | *(_BYTE *)(a1 + 36) & 0xFE;
}

