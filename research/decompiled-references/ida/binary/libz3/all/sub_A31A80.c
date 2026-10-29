__int64 __fastcall sub_A31A80(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rdi
  int v6; // ecx
  char *v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 *v16; // r15
  __int64 *v17; // r13
  unsigned int v18; // esi
  __int64 v19; // [rsp+8h] [rbp-50h]
  __int64 v20[8]; // [rsp+18h] [rbp-40h] BYREF

  v20[0] = 0;
  sub_A30ED0(a1 + 888, a2, v20);
  v19 = v20[0];
  if ( *(_DWORD *)(a1 + 284) || *(_DWORD *)(a1 + 288) )
  {
    v5 = *(char **)(a1 + 272);
    v6 = 0;
    v7 = &v5[8 * *(unsigned int *)(a1 + 280)];
    v8 = *(_DWORD *)(a1 + 280);
    v9 = *(_QWORD *)(a1 + 272);
    if ( v5 == v7 )
      goto LABEL_16;
    do
    {
      while ( *(_DWORD *)(v9 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v9 + 4) = 0x80000000;
        v9 += 8;
        if ( v7 == (char *)v9 )
          goto LABEL_8;
      }
      v9 += 8;
      ++v6;
    }
    while ( v7 != (char *)v9 );
LABEL_8:
    if ( v8 <= 0x10 || 3 * v8 >= 4 * v6 )
      goto LABEL_16;
    if ( v5 )
    {
      sub_186B220(v5);
      v10 = *(_DWORD *)(a1 + 280);
      *(_QWORD *)(a1 + 272) = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 280) = v10;
      v11 = v10;
      v12 = sub_186B270(8LL * v10);
      if ( !v10 )
      {
LABEL_15:
        *(_QWORD *)(a1 + 272) = v12;
LABEL_16:
        *(_QWORD *)(a1 + 284) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 272) = 0;
      v18 = v8 >> 1;
      v11 = v18;
      *(_DWORD *)(a1 + 280) = v18;
      v12 = sub_186B270(8LL * v18);
    }
    v13 = v12 + 8 * v11;
    v14 = v12;
    if ( (v11 & 1) == 0 || (v14 = v12 + 8, *(_DWORD *)(v12 + 4) = 0x80000000, v13 != v12 + 8) )
    {
      do
      {
        *(_DWORD *)(v14 + 4) = 0x80000000;
        v14 += 16;
        *(_DWORD *)(v14 - 4) = 0x80000000;
      }
      while ( v13 != v14 );
    }
    goto LABEL_15;
  }
LABEL_17:
  result = sub_9E7500(a1 + 296);
  if ( v19 )
  {
    v16 = (__int64 *)v19;
    v17 = (__int64 *)(v19 + 8LL * *(unsigned int *)(v19 - 4));
    if ( (__int64 *)v19 != v17 )
    {
      do
        sub_A0FA50(a1, *v16++, a3, (__int64)&qword_1C7F2A0, a1 + 272, a1 + 296);
      while ( v17 != v16 );
    }
    return sub_186B220((void *)(v19 - 8));
  }
  return result;
}

