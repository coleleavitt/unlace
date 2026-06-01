__int64 __fastcall clang_Type_getSizeOf(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  __int64 result; // rax
  unsigned int v18; // edx

  if ( !a7 )
    return -1;
  if ( !a9 )
    BUG();
  v9 = a8;
  v10 = *(_QWORD *)(*(_QWORD *)(a9 + 8) + 80LL);
  v11 = a8 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v13 == 42 )
  {
    if ( (unsigned __int8)(*(_BYTE *)(v12 + 16) - 42) <= 1u )
    {
LABEL_15:
      while ( (*(_BYTE *)(v12 + 18) & 0x10) != 0 )
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1 )
            break;
          v12 = sub_B0D320(v12);
          if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
            goto LABEL_18;
        }
      }
LABEL_18:
      v9 = *(_QWORD *)(v12 + 32);
      v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_19;
    }
  }
  else
  {
    if ( v13 != 43 )
      goto LABEL_5;
    if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1 )
      goto LABEL_15;
  }
  v12 = sub_B0D320(v12);
  if ( v12 )
    goto LABEL_15;
LABEL_19:
  v12 = *(_QWORD *)v11;
LABEL_5:
  if ( (unsigned __int8)sub_B19120(v12, 0) )
    return -2;
  if ( (*(_BYTE *)(*(_QWORD *)v11 + 17LL) & 4) != 0 )
    return -3;
  if ( !(unsigned __int8)sub_B08470() )
    return -4;
  v14 = *(_QWORD *)v11;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v11 + 16LL) - 16 <= 1
    && (*(_QWORD *)(v14 + 24) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    return -6;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (_BYTE)v16 == 13 )
  {
    result = 1;
    if ( ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1B2 )
      return result;
    return sub_70E2F0(v10, v9);
  }
  v18 = v16 - 25;
  result = 1;
  if ( v18 > 1 )
    return sub_70E2F0(v10, v9);
  return result;
}

