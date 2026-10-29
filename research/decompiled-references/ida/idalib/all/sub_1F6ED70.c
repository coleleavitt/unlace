__int64 __fastcall sub_1F6ED70(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r13
  unsigned int v6; // r12d
  int v7; // ebp
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  _QWORD *v11; // r12
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // ecx
  int v15; // ebp
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned int v18; // edx
  int v19; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v20[56]; // [rsp+10h] [rbp-38h] BYREF

  sub_A1FEC0(a1, 3u, *(_DWORD *)(a1 + 56));
  sub_1F6E7D0(a1, a2);
  sub_1F6E7D0(a1, 1u);
  v5 = *a3;
  if ( *a3 == (unsigned int)*a3 )
    return sub_1F6E7D0(a1, v5);
  v6 = *a3;
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_DWORD *)(a1 + 48);
  if ( v5 > 0x1F )
  {
    do
    {
      v10 = (v5 & 0x1F | 0x20) << v8;
      v8 += 6;
      v7 |= v10;
      *(_DWORD *)(a1 + 52) = v7;
      if ( v8 > 0x1F )
      {
        v11 = *(_QWORD **)(a1 + 24);
        v12 = v11[1];
        if ( (unsigned __int64)(v12 + 4) > v11[2] )
        {
          sub_2236E10(*(_QWORD *)(a1 + 24), v11 + 3, v12 + 4, 1);
          v12 = v11[1];
        }
        *(_DWORD *)(*v11 + v12) = v7;
        v9 = *(_DWORD *)(a1 + 48);
        v11[1] += 4LL;
        v7 = (v5 & 0x1F | 0x20) >> (32 - (unsigned __int8)v9);
        if ( !v9 )
          v7 = 0;
        v8 = ((_BYTE)v9 + 6) & 0x1F;
        *(_DWORD *)(a1 + 52) = v7;
      }
      v5 >>= 5;
      *(_DWORD *)(a1 + 48) = v8;
    }
    while ( v5 > 0x1F );
    v6 = v5;
  }
  result = v6 << v8;
  v14 = v8 + 6;
  v15 = result | v7;
  *(_DWORD *)(a1 + 52) = v15;
  if ( v14 > 0x1F )
  {
    v16 = *(_QWORD **)(a1 + 24);
    v19 = v15;
    sub_A1FE50(v16, &v19, v20);
    v17 = *(_DWORD *)(a1 + 48);
    v18 = 0;
    if ( v17 )
      v18 = v6 >> (32 - v17);
    *(_DWORD *)(a1 + 52) = v18;
    result = ((_BYTE)v17 + 6) & 0x1F;
    *(_DWORD *)(a1 + 48) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v14;
  }
  return result;
}
