__int64 __fastcall sub_B0F310(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // edi
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned int *v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rdi
  unsigned int v16; // esi
  unsigned int *v17; // rax
  unsigned int v18; // ecx
  int *v20; // rdx
  int *v21; // rax
  int v22; // ecx
  __int64 v23; // r14
  __int64 v24; // r13
  unsigned int v25; // edx

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    v7 = *(_DWORD *)(v5 - 4);
  else
    v7 = 0;
  v8 = *(_DWORD *)(a1 + 16);
  v9 = 0;
  do
  {
    if ( a3 == *(_DWORD *)(v5 + 4LL * (unsigned int)v9) )
      break;
    v9 = (unsigned int)(v9 + 1);
  }
  while ( v8 >= (unsigned int)v9 );
  v10 = v8 + 1;
  if ( v8 + 1 == (_DWORD)v9 )
    return 0;
  v11 = *(_QWORD *)(a2 + 16);
  if ( v10 < v7 )
  {
    v12 = v10;
    v13 = (unsigned int *)(v5 + 4LL * v10);
    v14 = v5 + 4 * (v7 - v8 - 2 + v12) + 4;
    while ( 1 )
    {
      v15 = *v13;
      v16 = *v13;
      if ( *(_BYTE *)(*(_QWORD *)(v11 + 8848) + v15) != 0xFF )
        break;
      if ( ++v13 == (unsigned int *)v14 )
        goto LABEL_13;
    }
    v17 = (unsigned int *)(v5 + 4 * v9);
    v18 = *v17;
    *v17 = v15;
    *v13 = v18;
    sub_B099C0(a2, v16, a1);
    return 0;
  }
LABEL_13:
  if ( v8 != (_DWORD)v9 )
  {
    v20 = (int *)(v5 + 4LL * v8);
    if ( *(_BYTE *)(*(_QWORD *)(v11 + 8848) + (unsigned int)*v20) == 0xFF )
    {
      sub_B0F1A0(a1, a2, a3);
      return 0xFFFFFFFFLL;
    }
    v21 = (int *)(v5 + 4 * v9);
    v22 = *v21;
    *v21 = *v20;
    *v20 = v22;
  }
  v23 = 0;
  v24 = 4LL * v8;
  if ( v8 )
  {
    while ( *(_QWORD *)(v11 + 8984) == qword_1C7ED18 )
    {
      if ( *(_BYTE *)(v11 + 2416) )
        goto LABEL_23;
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + v23);
      v23 += 4;
      sub_B056B0(a2, a1, v25);
      if ( v24 == v23 )
        goto LABEL_22;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_22:
  if ( *(_QWORD *)(v11 + 8984) != qword_1C7ED18 )
    return 0xFFFFFFFFLL;
LABEL_23:
  if ( *(_BYTE *)(v11 + 2416) )
    return 0xFFFFFFFFLL;
  return 1;
}

