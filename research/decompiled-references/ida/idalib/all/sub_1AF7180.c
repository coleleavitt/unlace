__int64 __fastcall sub_1AF7180(__int64 a1)
{
  _QWORD *v1; // rax
  void **v2; // rdx
  __int64 v3; // rax
  __int64 v5; // r12
  _QWORD *v6; // rax
  void **v7; // r15
  void **v8; // rbp
  __int64 v9; // r14
  void **v10; // r14
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  _QWORD v14[8]; // [rsp+0h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v5 = sub_2237400(a1, a1 + 16, 0, 80, v14);
    v6 = (_QWORD *)(v5 + 80LL * *(unsigned int *)(a1 + 8));
    v6[1] = 0x800000000LL;
    *v6 = v6 + 2;
    v7 = *(void ***)a1;
    v8 = (void **)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v8 )
    {
      v9 = v5;
      do
      {
        *(_DWORD *)(v9 + 8) = 0;
        *(_QWORD *)v9 = v9 + 16;
        *(_DWORD *)(v9 + 12) = 8;
        if ( *((_DWORD *)v7 + 2) )
          sub_183F920((char ***)v9, (char ***)v7);
        v7 += 10;
        v9 += 80;
      }
      while ( v8 != v7 );
      v10 = *(void ***)a1;
      v8 = (void **)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
      if ( *(void ***)a1 != v8 )
      {
        do
        {
          while ( 1 )
          {
            v8 -= 10;
            if ( *v8 == v8 + 2 )
              break;
            free(*v8);
            if ( v8 == v10 )
              goto LABEL_11;
          }
        }
        while ( v8 != v10 );
LABEL_11:
        v8 = *(void ***)a1;
      }
    }
    v11 = v14[0];
    if ( (void **)(a1 + 16) != v8 )
      free(v8);
    v12 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 12) = v11;
    v13 = (unsigned int)(v12 + 1);
    *(_DWORD *)(a1 + 8) = v13;
    return v5 + 80 * v13 - 80;
  }
  else
  {
    v1 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
    v1[1] = 0x800000000LL;
    *v1 = v1 + 2;
    v2 = *(void ***)a1;
    v3 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v3;
    return (__int64)&v2[10 * v3 - 10];
  }
}
