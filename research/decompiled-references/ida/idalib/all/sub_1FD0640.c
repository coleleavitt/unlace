void __fastcall sub_1FD0640(__int64 a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // ebp
  unsigned int v4; // ecx
  int v5; // ebp
  _QWORD *v6; // r12
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // edx

  v2 = *(_DWORD *)(a1 + 48);
  v3 = a2 << v2;
  v4 = v2 + 6;
  v5 = *(_DWORD *)(a1 + 52) | v3;
  *(_DWORD *)(a1 + 52) = v5;
  if ( v4 > 0x1F )
  {
    v6 = *(_QWORD **)(a1 + 24);
    v7 = v6[1];
    if ( (unsigned __int64)(v7 + 4) > v6[2] )
    {
      sub_2236E10(*(_QWORD *)(a1 + 24), v6 + 3, v7 + 4, 1);
      v7 = v6[1];
    }
    *(_DWORD *)(*v6 + v7) = v5;
    v8 = *(_DWORD *)(a1 + 48);
    v9 = 0;
    v6[1] += 4LL;
    if ( v8 )
      v9 = a2 >> (32 - v8);
    *(_DWORD *)(a1 + 52) = v9;
    *(_DWORD *)(a1 + 48) = ((_BYTE)v8 + 6) & 0x1F;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = v4;
  }
}
