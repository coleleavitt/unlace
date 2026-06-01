__int64 __fastcall sub_16BA790(__int64 a1, unsigned int a2)
{
  char v3; // r12
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  void *v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-30h]

  v3 = *(_BYTE *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    if ( a2 >= v4 )
    {
      if ( v4 > 0x40 )
      {
LABEL_4:
        v5 = v4 - sub_2206780(a1);
        return v5 | 0x100000000LL;
      }
LABEL_8:
      v5 = 0;
      if ( *(_QWORD *)a1 )
      {
        _BitScanReverse64(&v7, *(_QWORD *)a1);
        v5 = 64 - (v7 ^ 0x3F);
      }
      return v5 | 0x100000000LL;
    }
LABEL_13:
    sub_2206A40(&v15, a1);
    v4 = v16;
    v10 = v15;
    if ( *(_DWORD *)(a1 + 8) > 0x40u )
    {
      v11 = *(void **)a1;
      if ( *(_QWORD *)a1 )
        operator delete[](v11);
    }
    *(_QWORD *)a1 = v10;
    *(_DWORD *)(a1 + 8) = v4;
    *(_BYTE *)(a1 + 12) = v3;
    if ( v4 > 0x40 )
      goto LABEL_4;
    goto LABEL_8;
  }
  v8 = *(_QWORD *)a1;
  v9 = 1LL << ((unsigned __int8)v4 - 1);
  if ( v4 <= 0x40 )
  {
    if ( (v9 & v8) == 0 )
    {
      if ( a2 >= v4 )
        goto LABEL_8;
      goto LABEL_13;
    }
    if ( v4 )
    {
      v12 = 64;
      v13 = ~(v8 << (64 - (unsigned __int8)v4));
      if ( v13 )
      {
        _BitScanReverse64(&v14, v13);
        v12 = v14 ^ 0x3F;
      }
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    if ( (v9 & *(_QWORD *)(v8 + 8LL * ((v4 - 1) >> 6))) == 0 )
    {
      if ( a2 >= v4 )
        goto LABEL_4;
      goto LABEL_13;
    }
    v12 = sub_2206800(a1);
  }
  return v4 + 1 - v12;
}
