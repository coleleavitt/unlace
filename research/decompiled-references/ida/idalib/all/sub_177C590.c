unsigned int *__fastcall sub_177C590(__int64 *a1, unsigned int *a2, unsigned __int8 a3, double a4)
{
  unsigned int *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int16 *v11; // r13
  __int64 v12; // rax
  bool v13; // r14
  unsigned __int16 **v14; // rbx
  unsigned __int16 *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  bool v20; // cl
  _BYTE *v21; // rdi
  __int64 v23; // r13
  unsigned int v24; // r12d
  unsigned int v25; // r14d
  __int64 v26; // rsi
  unsigned int v27; // r14d
  unsigned __int64 v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-E0h]
  unsigned int *v33; // [rsp+18h] [rbp-D0h]
  char v35; // [rsp+23h] [rbp-C5h]
  unsigned __int64 v37; // [rsp+28h] [rbp-C0h]
  unsigned int v38; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v39[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h]
  _BYTE v42[120]; // [rsp+70h] [rbp-78h] BYREF

  v5 = a2;
  v32 = *a1;
  sub_1C36400(*a1, 0);
  sub_15F3080((__int64)v39, *a1);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v23 = *a1;
    v24 = a2[2 * a2[1] + 4];
    v25 = a2[2 * a2[1] + 5];
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
  v7 = v5[1];
  v8 = (__int64)(v5 + 4);
  v9 = (__int64)&v5[2 * v7 + 4];
  v10 = v7;
  if ( (unsigned int *)v9 == v5 + 4 )
  {
    v20 = 0;
    ptr = v42;
    v41 = 0x800000000LL;
    v21 = v42;
LABEL_35:
    if ( *(_DWORD *)(*a1 + 12632) || v20 )
    {
      v31 = sub_1C36480(*a1, v5[2], v5[3], v21, (unsigned int)v41, a3);
      v21 = ptr;
      v5 = (unsigned int *)v31;
    }
    goto LABEL_25;
  }
  v11 = *(unsigned __int16 **)&v5[2 * v7 + 2];
  if ( (*v11 & 0x1FF) != 0xEE )
    goto LABEL_9;
  v12 = (__int64)&v5[2 * v7 + 2];
  while ( v8 != v12 )
  {
    v11 = *(unsigned __int16 **)(v12 - 8);
    v12 -= 8;
    if ( (*v11 & 0x1FF) != 0xEE )
      goto LABEL_9;
  }
  if ( (_DWORD)v10 )
  {
    v11 = *(unsigned __int16 **)&v5[2 * (unsigned int)(v10 - 1) + 4];
LABEL_9:
    ptr = v42;
    v41 = 0x800000000LL;
    goto LABEL_10;
  }
  v11 = nullptr;
  ptr = v42;
  v41 = 0x800000000LL;
LABEL_10:
  v35 = 0;
  v13 = 0;
  v33 = v5;
  v14 = (unsigned __int16 **)(v5 + 4);
  do
  {
    v15 = *v14;
    if ( *v14 != v11 || (v16 = 2, !a3) )
      v16 = 0;
    v17 = sub_177B9C0(a1, *v14, v16, a4, v10, v8, v6);
    if ( v17 == 1 )
    {
      if ( (*v15 & 0x1FF) == 0xF5 )
      {
        v21 = ptr;
        v5 = (unsigned int *)(&dword_0 + 1);
        goto LABEL_25;
      }
      v35 = 1;
    }
    else
    {
      v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
      if ( !v13 )
        v13 = v15 != (unsigned __int16 *)v18;
      v10 = (unsigned int)v41;
      v19 = (unsigned int)v41 + 1LL;
      if ( v19 > HIDWORD(v41) )
      {
        v37 = v18;
        sub_2237220(&ptr, v42, v19, 8);
        v10 = (unsigned int)v41;
        v18 = v37;
      }
      *((_QWORD *)ptr + v10) = v18;
      LODWORD(v41) = v41 + 1;
    }
    ++v14;
  }
  while ( (unsigned __int16 **)v9 != v14 );
  v20 = v13;
  v5 = v33;
  v21 = ptr;
  if ( !v35 )
    goto LABEL_35;
  v5 = (unsigned int *)(&dword_0 + 1);
LABEL_25:
  if ( v21 != v42 )
    free(v21);
  sub_15F30C0((__int64)v39);
  sub_1C36470(v32);
  return v5;
}
