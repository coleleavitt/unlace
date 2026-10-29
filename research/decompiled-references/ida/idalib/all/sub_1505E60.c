void __fastcall sub_1505E60(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r12
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  if ( (*(_BYTE *)(a1 + 264) & 1) != 0 )
  {
    v3 = a1 + 272;
    v5 = a1 + 368;
LABEL_6:
    while ( (unsigned int)(*(_DWORD *)v3 + 2) > 1 )
    {
LABEL_7:
      if ( *(_DWORD *)(v3 + 16) <= 0x40u )
        break;
      v6 = *(void **)(v3 + 8);
      if ( !v6 )
        break;
      operator delete[](v6);
      v3 += 24;
      if ( v3 == v5 )
        goto LABEL_10;
    }
  }
  else
  {
    v2 = *(unsigned int *)(a1 + 280);
    v3 = *(_QWORD *)(a1 + 272);
    v4 = 24 * v2;
    if ( !(_DWORD)v2 )
      goto LABEL_18;
    v5 = v3 + v4;
    if ( v3 + v4 == v3 )
      goto LABEL_18;
    if ( (unsigned int)(*(_DWORD *)v3 + 2) > 1 )
      goto LABEL_7;
  }
  v3 += 24;
  if ( v3 != v5 )
    goto LABEL_6;
LABEL_10:
  if ( (*(_BYTE *)(a1 + 264) & 1) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 272);
    v4 = 24LL * *(unsigned int *)(a1 + 280);
LABEL_18:
    operator delete(v3, v4, 8);
  }
  v7 = *(void **)(a1 + 216);
  if ( v7 != (void *)(a1 + 232) )
    free(v7);
  v8 = *(void **)(a1 + 72);
  if ( v8 != (void *)(a1 + 88) )
    free(v8);
  if ( *(_QWORD *)a1 != a1 + 16 )
    free(*(void **)a1);
}
