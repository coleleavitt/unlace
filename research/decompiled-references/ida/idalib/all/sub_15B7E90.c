__int64 __fastcall sub_15B7E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r12d
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx

  v7 = *(_QWORD *)(a1 + 8);
  v8 = **(_QWORD **)a1;
  v9 = **(_QWORD **)(a2 + 16);
  v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)(v10 + 8) & 7LL | (*(__int64 *)(v10 + 8) >> 3) & 1;
  if ( v11 )
    v12 = sub_F64F00(v9, v10, v11, a4, a5) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v12 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = sub_15B7A90(v7, v12, v11, a4, a5, a6);
  if ( v13 )
  {
    v17 = 0;
    v18 = (*((_BYTE *)v13 + 28) & 0x7Fu) - 59;
    if ( (unsigned int)v18 <= 2 )
    {
      v19 = sub_B94670((unsigned __int64)(v13 + 8), v8, v18, v14, v15, v16);
      *(_QWORD *)(a3 + 120) = v19;
      if ( v19 )
      {
        while ( 1 )
        {
          v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v19 & 4) == 0 )
          {
            LOBYTE(v17) = (*(_BYTE *)(v20 + 30) & 0x2A) != 0;
            return v17;
          }
          if ( !v20 )
          {
            LOBYTE(v17) = 0;
            return v17;
          }
          if ( (*(_BYTE *)(*(_QWORD *)v20 + 30LL) & 0x2A) != 0 )
            break;
          v19 = *(_QWORD *)(v20 + 8);
          if ( !v19 )
            return 0;
        }
        return 1;
      }
    }
  }
  else
  {
    return 0;
  }
  return v17;
}
