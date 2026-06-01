void __fastcall sub_DAB560(__int64 *a1, int *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // r14
  unsigned int v18; // ecx
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // r13
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // [rsp+8h] [rbp-40h]
  unsigned __int64 v38; // [rsp+8h] [rbp-40h]

  v3 = a3 & 0xFFFFFFFFFFFFFFFELL;
  v6 = *(_QWORD *)((a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( !v6 )
    goto LABEL_6;
  if ( (v6 & 1) == 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(v7 + 4) == 1 )
    {
      v10 = *(_QWORD *)(v7 + 8);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v3 + 16);
        v37 = *(_QWORD *)(v7 + 16);
        v12 = sub_DA8B90(*a1, v37, v11);
        v13 = *a1;
        v14 = *(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
        *(_DWORD *)((v12 & 0xFFFFFFFFFFFFFFFELL) + 4) = v14;
        if ( v14 > 1 )
        {
          v38 = v12 & 0xFFFFFFFFFFFFFFFELL;
          v29 = sub_DA8B90(v13, v10, v12);
          v30 = a1;
          v31 = v29;
          v32 = v29 ^ 1;
          if ( (a3 & 1) != 0 )
            v31 = v32;
          goto LABEL_17;
        }
        sub_DAAB00(v13, v12 & 0xFFFFFFFFFFFFFFFELL);
        v15 = sub_DA8B90(*a1, v10, v11);
        v16 = *a1;
        v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
        v18 = *(_DWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
        *(_DWORD *)((v15 & 0xFFFFFFFFFFFFFFFELL) + 4) = v18;
        if ( v18 > 1 )
        {
          v35 = sub_DA8B90(v16, v37, v15);
          if ( (a3 & 1) != 0 )
            v35 ^= 1uLL;
          sub_DAA440(a1, a2, v35);
          sub_DAAB00(*a1, v17);
          return;
        }
        sub_DAAB00(v16, v15 & 0xFFFFFFFFFFFFFFFELL);
      }
    }
  }
  v8 = *(_QWORD *)(v3 + 16);
  if ( (v8 & 1) != 0 )
    goto LABEL_6;
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(v9 + 4) != 1 )
    goto LABEL_6;
  v19 = *(_QWORD *)(v9 + 8);
  if ( !v19 )
    goto LABEL_6;
  v20 = *(_QWORD *)(v3 + 8);
  v21 = *(_QWORD *)(v9 + 16);
  v22 = sub_DA8B90(*a1, v20, *(_QWORD *)(v9 + 8));
  v23 = *a1;
  v24 = *(_DWORD *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
  *(_DWORD *)((v22 & 0xFFFFFFFFFFFFFFFELL) + 4) = v24;
  if ( v24 > 1 )
  {
    v38 = v22 & 0xFFFFFFFFFFFFFFFELL;
    v33 = sub_DA8B90(v23, v22, v21);
    v30 = a1;
    v31 = v33;
    v34 = v33 ^ 1;
    if ( (a3 & 1) != 0 )
      v31 = v34;
LABEL_17:
    sub_DAA440(v30, a2, v31);
    sub_DAAB00(*a1, v38);
    return;
  }
  sub_DAAB00(v23, v22 & 0xFFFFFFFFFFFFFFFELL);
  v25 = sub_DA8B90(*a1, v20, v21);
  v26 = *a1;
  v27 = v25 & 0xFFFFFFFFFFFFFFFELL;
  v28 = *(_DWORD *)((v25 & 0xFFFFFFFFFFFFFFFELL) + 4) + 1;
  *(_DWORD *)((v25 & 0xFFFFFFFFFFFFFFFELL) + 4) = v28;
  if ( v28 <= 1 )
  {
    sub_DAAB00(v26, v25 & 0xFFFFFFFFFFFFFFFELL);
LABEL_6:
    sub_DAA440(a1, a2, a3);
    return;
  }
  v36 = sub_DA8B90(v26, v25, v19);
  if ( (a3 & 1) != 0 )
    v36 ^= 1uLL;
  sub_DAA440(a1, a2, v36);
  sub_DAAB00(*a1, v27);
}

