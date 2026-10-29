void __fastcall sub_4DA030(__int64 a1)
{
  void **v2; // rbx
  void **v3; // r13
  void *v4; // rbp
  void (__fastcall ***v5)(_QWORD); // rdi
  __int64 (__fastcall *v6)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v7; // rdi
  char *v8; // rbp
  int v9; // ecx
  unsigned int v10; // esi
  char *v11; // rax
  char *v12; // rdx
  char *v13; // rbx
  char *v14; // r13
  char *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  void *v21; // rdi
  unsigned int v22; // esi

  v2 = *(void ***)(a1 + 8);
  if ( !v2 )
    goto LABEL_11;
  v3 = &v2[*((unsigned int *)v2 - 1)];
  if ( v3 == v2 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( !*v2 )
        goto LABEL_5;
      v5 = (void (__fastcall ***)(_QWORD))*v2;
      v6 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 16LL);
      if ( v6 != sub_4C9C10 )
        break;
      (**(void (__fastcall ***)(_QWORD))v4)(v5);
      sub_186B220(v4);
LABEL_5:
      if ( v3 == ++v2 )
        goto LABEL_9;
    }
    v6(v5);
    ++v2;
  }
  while ( v3 != v2 );
LABEL_9:
  v2 = *(void ***)(a1 + 8);
  if ( v2 )
LABEL_10:
    *((_DWORD *)v2 - 1) = 0;
LABEL_11:
  if ( *(_DWORD *)(a1 + 28) || *(_DWORD *)(a1 + 32) )
  {
    v7 = *(unsigned int *)(a1 + 24);
    v8 = *(char **)(a1 + 16);
    v9 = 0;
    v10 = *(_DWORD *)(a1 + 24);
    v11 = v8;
    v12 = &v8[48 * v7];
    if ( v8 != v12 )
    {
      do
      {
        while ( *((_DWORD *)v11 + 1) )
        {
          *((_DWORD *)v11 + 1) = 0;
          v11 += 48;
          if ( v12 == v11 )
            goto LABEL_18;
        }
        v11 += 48;
        ++v9;
      }
      while ( v12 != v11 );
LABEL_18:
      if ( v10 > 0x10 && 3 * v10 < 4 * v9 )
      {
        if ( !v8 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          v22 = v10 >> 1;
          v17 = v22;
          *(_DWORD *)(a1 + 24) = v22;
          v18 = sub_186B270(48LL * v22);
          goto LABEL_26;
        }
        v13 = v8;
        v14 = &v8[48 * v7];
        do
        {
          v15 = *((char **)v13 + 2);
          if ( v15 != v13 + 32 )
            operator delete(v15, *((_QWORD *)v13 + 4) + 1LL);
          v13 += 48;
        }
        while ( v14 != v13 );
        sub_186B220(v8);
        v16 = *(_DWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        v16 >>= 1;
        v17 = v16;
        *(_DWORD *)(a1 + 24) = v16;
        v18 = sub_186B270(48LL * v16);
        if ( v16 )
        {
LABEL_26:
          v19 = (_QWORD *)v18;
          do
          {
            v20 = v19 + 4;
            *v19 = 0;
            v19 += 6;
            *(v19 - 4) = v20;
            *(v19 - 3) = 0;
            *((_BYTE *)v19 - 16) = 0;
          }
          while ( v19 != (_QWORD *)(v18 + 48 * v17) );
        }
        *(_QWORD *)(a1 + 16) = v18;
      }
    }
    *(_QWORD *)(a1 + 28) = 0;
  }
  v21 = *(void **)(a1 + 40);
  if ( v21 )
    sub_186B220(v21);
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
}

