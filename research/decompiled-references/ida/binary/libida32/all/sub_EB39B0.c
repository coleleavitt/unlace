unsigned __int64 __fastcall sub_EB39B0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // [rsp-10h] [rbp-28h]

  v4 = *(_BYTE *)(a2 + 73);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 1;
  *(_BYTE *)(a1 + 316) = (v4 >> 5 == 2) | *(_BYTE *)(a1 + 316) & 0xFE;
  v5 = sub_2294160(*(_QWORD *)(*(_QWORD *)a1 + 17448LL) + 216LL);
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = v5;
  result = *(unsigned int *)(*(_QWORD *)(v9 + 2320) + 24LL);
  if ( !(_DWORD)result )
    result = 0;
  *(_QWORD *)(a1 + 48) = result;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_14;
  v11 = sub_B68690(a2, v9, 0, v6, v7, v8);
  v15 = *v11;
  result = *v11 + 8LL * *((unsigned int *)v11 + 2);
  if ( v15 >= result )
  {
    if ( v15 == result )
      goto LABEL_8;
    while ( 1 )
    {
      v12 = *(_QWORD *)result;
      if ( *(_WORD *)(*(_QWORD *)result + 36LL) == 253 )
        goto LABEL_21;
      result += 8LL;
      if ( v15 == result )
        goto LABEL_8;
    }
  }
  v12 = v15;
  while ( 1 )
  {
    v9 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 253 )
      break;
    v12 += 8;
    if ( result == v12 )
      goto LABEL_8;
  }
  if ( result != v12 )
  {
LABEL_21:
    v20 = *(_QWORD *)v15;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 253 )
    {
      v15 += 8LL;
      do
      {
        v20 = *(_QWORD *)v15;
        v15 += 8LL;
      }
      while ( *(_WORD *)(v20 + 36) != 253 );
    }
    v9 = *(unsigned int *)(v20 + 40);
    result = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 17448LL) + 8LL);
    if ( (unsigned int)v9 <= (unsigned int)result )
    {
      result = sub_A742B0(*(_QWORD *)a1, v9);
      *(_QWORD *)(a1 + 48) = result;
    }
  }
LABEL_8:
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
  {
LABEL_13:
    v9 = *(_QWORD *)a1;
    goto LABEL_14;
  }
  v16 = sub_B68690(a2, v9, v15, v12, v13, v14);
  v17 = *v16;
  result = *((unsigned int *)v16 + 2);
  v18 = (unsigned __int64 *)(v17 + 8 * result);
  if ( v17 >= (unsigned __int64)v18 )
  {
    v9 = *(_QWORD *)a1;
    if ( (unsigned __int64 *)v17 == v18 )
      goto LABEL_14;
    while ( 1 )
    {
      result = *v18;
      if ( *(_WORD *)(*v18 + 36) == 325 )
        break;
      if ( (unsigned __int64 *)v17 == ++v18 )
        goto LABEL_14;
    }
LABEL_32:
    *(_QWORD *)(a1 + 48) = 1;
    goto LABEL_14;
  }
  result = v17;
  while ( *(_WORD *)(*(_QWORD *)result + 36LL) != 325 )
  {
    result += 8LL;
    if ( v18 == (unsigned __int64 *)result )
      goto LABEL_13;
  }
  v9 = *(_QWORD *)a1;
  if ( v18 != (unsigned __int64 *)result )
    goto LABEL_32;
LABEL_14:
  *(_BYTE *)(a1 + 316) &= ~0x40u;
  v19 = *(_QWORD *)(v9 + 18360);
  if ( v19 )
  {
    *(_BYTE *)(a1 + 316) = (((*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v19 + 216LL))(
                               v19,
                               a2,
                               a1 + 320,
                               a1 + 328,
                               a1 + 336,
                               a1 + 360,
                               a1 + 384)
                           & 1) << 6)
                         | *(_BYTE *)(a1 + 316) & 0xBF;
    return v21;
  }
  return result;
}

