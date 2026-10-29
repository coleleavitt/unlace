__int64 __fastcall sub_456B20(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 (*v12)(); // rax
  char v13; // al
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  __int64 v17; // rdi
  __int64 (*v18)(); // rax
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rdi
  __int64 (*v22)(); // rax
  __int64 v24; // r12
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 (*v27)(); // rax
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rdi
  __int64 (*v31)(); // rax
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 (*v34)(); // rax
  bool v35; // al
  char v36; // al

  v3 = a2;
  v5 = switch_dbctx(*(int *)(a1 + 8));
  if ( *(_QWORD *)(a1 + 72) == -1 )
    return -1;
  v6 = v5;
  if ( (*(_BYTE *)(a1 + 88) & 0x20) == 0 )
  {
    if ( a3 )
    {
      v24 = a1 + 72;
      if ( (unsigned int)(a3 - 1) <= 1 )
        goto LABEL_35;
      return v3;
    }
    v24 = a1 + 72;
    if ( sub_7BE950(a1 + 72, v5, a2, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
      return v3;
LABEL_35:
    while ( 1 )
    {
      v25 = *(unsigned __int8 *)(a1 + 92);
      v3 = a3 == 2 ? sub_7BECC0(v24, v6, v3, v25) : sub_7BEBF0(v24, v6, v3, v25);
      if ( v3 == -1 )
        break;
      if ( sub_7BE950(v24, v6, v3, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
      {
        v26 = *(_QWORD *)(a1 + 80);
        if ( !v26 )
          return v3;
        v27 = *(__int64 (**)())(*(_QWORD *)v26 + 40LL);
        if ( v27 == sub_4541D0
          || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))v27)(v26, *(unsigned __int8 *)(a1 + 92), v3) )
        {
          return v3;
        }
      }
    }
    return -1;
  }
  if ( a3 == 1 )
    goto LABEL_24;
  if ( (a3 & 0xFFFFFFFD) != 0 )
    return v3;
  v28 = *(unsigned __int8 *)(a1 + 92);
  if ( a2 == -1 )
  {
    v7 = -1;
    v20 = a1 + 72;
  }
  else
  {
    v29 = a2;
    v20 = a1 + 72;
    if ( a2 )
    {
      while ( 1 )
      {
        v7 = v29;
        v32 = sub_7BE950(a1 + 72, v6, --v29, 0, 0, v28);
        v28 = *(unsigned __int8 *)(a1 + 92);
        if ( v32 < 0 )
          break;
        v30 = *(_QWORD *)(a1 + 80);
        if ( v30 )
        {
          v31 = *(__int64 (**)())(*(_QWORD *)v30 + 40LL);
          if ( v31 != sub_4541D0 )
          {
            v36 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v31)(v30, *(unsigned __int8 *)(a1 + 92), v29);
            v28 = *(unsigned __int8 *)(a1 + 92);
            if ( !v36 )
              break;
          }
        }
        if ( !v29 )
          goto LABEL_67;
      }
    }
    else
    {
LABEL_67:
      v7 = 0;
    }
  }
  if ( sub_7BE950(v20, v6, v7, 0, 0, v28) >= 0
    && ((v33 = *(_QWORD *)(a1 + 80)) == 0
     || (v34 = *(__int64 (**)())(*(_QWORD *)v33 + 40LL), v34 == sub_4541D0)
     || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))v34)(v33, *(unsigned __int8 *)(a1 + 92), v7))
    && !a3 )
  {
    v35 = a2 == v7;
  }
  else
  {
    v35 = a2 != v7;
  }
  if ( !v35 )
  {
    if ( a3 != 2 )
      goto LABEL_24;
    v8 = *(unsigned __int8 *)(a1 + 92);
    v9 = -1;
    if ( v7 != -1 )
    {
LABEL_7:
      while ( v7 )
      {
        v9 = v7--;
        v10 = sub_7BE950(v20, v6, v7, 0, 0, v8);
        v8 = *(unsigned __int8 *)(a1 + 92);
        if ( v10 >= 0 )
        {
          v11 = *(_QWORD *)(a1 + 80);
          if ( !v11 )
            continue;
          v12 = *(__int64 (**)())(*(_QWORD *)v11 + 40LL);
          if ( v12 == sub_4541D0 )
            continue;
          v13 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))v12)(v11, *(unsigned __int8 *)(a1 + 92), v7);
          v8 = *(unsigned __int8 *)(a1 + 92);
          if ( v13 )
            continue;
        }
        goto LABEL_12;
      }
      v9 = 0;
    }
LABEL_12:
    v7 = sub_7BECC0(v20, v6, v9, (unsigned int)v8);
    if ( v7 != -1 )
    {
      while ( v7 )
      {
        v14 = v7--;
        if ( sub_7BE950(v20, v6, v7, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
        {
          v15 = *(_QWORD *)(a1 + 80);
          if ( !v15 )
            continue;
          v16 = *(__int64 (**)())(*(_QWORD *)v15 + 40LL);
          if ( v16 == sub_4541D0
            || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))v16)(v15, *(unsigned __int8 *)(a1 + 92), v7) )
          {
            continue;
          }
        }
        v7 = v14;
        break;
      }
      while ( 1 )
      {
        if ( sub_7BE950(v20, v6, v7, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
        {
          v17 = *(_QWORD *)(a1 + 80);
          if ( !v17 )
            return v7;
          v18 = *(__int64 (**)())(*(_QWORD *)v17 + 40LL);
          if ( v18 == sub_4541D0
            || ((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))v18)(v17, *(unsigned __int8 *)(a1 + 92), v7) )
          {
            return v7;
          }
        }
        if ( a3 == 2 )
        {
          v8 = *(unsigned __int8 *)(a1 + 92);
          goto LABEL_7;
        }
LABEL_24:
        if ( a2 != -1 )
        {
          v19 = a2;
          v20 = a1 + 72;
          while ( sub_7BE950(a1 + 72, v6, v19, 0, 0, *(unsigned __int8 *)(a1 + 92)) >= 0 )
          {
            v21 = *(_QWORD *)(a1 + 80);
            if ( v21 )
            {
              v22 = *(__int64 (**)())(*(_QWORD *)v21 + 40LL);
              if ( v22 != sub_4541D0
                && !((unsigned __int8 (__fastcall *)(__int64, _QWORD, __int64))v22)(
                      v21,
                      *(unsigned __int8 *)(a1 + 92),
                      v19) )
              {
                break;
              }
            }
            if ( ++v19 == -1 )
              return -1;
          }
          v7 = sub_7BEBF0(a1 + 72, v6, v19, *(unsigned __int8 *)(a1 + 92));
          if ( v7 != -1 )
            continue;
        }
        return -1;
      }
    }
    return -1;
  }
  return v7;
}
