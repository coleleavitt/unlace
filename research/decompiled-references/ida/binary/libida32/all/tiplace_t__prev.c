__int64 __fastcall tiplace_t__prev(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rax
  unsigned __int8 v6; // dl
  __int64 v7; // rdx
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // cl
  int v14; // eax
  __int64 v15; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  int v20; // r12d
  __int64 v21; // rax

  v3 = *(unsigned int *)(a1 + 12);
  if ( *(_QWORD *)(a1 + 16) != -2 )
  {
    v4 = (_QWORD *)sub_540BA0(*(_QWORD *)(qword_2CA1698 + 1464), a2);
    v5 = sub_5467E0(v4, a2, v3, 1);
    if ( !v5 || *(_DWORD *)(v5 + 96) || *(_BYTE *)(v5 + 102) )
      goto LABEL_24;
    v6 = *(_BYTE *)(v5 + 100);
    if ( v6 == 29 )
    {
      v21 = *(_QWORD *)v5;
      if ( !v21 )
        sub_53CC60();
    }
    else
    {
      if ( v6 <= 0x1Du )
      {
        if ( v6 != 12 )
        {
          if ( v6 == 13 )
          {
            v7 = *(_QWORD *)(v5 + 40);
            if ( !v7 )
              goto LABEL_24;
            v8 = (_QWORD *)(*(_QWORD *)(v5 + 32) + 32 * v7 - 32);
            v9 = *v8 + v8[1] - 1LL;
LABEL_11:
            v10 = *(_QWORD *)(a1 + 16);
            if ( v10 == -1 )
            {
LABEL_15:
              *(_QWORD *)(a1 + 16) = v9;
              return 1;
            }
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v9 > v11 )
                v9 = v11;
              goto LABEL_15;
            }
LABEL_24:
            *(_QWORD *)(a1 + 16) = -2;
            return 1;
          }
LABEL_42:
          if ( !under_debugger )
            interr(3095);
          BUG();
        }
        v12 = *(_QWORD *)v5;
        if ( !*(_QWORD *)v5 )
          sub_53CCA0(v4, a2);
        v13 = *(_BYTE *)(v12 + 88);
        v14 = v13 & 0xF0;
        if ( (v13 & 0xF0) == 0xC0 )
          v14 = *(_DWORD *)(v12 + 28);
        if ( v14 == 64 || v14 == 208 )
        {
          v15 = *(_QWORD *)(v12 + 8) + 1LL;
        }
        else
        {
          if ( v14 == 32 )
            goto LABEL_24;
          v15 = *(_QWORD *)(v12 + 8);
        }
        if ( !v15 )
          goto LABEL_24;
LABEL_46:
        v9 = v15 - 1;
        goto LABEL_11;
      }
      if ( v6 != 45 )
      {
        if ( v6 == 61 )
          goto LABEL_24;
        goto LABEL_42;
      }
      v21 = *(_QWORD *)v5;
      if ( !v21 )
        sub_53CC80();
    }
    v15 = *(_QWORD *)(v21 + 8);
    if ( !v15 )
      goto LABEL_24;
    goto LABEL_46;
  }
  v17 = a2[2];
  if ( v17 )
  {
    if ( v3 >= a2[5] )
      return 0;
    v18 = *(int *)(a2[4] + 4 * v3);
    if ( v18 <= 0 )
      return 0;
    v19 = v18 - 1;
  }
  else
  {
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*a2 + 32))(a2) < (unsigned int)v3 || (unsigned int)v3 - 1LL <= 0 )
      return 0;
    v17 = a2[2];
    v19 = (unsigned int)v3 - 2LL;
    if ( !v17 )
    {
      if ( v19 < (*(int (__fastcall **)(__int64 *))(*a2 + 32))(a2) )
      {
        v20 = v3 - 1;
LABEL_35:
        *(_DWORD *)(a1 + 12) = v20;
        *(_QWORD *)(a1 + 16) = -1;
        *(_DWORD *)(a1 + 8) = -1;
        return 1;
      }
      return 0;
    }
  }
  if ( v19 >= v17 )
    return 0;
  v20 = *(_DWORD *)(a2[1] + 4 * v19);
  if ( v20 )
    goto LABEL_35;
  return 0;
}

