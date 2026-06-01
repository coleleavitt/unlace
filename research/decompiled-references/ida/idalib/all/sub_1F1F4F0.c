void __fastcall sub_1F1F4F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ebx
  int v7; // r12d
  __int64 v8; // rax
  _QWORD *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdx
  int v19; // r15d
  int v20; // r10d
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  bool v27; // zf
  unsigned __int64 v28; // rax
  _BYTE *v29; // rcx
  __int64 v30; // rdx
  _BYTE *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-138h]
  unsigned __int64 v35; // [rsp+0h] [rbp-138h]
  int v36; // [rsp+0h] [rbp-138h]
  unsigned int v37; // [rsp+10h] [rbp-128h]
  __int64 v38; // [rsp+18h] [rbp-120h]
  void *ptr; // [rsp+20h] [rbp-118h] BYREF
  __int64 v40; // [rsp+28h] [rbp-110h]
  _BYTE v41[64]; // [rsp+30h] [rbp-108h] BYREF
  void *v42; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-C0h]
  _BYTE v44[184]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = a1[2];
  v4 = *(unsigned int *)(v3 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  v42 = v44;
  v37 = v5;
  v6 = v5;
  v43 = 0x1000000000LL;
  v34 = (unsigned int)v5;
  if ( (unsigned int)v5 > 0x10uLL )
  {
    sub_2237220(&v42, v44, (unsigned int)v5, 8);
    if ( !v37 )
    {
      v40 = 0x1000000000LL;
      ptr = v41;
      sub_2237220(&ptr, v41, v34, 4);
      v29 = ptr;
      goto LABEL_20;
    }
  }
  else if ( !(_DWORD)v5 )
  {
    v29 = v41;
    v40 = 0x1000000000LL;
    ptr = v41;
    goto LABEL_20;
  }
  v7 = 0;
  do
  {
    v8 = a1[2];
    v9 = *(_QWORD **)(v8 + 8);
    v10 = sub_1EE13A0((__int64)v9, *(_QWORD *)(v8 + 16), (__int64 *)(v8 + 32), (_DWORD *)(v8 + 24));
    v15 = sub_1EDB980(v9, v10, v11, v12, v13, v14);
    v16 = (unsigned int)v43;
    v17 = (unsigned int)v43 + 1LL;
    if ( v17 > HIDWORD(v43) )
    {
      v38 = v15;
      sub_2237220(&v42, v44, v17, 8);
      v16 = (unsigned int)v43;
      v18 = v42;
      v15 = v38;
    }
    else
    {
      v18 = v42;
    }
    ++v7;
    v18[v16] = v15;
    LODWORD(v43) = v43 + 1;
  }
  while ( v6 != v7 );
  ptr = v41;
  v40 = 0x1000000000LL;
  if ( v34 > 0x10 )
    sub_2237220(&ptr, v41, v34, 4);
  v19 = 0;
  do
  {
    while ( 1 )
    {
      v24 = a1[2];
      v25 = *(unsigned int *)(v24 + 24);
      v22 = *(_QWORD *)(v24 + 16);
      v26 = *(_QWORD *)(v24 + 8);
      v27 = *(_QWORD *)(v22 + 856) == 0;
      *(_DWORD *)(v24 + 24) = v25 + 1;
      v28 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 8 * v25);
      if ( !v27 )
      {
        v35 = v28;
        sub_1EDF870(v26, v22);
        v28 = v35;
      }
      v20 = __ROR4__(v28, 1);
      v21 = HIDWORD(v28);
      if ( v21 )
        v22 = *(_QWORD *)(*(_QWORD *)(v22 + 3320) + 8LL * (unsigned int)(v21 - 1));
      if ( v20 )
        v20 = v20 + *(_DWORD *)(v22 + 1648) - 2;
      v23 = (unsigned int)v40 + 1LL;
      if ( v23 > HIDWORD(v40) )
        break;
      ++v19;
      *((_DWORD *)ptr + (unsigned int)v40) = v20;
      LODWORD(v40) = v40 + 1;
      if ( v6 == v19 )
        goto LABEL_19;
    }
    v36 = v20;
    ++v19;
    sub_2237220(&ptr, v41, v23, 4);
    *((_DWORD *)ptr + (unsigned int)v40) = v36;
    LODWORD(v40) = v40 + 1;
  }
  while ( v6 != v19 );
LABEL_19:
  v29 = ptr;
LABEL_20:
  sub_BA9FB0(a2 + 8, v42, v37, v29, *(_QWORD *)(*a1 + 144LL));
  v30 = a1[2];
  v31 = ptr;
  v32 = *(unsigned int *)(v30 + 24);
  *(_DWORD *)(v30 + 24) = v32 + 1;
  v33 = *(_QWORD *)(*(_QWORD *)(v30 + 32) + 8 * v32);
  *(_BYTE *)(a2 + 32) |= 1u;
  *(_DWORD *)(a2 + 36) = v33;
  if ( v31 != v41 )
    free(v31);
  if ( v42 != v44 )
    free(v42);
}
