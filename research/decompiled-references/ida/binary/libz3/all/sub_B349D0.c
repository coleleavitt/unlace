__int64 __fastcall sub_B349D0(__int64 a1, unsigned int **a2, unsigned int a3)
{
  __int64 v5; // rdi
  _DWORD v6[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*((_BYTE *)a2 + 44) & 0x40) != 0 )
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8832LL) + 4LL * **a2);
  sub_16744A0(v6, *(_QWORD *)(a1 + 24));
  if ( v6[0] != -1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8672LL);
    if ( !v5 )
      return sub_AB5A20(v5, a3, (__int64)a2);
    if ( v6[0] < *(_DWORD *)(v5 - 4) )
    {
      v5 = *(_QWORD *)(v5 + 8LL * v6[0]);
      return sub_AB5A20(v5, a3, (__int64)a2);
    }
  }
  return sub_AB5A20(0, a3, (__int64)a2);
}

