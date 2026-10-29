__int64 __fastcall sub_178F000(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  __int64 *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int v13; // ebp
  bool v14; // al
  __int64 result; // rax
  __int64 v16; // rdx

  if ( !a2 && *(_QWORD *)(a1 + 56) == 0x100000000LL && (*(_BYTE *)(a3 + 28) & 0x7D) == 0x24 )
    return 2;
  v7 = sub_178DFB0(a1, a2, (__int64 *)a3, a4, a5, a6);
  v12 = sub_178DFB0(a1, a3, v8, v9, v10, v11);
  v13 = v12;
  if ( v7 == 4 )
    return 0;
  if ( v12 == 4 )
    return 0;
  v14 = v12 == 1;
  if ( v14 && v7 <= 1 )
    return 0;
  if ( v13 == 3 )
    return 2;
  if ( v7 == v13 )
    return 4;
  if ( v14 )
  {
    result = 4;
    if ( v7 == 2 )
      return result;
  }
  if ( v7 == 1 )
  {
    result = 4;
    if ( !v13 )
      return result;
  }
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 1) != 0 && (v7 <= 1 || v7 == 3) && v13 == 2 )
    return 2;
  if ( v7 != 3 )
    return 0;
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 89) & 4) != 0 && !v13 )
    return 3;
  v16 = sub_168B6E0(a1);
  result = 1;
  if ( (*(_BYTE *)(v16 + 89) & 4) == 0 && (unsigned int)(v13 - 1) <= 1 )
    return 3;
  return result;
}
