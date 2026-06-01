void __fastcall sub_502CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rbp
  volatile signed __int32 *v9; // rdx
  volatile signed __int32 *v10; // rax
  __int64 v11; // r12
  __int64 i; // r13
  volatile signed __int32 *v13; // rax

LABEL_1:
  v6 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v9 = *(volatile signed __int32 **)a1;
    if ( !v6 )
      break;
    if ( !v9 || *(int *)v9 > 1 )
      sub_5025F0(a1, 0, 0, 0, a5, a6);
    v7 = *(__int64 **)(a1 + 8);
    v8 = *v7;
    *(_QWORD *)(a1 + 8) = v7 + 1;
    v6 = *(_QWORD *)(a1 + 16) - 1LL;
    *(_QWORD *)(a1 + 16) = v6;
    if ( v8 )
    {
      v10 = *(volatile signed __int32 **)(v8 + 80);
      if ( v10 && !_InterlockedSub(v10, 1u) )
        free(*(void **)(v8 + 80));
      if ( *(_QWORD *)v8 && !_InterlockedSub(*(volatile signed __int32 **)v8, 1u) )
      {
        v11 = *(_QWORD *)(v8 + 8);
        for ( i = v11 + 96LL * *(_QWORD *)(v8 + 16); i != v11; v11 += 96 )
        {
          v13 = *(volatile signed __int32 **)(v11 + 56);
          if ( v13 && !_InterlockedSub(v13, 1u) )
            free(*(void **)(v11 + 56));
        }
        free(*(void **)v8);
      }
      operator delete((void *)v8, 0x90u);
      goto LABEL_1;
    }
  }
  if ( v9 )
  {
    if ( !_InterlockedSub(v9, 1u) )
      free(*(void **)a1);
  }
}
