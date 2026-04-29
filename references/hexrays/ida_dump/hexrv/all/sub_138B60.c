__int64 __fastcall sub_138B60(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  __int64 v5; // rdx
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r12
  int v16; // eax
  __int64 v17; // rax
  __int64 func; // rax
  int v19; // eax
  _QWORD v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v20[3] = __readfsqword(0x28u);
  if ( a4 )
    return 0;
  v4 = *(_BYTE *)a2;
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)a2 == 4 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL);
  }
  else
  {
    if ( v4 == 10 )
    {
LABEL_12:
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    if ( v4 != 1 )
      return 0;
    v15 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(v5 + 24);
    v16 = *(_DWORD *)(a2 + 8);
    if ( v16 != *(_DWORD *)(*(_QWORD *)(v15 + 1504) + 60LL) )
    {
      if ( v16 != *(_DWORD *)(v15 + 1184) )
        return 0;
      v17 = sub_32BBA0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v5 + 24));
      func = get_func(v17);
      v19 = func ? *(_DWORD *)(func + 16) : *(_DWORD *)(v15 + 112);
      if ( (v19 & 0x10) == 0 )
        return 0;
      v5 = *(_QWORD *)(a1 + 32);
    }
  }
  v9 = *(_QWORD *)(a1 + 16);
  v20[1] = 0;
  v20[0] = 0xFFFFFFFF00000000LL;
  if ( (unsigned __int8)sub_138320(v9, (__int64)v20, (int *)v5, a1 + 64, a2, 0xFFFFFFFF) )
  {
    sub_118550((char *)a2, (char *)v20);
    sub_118490((char *)a2, *(_QWORD *)(a1 + 48));
    if ( *(_DWORD *)(a2 + 4) < SHIDWORD(v20[0]) )
      sub_11C320((char *)a2, *(_QWORD *)(a1 + 48), 9, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL), SHIDWORD(v20[0]));
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(_DWORD *)(v10 + 24);
    BYTE1(v11) &= ~2u;
    LOBYTE(v11) = v11 | 0x80;
    *(_DWORD *)(v10 + 24) = v11;
    ++*(_DWORD *)(a1 + 56);
    sub_1188E0((__int64)v20);
    if ( (unsigned int)(**(_DWORD **)(a1 + 32) - 10) <= 1 )
    {
      sub_32BE10(*(_QWORD *)(a1 + 8), v8, 16, v12, v13, v14);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
      **(_DWORD **)(a1 + 32) = 4;
    }
    goto LABEL_12;
  }
  sub_1188E0((__int64)v20);
  if ( *(_BYTE *)a2 == 1 )
    ++*(_DWORD *)(a1 + 60);
  return 0;
}
