__int64 __fastcall sub_CBA190(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r12
  char v5; // r14
  __int64 *v6; // rcx
  __int64 v7; // rsi
  __int64 *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdi
  bool v11; // zf
  _DWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r13
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // ebx
  unsigned int v29; // r14d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // r13
  char **exception; // r13
  __int64 *v37; // [rsp+8h] [rbp-70h]
  __int64 *v38; // [rsp+8h] [rbp-70h]
  __int64 v39[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a2;
  v4 = a1[1];
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v5 = 0;
  v6 = a1 + 60;
  while ( 1 )
  {
    v7 = a1[62];
    v8 = (__int64 *)a1[18];
    v9 = *(_QWORD *)(v2 + 16);
    if ( v7 )
    {
      v10 = a1[63];
      v11 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v11 )
      {
        v37 = v6;
        sub_15D7BC0(v10, v7);
        v6 = v37;
      }
    }
    a1[62] = 0;
    v12 = *(_DWORD **)(v9 + 24);
    if ( !v12 )
      goto LABEL_12;
    if ( *v12 != 5 )
    {
      if ( !*v12 )
      {
        v13 = v12[1];
        if ( v13 == 2 )
        {
          v33 = sub_CB42E0(v8, 0x3010102464C457FLL, 0, v6);
        }
        else
        {
          if ( v13 != 4 )
            goto LABEL_12;
          v33 = sub_CB4070(v8, 0x3010102464C457FLL, 0, 0x1003E0003LL, v6);
        }
LABEL_34:
        if ( v33 != 5 )
        {
          v17 = a1[60];
          goto LABEL_36;
        }
      }
LABEL_12:
      v14 = *(_DWORD *)(v2 + 8) + 1;
      if ( !v5 )
      {
        v39[0] = v2;
        *(_DWORD *)(v2 + 8) = v14;
        sub_CB55F0(a1 + 7, v39);
LABEL_25:
        v27 = 1;
        goto LABEL_26;
      }
      v15 = a1[60];
      *(_DWORD *)(v2 + 8) = v14;
      if ( !v15 || (v16 = a1[61], v11 = *(_DWORD *)(v15 + 8) == 1, --*(_DWORD *)(v15 + 8), !v11) )
      {
        a1[60] = v2;
        v17 = v2;
        goto LABEL_16;
      }
      sub_15D7BC0(v16, v15);
      a1[60] = v2;
      v17 = v2;
LABEL_36:
      if ( !v17 )
      {
        v18 = (_QWORD *)a1[7];
        if ( v18 )
        {
LABEL_17:
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v29 = (3 * v19 + 1) >> 1;
            v30 = 8 * v29 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v30 || v19 >= v29 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v39, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v39);
              sub_233E40((__int64)v39);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v31 = (unsigned int *)sub_186B300(v18 - 1, v30);
            v32 = v31[1];
            v18 = v31 + 2;
            *v31 = v29;
            a1[7] = v31 + 2;
            LODWORD(v31) = v32;
            v22 = &v18[v32];
            v21 = (_DWORD)v31 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v18[v20];
          }
          goto LABEL_19;
        }
LABEL_38:
        v34 = (_QWORD *)sub_186B270(0x18u);
        v18 = v34 + 1;
        *v34 = 2;
        v21 = 1;
        a1[7] = v18;
        v22 = v18;
LABEL_19:
        *v22 = v17;
        v23 = a1[60];
        *((_DWORD *)v18 - 1) = v21;
        if ( v23 )
        {
          v24 = a1[61];
          v11 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v24, v23);
        }
        a1[60] = 0;
        v25 = a1[5];
        if ( v25 )
        {
          v26 = *(_DWORD *)(v25 - 4);
          if ( v26 )
            *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 1) + 8) |= 2u;
        }
        goto LABEL_25;
      }
LABEL_16:
      v18 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v17 + 8);
      if ( v18 )
        goto LABEL_17;
      goto LABEL_38;
    }
    switch ( v12[1] )
    {
      case 2:
        v33 = sub_CB3B50(v8, 0x3010102464C457FLL, 0, v6);
        goto LABEL_34;
      case 3:
        v33 = sub_CB3B50(v8, 0, 0x3010102464C457FLL, v6);
        goto LABEL_34;
      case 4:
        v38 = v6;
        sub_CB1DB0(v8, 0x3010102464C457FLL, 0, v6);
        break;
      case 5:
        v38 = v6;
        sub_CB1E40(v8, 0x3010102464C457FLL, 0, v6);
        break;
      case 6:
        v33 = sub_CB4E40(v8, 0, nullptr, v6);
        goto LABEL_34;
      case 7:
        v33 = sub_CB5470(v8, 0, nullptr, v6);
        goto LABEL_34;
      case 8:
        v33 = sub_CB47F0(v8, 0x3010102464C457FLL, v6);
        goto LABEL_34;
      case 9:
        v33 = sub_CB62B0(v8, 0, nullptr, v6);
        goto LABEL_34;
      case 0x10:
        v33 = sub_CB2F90((__int64)v8, 0x3010102464C457FLL, nullptr, v6);
        goto LABEL_34;
      default:
        goto LABEL_12;
    }
    v35 = a1[60];
    v6 = v38;
    if ( *(_WORD *)(v35 + 4) || *(_DWORD *)(v35 + 24) )
      break;
    ++*(_DWORD *)(v35 + 8);
    v11 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v11 )
    {
      sub_15D7BC0(v4, v2);
      v6 = v38;
    }
    v2 = v35;
    v5 = 1;
  }
  v27 = 0;
LABEL_26:
  v11 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v11 )
    sub_15D7BC0(v4, v2);
  return v27;
}

