__int64 __fastcall sub_19CF3D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // bp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 *v12; // rbx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx

  v7 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
  {
    v14 = sub_F63050(v8, a2, a3, a4);
    v10 = *(_BYTE *)(v14 + 19) >> 2;
    v15 = v10 + ((*(_WORD *)(v14 + 18) >> 3) & 0x7F);
    v11 = v14 + 8 * v15 + 48;
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35 > 1 )
      v8 = sub_F63050(v8, a2, v15, v10);
    v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x7F;
  }
  else
  {
    v9 = (*(_WORD *)(v8 + 18) >> 3) & 0x7F;
    v10 = v9 + (*(_BYTE *)(v8 + 19) >> 2);
    v11 = v8 + 8 * v10 + 48;
  }
  v12 = (__int64 *)(v8 + 8 * v9 + 48);
  if ( v12 == (__int64 *)v11 )
    return 0;
  while ( 1 )
  {
    result = sub_BAAC40(*v12, a1, v7, v10, a5, a6);
    if ( result )
      break;
    if ( (__int64 *)v11 == ++v12 )
      return 0;
  }
  return result;
}
