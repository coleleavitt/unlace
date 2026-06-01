__int64 __fastcall sub_A2D390(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 result; // rax
  void *v9; // rdi
  char v10; // [rsp+Ch] [rbp-Ch]

  *(_BYTE *)(a1 + 36) &= ~2u;
  v6 = *a4;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = v6;
  v7 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 16) = a3;
  if ( v7 != -1 )
  {
    if ( v7 > 2 )
    {
      v9 = *(void **)(a1 + 40);
      if ( v9 )
      {
        v10 = a5;
        operator delete[](v9);
        a5 = v10;
      }
    }
    *(_DWORD *)(a1 + 32) = -1;
  }
  result = a5 & 1;
  *(_BYTE *)(a1 + 36) = result | *(_BYTE *)(a1 + 36) & 0xFE;
  return result;
}

