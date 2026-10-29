__int64 __fastcall sub_84BBE0(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int *v2; // r12
  unsigned int v3; // r13d
  __int64 result; // rax
  int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rbp
  int v9; // r8d
  int v10; // edx

  v1 = *(int *)(a1 + 128);
  v2 = *(unsigned int **)a1;
  v3 = *(_DWORD *)(a1 + 132) - v1;
  if ( v3 == 8 )
  {
    v9 = 127;
    v10 = 142;
    return sub_847F60(v2, 32, v10, v1, v9, 0);
  }
  result = sub_847F60(*(unsigned int **)a1, 32, 3, 0, 127, 0);
  v5 = *(_DWORD *)(a1 + 128);
  if ( v3 <= 0x30 )
  {
    for ( ; *(_DWORD *)(a1 + 132) > v5; result = sub_847F60(v2, 32, 142, v6, 3, 0) )
    {
      v6 = v5;
      v5 += 8;
    }
    return result;
  }
  sub_848DB0(v2, 1, v5);
  v7 = 8 * ((v3 >> 3) % 3);
  sub_849F80(v2, 0x40u, 4, 0, 1, 0, 0x7Fu, v3 - v7);
  v8 = sub_845240((__int64)v2);
  sub_847F60(v2, 32, 129, 0, 3, 0);
  sub_849F80(v2, 0x40u, 1, 0, 1, 0, 0x7Fu, 24);
  sub_847F60(v2, 32, 129, -16, 3, 0);
  sub_847F60(v2, 32, 129, -8, 3, 0);
  result = (__int64)sub_84A700(v2, 2, 1, 0, 4, 0);
  if ( v8 && result )
  {
    *(_QWORD *)(result + 16) &= ~1uLL;
    *(_QWORD *)(result + 24) = v8;
  }
  if ( v7 > 7 )
  {
    result = sub_847F60(v2, 32, 129, 0, 3, 0);
    if ( v7 == 16 )
    {
      v9 = 3;
      v1 = 8;
      v10 = 129;
      return sub_847F60(v2, 32, v10, v1, v9, 0);
    }
  }
  return result;
}

