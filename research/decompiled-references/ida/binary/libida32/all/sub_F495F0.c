__int64 __fastcall sub_F495F0(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi

  v5 = a1[1];
  v6 = *a1;
  *(_BYTE *)(v5 + 16) = 1;
  *(_DWORD *)v5 = a3;
  *(_DWORD *)(v5 + 4) = a3;
  if ( ((*(_WORD *)(v6 + 18) >> 3) & 0x7F) != 0 )
  {
    v7 = 48;
    v8 = 8LL * (((*(_WORD *)(v6 + 18) >> 3) & 0x7Fu) - 1) + 56;
    do
    {
      *(_QWORD *)(a1[1] + v7 - 24) = sub_A5DBD0(a2, *(_QWORD *)(v6 + v7), a3);
      v7 += 8;
      v6 = *a1;
    }
    while ( v8 != v7 );
    v5 = a1[1];
  }
  *(_DWORD *)(v5 + 8) = a3;
  *(_DWORD *)(v5 + 12) = a3;
  result = *(_BYTE *)(v6 + 19) >> 2;
  if ( *(_BYTE *)(v6 + 19) >> 2 )
  {
    v10 = 0;
    v11 = 4LL * (unsigned int)(result - 1) + 4;
    do
    {
      v10 += 4;
      result = v5 + (*(_WORD *)(v6 + 18) & 0x3F8);
      *(_DWORD *)(v10 + result + 20) = a3;
    }
    while ( v11 != v10 );
  }
  return result;
}

