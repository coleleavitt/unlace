void __fastcall sub_1ED27E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // r13d
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r13
  __int64 v15; // rax
  bool v16; // dl
  __int64 v17; // rcx
  char ***v18; // r8
  int v19; // edi
  char **v20; // rdi
  __int64 v21; // rax
  int v22; // ecx
  int v23; // esi
  __int64 v24; // [rsp+10h] [rbp-68h]
  char **v25[2]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v26[80]; // [rsp+28h] [rbp-50h] BYREF

  v2 = a1;
  v3 = *(_DWORD *)a2 & 0xFFFFFFFE;
  *(_DWORD *)a2 = *(_DWORD *)a1 & 0xFFFFFFFE | *(_DWORD *)a2 & 1;
  *(_DWORD *)a1 = v3 | *(_DWORD *)a1 & 1;
  v4 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v4;
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v7 = (__int64 *)(a1 + 8);
    v8 = (__int64 *)(a2 + 8);
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v5 = *(_DWORD *)(a2 + 16);
      goto LABEL_6;
    }
    v14 = (__int64 *)(a2 + 88);
    while ( 1 )
    {
      v15 = *v7;
      v16 = *v7 != -4096 && *v7 != -8192;
      v17 = *v8;
      if ( *v8 == -4096 || v17 == -8192 )
      {
        *v7 = v17;
        *v8 = v15;
        if ( !v16 )
          goto LABEL_27;
        *((_DWORD *)v8 + 4) = 0;
        *((_DWORD *)v8 + 5) = 2;
        v22 = *((_DWORD *)v7 + 4);
        v8[1] = (__int64)(v8 + 3);
        if ( v22 )
          sub_1ED26C0((char ***)v8 + 1, (char ***)v7 + 1);
        v20 = (char **)v7[1];
        if ( v20 == (char **)(v7 + 3) )
          goto LABEL_27;
      }
      else
      {
        v18 = (char ***)(v7 + 1);
        if ( v16 )
        {
          v23 = *((_DWORD *)v7 + 4);
          v24 = *v7;
          v25[0] = (char **)v26;
          v25[1] = (char **)0x200000000LL;
          if ( v23 )
          {
            sub_1ED26C0(v25, (char ***)v7 + 1);
            v17 = *v8;
            v18 = (char ***)(v7 + 1);
          }
          *v7 = v17;
          sub_1ED26C0(v18, (char ***)v8 + 1);
          *v8 = v24;
          sub_1ED26C0((char ***)v8 + 1, v25);
          v20 = v25[0];
          if ( (_BYTE *)v25[0] == v26 )
            goto LABEL_27;
        }
        else
        {
          *v7 = v17;
          *v8 = v15;
          *((_DWORD *)v7 + 4) = 0;
          *((_DWORD *)v7 + 5) = 2;
          v19 = *((_DWORD *)v8 + 4);
          v7[1] = (__int64)(v7 + 3);
          if ( v19 )
            sub_1ED26C0((char ***)v7 + 1, (char ***)v8 + 1);
          v20 = (char **)v8[1];
          if ( v20 == (char **)(v8 + 3) )
            goto LABEL_27;
        }
      }
      free(v20);
LABEL_27:
      v8 += 5;
      v7 += 5;
      if ( v8 == v14 )
        return;
    }
  }
  v5 = *(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v21;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 16) = v5;
    return;
  }
  v6 = a2;
  v7 = (__int64 *)(a2 + 8);
  v8 = (__int64 *)(a1 + 8);
  a2 = a1;
  v2 = v6;
LABEL_6:
  *(_BYTE *)a2 |= 1u;
  v9 = *v7;
  v10 = *(_QWORD *)(a2 + 8);
  *v8 = *v7;
  if ( v9 != -4096 && v9 != -8192 )
  {
    v8[1] = (__int64)(v8 + 3);
    v8[2] = 0x200000000LL;
    if ( *((_DWORD *)v7 + 4) )
      sub_1ED26C0((char ***)v8 + 1, (char ***)v7 + 1);
    v11 = (__int64 *)v7[1];
    if ( v11 != v7 + 3 )
      free(v11);
  }
  v12 = v7[5];
  v8[5] = v12;
  if ( v12 != -8192 && v12 != -4096 )
  {
    v8[6] = (__int64)(v8 + 8);
    v8[7] = 0x200000000LL;
    if ( *((_DWORD *)v7 + 14) )
      sub_1ED26C0((char ***)v8 + 6, (char ***)v7 + 6);
    v13 = (__int64 *)v7[6];
    if ( v13 != v7 + 8 )
      free(v13);
  }
  *(_BYTE *)v2 &= ~1u;
  *(_QWORD *)(v2 + 8) = v10;
  *(_DWORD *)(v2 + 16) = v5;
}
