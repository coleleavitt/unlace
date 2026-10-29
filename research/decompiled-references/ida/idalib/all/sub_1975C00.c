__int64 __fastcall sub_1975C00(__int64 *a1, unsigned int *a2, unsigned __int8 a3, __m128 a4, __m128 a5)
{
  unsigned int *v5; // r13
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rcx
  _WORD *v12; // r15
  __int64 v13; // rax
  _WORD **v14; // r14
  unsigned __int8 v15; // r12
  _WORD **v16; // r13
  _WORD *v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r14
  unsigned int v26; // r12d
  unsigned int v27; // r15d
  __int64 v28; // rsi
  unsigned int v29; // r12d
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v37; // [rsp+18h] [rbp-D0h]
  unsigned int *v38; // [rsp+20h] [rbp-C8h]
  char v39; // [rsp+2Bh] [rbp-BDh]
  unsigned int v41; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v42[32]; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v44; // [rsp+68h] [rbp-80h]
  _BYTE v45[120]; // [rsp+70h] [rbp-78h] BYREF

  v5 = a2;
  v35 = *a1;
  sub_1C36400(*a1, 0);
  sub_15F3080((__int64)v42, *a1);
  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v25 = *a1;
    v26 = a2[2 * a2[1] + 4];
    v27 = a2[2 * a2[1] + 5];
    sub_BF6C80((unsigned int *)&ptr, *(_QWORD *)(*a1 + 232));
    v28 = *(_QWORD *)(v25 + 232);
    v29 = (unsigned int)ptr ^ v27 & ((unsigned int)ptr ^ v26);
    *(_DWORD *)(v25 + 224) = v29;
    v41 = v29;
    sub_BF6C80((unsigned int *)&ptr, v28);
    if ( v29 == (_DWORD)ptr )
    {
      LODWORD(v30) = 0;
      v31 = 0;
    }
    else
    {
      v32 = sub_FEAE70(&v41, (unsigned int *)&ptr);
      v31 = v32;
      v30 = HIDWORD(v32);
    }
    *(_DWORD *)(v25 + 1952) = v31;
    *(_DWORD *)(v25 + 1956) = v30;
  }
  v8 = v5[1];
  v9 = (__int64)(v5 + 4);
  v10 = (__int64)&v5[2 * v8 + 4];
  v11 = v8;
  if ( (unsigned int *)v10 == v5 + 4 )
  {
    v33 = 0;
    ptr = v45;
    v44 = 0x800000000LL;
    v20 = v45;
    goto LABEL_33;
  }
  v12 = *(_WORD **)&v5[2 * v8 + 2];
  if ( (*v12 & 0x1FF) != 0xEE )
    goto LABEL_9;
  v13 = (__int64)&v5[2 * v8 + 2];
  while ( v9 != v13 )
  {
    v12 = *(_WORD **)(v13 - 8);
    v13 -= 8;
    if ( (*v12 & 0x1FF) != 0xEE )
      goto LABEL_9;
  }
  if ( (_DWORD)v11 )
  {
    v12 = *(_WORD **)&v5[2 * (unsigned int)(v11 - 1) + 4];
LABEL_9:
    ptr = v45;
    v44 = 0x800000000LL;
    goto LABEL_10;
  }
  v12 = nullptr;
  ptr = v45;
  v44 = 0x800000000LL;
LABEL_10:
  v39 = 0;
  v14 = (_WORD **)v10;
  v15 = a3;
  v38 = v5;
  v16 = (_WORD **)(v5 + 4);
  do
  {
    v17 = *v16;
    if ( *v16 != v12 || (v18 = 2, !v15) )
      v18 = 0;
    v19 = sub_1975200(a1, *v16, v18, a4, a5, v11, v9, v7);
    if ( v19 == 1 )
    {
      if ( (*v17 & 0x1FF) == 0xF5 )
      {
        v20 = ptr;
        v21 = 1;
        goto LABEL_16;
      }
      v39 = 1;
    }
    else
    {
      v11 = (unsigned int)v44;
      v23 = v19 & 0xFFFFFFFFFFFFFFFELL;
      v24 = (unsigned int)v44 + 1LL;
      if ( v24 > HIDWORD(v44) )
      {
        v37 = v23;
        sub_2237220(&ptr, v45, v24, 8);
        v11 = (unsigned int)v44;
        v23 = v37;
      }
      *((_QWORD *)ptr + v11) = v23;
      LODWORD(v44) = v44 + 1;
    }
    ++v16;
  }
  while ( v14 != v16 );
  v5 = v38;
  v20 = ptr;
  if ( v39 )
  {
    v21 = 1;
    goto LABEL_16;
  }
  v33 = (unsigned int)v44;
LABEL_33:
  v34 = sub_1C36480(*a1, v5[2], v5[3], v20, v33, a3);
  v20 = ptr;
  v21 = v34;
LABEL_16:
  if ( v20 != v45 )
    free(v20);
  sub_15F30C0((__int64)v42);
  sub_1C36470(v35);
  return v21;
}
