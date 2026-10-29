__int64 __fastcall sub_16C53C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl
  unsigned int v4; // ecx
  void *v5; // rdi
  char v6; // dl
  void *v7; // rdi
  char v8; // dl
  __int64 v9; // [rsp+0h] [rbp-18h]
  __int64 v10; // [rsp+0h] [rbp-18h]

  result = a1;
  v3 = *(_BYTE *)(a2 + 16);
  if ( *(_BYTE *)(a1 + 16) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( v3 )
    {
      if ( v4 > 0x40 )
      {
        v7 = *(void **)a1;
        if ( v7 )
        {
          v10 = result;
          operator delete[](v7);
          result = v10;
        }
      }
      *(_QWORD *)result = *(_QWORD *)a2;
      *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
      v8 = *(_BYTE *)(a2 + 12);
      *(_DWORD *)(a2 + 8) = 0;
      *(_BYTE *)(result + 12) = v8;
    }
    else
    {
      *(_BYTE *)(a1 + 16) = 0;
      if ( v4 > 0x40 )
      {
        v5 = *(void **)a1;
        if ( *(_QWORD *)result )
        {
          v9 = result;
          operator delete[](v5);
          return v9;
        }
      }
    }
  }
  else if ( v3 )
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a1 = *(_QWORD *)a2;
    v6 = *(_BYTE *)(a2 + 12);
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)(a1 + 12) = v6;
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
