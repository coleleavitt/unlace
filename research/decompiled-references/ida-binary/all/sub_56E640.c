void __fastcall sub_56E640(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  unsigned int v4; // r12d
  unsigned int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // rax
  void (*v12)(void); // rax

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    off_8C52A0(v2);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
  v3 = *(void **)(a1 + 32);
  if ( v3 )
  {
    off_8C52A0(v3);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v4 = 0;
  sub_56CDC0(*(__m128i **)(a1 + 64), a1 + 48, *(_QWORD *)(a1 + 72));
  v5 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)a1 + 48LL * v4;
      if ( *(_QWORD *)v6 )
      {
        v7 = *(_QWORD *)(a1 + 72);
        if ( *(_QWORD *)(v6 + 24) )
          sub_56C9A0(*(_QWORD *)(a1 + 72), *(volatile signed __int32 **)(v6 + 24));
        if ( *(_QWORD *)(v6 + 32) )
          sub_56C9A0(v7, *(volatile signed __int32 **)(v6 + 32));
        v8 = *(_QWORD *)(v6 + 8);
        if ( v8 )
        {
          if ( *(_QWORD *)v8 )
          {
            off_8C52A0(*(void **)v8);
            *(_QWORD *)v8 = 0;
            *(_QWORD *)(v8 + 8) = 0;
            v8 = *(_QWORD *)(v6 + 8);
          }
          off_8C52A0((void *)v8);
        }
        sub_56CDC0(*(__m128i **)v6, a1 + 48, v7);
        v5 = *(_DWORD *)(a1 + 8);
      }
      ++v4;
    }
    while ( v4 < v5 );
  }
  v9 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 8) = 0;
  if ( v9 )
  {
    v10 = 0;
    if ( *(_DWORD *)(a1 + 56) )
    {
      do
      {
        v11 = v10++;
        off_8C52A0(*(void **)(v9 + 8 * v11));
        v9 = *(_QWORD *)(a1 + 48);
      }
      while ( v10 < *(_DWORD *)(a1 + 56) );
      v12 = (void (*)(void))off_8C52A0;
      if ( !v9 )
        goto LABEL_22;
    }
    else
    {
      v12 = (void (*)(void))off_8C52A0;
    }
    v12();
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
LABEL_22:
  if ( *(_QWORD *)a1 )
  {
    off_8C52A0(*(void **)a1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
  }
  off_8C52A0((void *)a1);
}
