__int64 __fastcall sub_A63480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // r12
  _QWORD *v17; // rbx
  __int64 v18; // rdx

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 34 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) != 34 )
      return 0;
    v7 = sub_F63050(*v5, v5, v18, a4, a5);
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 35;
  if ( (unsigned int)v9 > 1 )
  {
    v8 = sub_F63050(v8, v5, v9, a4, a5);
    v10 = *(unsigned __int8 *)(v8 + 19);
    LOBYTE(v10) = (unsigned __int8)v10 >> 2;
    if ( !(_BYTE)v10 )
      return 0;
  }
  else
  {
    v10 = *(unsigned __int8 *)(v8 + 19);
    LOBYTE(v10) = (unsigned __int8)v10 >> 2;
    if ( !(_BYTE)v10 )
      return 0;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) != 13 )
    return 0;
  if ( ((*(_WORD *)(v12 + 18) >> 3) & 0x1FF) != 0x1E9 )
    return 0;
  v13 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 34 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
      return 0;
    v13 = sub_F63050(v13, v5, v10, a4, a5);
    if ( !v13 )
      return 0;
  }
  v14 = sub_A5E9B0(v13, (__int64)v5, v10, a4, a5);
  v16 = v15;
  if ( (_QWORD *)v14 == v15 )
    return 1;
  v17 = (_QWORD *)v14;
  while ( 1 )
  {
    result = sub_BAE190(a3, *v17, 0, 0);
    if ( !(_BYTE)result )
      break;
    if ( v16 == ++v17 )
      return 1;
  }
  return result;
}
