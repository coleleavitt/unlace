void __fastcall sub_A4F8E0(int *a1)
{
  int v2; // eax
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r12
  _DWORD *v24; // rbp
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdi
  __int64 v29; // rbp

  v2 = *a1;
  if ( *a1 == 2 )
    goto LABEL_16;
  switch ( v2 )
  {
    case 3:
      v5 = sub_21F90D0();
      if ( *((_QWORD *)a1 + 1) == v5 )
      {
        v15 = *((_QWORD *)a1 + 2);
        if ( !v15 )
          goto LABEL_12;
        v16 = 24LL * *(_QWORD *)(v15 - 8);
        v17 = v15 + v16;
        if ( v15 == v15 + v16 )
        {
LABEL_53:
          operator delete[]((void *)(v15 - 8), v16 + 8);
          goto LABEL_12;
        }
        while ( 1 )
        {
          v15 = v17 - 24;
          v18 = v17 - 24;
          if ( v5 == *(_QWORD *)(v17 - 24) )
          {
            sub_A4F010(v18);
            if ( *((_QWORD *)a1 + 2) == v15 )
            {
LABEL_52:
              v16 = 24LL * *(_QWORD *)(v17 - 32);
              goto LABEL_53;
            }
          }
          else
          {
            sub_21F9830(v18);
            if ( v15 == *((_QWORD *)a1 + 2) )
              goto LABEL_52;
          }
          v17 -= 24;
        }
      }
LABEL_20:
      sub_21F9830(a1 + 2);
      goto LABEL_12;
    case 4:
LABEL_16:
      if ( (unsigned int)a1[4] <= 0x40 )
        goto LABEL_12;
      v4 = *((void **)a1 + 1);
      if ( !v4 )
        goto LABEL_12;
      goto LABEL_18;
    case 8:
      v6 = *((_QWORD *)a1 + 1);
      if ( !v6 )
        goto LABEL_12;
      v7 = 56LL * *(_QWORD *)(v6 - 8);
      v8 = v6 + v7;
      if ( v6 != v6 + v7 )
      {
        while ( 1 )
        {
          v9 = v8 - 56;
          if ( *(_DWORD *)(v8 - 56) <= 1u )
          {
            if ( v9 == v6 )
              goto LABEL_28;
          }
          else
          {
            sub_A4F8E0(v8 - 56);
            v6 = *((_QWORD *)a1 + 1);
            if ( v9 == v6 )
            {
LABEL_28:
              v7 = 56LL * *(_QWORD *)(v8 - 64);
              break;
            }
          }
          v8 -= 56;
        }
      }
LABEL_29:
      operator delete[]((void *)(v6 - 8), v7 + 8);
      goto LABEL_12;
    case 5:
      if ( (unsigned int)a1[8] > 0x40 )
      {
        v3 = *((void **)a1 + 3);
        if ( v3 )
          operator delete[](v3);
      }
      goto LABEL_16;
    case 6:
      v10 = sub_21F90D0();
      if ( *((_QWORD *)a1 + 4) == v10 )
      {
        v25 = *((_QWORD *)a1 + 5);
        if ( v25 )
        {
          v26 = 24LL * *(_QWORD *)(v25 - 8);
          v27 = v25 + v26;
          if ( v25 != v25 + v26 )
          {
            while ( 1 )
            {
              v25 = v27 - 24;
              v28 = v27 - 24;
              if ( v10 == *(_QWORD *)(v27 - 24) )
              {
                sub_A4F010(v28);
                if ( *((_QWORD *)a1 + 5) == v25 )
                {
LABEL_85:
                  v26 = 24LL * *(_QWORD *)(v27 - 32);
                  break;
                }
              }
              else
              {
                sub_21F9830(v28);
                if ( v25 == *((_QWORD *)a1 + 5) )
                  goto LABEL_85;
              }
              v27 -= 24;
            }
          }
          operator delete[]((void *)(v25 - 8), v26 + 8);
        }
      }
      else
      {
        sub_21F9830(a1 + 8);
      }
      if ( *((_QWORD *)a1 + 1) == v10 )
      {
        v11 = *((_QWORD *)a1 + 2);
        if ( !v11 )
          goto LABEL_12;
        v12 = 24LL * *(_QWORD *)(v11 - 8);
        v13 = v11 + v12;
        if ( v11 == v11 + v12 )
        {
LABEL_41:
          operator delete[]((void *)(v11 - 8), v12 + 8);
          goto LABEL_12;
        }
        while ( 1 )
        {
          v11 = v13 - 24;
          v14 = v13 - 24;
          if ( v10 == *(_QWORD *)(v13 - 24) )
          {
            sub_A4F010(v14);
            if ( *((_QWORD *)a1 + 2) == v11 )
            {
LABEL_40:
              v12 = 24LL * *(_QWORD *)(v13 - 32);
              goto LABEL_41;
            }
          }
          else
          {
            sub_21F9830(v14);
            if ( v11 == *((_QWORD *)a1 + 2) )
              goto LABEL_40;
          }
          v13 -= 24;
        }
      }
      goto LABEL_20;
    case 7:
      if ( (unsigned int)(a1[8] - 3) > 0xFFFFFFFB )
        goto LABEL_12;
      v4 = *((void **)a1 + 5);
      if ( !v4 )
        goto LABEL_12;
      goto LABEL_18;
    case 9:
      v6 = *((_QWORD *)a1 + 1);
      if ( !v6 )
        goto LABEL_12;
      v19 = *(_QWORD *)(v6 - 8);
      v7 = 56 * v19;
      v8 = v6 + 56 * v19;
      if ( v6 != v8 )
      {
        while ( 1 )
        {
          v20 = v8 - 56;
          if ( *(_DWORD *)(v8 - 56) <= 1u )
          {
            if ( v20 == v6 )
              goto LABEL_28;
          }
          else
          {
            sub_A4F8E0(v8 - 56);
            v6 = *((_QWORD *)a1 + 1);
            if ( v6 == v20 )
              goto LABEL_28;
          }
          v8 -= 56;
        }
      }
      v6 += 56 * v19;
      goto LABEL_29;
  }
  if ( v2 != 10 )
  {
    if ( v2 == 11 )
    {
      v24 = *((_DWORD **)a1 + 2);
      if ( v24 )
      {
        if ( *v24 > 1u )
          sub_A4F8E0(*((_QWORD *)a1 + 2));
        operator delete(v24, 0x38u);
      }
      goto LABEL_12;
    }
    if ( v2 != 12 )
      goto LABEL_12;
    if ( (unsigned int)a1[4] <= 4 )
      goto LABEL_12;
    v4 = *((void **)a1 + 3);
    if ( !v4 )
      goto LABEL_12;
LABEL_18:
    operator delete[](v4);
    goto LABEL_12;
  }
  v21 = *((_QWORD *)a1 + 1);
  if ( !v21 )
    goto LABEL_12;
  v22 = 56LL * *(_QWORD *)(v21 - 8);
  v23 = v21 + v22;
  if ( v21 == v21 + v22 )
  {
    v29 = *((_QWORD *)a1 + 1);
    goto LABEL_73;
  }
  while ( 1 )
  {
    v29 = v23 - 56;
    if ( *(_DWORD *)(v23 - 56) > 1u )
      break;
    if ( v21 == v29 )
      goto LABEL_72;
LABEL_69:
    v23 -= 56;
  }
  sub_A4F8E0(v23 - 56);
  v21 = *((_QWORD *)a1 + 1);
  if ( v21 != v29 )
    goto LABEL_69;
LABEL_72:
  v22 = 56LL * *(_QWORD *)(v23 - 64);
LABEL_73:
  operator delete[]((void *)(v29 - 8), v22 + 8);
LABEL_12:
  *a1 = 0;
  *((_BYTE *)a1 + 4) &= ~1u;
}
