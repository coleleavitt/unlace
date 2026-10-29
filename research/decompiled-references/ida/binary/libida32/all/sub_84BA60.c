__int64 __fastcall sub_84BA60(__int64 a1, int a2)
{
  unsigned int *v2; // r12
  int v3; // ebx
  int v4; // ecx
  __int64 result; // rax
  _QWORD *v6; // rbx

  v2 = *(unsigned int **)a1;
  sub_849F80(*(unsigned int **)a1, 0x42u, 1, 0, 141, 16, 0x7Fu, 1);
  if ( a2 > 7 )
  {
    sub_848DB0(v2, 2, *(int *)(a1 + 76) + 8LL);
    sub_847F60(v2, 32, 3, 0, 127, a2 - 1);
    v6 = sub_845240((__int64)v2);
    sub_847F60(v2, 32, 130, 0, 1, 0);
    sub_849F80(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 8);
    if ( !*v2 )
    {
      v2[36] = 0;
      sub_8490A0(v2, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
    }
    result = (__int64)sub_8452F0((__int64)v2, 1);
    if ( v6 && result )
    {
      *(_QWORD *)(result + 16) &= ~1uLL;
      *(_QWORD *)(result + 24) = v6;
    }
  }
  else
  {
    v3 = 8;
    do
    {
      v4 = v3 + *(_DWORD *)(a1 + 76);
      v3 += 8;
      result = sub_847F60(v2, 32, 142, v4, 1, 0);
    }
    while ( 8 * a2 != v3 );
  }
  return result;
}

