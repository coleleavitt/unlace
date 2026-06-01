__int64 __fastcall sub_1AEA760(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 (__fastcall *a4)(__int64, _QWORD, _QWORD, _QWORD),
        __int64 a5)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // r13
  __int64 v21; // r15
  int v22; // ecx
  __int64 v23; // [rsp+0h] [rbp-50h]
  unsigned int v25; // [rsp+14h] [rbp-3Ch]

  v5 = *(unsigned int *)(a1 + 344);
  if ( !(_DWORD)v5 )
    return 0;
  v7 = *(_QWORD *)(a1 + 336) + 6776 * v5 - 6776;
  if ( *(_QWORD *)(a1 + 328) != *(_QWORD *)(v7 + 6768) )
    return 0;
  v8 = *(_DWORD *)(v7 + 8);
  v9 = *(unsigned int *)(a1 + 27504);
  if ( (unsigned int)v9 >= v8 )
    return 0;
  v10 = *(_QWORD *)v7;
  v23 = v10;
  v11 = *(_QWORD *)v7 + 1688 * (v8 - v9);
  if ( v10 == v11 )
    return 0;
  v12 = v11 - 1688;
  if ( a3 )
  {
    v23 = v11 - 1688;
    v12 = v10 + 1688 * (v8 - v9);
  }
  if ( v23 == v12 )
    return 0;
  v25 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  while ( 1 )
  {
    v15 = *(unsigned int *)(v12 - 968);
    v16 = *(_QWORD *)(v12 - 984);
    if ( (_DWORD)v15 )
    {
      v17 = (v15 - 1) & v25;
      v18 = v16 + 1184LL * v17;
      if ( a2 == *(_QWORD *)v18 )
        goto LABEL_14;
      if ( *(_QWORD *)v18 != -4096 )
        break;
    }
LABEL_19:
    v12 -= 1688;
    if ( v23 == v12 )
      return 0;
  }
  v22 = 1;
  while ( 1 )
  {
    v17 = (v15 - 1) & (v22 + v17);
    v18 = v16 + 1184LL * v17;
    if ( a2 == *(_QWORD *)v18 )
      break;
    ++v22;
    if ( *(_QWORD *)v18 == -4096 )
      goto LABEL_19;
  }
LABEL_14:
  if ( v18 == 1184 * v15 + v16 )
    goto LABEL_19;
  v19 = *(_QWORD *)(v18 + 8);
  v20 = v19 + 144LL * *(unsigned int *)(v18 + 16);
  if ( v19 == v20 )
    goto LABEL_19;
  v21 = *(_QWORD *)(v18 + 8);
  while ( 1 )
  {
    result = a4(a5, *(_QWORD *)v21, *(unsigned int *)(v21 + 8), *(unsigned int *)(v18 + 1176));
    if ( (_BYTE)result )
      return result;
    v21 += 144;
    if ( v20 == v21 )
      goto LABEL_19;
  }
}
