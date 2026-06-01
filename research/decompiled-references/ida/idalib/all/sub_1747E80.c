void __fastcall sub_1747E80(__int64 a1)
{
  int v1; // r14d
  __int64 v2; // rax
  void **v3; // r13
  __int64 v4; // r12
  void **i; // r12
  void *v6[2]; // [rsp+0h] [rbp-148h] BYREF
  _DWORD v7[32]; // [rsp+10h] [rbp-138h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+98h] [rbp-B0h]
  _DWORD v10[42]; // [rsp+A0h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 || *(_DWORD *)(a1 + 16) )
  {
    v1 = 35;
    v7[0] = -1;
    v10[0] = -1;
    v6[0] = v7;
    v6[1] = (void *)0x2000000001LL;
    v9 = 0x2000000001LL;
    v2 = 1;
    ptr = v10;
    do
    {
      if ( v2 + 1 <= (unsigned __int64)HIDWORD(v9) )
      {
        *((_DWORD *)ptr + v2) = -1;
      }
      else
      {
        sub_2237220(&ptr, v10, v2 + 1, 4);
        *((_DWORD *)ptr + (unsigned int)v9) = -1;
      }
      v2 = (unsigned int)(v9 + 1);
      LODWORD(v9) = v9 + 1;
      --v1;
    }
    while ( v1 );
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      v3 = (void **)(a1 + 8);
      v4 = 80;
    }
    else
    {
      v3 = *(void ***)(a1 + 8);
      v4 = 20LL * *(unsigned int *)(a1 + 16);
    }
    for ( i = &v3[v4]; i != v3; v3 += 20 )
    {
      if ( !(unsigned __int8)sub_2222ED0(v3, v6) )
        goto LABEL_22;
      while ( *v3 == v3 + 2 )
      {
        v3 += 20;
        if ( v3 == i )
          goto LABEL_15;
        if ( !(unsigned __int8)sub_2222ED0(v3, v6) )
LABEL_22:
          sub_2222ED0(v3, &ptr);
      }
      free(*v3);
    }
LABEL_15:
    if ( ptr != v10 )
      free(ptr);
    if ( v6[0] != v7 )
      free(v6[0]);
  }
}
