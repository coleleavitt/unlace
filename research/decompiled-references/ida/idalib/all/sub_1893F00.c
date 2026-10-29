__int64 __fastcall sub_1893F00(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v11; // rbp
  __int64 v12; // rsi
  int v13; // edx
  int v14; // [rsp+8h] [rbp-70h]
  unsigned int v15; // [rsp+Ch] [rbp-6Ch]
  __int64 v16; // [rsp+28h] [rbp-50h]

  v5 = *(_QWORD *)(a1 + 544);
  v6 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 512) = 0;
  if ( a2 )
    a2 += 48;
  v7 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 9944) = 0;
  v16 = v7;
  LODWORD(v7) = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 544) = a2;
  v14 = v7;
  v15 = *(_DWORD *)(a1 + 2632);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
  result = *(unsigned int *)(a1 + 3688);
  *(_DWORD *)(a1 + 2632) = result;
  if ( a4 )
  {
    v9 = a5;
    v11 = a5 + 4LL * (unsigned int)(a4 - 1) + 4;
    do
    {
      v12 = *a3;
      v13 = v9;
      v9 += 4;
      ++a3;
      result = sub_18F5260(a1, v12, v13, 1, 0, 0, 1, 0, 0);
    }
    while ( v11 != v9 );
  }
  if ( v5 )
  {
    *(_QWORD *)(a1 + 544) = v5;
    *(_QWORD *)(a1 + 512) = v6;
    *(_QWORD *)(a1 + 9944) = v16;
    *(_DWORD *)(a1 + 80) = v14;
    *(_DWORD *)(a1 + 2632) = v15;
    return v15;
  }
  return result;
}
