void __fastcall sub_15233A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _BYTE *v5; // rdi
  int v6; // ebp
  __int64 v7; // r13
  unsigned __int16 v8; // r12
  __int64 (*v9)(void); // rax
  char v10; // al
  unsigned int *v11; // rax
  __int64 v12; // rdx
  __int16 v13; // ax
  unsigned __int64 v14; // rdi
  unsigned int *v15; // r14
  size_t v16; // r13
  const void *v17; // r14
  Elf64_Sym *v18; // r12
  __int16 v19; // ax
  int v20; // r13d
  char v21; // al
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  unsigned int *v24; // r12
  __int64 v25; // r13
  size_t v26; // rax
  int v27; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 *v28[17]; // [rsp+10h] [rbp-88h] BYREF

  v5 = (_BYTE *)a2[8];
  v6 = *(_DWORD *)a4;
  v7 = *(_QWORD *)(a4 + 8);
  v8 = *(_WORD *)(a4 + 16);
  v9 = *(__int64 (**)(void))(*(_QWORD *)v5 + 152LL);
  if ( (char *)v9 == (char *)sub_102B840 )
    v10 = v5[285];
  else
    v10 = v9();
  if ( v10 || (*(_BYTE *)(a2[7] + 106) & 0x40) != 0 )
  {
    sub_14634E0(a2, (int *)a4);
    if ( *(_WORD *)(a4 + 16) != 22 )
    {
      sub_FC70B0((__int64)v28, a2[6], v6, 14);
      sub_AE9DF0(v28, 22, 4u);
      sub_AEA040((__int64)v28);
      return;
    }
    sub_14634E0(a2, (int *)a4);
    if ( *(_WORD *)(a4 + 16) != 5 )
      goto LABEL_32;
    v11 = *(unsigned int **)(*(_QWORD *)(a4 + 8) + 16LL);
    v12 = *v11;
    switch ( v12 )
    {
      case 7LL:
        if ( v11[4] == 1667592816 && *((_WORD *)v11 + 10) == 29545 && *((_BYTE *)v11 + 22) == 101 )
        {
          v27 = 1;
LABEL_13:
          sub_14634E0(a2, (int *)a4);
          v13 = *(_WORD *)(a4 + 16);
          if ( v13 != 23 )
          {
            if ( v13 != 66 )
              goto LABEL_32;
            sub_14634E0(a2, (int *)a4);
            v14 = *(unsigned __int16 *)(a4 + 16);
            if ( (unsigned __int16)(v14 - 5) > 1u )
              goto LABEL_32;
            if ( sub_141A630(v14) )
              BUG();
            v15 = *(unsigned int **)(*(_QWORD *)(a4 + 8) + 16LL);
            v16 = *v15;
            v17 = v15 + 4;
            if ( j__strlen("on") == v16 )
            {
              if ( v16 && memcmp(v17, "on", v16) )
              {
                if ( v16 != j__strlen("off") )
                  goto LABEL_21;
                goto LABEL_51;
              }
              v18 = &stru_10000;
            }
            else
            {
              if ( v16 == j__strlen("off") )
              {
                if ( !v16 )
                {
LABEL_52:
                  v18 = &stru_10000;
                  if ( v27 == 3 )
                    v27 = 4;
                  else
                    v27 = 2;
                  goto LABEL_23;
                }
LABEL_51:
                if ( memcmp(v17, "off", v16) )
                {
LABEL_21:
                  if ( v16 != j__strlen("push") )
                    goto LABEL_32;
                  goto LABEL_22;
                }
                goto LABEL_52;
              }
              if ( v16 != j__strlen("push") )
                goto LABEL_32;
              LODWORD(v18) = 196608;
              if ( v16 )
              {
LABEL_22:
                LODWORD(v18) = 196608;
                if ( memcmp(v17, "push", v16) )
                  goto LABEL_32;
              }
            }
LABEL_23:
            sub_14634E0(a2, (int *)a4);
            v19 = *(_WORD *)(a4 + 16);
            if ( v19 == 66 )
            {
              sub_14634E0(a2, (int *)a4);
              v23 = *(_WORD *)(a4 + 16);
              if ( (unsigned __int16)(v23 - 5) > 1u )
                goto LABEL_32;
              if ( sub_141A630(v23) )
                BUG();
              v24 = *(unsigned int **)(*(_QWORD *)(a4 + 8) + 16LL);
              v25 = *v24;
              v26 = j__strlen("push");
              if ( v26 != v25 || v26 && memcmp(v24 + 4, "push", v26) )
                goto LABEL_32;
              LODWORD(v18) = 196608;
              sub_14634E0(a2, (int *)a4);
              v19 = *(_WORD *)(a4 + 16);
            }
            if ( v19 == 23 )
            {
              sub_14634E0(a2, (int *)a4);
              goto LABEL_26;
            }
LABEL_32:
            sub_FC70B0((__int64)v28, a2[6], *(_DWORD *)a4, 1860);
            sub_AEA040((__int64)v28);
            return;
          }
          v18 = &stru_10000;
          sub_14634E0(a2, (int *)a4);
LABEL_26:
          v20 = *(_DWORD *)a4;
          if ( *(_WORD *)(a4 + 16) == 2 )
          {
            v22 = operator new[](0x18u);
            *(_DWORD *)v22 = v6;
            *(_QWORD *)(v22 + 8) = v27 | (unsigned int)v18;
            *(_DWORD *)(v22 + 16) = 442;
            *(_DWORD *)(v22 + 4) = v20;
            sub_14368B0((__int64)a2, (char *)v22, 1, 0, 1u, 0);
          }
          else
          {
            sub_FC70B0((__int64)v28, a2[6], v20, 2202);
            sub_1520A40(v28, (__int64)"float_control");
            sub_AEA040((__int64)v28);
          }
          return;
        }
        break;
      case 6LL:
        if ( v11[4] == 1701017701 && *((_WORD *)v11 + 10) == 29808 )
        {
          v27 = 3;
          goto LABEL_13;
        }
        break;
      case 4LL:
        if ( v11[4] == 1752397168 )
        {
          sub_14634E0(a2, (int *)a4);
          if ( *(_WORD *)(a4 + 16) != 23 )
            goto LABEL_32;
          v18 = (Elf64_Sym *)&stru_20000;
          sub_14634E0(a2, (int *)a4);
          v27 = 5;
          goto LABEL_26;
        }
        break;
      default:
        if ( v12 == 3 && *((_WORD *)v11 + 8) == 28528 && *((_BYTE *)v11 + 18) == 112 )
        {
          sub_14634E0(a2, (int *)a4);
          if ( *(_WORD *)(a4 + 16) != 23 )
            goto LABEL_32;
          LODWORD(v18) = 0x40000;
          sub_14634E0(a2, (int *)a4);
          v27 = 6;
          goto LABEL_26;
        }
        break;
    }
    sub_14634E0(a2, (int *)a4);
    goto LABEL_32;
  }
  sub_FC70B0((__int64)v28, a2[6], *(_DWORD *)a4, 2204);
  v21 = sub_141A630(v8);
  if ( v8 == 1 || v21 )
    BUG();
  sub_AEC220(v28, (_BYTE *)(*(_QWORD *)(v7 + 16) + 16LL), **(unsigned int **)(v7 + 16));
  sub_AEA040((__int64)v28);
}
