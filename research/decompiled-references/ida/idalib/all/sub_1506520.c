void __fastcall sub_1506520(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1 + 368LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v3 -= 368;
      if ( (*(_BYTE *)(v3 + 264) & 1) == 0 )
      {
LABEL_3:
        v4 = *(unsigned int *)(v3 + 280);
        if ( (_DWORD)v4 )
        {
          v5 = *(_QWORD *)(v3 + 272);
          v6 = v5 + 24 * v4;
          goto LABEL_6;
        }
LABEL_20:
        operator delete(*(_QWORD *)(v3 + 272), 24LL * *(unsigned int *)(v3 + 280), 8);
        goto LABEL_11;
      }
      while ( 1 )
      {
        v5 = v3 + 272;
        v6 = v3 + 368;
        do
        {
LABEL_6:
          while ( 1 )
          {
            if ( (unsigned int)(*(_DWORD *)v5 + 2) > 1 && *(_DWORD *)(v5 + 16) > 0x40u )
            {
              v7 = *(void **)(v5 + 8);
              if ( v7 )
                break;
            }
            v5 += 24;
            if ( v5 == v6 )
              goto LABEL_10;
          }
          operator delete[](v7);
          v5 += 24;
        }
        while ( v5 != v6 );
LABEL_10:
        if ( (*(_BYTE *)(v3 + 264) & 1) == 0 )
          goto LABEL_20;
LABEL_11:
        v8 = *(void **)(v3 + 216);
        if ( v8 != (void *)(v3 + 232) )
          free(v8);
        v9 = *(void **)(v3 + 72);
        if ( v9 != (void *)(v3 + 88) )
          free(v9);
        if ( *(_QWORD *)v3 != v3 + 16 )
          break;
        if ( v3 == v2 )
          goto LABEL_17;
        v3 -= 368;
        if ( (*(_BYTE *)(v3 + 264) & 1) == 0 )
          goto LABEL_3;
      }
      free(*(void **)v3);
    }
    while ( v3 != v2 );
LABEL_17:
    v3 = *(_QWORD *)a1;
  }
  if ( v3 != a1 + 16 )
    free((void *)v3);
}
