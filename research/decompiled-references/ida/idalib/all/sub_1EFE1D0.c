void __fastcall sub_1EFE1D0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r15
  void *v16; // rdi
  __int64 *v17; // r13
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-88h] BYREF
  char **v24[2]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h] BYREF

  v6 = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    v14 = a1 + 8;
    v15 = a1 + 88;
    if ( !(_BYTE)v8 )
    {
      v10 = *(__int64 **)(a1 + 8);
      v11 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      goto LABEL_8;
    }
  }
  else
  {
    a3 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v9 = (a3 | (a3 >> 16)) + 1;
    v6 = v9;
    if ( (unsigned int)v9 > 0x40 )
    {
      v14 = a1 + 8;
      v15 = a1 + 88;
      if ( !(_BYTE)v8 )
      {
        v10 = *(__int64 **)(a1 + 8);
        v11 = *(_DWORD *)(a1 + 16);
        v12 = 40LL * (unsigned int)v9;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v10 = *(__int64 **)(a1 + 8);
        v11 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v12 = 2560;
LABEL_5:
        v13 = sub_22300B0(v12, 8, a3, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v13;
LABEL_8:
        sub_1EFE010(a1, v10, &v10[5 * v11]);
        operator delete(v10, 40LL * v11, 8);
        return;
      }
      v14 = a1 + 8;
      v15 = a1 + 88;
      v6 = 64;
    }
  }
  if ( *(_QWORD *)v14 == -4096 || *(_QWORD *)v14 == -8192 )
  {
    v17 = &v23;
  }
  else
  {
    v23 = *(_QWORD *)v14;
    v8 = *(unsigned int *)(v14 + 16);
    v24[0] = (char **)&v25;
    v24[1] = (char **)0x200000000LL;
    if ( (_DWORD)v8 )
      sub_1EB4A10(v24, (char ***)(v14 + 8));
    v16 = *(void **)(v14 + 8);
    if ( v16 != (void *)(v14 + 24) )
      free(v16);
    v17 = &v26;
  }
  if ( v15 != v14 + 40 )
  {
    v18 = *(_QWORD *)(v14 + 40);
    if ( v18 != -8192 && v18 != -4096 )
    {
      *v17 = v18;
      a3 = *(unsigned int *)(v14 + 56);
      v17[1] = (__int64)(v17 + 3);
      v17[2] = 0x200000000LL;
      if ( (_DWORD)a3 )
        sub_1EB4A10((char ***)v17 + 1, (char ***)(v14 + 48));
      v19 = *(void **)(v14 + 48);
      v17 += 5;
      if ( v19 != (void *)(v14 + 64) )
        free(v19);
    }
    if ( v15 != v14 + 80 )
    {
      v20 = *(_QWORD *)(v14 + 80);
      if ( v20 != -4096 && v20 != -8192 )
      {
        *v17 = v20;
        v17[1] = (__int64)(v17 + 3);
        v17[2] = 0x200000000LL;
        if ( *(_DWORD *)(v14 + 96) )
          sub_1EB4A10((char ***)v17 + 1, (char ***)(v14 + 88));
        v21 = *(void **)(v14 + 88);
        v17 += 5;
        if ( v21 != (void *)(v14 + 104) )
          free(v21);
      }
    }
  }
  if ( v6 > 2 )
  {
    *(_BYTE *)a1 &= ~1u;
    v22 = sub_22300B0(40LL * v6, 8, a3, v8, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v22;
  }
  sub_1EFE010(a1, &v23, v17);
}
