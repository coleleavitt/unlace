__int64 __fastcall sub_F8450(__int64 a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, int a5)
{
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 96) != 2 )
  {
    if ( a2 )
    {
      v5 = (__int64)&a3[a2];
      do
      {
        v6 = *a3++;
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) += 2;
      }
      while ( (unsigned __int8 *)v5 != a3 );
    }
    *(_DWORD *)(a1 + 48) += 2 * a2;
  }
  if ( a2 <= 0x3F )
  {
    v7 = *((unsigned __int8 *)qword_136140 + a2);
  }
  else
  {
    _BitScanReverse(&a2, a2);
    v7 = 50 - (a2 ^ 0x1F);
  }
  _BitScanReverse(&a4, a4);
  v8 = (unsigned int)(a5 - 3);
  ++*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * v7);
  v9 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 52);
  ++*(_DWORD *)(v9 + 4LL * (31 - (a4 ^ 0x1F)));
  ++*(_DWORD *)(a1 + 60);
  if ( (unsigned int)v8 <= 0x7F )
  {
    v10 = *(_QWORD *)(a1 + 16);
    result = *((unsigned __int8 *)qword_1360C0 + v8);
  }
  else
  {
    _BitScanReverse((unsigned int *)&v8, v8);
    v10 = *(_QWORD *)(a1 + 16);
    result = 67 - ((unsigned int)v8 ^ 0x1F);
  }
  ++*(_DWORD *)(v10 + 4 * result);
  ++*(_DWORD *)(a1 + 56);
  return result;
}

