__int64 __fastcall sub_1B250(__int64 a1, __int64 a2, signed int a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r9
  char v10; // r8
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 i; // rdx
  __int64 v24; // rcx

  result = a1;
  v5 = ((unsigned int)a2 >> 8) & 0x7F;
  if ( a3 == -1 )
  {
    a3 = ((unsigned int)a2 >> 7) & 1 | ((unsigned int)a2 >> 14) & 2;
    goto LABEL_3;
  }
  if ( (unsigned int)a3 <= 3 )
  {
LABEL_3:
    if ( a4 )
      v6 = dword_595C0[a3];
    else
      v6 = dword_595B0[a3];
    *(_BYTE *)(result + 1) = 9;
    *(_WORD *)(result + 6) = ((unsigned int)a2 >> 8) & 0x7F;
    *(_BYTE *)(result + 5) = 3;
    *(_BYTE *)(result + 33) = 7;
    *(_BYTE *)(result + 34) = v6;
    return result;
  }
  sub_1B230(v5);
  v8 = v7 - a2;
  v9 = a2;
  v12 = v11 & ((unsigned int)v5 >> v10);
  v13 = v8 >> 5;
  if ( v8 <= 0 )
    return v9;
  v14 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = v13 >> 1;
      v16 = 32 * (v13 >> 1);
      v17 = v9 + v16;
      v18 = *(_QWORD *)(v9 + v16 + 8);
      if ( v18 >= v14 )
        break;
      v9 = v17 + 32;
      v13 = v13 - 1 - v15;
      if ( v13 <= 0 )
        return v9;
    }
    if ( v14 >= v18 )
      break;
    v13 >>= 1;
    if ( v15 <= 0 )
      return v9;
  }
  v19 = v16 >> 5;
  v20 = v9;
  while ( v19 > 0 )
  {
    while ( 1 )
    {
      v21 = v20 + 32 * (v19 >> 1);
      if ( *(_QWORD *)(v21 + 8) >= v14 )
        break;
      v20 = v21 + 32;
      v19 = v19 - 1 - (v19 >> 1);
      if ( v19 <= 0 )
        goto LABEL_19;
    }
    v19 >>= 1;
  }
LABEL_19:
  v22 = v17 + 32;
  for ( i = (v9 + 32 * v13 - v22) >> 5; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v24 = v22 + 32 * (i >> 1);
      if ( v14 < *(_QWORD *)(v24 + 8) )
        break;
      v22 = v24 + 32;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        return v20;
    }
  }
  return v20;
}
