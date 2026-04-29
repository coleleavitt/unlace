__int64 __fastcall sub_1272B0(unsigned __int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int *v7; // rsi
  bool v8; // al
  int v9; // edx
  unsigned int v10; // [rsp+0h] [rbp-1Ch]
  unsigned int v11; // [rsp+0h] [rbp-1Ch]
  unsigned int v12; // [rsp+0h] [rbp-1Ch]

  if ( *(_DWORD *)(a1 + 4) <= a3 )
    return 0;
  if ( !a3 )
    return 0;
  if ( (*(_BYTE *)(a1 + 1) & 4) == 0 )
  {
    if ( *(_BYTE *)a1 != 4 )
      goto LABEL_7;
    v7 = *(unsigned int **)(a1 + 8);
    v11 = a4;
    v8 = sub_122600(v7);
    a4 = v11;
    if ( !v8 )
      goto LABEL_15;
  }
  v12 = a4;
  if ( !sub_11CAD0(a3) )
    return 0;
  a4 = v12;
  if ( *(_BYTE *)a1 == 4 )
  {
    v7 = *(unsigned int **)(a1 + 8);
LABEL_15:
    if ( *v7 == 10 )
    {
      *(_DWORD *)(a1 + 4) = a3;
      v7[17] = a3;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 65LL) &= ~4u;
      *(_BYTE *)(a1 + 1) &= ~4u;
      return 1;
    }
  }
LABEL_7:
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) )
    return sub_1274C0(a1, a2, (unsigned int)a3);
  v10 = a4;
  if ( !sub_11BB90((unsigned __int8 *)a1) )
    return sub_1274C0(a1, a2, (unsigned int)a3);
  v9 = *(_DWORD *)(a1 + 4);
  if ( a3 < v9 )
    return sub_126F10(a1, a2, v9 - a3, v10);
  return 0;
}
