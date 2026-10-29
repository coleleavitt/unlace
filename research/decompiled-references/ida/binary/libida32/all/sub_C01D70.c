_QWORD *__fastcall sub_C01D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 *v12; // rcx
  unsigned int v13; // edx
  bool v14; // di
  bool v15; // r8
  bool v16; // r9
  char v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  char v23; // si
  unsigned int v24; // eax
  void *v25; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v34; // [rsp+10h] [rbp-A8h] BYREF
  __int64 *v35; // [rsp+18h] [rbp-A0h]
  __int64 v36; // [rsp+20h] [rbp-98h]
  void *ptr[2]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v38[128]; // [rsp+38h] [rbp-80h] BYREF

  v5 = *(_DWORD *)(a1 + 896);
  if ( v5 > 0x1FFFFFFE )
  {
    sub_E0FED0(a1, a2, 2414, 0);
    return nullptr;
  }
  *(_DWORD *)(a1 + 896) = v5 + 1;
  v8 = sub_A2B5B0(v5 + 1);
  *(_BYTE *)(a4 + 128) &= ~2u;
  *(_QWORD *)a4 = v8;
  *(_QWORD *)(a4 + 8) = v9;
  *(_QWORD *)(a4 + 16) = 0;
  v34 = v8;
  v35 = v9;
  v10 = sub_A2B5D0(&v34);
  LODWORD(v34) = 0;
  v35 = nullptr;
  v11 = v10;
  v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v36 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_4;
  }
  v28 = *v12;
  if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 43 <= 1 )
    goto LABEL_36;
  v32 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v32 > 1 )
  {
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_25;
  }
  v28 = sub_F3F310(*v12, a3, v32, v12);
  if ( v28 )
  {
LABEL_36:
    while ( 1 )
    {
      v11 = *(_QWORD *)(v28 + 32);
      if ( (*(_BYTE *)(v28 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v29 = v11 & 0xFFFFFFFFFFFFFFF0LL;
        v28 = *(_QWORD *)v29;
        v30 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v29 + 16LL) - 43;
        if ( (unsigned int)v30 <= 1 )
          break;
        v31 = sub_F3F310(v28, a3, v30, v12);
        v11 = *(_QWORD *)(v31 + 32);
        if ( (*(_BYTE *)(v31 + 18) & 0x10) == 0 )
          goto LABEL_24;
      }
    }
  }
LABEL_24:
  v12 = v35;
  v17 = v34 & 1;
  v14 = (v34 & 8) != 0;
  v16 = (v34 & 2) != 0;
  v15 = (v34 & 4) != 0;
  v13 = (unsigned int)v34 >> 4;
LABEL_25:
  v36 = v11;
LABEL_4:
  *(_QWORD *)(a4 + 32) = v12;
  ptr[0] = v38;
  ptr[1] = (void *)0x800000000LL;
  *(_BYTE *)(a4 + 24) = (8 * v14) | (4 * v15) | (2 * v16) & 0xF3 | v17 & 0xF3 | *(_BYTE *)(a4 + 24) & 0xF0;
  v18 = v36;
  *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 24) & 0xF | (16 * v13);
  *(_QWORD *)(a4 + 40) = v18;
  sub_C00390((char ***)(a4 + 48), (char ***)ptr);
  if ( ptr[0] != v38 )
    free(ptr[0]);
  *(_WORD *)(a4 + 128) &= 0xFEu;
  v19 = operator new(0x68u);
  *(_DWORD *)(v19 + 32) = v5 + 1;
  v20 = *(_QWORD *)(a1 + 864);
  v21 = (_QWORD *)v19;
  *(_OWORD *)(v19 + 40) = 0;
  *(_OWORD *)(v19 + 88) = 0;
  *(_OWORD *)(v19 + 56) = 0;
  *(_OWORD *)(v19 + 72) = 0;
  *(_BYTE *)(v19 + 44) = 0;
  *(_QWORD *)(v19 + 96) = 0;
  if ( !v20 )
  {
    v20 = a1 + 856;
    if ( *(_QWORD *)(a1 + 872) == a1 + 856 )
      goto LABEL_19;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v24 = *(_DWORD *)(v20 + 32) - 1;
    if ( v5 >= v24 )
      break;
    v22 = *(_QWORD *)(v20 + 16);
    v23 = 1;
    if ( !v22 )
      goto LABEL_12;
LABEL_9:
    v20 = v22;
  }
  v22 = *(_QWORD *)(v20 + 24);
  v23 = 0;
  if ( v22 )
    goto LABEL_9;
LABEL_12:
  if ( v23 )
  {
    if ( *(_QWORD *)(a1 + 872) == v20 )
      goto LABEL_19;
LABEL_17:
    v27 = std::_Rb_tree_decrement();
    if ( v5 <= *(_DWORD *)(v27 + 32) - 1 )
    {
      v20 = v27;
    }
    else if ( v20 )
    {
      goto LABEL_19;
    }
LABEL_14:
    v25 = v21;
    v21 = (_QWORD *)v20;
    operator delete(v25);
    goto LABEL_15;
  }
  if ( v5 <= v24 )
    goto LABEL_14;
LABEL_19:
  std::_Rb_tree_insert_and_rebalance();
  ++*(_QWORD *)(a1 + 888);
LABEL_15:
  v21[12] = a2;
  return v21 + 5;
}

