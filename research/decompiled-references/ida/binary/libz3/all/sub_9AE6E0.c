__int64 __fastcall sub_9AE6E0(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // rbp
  void *v4; // r12
  int v5; // eax

  if ( a3 != -1 && ((*(_BYTE *)(*(_QWORD *)(a2 + 664) + 4LL * a3 + 3) >> 4) & 3) == 2 )
    v3 = sub_9ACE50(a2 - 56, a3);
  else
    v3 = (int *)(*(_QWORD *)(a2 + 672) + 96LL * a3);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 1;
  v4 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v3[1] & 1) != 0 )
    sub_182C690(v4, a1, v3);
  else
    *(_DWORD *)a1 = *v3;
  if ( (v3[5] & 1) != 0 )
  {
    sub_182C690(v4, a1 + 16, v3 + 4);
  }
  else
  {
    v5 = v3[4];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v5;
  }
  sub_91F480(a1 + 32, (__int64)(v3 + 8));
  return a1;
}

