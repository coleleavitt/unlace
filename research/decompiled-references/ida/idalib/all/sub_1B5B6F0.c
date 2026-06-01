void __fastcall sub_1B5B6F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  void **v3; // r14
  __int64 v4; // r12
  void **v5; // rbx
  __int64 v6; // r15
  void **v7; // r14
  int v8; // r14d
  _QWORD v9[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = sub_2237400(a1, a1 + 16, a2, 144, v9);
  v3 = *(void ***)a1;
  v4 = v2;
  v5 = (void **)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
  if ( *(void ***)a1 != v5 )
  {
    v6 = v2;
    do
    {
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)v6 = v6 + 16;
      *(_DWORD *)(v6 + 12) = 8;
      if ( *((_DWORD *)v3 + 2) )
        sub_1B5B5A0((char ***)v6, (char ***)v3);
      v3 += 18;
      v6 += 144;
    }
    while ( v5 != v3 );
    v7 = *(void ***)a1;
    v5 = (void **)(*(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v5 )
    {
      do
      {
        while ( 1 )
        {
          v5 -= 18;
          if ( *v5 == v5 + 2 )
            break;
          free(*v5);
          if ( v5 == v7 )
          {
            v5 = *(void ***)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v5 != v7 );
      v5 = *(void ***)a1;
    }
  }
LABEL_10:
  v8 = v9[0];
  if ( (void **)(a1 + 16) != v5 )
    free(v5);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v8;
}
