_BOOL8 __fastcall sub_1CCBDE0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5, __m128 a6)
{
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r12
  int v12; // ebp
  __int64 v13; // rbx
  __int64 v14; // rdx
  _BOOL8 result; // rax

  v9 = *(_QWORD *)(a3 + 16);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v9 & 4) != 0 )
    v10 = (_QWORD *)*v10;
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)v10) )
    return 0;
  v11 = *(_QWORD *)(a3 + 56);
  v12 = *(_DWORD *)(v11 + 20) & 0x1FFFFFFF;
  if ( !v12 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v11 + 8 * v13 + 24);
    if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x2F )
    {
      result = sub_1CCBBD0(a1, a2, v14, a5 + 24 * v13, a4 <= (unsigned int)v13, a6);
      if ( result )
        break;
    }
    if ( v12 == (_DWORD)++v13 )
      return 0;
  }
  return result;
}
