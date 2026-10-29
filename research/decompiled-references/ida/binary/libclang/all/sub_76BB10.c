__int64 __fastcall sub_76BB10(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ebp
  unsigned int v8; // esi
  __int64 v10; // r12
  void *v11; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-20h]
  char v13; // [rsp+Ch] [rbp-1Ch]

  v2 = *(_DWORD **)(a1 + 24);
  v3 = *(_DWORD **)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 40) & 0x7FFFFFFF;
  v5 = *v3 >> 14;
  v6 = (*v2 >> 14) & 0x1E;
  v7 = v5 & 0x1F;
  v8 = v7;
  if ( (v5 & 0xE) == 0 )
  {
    if ( v4 && *(char *)(a1 + 43) < 0 )
      goto LABEL_9;
    return v8 | v6 | 2;
  }
  v8 = v6 | v7 | 2;
  if ( !v4 || *(char *)(a1 + 43) >= 0 )
    return v8 | v6 | 2;
  if ( (v5 & 2) != 0 )
    return v8;
  v7 |= v6 | 2;
LABEL_9:
  v10 = 48;
  if ( *(char *)(a1 + 1) >= 0 )
  {
    sub_805650(&v11, v3);
    if ( v13 )
    {
      if ( v12 <= 0x40 )
      {
        v10 = 8LL * (unsigned int)v11 + 48;
        return v7 | (**(_DWORD **)(a1 + v10) >> 14) & 0x1Fu;
      }
    }
    else if ( v12 <= 0x40 )
    {
      v10 = 48;
      if ( v12 )
        v10 = 8LL * (unsigned int)((__int64)((_QWORD)v11 << (64 - (unsigned __int8)v12)) >> (64 - (unsigned __int8)v12))
            + 48;
      return v7 | (**(_DWORD **)(a1 + v10) >> 14) & 0x1Fu;
    }
    v10 = 8LL * *(unsigned int *)v11 + 48;
    operator delete[](v11);
  }
  return v7 | (**(_DWORD **)(a1 + v10) >> 14) & 0x1Fu;
}

