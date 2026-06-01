__int64 __fastcall sub_19D0310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // bp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // rbx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi

  v7 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
  {
    v14 = sub_F63050(v8, a2, a3, a4);
    v16 = *(_BYTE *)(v14 + 19) >> 2;
    a4 = v16 + ((*(_WORD *)(v14 + 18) >> 3) & 0x7F);
    v10 = v14 + 8 * a4 + 48;
    v8 = *(_QWORD *)(*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
      v8 = sub_F63050(v8, v16, v15, a4);
    v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x7F;
  }
  else
  {
    v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x7F;
    v10 = v8 + 8 * (v9 + (*(_BYTE *)(v8 + 19) >> 2)) + 48;
  }
  v11 = (__int64 *)(v8 + 8 * v9 + 48);
  if ( v11 == (__int64 *)v10 )
    return 0;
  while ( 1 )
  {
    result = sub_BAAC40(*v11, a2, v7, a4, a5, a6);
    if ( result )
      break;
    if ( (__int64 *)v10 == ++v11 )
      return 0;
  }
  return result;
}
