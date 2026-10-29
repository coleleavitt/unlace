void __fastcall sub_A91470(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  int v13; // eax
  void **v14; // rdi
  void *ptr[23]; // [rsp+0h] [rbp-B8h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)a1;
  v9 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
        | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
        | ((v6 | (v6 >> 1)) >> 2)
        | v6
        | (v6 >> 1)) >> 16)
      | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
      | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
      | ((v6 | (v6 >> 1)) >> 2)
      | v6
      | (v6 >> 1))
     + 1;
  if ( v9 < 0x40 )
    v9 = 64;
  *(_DWORD *)(a1 + 16) = v9;
  v10 = sub_220C370(152LL * v9, 8, 9LL * v9, a4, a5, a6);
  *(_QWORD *)a1 = v10;
  if ( v8 )
  {
    sub_A91070(a1, v8, v8 + 152 * v7);
    operator delete();
    return;
  }
  v11 = v10;
  memset(&ptr[1], 0, 0x88u);
  *(_QWORD *)(a1 + 8) = 0;
  HIDWORD(ptr[1]) = 32;
  ptr[0] = &ptr[2];
  v12 = v10 + 152LL * *(unsigned int *)(a1 + 16);
  v13 = 0;
  if ( v11 != v12 )
  {
    while ( 1 )
    {
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = v11 + 16;
      *(_DWORD *)(v11 + 12) = 32;
      if ( v13 )
      {
        v14 = (void **)v11;
        v11 += 152;
        sub_A49E30(v14, (char **)ptr);
        if ( v12 == v11 )
        {
LABEL_12:
          if ( ptr[0] != &ptr[2] )
            free(ptr[0]);
          return;
        }
      }
      else
      {
        v11 += 152;
        if ( v12 == v11 )
          goto LABEL_12;
      }
      v13 = (int)ptr[1];
    }
  }
}

