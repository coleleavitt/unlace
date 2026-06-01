__int64 __fastcall sub_9A2D60(__int64 *a1, unsigned int a2, int a3, _BYTE *a4, _BYTE *a5)
{
  int v5; // r15d
  unsigned int *v7; // rbx
  unsigned int *v8; // r13
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v16; // [rsp+8h] [rbp-50h]
  char v17; // [rsp+16h] [rbp-42h]
  unsigned __int8 v18; // [rsp+17h] [rbp-41h]

  v5 = a3;
  v17 = a3;
  *a5 |= sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8LL * a2));
  v7 = *(unsigned int **)(a1[89] + 16LL * a2);
  if ( !v7 )
  {
    *a4 = 0;
    return 1;
  }
  v8 = &v7[2 * *(v7 - 1)];
  *a4 = 0;
  if ( (_BYTE)v5 )
    v9 = a1[94];
  else
    v9 = a1[93];
  LOBYTE(v5) = *(_QWORD *)(v9 + 8LL * a2) == 0;
  if ( v7 == v8 )
    return 1;
  v18 = 0;
  while ( 1 )
  {
    v12 = *v7;
    if ( (_DWORD)v12 != -1 )
    {
      v13 = a1[87] + 24 * v12;
      v14 = *(unsigned int *)(v13 + 12);
      v11 = *(_QWORD *)v13 + 40LL * v7[1];
      v10 = 0;
      if ( (_DWORD)v14 != -1 )
      {
        if ( (*(_BYTE *)(a1[90] + 4 * v14 + 3) & 0x40) != 0 )
        {
          *a4 = 1;
          if ( (*(_BYTE *)(v11 + 20) & 1) != 0 )
            v18 = 1;
          else
            v18 |= *(_DWORD *)(v11 + 16) != 1;
        }
        v16 = v11;
        v10 = sub_8EB4E0(a1[2], *(_QWORD *)(a1[4] + 8 * v14));
        v11 = v16;
      }
      *a5 |= v10;
      LOBYTE(v5) = (*(_QWORD *)(a1[(v17 == *(int *)v11 < 0) + 93] + 8 * v14) == 0) & v5;
      if ( !(_BYTE)v5 )
      {
        if ( v18 )
          break;
      }
    }
    v7 += 2;
    if ( v7 == v8 )
      return v5 | v18 ^ 1u;
  }
  return 0;
}

