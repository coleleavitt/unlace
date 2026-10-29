__int64 __fastcall sub_442D20(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 v8; // r12
  unsigned int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  unsigned int v13; // r14d
  __int64 v14; // r12
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  __int64 v17; // r9
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 (*v21)(); // rax
  char v22; // al
  unsigned int v23; // r15d
  __int64 v24; // rdi
  __int64 (*v25)(); // rax
  __int64 v26; // rdi
  __int64 (*v27)(); // rax
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 (*v30)(); // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 (*v33)(); // rax
  bool v34; // al
  char v35; // al

  v4 = switch_dbctx(*(int *)(a1 + 8));
  if ( *(_DWORD *)(a1 + 72) == -1 )
    return -1;
  v5 = v4;
  v6 = a2;
  if ( (*(_BYTE *)(a1 + 88) & 0x20) == 0 )
  {
    if ( a3 )
    {
      if ( (unsigned int)(a3 - 1) > 1 )
        goto LABEL_5;
      v8 = a1 + 72;
    }
    else
    {
      v8 = a1 + 72;
      if ( sub_79B5C0(a1 + 72, v4, a2, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
        goto LABEL_5;
    }
    v9 = a2;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)(a1 + 92);
      v9 = a3 == 2 ? sub_79B8F0(v8, v5, v9, v10) : sub_79B840(v8, v5, v9, v10);
      if ( v9 == -1 )
        break;
      if ( sub_79B5C0(v8, v5, v9, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
      {
        v11 = *(_QWORD *)(a1 + 80);
        if ( !v11 )
          return v9;
        v12 = *(__int64 (**)())(*(_QWORD *)v11 + 40LL);
        if ( v12 == sub_440490
          || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v12)(v11, *(unsigned __int8 *)(a1 + 92), v9) )
        {
          return v9;
        }
      }
    }
    return -1;
  }
  if ( a3 == 1 )
    goto LABEL_21;
  if ( (a3 & 0xFFFFFFFD) == 0 )
  {
    v28 = *(unsigned __int8 *)(a1 + 92);
    if ( a2 == -1 )
    {
      v9 = -1;
      v14 = a1 + 72;
    }
    else
    {
      v14 = a1 + 72;
      if ( a2 )
      {
        while ( 1 )
        {
          v9 = v6;
          v31 = sub_79B5C0(a1 + 72, v5, --v6, 0, 0, v28);
          v28 = *(unsigned __int8 *)(a1 + 92);
          if ( v31 < 0 )
            break;
          v29 = *(_QWORD *)(a1 + 80);
          if ( v29 )
          {
            v30 = *(__int64 (**)())(*(_QWORD *)v29 + 40LL);
            if ( v30 != sub_440490 )
            {
              v35 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v30)(v29, *(unsigned __int8 *)(a1 + 92), v6);
              v28 = *(unsigned __int8 *)(a1 + 92);
              if ( !v35 )
                break;
            }
          }
          if ( !v6 )
            goto LABEL_70;
        }
      }
      else
      {
LABEL_70:
        v9 = 0;
      }
    }
    if ( sub_79B5C0(v14, v5, v9, 0, 0, v28) >= 0
      && ((v32 = *(_QWORD *)(a1 + 80)) == 0
       || (v33 = *(__int64 (**)())(*(_QWORD *)v32 + 40LL), v33 == sub_440490)
       || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v33)(v32, *(unsigned __int8 *)(a1 + 92), v9))
      && !a3 )
    {
      v34 = a2 == v9;
    }
    else
    {
      v34 = a2 != v9;
    }
    v6 = v9;
    if ( !v34 )
    {
      if ( a3 != 2 )
        goto LABEL_21;
      v17 = *(unsigned __int8 *)(a1 + 92);
      v18 = -1;
      if ( v9 != -1 )
      {
LABEL_30:
        while ( v9 )
        {
          v18 = v9--;
          v19 = sub_79B5C0(v14, v5, v9, 0, 0, v17);
          v17 = *(unsigned __int8 *)(a1 + 92);
          if ( v19 >= 0 )
          {
            v20 = *(_QWORD *)(a1 + 80);
            if ( !v20 )
              continue;
            v21 = *(__int64 (**)())(*(_QWORD *)v20 + 40LL);
            if ( v21 == sub_440490 )
              continue;
            v22 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v21)(v20, *(unsigned __int8 *)(a1 + 92), v9);
            v17 = *(unsigned __int8 *)(a1 + 92);
            if ( v22 )
              continue;
          }
          goto LABEL_35;
        }
        v18 = 0;
      }
LABEL_35:
      v9 = sub_79B8F0(v14, v5, v18, (unsigned int)v17);
      if ( v9 != -1 )
      {
        while ( v9 )
        {
          v23 = v9--;
          if ( sub_79B5C0(v14, v5, v9, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
          {
            v24 = *(_QWORD *)(a1 + 80);
            if ( !v24 )
              continue;
            v25 = *(__int64 (**)())(*(_QWORD *)v24 + 40LL);
            if ( v25 == sub_440490
              || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v25)(v24, *(unsigned __int8 *)(a1 + 92), v9) )
            {
              continue;
            }
          }
          v9 = v23;
          break;
        }
        while ( 1 )
        {
          if ( sub_79B5C0(v14, v5, v9, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
          {
            v26 = *(_QWORD *)(a1 + 80);
            if ( !v26 )
              return v9;
            v27 = *(__int64 (**)())(*(_QWORD *)v26 + 40LL);
            if ( v27 == sub_440490
              || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v27)(v26, *(unsigned __int8 *)(a1 + 92), v9) )
            {
              return v9;
            }
          }
          if ( a3 == 2 )
          {
            v17 = *(unsigned __int8 *)(a1 + 92);
            goto LABEL_30;
          }
LABEL_21:
          if ( a2 != -1 )
          {
            v13 = a2;
            v14 = a1 + 72;
            while ( sub_79B5C0(a1 + 72, v5, v13, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
            {
              v15 = *(_QWORD *)(a1 + 80);
              if ( v15 )
              {
                v16 = *(__int64 (**)())(*(_QWORD *)v15 + 40LL);
                if ( v16 != sub_440490
                  && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, _QWORD))v16)(
                        v15,
                        *(unsigned __int8 *)(a1 + 92),
                        v13) )
                {
                  break;
                }
              }
              if ( ++v13 == -1 )
                return -1;
            }
            v9 = sub_79B840(a1 + 72, v5, v13, *(unsigned __int8 *)(a1 + 92));
            if ( v9 != -1 )
              continue;
          }
          return -1;
        }
      }
      return -1;
    }
  }
LABEL_5:
  if ( v6 != -1 )
    return v6;
  return -1;
}

