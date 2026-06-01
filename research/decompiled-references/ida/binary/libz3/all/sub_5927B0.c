__int64 __fastcall sub_5927B0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // esi
  int v7; // ecx
  int v8; // edx
  char v9; // cl
  _DWORD *v10; // rsi
  __int64 result; // rax

  v3 = *(unsigned int *)(a1 + 56);
  v4 = *a2;
  if ( (_DWORD)v3 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4 * v5);
      v8 = *(_DWORD *)(v4 + 8 * v5++);
      v6 += v8 << v7;
    }
    while ( v3 != v5 );
    v9 = v6;
    v10 = (_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL * (v6 >> 5));
    result = (unsigned int)(1 << v9);
    *v10 |= result;
  }
  else
  {
    **(_DWORD **)(a1 + 48) |= 1u;
    return 1;
  }
  return result;
}

