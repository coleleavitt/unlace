void __fastcall sub_1CB3F20(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v5; // rbp
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  __int64 v8; // r13
  _QWORD *v9; // r15
  __int64 v10; // rdx
  unsigned __int8 v11; // al
  int v12; // esi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  char *v18; // rdi
  unsigned int v19; // [rsp+0h] [rbp-48h]
  __int64 v20; // [rsp+0h] [rbp-48h]
  char v21; // [rsp+Dh] [rbp-3Bh]
  char v22; // [rsp+Eh] [rbp-3Ah]

  v5 = *(unsigned int *)(a2 + 16);
  v6 = *(_QWORD **)(a2 + 8);
  v19 = *(_DWORD *)(a2 + 16);
  v7 = v6;
  v22 = 0;
  v21 = a3 ^ 1;
  while ( 1 )
  {
    v8 = v5;
    if ( v6 == &v7[v5] )
      break;
    v9 = v6;
    while ( 1 )
    {
      v6 = v9;
      v10 = *v9 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = *(_BYTE *)(v10 + 28) & 0x7F;
      v12 = v11;
      if ( ((v11 + 52) & 0x7Fu) <= 1 || (unsigned int)v11 - 53 <= 1 )
      {
        v10 = sub_B72ED0(*v9 & 0xFFFFFFFFFFFFFFF8LL);
        v11 = *(_BYTE *)(v10 + 28) & 0x7F;
        v12 = v11;
      }
      if ( (unsigned int)(v12 - 68) > 6 )
        break;
      if ( v21 && v11 == 71 )
        goto LABEL_23;
LABEL_6:
      v8 = v5;
      if ( ++v9 == &v7[v5] )
        goto LABEL_29;
    }
    if ( (unsigned int)(v12 - 59) > 2 )
    {
      if ( v11 != 28 || !a4 )
        goto LABEL_23;
      goto LABEL_6;
    }
    v20 = v10;
    if ( !sub_B97450(v10) )
      goto LABEL_28;
    v13 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
      v13 = *(_QWORD *)v13;
    if ( v13 )
      v13 -= 64LL;
    if ( sub_B97230(v13) )
    {
      v14 = sub_B97230(v13);
    }
    else
    {
      if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 60 > 1 )
      {
LABEL_28:
        v7 = *(_QWORD **)(a2 + 8);
        v19 = *(_DWORD *)(a2 + 16);
        v8 = v19;
        goto LABEL_23;
      }
      v14 = sub_BBF290(v13);
    }
    v7 = *(_QWORD **)(a2 + 8);
    v19 = *(_DWORD *)(a2 + 16);
    if ( v14 )
    {
      v5 = *(unsigned int *)(a2 + 16);
      goto LABEL_6;
    }
    v8 = v19;
LABEL_23:
    v5 = --v19;
    v15 = v7[v8 - 1];
    *(_DWORD *)(a2 + 16) = v19;
    if ( v9 != &v7[v19] )
    {
      *v9 = v15;
      v5 = *(unsigned int *)(a2 + 16);
      v7 = *(_QWORD **)(a2 + 8);
      v19 = *(_DWORD *)(a2 + 16);
    }
    v22 = 1;
  }
LABEL_29:
  if ( v22 )
  {
    v16 = *(_DWORD *)a2;
    if ( v19 )
    {
      v17 = 0;
      if ( v16 == 5 )
        v17 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)a2 = 2;
      sub_1A43500(a2);
      if ( *(_DWORD *)a2 == 5 )
      {
        *(_DWORD *)(a2 + 4) = v17;
        return;
      }
    }
    else if ( v16 != 1 )
    {
      *(_DWORD *)a2 = 0;
    }
    v18 = *(char **)(a2 + 88);
    if ( v18 )
    {
      sub_1A39780(v18);
      *(_QWORD *)(a2 + 88) = 0;
    }
  }
}
