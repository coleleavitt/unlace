__int64 __fastcall sub_8962A0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // r8
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // rsi
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // rtt
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = *(unsigned __int64 **)a1;
  v4 = **(_QWORD **)a1;
  if ( a2 == -1 )
  {
    v5 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    if ( __CFADD__(a2, v4 - 1) )
      return 4;
    v5 = (__int64)(v4 + a2 - 1) >> *((_DWORD *)v3 + 2);
    if ( v5 == -1 )
      return 4;
  }
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 24);
  v6 = v5;
  *((_QWORD *)&v7 + 1) = (v4 - 20) >> 3;
  if ( *((_QWORD *)&v7 + 1) < (unsigned __int64)v7 )
  {
    v8 = v7 + (v4 >> 3) - 1 - *((_QWORD *)&v7 + 1);
    *((_QWORD *)&v7 + 1) = v8 % (v4 >> 3);
    v6 = v8 / (v4 >> 3) + v5;
  }
  if ( !v4 || !v6 || (v7 = v4 * (unsigned __int128)v6, is_mul_ok(v4, v6)) )
  {
    sub_898EE0(v3, v4 * v6, *((_QWORD *)&v7 + 1));
    v9 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = v5;
    *(_DWORD *)(a1 + 44) = -1;
    *(_QWORD *)(a1 + 56) = 0;
    v10 = *(_QWORD *)(a1 + 16) + 16 * v9;
    *(_DWORD *)(a1 + 64) = -1;
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 80) = v10;
    *(_QWORD *)(a1 + 48) = v10;
    return 0;
  }
  return 4;
}

