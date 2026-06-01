__int64 __fastcall sub_1998F90(__int64 *a1, __int64 a2, unsigned __int8 a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rcx
  unsigned __int16 *v12; // r13
  __int64 v13; // rax
  bool v14; // r14
  unsigned __int16 **v15; // rbx
  unsigned __int16 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _BYTE *v21; // rdi
  __int64 v23; // r13
  int v24; // r12d
  int v25; // r14d
  __int64 v26; // rsi
  unsigned int v27; // r14d
  unsigned __int64 v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-E0h]
  __int64 v33; // [rsp+18h] [rbp-D0h]
  char v35; // [rsp+23h] [rbp-C5h]
  unsigned __int64 v37; // [rsp+28h] [rbp-C0h]
  unsigned int v38; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v39[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h]
  _BYTE v42[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = a2;
  v32 = *a1;
  sub_1C36400(*a1, 0);
  sub_15F3080((__int64)v39, *a1);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v23 = *a1;
    v24 = *(_DWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 4) + 16);
    v25 = *(_DWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 4) + 20);
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    v26 = *(_QWORD *)(v23 + 232);
    v27 = (unsigned int)ptr ^ ((unsigned int)ptr ^ v24) & v25;
    *(_DWORD *)(v23 + 224) = v27;
    v38 = v27;
    sub_BF6C80((unsigned int *)&ptr, v26);
    if ( v27 == (_DWORD)ptr )
    {
      LODWORD(v28) = 0;
      v29 = 0;
    }
    else
    {
      v30 = sub_FEAE70(&v38, (unsigned int *)&ptr);
      v29 = v30;
      v28 = HIDWORD(v30);
    }
    *(_DWORD *)(v23 + 1952) = v29;
    *(_DWORD *)(v23 + 1956) = v28;
  }
  v8 = *(unsigned int *)(v6 + 4);
  v9 = v6 + 16;
  v10 = v6 + 8 * v8 + 16;
  v11 = v8;
  if ( v10 == v6 + 16 )
  {
    ptr = v42;
    v41 = 0x800000000LL;
    v21 = v42;
    goto LABEL_25;
  }
  v12 = *(unsigned __int16 **)(v6 + 8 * v8 + 8);
  if ( (*v12 & 0x1FF) != 0xEE )
    goto LABEL_9;
  v13 = v6 + 8 * v8 + 8;
  while ( v9 != v13 )
  {
    v12 = *(unsigned __int16 **)(v13 - 8);
    v13 -= 8;
    if ( (*v12 & 0x1FF) != 0xEE )
      goto LABEL_9;
  }
  if ( (_DWORD)v11 )
  {
    v12 = *(unsigned __int16 **)(v6 + 8LL * (unsigned int)(v11 - 1) + 16);
LABEL_9:
    ptr = v42;
    v41 = 0x800000000LL;
    goto LABEL_10;
  }
  v12 = nullptr;
  ptr = v42;
  v41 = 0x800000000LL;
LABEL_10:
  v35 = 0;
  v14 = 0;
  v33 = v6;
  v15 = (unsigned __int16 **)(v6 + 16);
  do
  {
    v16 = *v15;
    if ( *v15 != v12 || (v17 = 2, !a3) )
      v17 = 0;
    v18 = sub_1998500(a1, *v15, v17, a4, a5, v11, v9, v7);
    if ( v18 == 1 )
    {
      if ( (*v16 & 0x1FF) == 0xF5 )
      {
        v21 = ptr;
        v6 = 1;
        goto LABEL_25;
      }
      v35 = 1;
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v14 )
        v14 = v16 != (unsigned __int16 *)v19;
      v11 = (unsigned int)v41;
      v20 = (unsigned int)v41 + 1LL;
      if ( v20 > HIDWORD(v41) )
      {
        v37 = v19;
        sub_2237220(&ptr, v42, v20, 8);
        v11 = (unsigned int)v41;
        v19 = v37;
      }
      *((_QWORD *)ptr + v11) = v19;
      LODWORD(v41) = v41 + 1;
    }
    ++v15;
  }
  while ( (unsigned __int16 **)v10 != v15 );
  v6 = v33;
  v21 = ptr;
  if ( v35 )
  {
    v6 = 1;
  }
  else if ( v14 )
  {
    v31 = sub_1C36480(*a1, *(unsigned int *)(v33 + 8), *(unsigned int *)(v33 + 12), ptr, (unsigned int)v41, a3);
    v21 = ptr;
    v6 = v31;
  }
LABEL_25:
  if ( v21 != v42 )
    free(v21);
  sub_15F30C0((__int64)v39);
  sub_1C36470(v32);
  return v6;
}
