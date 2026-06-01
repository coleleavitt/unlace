__int64 __fastcall sub_1F6E7D0(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  unsigned int i; // ecx
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 result; // rax
  unsigned int v11; // ecx
  int v12; // ebx
  _QWORD *v13; // rdi
  int v14; // eax
  unsigned int v15; // edx
  int v16; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v17[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 52);
  for ( i = *(_DWORD *)(a1 + 48); v3 > 0x1F; *(_DWORD *)(a1 + 48) = i )
  {
    v7 = (v3 & 0x1F | 0x20) << i;
    i += 6;
    v4 |= v7;
    *(_DWORD *)(a1 + 52) = v4;
    if ( i > 0x1F )
    {
      v8 = *(_QWORD **)(a1 + 24);
      v9 = v8[1];
      if ( (unsigned __int64)(v9 + 4) > v8[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v8 + 3, v9 + 4, 1);
        v9 = v8[1];
      }
      *(_DWORD *)(*v8 + v9) = v4;
      v6 = *(_DWORD *)(a1 + 48);
      v4 = 0;
      v8[1] += 4LL;
      if ( v6 )
        v4 = (v3 & 0x1F | 0x20) >> (32 - v6);
      i = ((_BYTE)v6 + 6) & 0x1F;
      *(_DWORD *)(a1 + 52) = v4;
    }
    v3 >>= 5;
  }
  result = v3 << i;
  v11 = i + 6;
  v12 = result | v4;
  *(_DWORD *)(a1 + 52) = v12;
  if ( v11 > 0x1F )
  {
    v13 = *(_QWORD **)(a1 + 24);
    v16 = v12;
    sub_A1FE50(v13, &v16, v17);
    v14 = *(_DWORD *)(a1 + 48);
    v15 = 0;
    if ( v14 )
      v15 = v3 >> (32 - v14);
    *(_DWORD *)(a1 + 52) = v15;
    result = ((_BYTE)v14 + 6) & 0x1F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v11;
  }
  return result;
}
