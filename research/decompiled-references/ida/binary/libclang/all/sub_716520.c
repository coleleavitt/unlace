void __fastcall sub_716520(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // eax
  __int64 v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rdi
  void *ptr[23]; // [rsp+0h] [rbp-B8h] BYREF

  v2 = (unsigned int)(a2 - 1);
  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  v5 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v5 < 0x40 )
    v5 = 64;
  *(_DWORD *)(a1 + 16) = v5;
  v6 = sub_25CC9C0(152LL * v5, 8);
  *(_QWORD *)a1 = v6;
  if ( v4 )
  {
    sub_715E80(a1, v4, (void **)(v4 + 152 * v3));
    operator delete();
    return;
  }
  v7 = (_QWORD *)v6;
  memset(&ptr[1], 0, 0x88u);
  v8 = *(unsigned int *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = 0;
  ptr[0] = &ptr[2];
  HIDWORD(ptr[1]) = 32;
  v9 = &v7[19 * v8];
  v10 = 0;
  if ( v7 != v9 )
  {
    while ( 1 )
    {
      v7[1] = 0x2000000000LL;
      *v7 = v7 + 2;
      if ( v10 )
      {
        v11 = (__int64)v7;
        v7 += 19;
        sub_6A7880(v11, (unsigned int **)ptr);
        if ( v9 == v7 )
        {
LABEL_11:
          if ( ptr[0] != &ptr[2] )
            free(ptr[0]);
          return;
        }
      }
      else
      {
        v7 += 19;
        if ( v9 == v7 )
          goto LABEL_11;
      }
      v10 = (int)ptr[1];
    }
  }
}

