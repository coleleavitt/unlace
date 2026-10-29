_QWORD *__fastcall sub_C25AB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  char v24; // si
  unsigned int v25; // eax
  void *v26; // rdi
  __int64 v28; // rax
  _BOOL8 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v36; // [rsp+10h] [rbp-A8h] BYREF
  __int64 *v37; // [rsp+18h] [rbp-A0h]
  __int64 v38; // [rsp+20h] [rbp-98h]
  void *ptr[2]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v40[128]; // [rsp+38h] [rbp-80h] BYREF

  v5 = *(_DWORD *)(a1 + 896);
  if ( v5 > 0x1FFFFFFE )
  {
    sub_E33C10(a1, a2, 2414, 0);
    return nullptr;
  }
  *(_DWORD *)(a1 + 896) = v5 + 1;
  v8 = sub_A4F2F0(v5 + 1);
  *(_BYTE *)(a4 + 128) &= ~2u;
  *(_QWORD *)a4 = v8;
  *(_QWORD *)(a4 + 8) = v9;
  *(_QWORD *)(a4 + 16) = 0;
  v36 = v8;
  v37 = v9;
  v10 = sub_A4F310(&v36);
  LODWORD(v36) = 0;
  v37 = nullptr;
  v11 = v10;
  v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v38 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_4;
  }
  v30 = *v12;
  if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 43 <= 1 )
    goto LABEL_38;
  v34 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v34 > 1 )
  {
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_27;
  }
  v30 = sub_F63050(*v12, a3, v34, v12);
  if ( v30 )
  {
LABEL_38:
    while ( 1 )
    {
      v11 = *(_QWORD *)(v30 + 32);
      if ( (*(_BYTE *)(v30 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v31 = v11 & 0xFFFFFFFFFFFFFFF0LL;
        v30 = *(_QWORD *)v31;
        v32 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v31 + 16LL) - 43;
        if ( (unsigned int)v32 <= 1 )
          break;
        v33 = sub_F63050(v30, a3, v32, v12);
        v11 = *(_QWORD *)(v33 + 32);
        if ( (*(_BYTE *)(v33 + 18) & 0x10) == 0 )
          goto LABEL_26;
      }
    }
  }
LABEL_26:
  v12 = v37;
  v17 = v36 & 1;
  v14 = (v36 & 8) != 0;
  v16 = (v36 & 2) != 0;
  v15 = (v36 & 4) != 0;
  v13 = (unsigned int)v36 >> 4;
LABEL_27:
  v38 = v11;
LABEL_4:
  *(_QWORD *)(a4 + 32) = v12;
  ptr[0] = v40;
  ptr[1] = (void *)0x800000000LL;
  *(_BYTE *)(a4 + 24) = (8 * v14) | (4 * v15) | (2 * v16) & 0xF3 | v17 & 0xF3 | *(_BYTE *)(a4 + 24) & 0xF0;
  v18 = v38;
  *(_DWORD *)(a4 + 24) = *(_DWORD *)(a4 + 24) & 0xF | (16 * v13);
  *(_QWORD *)(a4 + 40) = v18;
  sub_C240D0((char ***)(a4 + 48), (char ***)ptr);
  if ( ptr[0] != v40 )
    free(ptr[0]);
  *(_WORD *)(a4 + 128) &= 0xFEu;
  v19 = a1 + 856;
  v20 = operator new(0x68u);
  *(_DWORD *)(v20 + 32) = v5 + 1;
  v21 = *(_QWORD *)(a1 + 864);
  v22 = (_QWORD *)v20;
  *(_OWORD *)(v20 + 40) = 0;
  *(_OWORD *)(v20 + 88) = 0;
  *(_OWORD *)(v20 + 56) = 0;
  *(_OWORD *)(v20 + 72) = 0;
  *(_BYTE *)(v20 + 44) = 0;
  *(_QWORD *)(v20 + 96) = 0;
  if ( !v21 )
  {
    v21 = a1 + 856;
    if ( *(_QWORD *)(a1 + 872) == v19 )
    {
      v29 = 1;
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  while ( 1 )
  {
    v25 = *(_DWORD *)(v21 + 32) - 1;
    if ( v5 >= v25 )
      break;
    v23 = *(_QWORD *)(v21 + 16);
    v24 = 1;
    if ( !v23 )
      goto LABEL_12;
LABEL_9:
    v21 = v23;
  }
  v23 = *(_QWORD *)(v21 + 24);
  v24 = 0;
  if ( v23 )
    goto LABEL_9;
LABEL_12:
  if ( v24 )
  {
    if ( *(_QWORD *)(a1 + 872) == v21 )
      goto LABEL_19;
LABEL_17:
    v28 = std::_Rb_tree_decrement(v21);
    if ( v5 <= *(_DWORD *)(v28 + 32) - 1 )
    {
      v21 = v28;
    }
    else if ( v21 )
    {
      goto LABEL_19;
    }
LABEL_14:
    v26 = v22;
    v22 = (_QWORD *)v21;
    operator delete(v26);
    goto LABEL_15;
  }
  if ( v5 <= v25 )
    goto LABEL_14;
LABEL_19:
  v29 = 1;
  if ( v21 != v19 )
    v29 = v5 < *(_DWORD *)(v21 + 32) - 1;
LABEL_21:
  std::_Rb_tree_insert_and_rebalance(v29, v22, v21, a1 + 856);
  ++*(_QWORD *)(a1 + 888);
LABEL_15:
  v22[12] = a2;
  return v22 + 5;
}
