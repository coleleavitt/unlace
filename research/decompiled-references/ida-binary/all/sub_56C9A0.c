void __fastcall sub_56C9A0(__int64 a1, volatile signed __int32 *a2)
{
  volatile signed __int32 v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // esi
  _QWORD *v12; // r14
  unsigned int i; // ebp
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // ecx
  void *v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // r15d
  void *v20; // rdi
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx

  if ( ((unsigned __int8)a2 & 1) == 0 )
  {
    v3 = *a2;
    *(_DWORD *)(a1 + 24) = 0;
    if ( !v3 )
      __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x234u, "ts_subtree_release");
    if ( !_InterlockedSub(a2, 1u) )
    {
      sub_55ECB0(a1 + 16, 8);
      v22 = *(unsigned int *)(a1 + 24);
      v23 = *(_QWORD *)(a1 + 16);
      v4 = v22 + 1;
      *(_DWORD *)(a1 + 24) = v22 + 1;
      *(_QWORD *)(v23 + 8 * v22) = a2;
      goto LABEL_5;
    }
LABEL_4:
    while ( 1 )
    {
      v4 = *(_DWORD *)(a1 + 24);
LABEL_5:
      if ( !v4 )
        break;
      while ( 1 )
      {
        v5 = *(_QWORD *)(a1 + 16);
        v6 = (unsigned int)(v4 - 1);
        *(_DWORD *)(a1 + 24) = v6;
        v7 = *(_QWORD *)(v5 + 8 * v6);
        v8 = *(_DWORD *)(v7 + 36);
        if ( v8 )
          break;
        if ( (*(_BYTE *)(v7 + 44) & 0x40) != 0 && *(_DWORD *)(v7 + 72) > 0x18u )
          off_8C52A0(*(void **)(v7 + 48));
        v9 = *(_DWORD *)(a1 + 12);
        if ( v9 )
        {
          v10 = *(unsigned int *)(a1 + 8);
          v11 = v10 + 1;
          if ( (unsigned int)(v10 + 1) <= 0x20 )
          {
            v20 = *(void **)a1;
            if ( v9 < v11 )
            {
              v21 = 2 * v9;
              if ( 2 * v9 < v11 )
                v21 = v10 + 1;
              if ( v21 < 8 )
                v21 = 8;
              if ( v9 < v21 )
              {
                if ( v20 )
                  v20 = off_8C52A8(v20, 8LL * v21);
                else
                  v20 = off_8C52B8(8LL * v21);
                v10 = *(unsigned int *)(a1 + 8);
                *(_QWORD *)a1 = v20;
                *(_DWORD *)(a1 + 12) = v21;
                v11 = v10 + 1;
              }
            }
            *(_DWORD *)(a1 + 8) = v11;
            *((_QWORD *)v20 + v10) = v7;
            goto LABEL_4;
          }
        }
        off_8C52A0((void *)v7);
        v4 = *(_DWORD *)(a1 + 24);
        if ( !v4 )
          return;
      }
      v12 = nullptr;
      if ( (v7 & 1) == 0 )
        v12 = (_QWORD *)(v7 - 8LL * v8);
      for ( i = 0; i < v8; ++i )
      {
        v14 = (volatile signed __int32 *)v12[i];
        if ( ((unsigned __int8)v14 & 1) == 0 )
        {
          if ( !*v14 )
            __assert_fail("child.ptr->ref_count > 0", "lib/src/./subtree.c", 0x240u, "ts_subtree_release");
          if ( !_InterlockedSub(v14, 1u) )
          {
            v15 = *(unsigned int *)(a1 + 24);
            v16 = *(_DWORD *)(a1 + 28);
            v17 = *(void **)(a1 + 16);
            v18 = v15 + 1;
            if ( v16 < (int)v15 + 1 )
            {
              v19 = 2 * v16;
              if ( 2 * v16 < v18 )
                v19 = v15 + 1;
              if ( v19 < 8 )
                v19 = 8;
              if ( v16 < v19 )
              {
                if ( v17 )
                  v17 = off_8C52A8(v17, 8LL * v19);
                else
                  v17 = off_8C52B8(8LL * v19);
                v15 = *(unsigned int *)(a1 + 24);
                *(_QWORD *)(a1 + 16) = v17;
                *(_DWORD *)(a1 + 28) = v19;
                v18 = v15 + 1;
              }
            }
            *(_DWORD *)(a1 + 24) = v18;
            *((_QWORD *)v17 + v15) = v14;
          }
          v8 = *(_DWORD *)(v7 + 36);
        }
      }
      off_8C52A0(v12);
    }
  }
}
