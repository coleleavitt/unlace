void __fastcall sub_149BE00(__int64 a1, __int64 a2, __int64 a3)
{
  int *v4; // r13
  bool v6; // zf
  unsigned __int8 *v7; // rbx
  char v8; // dl
  __int64 v9; // rsi
  unsigned __int8 **v10; // rdi
  unsigned __int8 **v11; // rax
  char *v12; // rcx
  unsigned __int8 **v13; // rsi
  __int64 *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rdx
  unsigned __int8 **v17; // rcx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rdx
  void **v23; // rbx
  __int64 *v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // rbx
  void **v27; // rbp
  unsigned __int8 *v28; // [rsp+0h] [rbp-128h] BYREF
  int v29; // [rsp+8h] [rbp-120h]
  __int64 v30; // [rsp+10h] [rbp-118h]
  void *v31; // [rsp+18h] [rbp-110h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-D0h]
  int v34; // [rsp+60h] [rbp-C8h]
  char v35; // [rsp+64h] [rbp-C4h]
  __int64 v36; // [rsp+68h] [rbp-C0h] BYREF

  v4 = (int *)(a1 + 16);
  if ( *(_DWORD *)(a2 + 56) || !*(_QWORD *)(a2 + 64) )
  {
    sub_1564840(&ptr, a1, a1 + 16, 1997);
    sub_AEA040((__int64)&ptr);
  }
  v35 = 1;
  v6 = *(_WORD *)(a1 + 32) == 5;
  ptr = &v36;
  v33 = 16;
  v34 = 0;
  if ( v6 )
  {
    do
    {
      v7 = *(unsigned __int8 **)(a1 + 24);
      if ( sub_18013B0(*(_QWORD *)(a1 + 96), 0, 0, 0, 0, 1, 0, 0) )
      {
        sub_1564840(&v28, a1, v4, 1922);
        sub_1478560(&v28, (__int64)v7);
        sub_AEA040((__int64)&v28);
      }
      v8 = v35;
      if ( !v35 )
        goto LABEL_16;
      v9 = 8LL * HIDWORD(v33);
      v10 = (unsigned __int8 **)((char *)ptr + v9);
      if ( ptr != (char *)ptr + v9 )
      {
        v11 = (unsigned __int8 **)ptr;
        if ( v7 == *(unsigned __int8 **)ptr )
        {
LABEL_42:
          v8 = 0;
          v13 = (unsigned __int8 **)((char *)ptr + 8 * HIDWORD(v33));
          goto LABEL_18;
        }
        while ( v10 != ++v11 )
        {
          if ( v7 == *v11 )
            goto LABEL_42;
        }
      }
      if ( HIDWORD(v33) < (unsigned int)v33 )
      {
        ++HIDWORD(v33);
        *v10 = v7;
        v12 = (char *)ptr;
        v11 = (unsigned __int8 **)((char *)ptr + v9);
      }
      else
      {
LABEL_16:
        v11 = (unsigned __int8 **)sub_2236760(&ptr, v7);
        v12 = (char *)ptr;
        if ( !v35 )
        {
          v13 = (unsigned __int8 **)((char *)ptr + 8 * (unsigned int)v33);
          goto LABEL_18;
        }
      }
      v13 = (unsigned __int8 **)&v12[8 * HIDWORD(v33)];
LABEL_18:
      if ( v13 != v11 && (*v11 == (unsigned __int8 *)-2LL || *v11 + 2 == (_BYTE *)&dword_0 + 1) )
      {
        do
          ++v11;
        while ( v13 != v11 && (unsigned __int64)*v11 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( v8 )
      {
        v15 = *(_DWORD *)(a1 + 16);
        v16 = *(unsigned int *)(a3 + 12);
        v28 = v7;
        v17 = &v28;
        v30 = 0;
        v18 = *(_QWORD *)a3;
        v29 = v15;
        v19 = *(unsigned int *)(a3 + 8);
        v31 = nullptr;
        v20 = v19 + 1;
        v21 = v18 + 32 * v19;
        if ( v20 > v16 )
        {
          if ( v18 > (unsigned __int64)&v28 || v21 <= (unsigned __int64)&v28 )
          {
            sub_149ACE0(a3, v20);
            v17 = &v28;
            v21 = *(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8);
          }
          else
          {
            sub_149ACE0(a3, v20);
            v17 = (unsigned __int8 **)((char *)&v28 + *(_QWORD *)a3 - v18);
            v21 = *(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8);
          }
        }
        *(_QWORD *)v21 = *v17;
        *(_DWORD *)(v21 + 8) = *((_DWORD *)v17 + 2);
        *(_QWORD *)(v21 + 16) = v17[2];
        v22 = v17[3];
        v17[3] = nullptr;
        *(_QWORD *)(v21 + 24) = v22;
        v23 = (void **)v31;
        ++*(_DWORD *)(a3 + 8);
        if ( v23 )
        {
          if ( *v23 != v23 + 2 )
            free(*v23);
          operator delete(v23, 0x70u);
        }
      }
      else
      {
        sub_1564840(&v28, a1, v4, 55);
        sub_1478560(&v28, (__int64)v7);
        sub_AEA040((__int64)&v28);
      }
      v14 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v14, v4);
      if ( *(_WORD *)(a1 + 32) != 66 )
      {
        if ( v35 )
          return;
LABEL_41:
        free(ptr);
        return;
      }
      v24 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v24, v4);
    }
    while ( *(_WORD *)(a1 + 32) == 5 );
  }
  sub_1564840(&v28, a1, v4, 14);
  sub_AE9DF0(&v28, 5, 4u);
  sub_AEA040((__int64)&v28);
  LOWORD(v28) = 23;
  sub_15680D0(a1, &v28, 1, 3);
  v25 = *(_QWORD *)a3;
  v26 = *(_QWORD *)a3 + 32LL * *(unsigned int *)(a3 + 8);
  while ( v25 != v26 )
  {
    while ( 1 )
    {
      v26 -= 32;
      v27 = *(void ***)(v26 + 24);
      if ( !v27 )
        break;
      if ( *v27 != v27 + 2 )
        free(*v27);
      operator delete(v27, 0x70u);
      if ( v25 == v26 )
        goto LABEL_40;
    }
  }
LABEL_40:
  *(_DWORD *)(a3 + 8) = 0;
  if ( !v35 )
    goto LABEL_41;
}
