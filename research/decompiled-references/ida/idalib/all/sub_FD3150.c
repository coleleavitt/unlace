__int64 __fastcall sub_FD3150(__int64 a1, _BYTE *a2, int a3)
{
  __int64 v3; // rax
  int *v4; // rdx
  int v5; // eax
  __int64 result; // rax
  int v7; // edx

  v3 = **(_QWORD **)(a1 + 8) + 40LL * (unsigned int)(a3 - 9020);
  if ( (*(_BYTE *)(v3 + 1) & 1) != 0 )
  {
    v4 = (int *)(*(_QWORD *)(a1 + 16) + 4LL * *(int *)(v3 + 4));
    v5 = *v4;
    if ( (*v4 & 7) != 0 )
      *a2 = *(_BYTE *)v4 & 7 | *a2 & 0xF8;
    result = *a2 & 0xDF | (4 * (_BYTE)v5) & 0x20u;
    *a2 = result;
  }
  else
  {
    v7 = *(_BYTE *)v3 & 7;
    result = v7 | *a2 & 0x98 | 0x60u;
    *a2 = v7 | *a2 & 0x98 | 0x60;
  }
  return result;
}
