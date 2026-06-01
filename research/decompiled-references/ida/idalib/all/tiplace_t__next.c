__int64 __fastcall tiplace_t__next(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // ecx
  unsigned __int8 v8; // cl
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r13
  int v19; // r12d
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  __int64 v22; // rcx
  char v23; // si
  int v24; // eax
  __int64 v25; // rdx
  char v26; // cl
  int v27; // eax
  __int64 v28; // rax

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_QWORD *)(a1 + 16) != -1 )
  {
    v4 = (_QWORD *)sub_559D40(*(_QWORD *)(qword_2CCB598 + 1656), a2);
    v5 = sub_55F9A0(v4, a2, v3, 1);
    if ( !v5 )
      goto LABEL_17;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(v5 + 96);
    if ( v6 != -2 )
    {
      if ( v7 || *(_BYTE *)(v5 + 102) )
        goto LABEL_17;
      v8 = *(_BYTE *)(v5 + 100);
      if ( v8 != 29 )
      {
        if ( v8 <= 0x1Du )
        {
          if ( v8 != 12 )
          {
            if ( v8 == 13 )
            {
              v9 = *(_QWORD *)(v5 + 40);
              if ( !v9 )
                goto LABEL_17;
              v10 = (_QWORD *)(*(_QWORD *)(v5 + 32) + 32 * v9 - 32);
              v11 = *v10 + v10[1] - 1LL;
              goto LABEL_12;
            }
            goto LABEL_43;
          }
          v22 = *(_QWORD *)v5;
          if ( *(_QWORD *)v5 )
          {
            v23 = *(_BYTE *)(v22 + 88);
            v24 = v23 & 0xF0;
            if ( (v23 & 0xF0) == 0xC0 )
              v24 = *(_DWORD *)(v22 + 28);
            if ( v24 == 64 || v24 == 208 )
            {
              v14 = *(_QWORD *)(v22 + 8) + 1LL;
            }
            else
            {
              if ( v24 == 32 )
                goto LABEL_17;
              v14 = *(_QWORD *)(v22 + 8);
            }
            if ( !v14 )
              goto LABEL_17;
LABEL_60:
            v11 = v14 - 1;
LABEL_12:
            if ( v6 < v11 )
            {
              v12 = v6 + 1;
LABEL_14:
              *(_QWORD *)(a1 + 16) = v12;
              return 1;
            }
            goto LABEL_17;
          }
LABEL_77:
          sub_555E20(v4, a2);
        }
        if ( v8 != 45 )
        {
          if ( v8 == 61 )
            goto LABEL_17;
LABEL_43:
          if ( !under_debugger )
            interr(3095);
          goto LABEL_78;
        }
        v13 = *(_QWORD *)v5;
        if ( !v13 )
LABEL_62:
          sub_555E00();
LABEL_16:
        v14 = *(_QWORD *)(v13 + 8);
        if ( !v14 )
          goto LABEL_17;
        goto LABEL_60;
      }
      v13 = *(_QWORD *)v5;
      if ( v13 )
        goto LABEL_16;
LABEL_76:
      sub_555DE0();
    }
    if ( v7 || *(_BYTE *)(v5 + 102) )
      goto LABEL_17;
    v20 = *(_BYTE *)(v5 + 100);
    if ( v20 == 29 )
    {
      v21 = *(_QWORD *)v5;
      if ( !v21 )
        goto LABEL_76;
    }
    else
    {
      if ( v20 <= 0x1Du )
      {
        if ( v20 == 12 )
        {
          v25 = *(_QWORD *)v5;
          if ( !*(_QWORD *)v5 )
            goto LABEL_77;
          v26 = *(_BYTE *)(v25 + 88);
          v27 = v26 & 0xF0;
          if ( (v26 & 0xF0) == 0xC0 )
            v27 = *(_DWORD *)(v25 + 28);
          if ( v27 == 64 || v27 == 208 )
          {
            v28 = *(_QWORD *)(v25 + 8) + 1LL;
          }
          else
          {
            if ( v27 == 32 )
              goto LABEL_17;
            v28 = *(_QWORD *)(v25 + 8);
          }
          if ( v28 )
          {
            v12 = 0;
            goto LABEL_14;
          }
LABEL_17:
          *(_QWORD *)(a1 + 16) = -1;
          return 1;
        }
        if ( v20 == 13 )
        {
          if ( *(_QWORD *)(v5 + 40) )
          {
            v12 = 0;
            goto LABEL_14;
          }
          goto LABEL_17;
        }
LABEL_50:
        if ( !under_debugger )
          interr(3094);
LABEL_78:
        BUG();
      }
      if ( v20 != 45 )
      {
        if ( v20 == 61 )
          goto LABEL_17;
        goto LABEL_50;
      }
      v21 = *(_QWORD *)v5;
      if ( !v21 )
        goto LABEL_62;
    }
    if ( *(_QWORD *)(v21 + 8) )
    {
      v12 = 0;
      goto LABEL_14;
    }
    goto LABEL_17;
  }
  v16 = a2[2];
  if ( v16 )
  {
    if ( v3 >= a2[5] )
      return 0;
    v17 = *(int *)(a2[4] + 4 * v3);
    if ( v17 < 0 )
      return 0;
    v18 = v17 + 1;
    goto LABEL_29;
  }
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 32))(a2) < (unsigned int)v3 || !(_DWORD)v3 )
    return 0;
  v16 = a2[2];
  v18 = (unsigned int)v3;
  if ( v16 )
  {
LABEL_29:
    if ( v18 >= v16 )
      return 0;
    v19 = *(_DWORD *)(a2[1] + 4 * v18);
    goto LABEL_31;
  }
  if ( (unsigned int)v3 >= (unsigned __int64)(*(int (__fastcall **)(__int64 *))(*a2 + 32))(a2) )
    return 0;
  v19 = v3 + 1;
LABEL_31:
  if ( v19 )
  {
    *(_DWORD *)(a1 + 12) = v19;
    *(_QWORD *)(a1 + 16) = -2;
    *(_DWORD *)(a1 + 8) = -1;
    return 1;
  }
  return 0;
}
