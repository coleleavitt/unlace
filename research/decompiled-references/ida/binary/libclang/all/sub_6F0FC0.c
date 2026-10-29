void __fastcall sub_6F0FC0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // r14
  __int64 v3; // rax
  void **v4; // r12
  __int64 v5; // rbx
  void *v6[18]; // [rsp+0h] [rbp-158h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+98h] [rbp-C0h]
  _BYTE v9[184]; // [rsp+A0h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(a1 + 16) )
  {
    v1 = 32;
    v2 = 36;
    memset(&v6[1], 0, 0x88u);
    v6[0] = &v6[2];
    HIDWORD(v6[1]) = 32;
    v8 = 0x2000000000LL;
    v3 = 0;
    ptr = v9;
    while ( 1 )
    {
      if ( v1 >= v3 + 1 )
      {
        *((_DWORD *)ptr + v3) = -1;
      }
      else
      {
        sub_25D6060(&ptr, v9, v3 + 1, 4);
        *((_DWORD *)ptr + (unsigned int)v8) = -1;
      }
      v3 = (unsigned int)(v8 + 1);
      LODWORD(v8) = v8 + 1;
      if ( !--v2 )
        break;
      v1 = HIDWORD(v8);
    }
    v4 = *(void ***)a1;
    v5 = *(_QWORD *)a1 + 152LL * *(unsigned int *)(a1 + 16);
    if ( *(_QWORD *)a1 != v5 )
    {
      do
      {
        if ( !(unsigned __int8)sub_25ABE00(v4, v6) )
          sub_25ABE00(v4, &ptr);
        if ( *v4 != v4 + 2 )
          free(*v4);
        v4 += 19;
      }
      while ( (void **)v5 != v4 );
    }
    if ( ptr != v9 )
      free(ptr);
    if ( v6[0] != &v6[2] )
      free(v6[0]);
  }
}

