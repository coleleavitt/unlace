__int64 __fastcall sub_A0C280(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // esi

  v3 = 16LL * a2;
  result = a1[142];
  v5 = result + v3;
  if ( result )
  {
    v6 = 16LL * *(unsigned int *)(result - 4);
    v7 = result + v6;
    if ( v3 == v6 )
    {
LABEL_7:
      *(_DWORD *)(result - 4) = a2;
      return result;
    }
  }
  else
  {
    v7 = 0;
    if ( !v3 )
      return result;
  }
  do
  {
    v8 = *(_DWORD *)(v7 - 16);
    v9 = *(_QWORD *)(v7 - 8);
    v7 -= 16;
    v10 = v8 >> 1;
    *(_QWORD *)(a1[(v8 & 1) + 93] + 8LL * (unsigned int)(v8 >> 1)) = v9;
    if ( v8 >> 1 != -1
      && v9 == 0
      && *(_DWORD *)(a1[58] + 40LL) > 2u
      && ((*(_BYTE *)(a1[90] + 4LL * v10 + 3) >> 4) & 3) == 1
      && !*(_QWORD *)(a1[93] + 8LL * v10)
      && !*(_QWORD *)(a1[94] + 8LL * v10) )
    {
      sub_A0BF70(a1, v10, 0);
      *(_BYTE *)(a1[90] + 4LL * v10 + 3) = *(_BYTE *)(a1[90] + 4LL * v10 + 3) & 0xCF | 0x20;
    }
  }
  while ( v5 != v7 );
  result = a1[142];
  if ( result )
    goto LABEL_7;
  return result;
}

