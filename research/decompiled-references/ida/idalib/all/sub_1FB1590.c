__int64 __fastcall sub_1FB1590(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebx
  unsigned int i; // ecx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // ecx
  int v11; // ebx
  _QWORD *v12; // rbp
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edx

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 52);
  for ( i = *(_DWORD *)(a1 + 48); v2 > 0x1F; *(_DWORD *)(a1 + 48) = i )
  {
    v6 = (v2 & 0x1F | 0x20) << i;
    i += 6;
    v3 |= v6;
    *(_DWORD *)(a1 + 52) = v3;
    if ( i > 0x1F )
    {
      v7 = *(_QWORD **)(a1 + 24);
      v8 = v7[1];
      if ( (unsigned __int64)(v8 + 4) > v7[2] )
      {
        sub_2236E10(*(_QWORD *)(a1 + 24), v7 + 3, v8 + 4, 1);
        v8 = v7[1];
      }
      *(_DWORD *)(*v7 + v8) = v3;
      v5 = *(_DWORD *)(a1 + 48);
      v3 = 0;
      v7[1] += 4LL;
      if ( v5 )
        v3 = (v2 & 0x1F | 0x20) >> (32 - v5);
      i = ((_BYTE)v5 + 6) & 0x1F;
      *(_DWORD *)(a1 + 52) = v3;
    }
    v2 >>= 5;
  }
  result = v2 << i;
  v10 = i + 6;
  v11 = result | v3;
  *(_DWORD *)(a1 + 52) = v11;
  if ( v10 > 0x1F )
  {
    v12 = *(_QWORD **)(a1 + 24);
    v13 = v12[1];
    if ( (unsigned __int64)(v13 + 4) > v12[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v12 + 3, v13 + 4, 1);
      v13 = v12[1];
    }
    *(_DWORD *)(*v12 + v13) = v11;
    v14 = *(_DWORD *)(a1 + 48);
    v15 = 0;
    v12[1] += 4LL;
    if ( v14 )
      v15 = v2 >> (32 - v14);
    *(_DWORD *)(a1 + 52) = v15;
    result = ((_BYTE)v14 + 6) & 0x1F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v10;
  }
  return result;
}
