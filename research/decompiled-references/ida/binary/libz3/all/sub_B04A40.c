__int64 __fastcall sub_B04A40(__int64 a1, unsigned int *a2)
{
  char v3; // r15
  char v4; // r13
  _DWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // r12d
  __int64 v10; // r14
  _DWORD *v11; // rax
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned int *v15; // r12
  __int64 v16; // rax
  unsigned int *v17; // r15
  __int64 v18; // rdi
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rbx
  unsigned int v22; // edx
  __int64 result; // rax
  unsigned int *v24; // [rsp+8h] [rbp-48h]
  int v25; // [rsp+8h] [rbp-48h]
  int v26; // [rsp+1Ch] [rbp-34h] BYREF

  v24 = a2;
  if ( *((_WORD *)a2 + 2) )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v3 = 1;
    v4 = 0;
    v7 = *(_QWORD *)(v6 + 8832);
    if ( !v7 )
      goto LABEL_24;
  }
  else
  {
    v3 = 1;
    v4 = 0;
    v5 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v5 && !*v5 && v5[1] == 8 && a2[6] == 1 )
    {
      v3 = 0;
      v4 = 1;
      v24 = *((unsigned int **)a2 + 4);
    }
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v6 + 8832);
    if ( !v7 )
    {
LABEL_24:
      sub_B6F780(v6);
      v6 = *(_QWORD *)(a1 + 16);
      v7 = *(_QWORD *)(v6 + 8832);
      if ( !v7 )
        goto LABEL_26;
      v8 = *v24;
      if ( (unsigned int)v8 >= *(_DWORD *)(v7 - 4) )
        goto LABEL_26;
      goto LABEL_7;
    }
  }
  v8 = *v24;
  if ( (unsigned int)v8 >= *(_DWORD *)(v7 - 4) || *(_DWORD *)(v7 + 4 * v8) == 0x7FFFFFFF )
    goto LABEL_24;
LABEL_7:
  v9 = *(_DWORD *)(v7 + 4 * v8);
  if ( v9 != 0x7FFFFFFF )
  {
    v10 = 16LL * v9;
    if ( !*((_WORD *)v24 + 2) )
    {
      v11 = *(_DWORD **)(*((_QWORD *)v24 + 2) + 24LL);
      if ( !v11 || *v11 == -1 )
      {
        v12 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 8872) + v10 + 15);
        if ( (_BYTE)v12 )
        {
LABEL_13:
          if ( *(_DWORD *)(a1 + 8) == v12 )
          {
            v22 = 2 * v9;
            goto LABEL_20;
          }
          v13 = *(_QWORD *)(a1 + 24);
          goto LABEL_15;
        }
        sub_8F1CE0(v6, v9, *(_DWORD *)(a1 + 8));
        v6 = *(_QWORD *)(a1 + 16);
      }
    }
    v12 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 8872) + v10 + 15);
    if ( !(_BYTE)v12 )
      v12 = -1;
    goto LABEL_13;
  }
LABEL_26:
  v13 = *(_QWORD *)(a1 + 24);
  if ( *(unsigned int **)(v13 + 856) == v24 )
  {
    v22 = 0;
    goto LABEL_20;
  }
  if ( *(unsigned int **)(v13 + 864) == v24 )
  {
    v4 = v3;
    v22 = 0;
    goto LABEL_20;
  }
LABEL_15:
  v14 = sub_1691BE0(a1 + 712);
  v15 = (unsigned int *)v14;
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v16 = sub_15E1B70(*(_QWORD *)(a1 + 24));
  v17 = (unsigned int *)v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v18 = *(_QWORD *)(a1 + 16);
  v19 = *(_DWORD *)(a1 + 8);
  v20 = *(_QWORD *)(v18 + 8832);
  v25 = *(_DWORD *)(v20 + 4LL * *v15);
  v26 = 2 * *(_DWORD *)(v20 + 4LL * *v17);
  sub_B69FE0(v18, v19, 1, (unsigned int)&v26, 0, 0, 1);
  v21 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v21 + 7488) + 48LL))(*(_QWORD *)(v21 + 7488), v15);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 7488) + 64LL))(*(_QWORD *)(v21 + 7488));
  sub_B03590((__int64)v17, v13);
  sub_B03590((__int64)v15, v13);
  v22 = 2 * v25;
LABEL_20:
  result = v22 ^ 1;
  if ( !v4 )
    return v22;
  return result;
}

