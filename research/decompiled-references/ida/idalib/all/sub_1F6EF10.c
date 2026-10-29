__int64 __fastcall sub_1F6EF10(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // ebp
  int v5; // ebx
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // ecx
  int v13; // ebx
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // edx
  int v17; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v18[56]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  if ( a2 == (unsigned int)a2 )
    return sub_1F6E7D0(a1, a2);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 52);
  v6 = *(_DWORD *)(a1 + 48);
  if ( a2 > 0x1F )
  {
    do
    {
      v8 = (v3 & 0x1F | 0x20) << v6;
      v6 += 6;
      v5 |= v8;
      *(_DWORD *)(a1 + 52) = v5;
      if ( v6 > 0x1F )
      {
        v9 = *(_QWORD **)(a1 + 24);
        v10 = v9[1];
        if ( (unsigned __int64)(v10 + 4) > v9[2] )
        {
          sub_2236E10(*(_QWORD *)(a1 + 24), v9 + 3, v10 + 4, 1);
          v10 = v9[1];
        }
        *(_DWORD *)(*v9 + v10) = v5;
        v7 = *(_DWORD *)(a1 + 48);
        v5 = 0;
        v9[1] += 4LL;
        if ( v7 )
          v5 = (v3 & 0x1F | 0x20) >> (32 - (unsigned __int8)v7);
        v6 = ((_BYTE)v7 + 6) & 0x1F;
        *(_DWORD *)(a1 + 52) = v5;
      }
      v3 >>= 5;
      *(_DWORD *)(a1 + 48) = v6;
    }
    while ( v3 > 0x1F );
    v4 = v3;
  }
  result = v4 << v6;
  v12 = v6 + 6;
  v13 = result | v5;
  *(_DWORD *)(a1 + 52) = v13;
  if ( v12 > 0x1F )
  {
    v14 = *(_QWORD **)(a1 + 24);
    v17 = v13;
    sub_A1FE50(v14, &v17, v18);
    v15 = *(_DWORD *)(a1 + 48);
    v16 = 0;
    if ( v15 )
      v16 = v4 >> (32 - v15);
    *(_DWORD *)(a1 + 52) = v16;
    result = ((_BYTE)v15 + 6) & 0x1F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v12;
  }
  return result;
}
