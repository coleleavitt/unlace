char __fastcall sub_1AECC80(__int64 *a1, __int64 a2)
{
  int *v2; // rbx
  unsigned __int16 v3; // ax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 *v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  int v16; // edx
  int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx

  v3 = *(_WORD *)a2 & 0x1FF;
  if ( v3 <= 0x75u )
  {
    if ( v3 == 4 )
      return sub_1AECDE0();
  }
  else if ( v3 <= 0x77u )
  {
    return sub_1AECDE0();
  }
  if ( v3 != 71 )
  {
    if ( v3 > 0x47u )
    {
      if ( v3 <= 0x100u )
        return sub_1AECDE0();
    }
    else if ( v3 )
    {
      return sub_1AECDE0();
    }
    *v2 = (2 * ((unsigned int)*v2 >> 1) + 2) | *v2 & 1;
    BUG();
  }
  v5 = *a1;
  v6 = 0;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(unsigned int *)(*a1 + 344);
  if ( (_DWORD)v8 )
  {
    v9 = *(_QWORD *)(v5 + 336) + 6776 * v8 - 6776;
    if ( *(_QWORD *)(v9 + 6768) == *(_QWORD *)(v5 + 328) )
    {
      v19 = *(unsigned int *)(v9 + 8);
      v20 = *(unsigned int *)(v5 + 27504);
      if ( (unsigned int)v19 > (unsigned int)v20 )
      {
        v21 = v19 - v20;
        if ( v21 )
          v6 = 1688 * (v21 - 1) + *(_QWORD *)v9;
      }
    }
  }
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v10 = *(_DWORD *)(v6 + 1320);
  v11 = *(_QWORD *)(v6 + 1304);
  if ( !v10 )
    goto LABEL_23;
  v12 = (v10 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( v7 != *v13 )
  {
    v16 = 1;
    if ( v14 == -4096 )
      goto LABEL_23;
    while ( 1 )
    {
      v17 = v16 + 1;
      v12 = (v10 - 1) & (v16 + v12);
      v13 = (__int64 *)(v11 + 16LL * v12);
      v18 = *v13;
      if ( v7 == *v13 )
        break;
      v16 = v17;
      if ( v18 == -4096 )
        goto LABEL_23;
    }
  }
  if ( v13 == (__int64 *)(v11 + 16LL * v10) )
  {
LABEL_23:
    v15 = 2;
    return v15 == 2;
  }
  v15 = *((_DWORD *)v13 + 2);
  return v15 == 2;
}
