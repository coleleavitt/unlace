void __fastcall sub_149ACE0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r15
  void **v9; // r13
  int v10; // r13d
  _QWORD v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 32, v11);
  v3 = *(_QWORD **)a1;
  v4 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v4 )
  {
    v5 = v2;
    do
    {
      v6 = *v3;
      v3 += 4;
      v5 += 32;
      *(_QWORD *)(v5 - 32) = v6;
      *(_DWORD *)(v5 - 24) = *((_DWORD *)v3 - 6);
      *(_QWORD *)(v5 - 16) = *(v3 - 2);
      v7 = *(v3 - 1);
      *(v3 - 1) = 0;
      *(_QWORD *)(v5 - 8) = v7;
    }
    while ( v4 != v3 );
    v8 = *(_QWORD **)a1;
    v4 = (_QWORD *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v4 )
    {
      do
      {
        v4 -= 4;
        v9 = (void **)v4[3];
        if ( v9 )
        {
          if ( *v9 != v9 + 2 )
            free(*v9);
          operator delete(v9, 0x70u);
        }
      }
      while ( v8 != v4 );
      v4 = *(_QWORD **)a1;
    }
  }
  v10 = v11[0];
  if ( (_QWORD *)(a1 + 16) != v4 )
    free(v4);
  *(_QWORD *)a1 = v2;
  *(_DWORD *)(a1 + 12) = v10;
}
