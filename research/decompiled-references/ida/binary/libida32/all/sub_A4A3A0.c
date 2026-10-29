void __fastcall sub_A4A3A0(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  void **v3; // r12
  __int64 v4; // r13
  void *v5[18]; // [rsp+0h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+98h] [rbp-B0h]
  _DWORD v8[42]; // [rsp+A0h] [rbp-A8h] BYREF

  if ( *(_DWORD *)(a1 + 16) )
  {
    v1 = 35;
    v8[0] = -1;
    memset(&v5[1], 0, 0x88u);
    HIDWORD(v5[1]) = 32;
    v5[0] = &v5[2];
    v7 = 0x2000000001LL;
    v2 = 1;
    ptr = v8;
    do
    {
      if ( v2 + 1 <= (unsigned __int64)HIDWORD(v7) )
      {
        *((_DWORD *)ptr + v2) = -1;
      }
      else
      {
        sub_22134E0(&ptr, v8, v2 + 1, 4);
        *((_DWORD *)ptr + (unsigned int)v7) = -1;
      }
      v2 = (unsigned int)(v7 + 1);
      LODWORD(v7) = v7 + 1;
      --v1;
    }
    while ( v1 );
    v3 = *(void ***)a1;
    v4 = *(_QWORD *)a1 + 152LL * *(unsigned int *)(a1 + 16);
    if ( *(_QWORD *)a1 != v4 )
    {
      do
      {
        if ( !(unsigned __int8)sub_21FF190(v3, v5) )
          goto LABEL_18;
        while ( *v3 == v3 + 2 )
        {
          v3 += 19;
          if ( (void **)v4 == v3 )
            goto LABEL_11;
          if ( !(unsigned __int8)sub_21FF190(v3, v5) )
LABEL_18:
            sub_21FF190(v3, &ptr);
        }
        free(*v3);
        v3 += 19;
      }
      while ( (void **)v4 != v3 );
    }
LABEL_11:
    if ( ptr != v8 )
      free(ptr);
    if ( v5[0] != &v5[2] )
      free(v5[0]);
  }
}

