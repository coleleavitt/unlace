__int64 __fastcall sub_8C9AD0(__int64 **a1, int a2)
{
  int v3; // ebx
  __int64 *v4; // rdi
  unsigned int *v5; // rcx
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 **v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // r11
  unsigned int v11; // r12d
  unsigned int v12; // r15d
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // r10
  int v16; // eax
  __int64 *v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r12
  int v23; // eax
  unsigned int v24; // [rsp+4h] [rbp-44h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v3 = a2;
  v4 = a1[1];
  v5 = (unsigned int *)v4 + (unsigned int)a2;
  result = *v5;
  v7 = *v5;
  if ( !(a2 >> 1) )
  {
    v17 = a1[2];
    goto LABEL_15;
  }
  v24 = *v5;
  v8 = a1;
  v9 = (unsigned int)a2;
  v25 = *v5;
  v10 = v4;
  v11 = a2 >> 1;
  v12 = a2;
  v13 = 32 * result;
  while ( 1 )
  {
    v18 = 4LL * v11;
    v5 = (unsigned int *)((char *)v10 + v18);
    v19 = **v8;
    v15 = *(unsigned int *)((char *)v10 + v18);
    v16 = *(_DWORD *)((char *)v10 + v18);
    v20 = v19 + 32 * v15;
    v21 = v13 + v19;
    if ( (*(_BYTE *)(v21 + 20) & 1) != 0
      || *(_DWORD *)(v21 + 16) != 1
      || (*(_BYTE *)(v20 + 20) & 1) != 0
      || *(_DWORD *)(v20 + 16) != 1 )
    {
      v14 = sub_1848D40(qword_1C7F2C0, v21, v20);
      v10 = v8[1];
      if ( !v14 )
        goto LABEL_14;
LABEL_4:
      v5 = (unsigned int *)((char *)v10 + v18);
      v15 = *((unsigned int *)v10 + v11);
      v16 = *((_DWORD *)v10 + v11);
      goto LABEL_5;
    }
    if ( (*(_BYTE *)(v21 + 4) & 1) != 0 || (*(_BYTE *)(v20 + 4) & 1) != 0 )
    {
      v23 = sub_182C7B0(qword_1C7F2C0, v21, v20);
      v10 = v8[1];
      if ( v23 >= 0 )
      {
LABEL_14:
        v22 = v9;
        result = v25;
        v7 = v24;
        v17 = v8[2];
        v3 = v12;
        v5 = (unsigned int *)v10 + v22;
        goto LABEL_15;
      }
      goto LABEL_4;
    }
    if ( *(_DWORD *)v21 >= *(_DWORD *)v20 )
      goto LABEL_14;
LABEL_5:
    v17 = v8[2];
    *((_DWORD *)v10 + v9) = v16;
    *((_DWORD *)v17 + v15) = v12;
    v12 = v11;
    v11 = (int)v11 >> 1;
    if ( !v11 )
      break;
    v9 = v12;
  }
  v7 = v24;
  result = v25;
  v3 = 1;
LABEL_15:
  *v5 = v7;
  *((_DWORD *)v17 + result) = v3;
  return result;
}

