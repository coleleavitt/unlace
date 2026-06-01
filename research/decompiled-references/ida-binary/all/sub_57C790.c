void __fastcall sub_57C790(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  unsigned int v13; // edx
  char *v14; // rax
  unsigned int i; // r12d
  char *v16; // rbx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 80);
    if ( v2 )
    {
      off_8C52A0(v2);
      *(_QWORD *)(a1 + 80) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
    v3 = *(void **)(a1 + 96);
    if ( v3 )
    {
      off_8C52A0(v3);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 104) = 0;
    }
    v4 = *(void **)(a1 + 112);
    if ( v4 )
    {
      off_8C52A0(v4);
      *(_QWORD *)(a1 + 112) = 0;
      *(_QWORD *)(a1 + 120) = 0;
    }
    v5 = *(void **)(a1 + 128);
    if ( v5 )
    {
      off_8C52A0(v5);
      *(_QWORD *)(a1 + 128) = 0;
      *(_QWORD *)(a1 + 136) = 0;
    }
    v6 = *(void **)(a1 + 144);
    if ( v6 )
    {
      off_8C52A0(v6);
      *(_QWORD *)(a1 + 144) = 0;
      *(_QWORD *)(a1 + 152) = 0;
    }
    v7 = *(void **)(a1 + 176);
    if ( v7 )
    {
      off_8C52A0(v7);
      *(_QWORD *)(a1 + 176) = 0;
      *(_QWORD *)(a1 + 184) = 0;
    }
    v8 = *(void **)(a1 + 160);
    if ( v8 )
    {
      off_8C52A0(v8);
      *(_QWORD *)(a1 + 160) = 0;
      *(_QWORD *)(a1 + 168) = 0;
    }
    v9 = *(void **)(a1 + 192);
    if ( v9 )
    {
      off_8C52A0(v9);
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 200) = 0;
    }
    sub_57C770(*(_QWORD *)(a1 + 208));
    if ( *(_QWORD *)a1 )
    {
      off_8C52A0(*(void **)a1);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
    }
    v10 = *(void **)(a1 + 16);
    if ( v10 )
    {
      off_8C52A0(v10);
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = 0;
    }
    v11 = *(void **)(a1 + 32);
    if ( v11 )
    {
      off_8C52A0(v11);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v12 = *(void **)(a1 + 48);
    if ( v12 )
    {
      off_8C52A0(v12);
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0;
    }
    v13 = *(_DWORD *)(a1 + 72);
    v14 = *(char **)(a1 + 64);
    if ( v13 )
    {
      for ( i = 0; i < v13; ++i )
      {
        while ( 1 )
        {
          v16 = &v14[16 * i];
          if ( !*(_QWORD *)v16 )
            break;
          off_8C52A0(*(void **)v16);
          *((_QWORD *)v16 + 1) = 0;
          v13 = *(_DWORD *)(a1 + 72);
          ++i;
          *(_QWORD *)v16 = 0;
          v14 = *(char **)(a1 + 64);
          if ( i >= v13 )
            goto LABEL_30;
        }
      }
      if ( !v14 )
        goto LABEL_32;
    }
    else
    {
LABEL_30:
      if ( !v14 )
      {
LABEL_32:
        off_8C52A0((void *)a1);
        return;
      }
    }
    off_8C52A0(v14);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 72) = 0;
    goto LABEL_32;
  }
}
