__int64 __fastcall sub_3CF2F0(__int64 a1, __int64 a2, _DWORD *a3, double a4)
{
  _DWORD *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // r11d
  int v12; // r13d
  unsigned __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  int v16; // r12d
  int v17; // r8d
  unsigned __int64 v18; // r15
  int v19; // r8d
  __int64 v20; // rax
  bool v21; // cf
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // r9
  int v25; // r11d
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  _DWORD *v31; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 2088);
  v7 = v6 + 8LL * *(_QWORD *)(v5 + 2096);
  if ( v6 == v7 )
    return 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v6 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v6 + 64LL);
      if ( v9 )
      {
        if ( v4[4] == *(_DWORD *)(v9 + 72) )
          break;
      }
    }
    v6 += 8;
    if ( v7 == v6 )
      return 0;
  }
  v10 = *(_QWORD *)(v9 + 64);
  v11 = *(_DWORD *)(v10 + 64);
  if ( !v11 )
    return 0;
  v12 = v4[5];
  if ( v12 < v11 )
  {
    v13 = v12;
    v14 = 24LL * v12;
    while ( v12 == (_DWORD)v13 )
    {
      v15 = (int)v4[6];
      v16 = 0;
      if ( v12 >= 0 && v13 < *(_QWORD *)(v9 + 120) )
        goto LABEL_11;
LABEL_12:
      if ( (int)v15 < v16 )
      {
        while ( 1 )
        {
          v17 = v15;
          if ( (v13 & 0x80000000) == 0LL )
          {
            while ( 1 )
            {
              if ( v13 < *(_QWORD *)(v9 + 120)
                && (v15 & 0x80000000) == 0LL
                && (v27 = (_QWORD *)(v14 + *(_QWORD *)(v9 + 112)), v15 < v27[1])
                && (v28 = *(_QWORD *)(*v27 + 8 * v15)) != 0 )
              {
                if ( *(_QWORD *)(v28 + 24) != -1 )
                  goto LABEL_43;
              }
              else
              {
                if ( (unsigned int)v13 >= v11 )
LABEL_59:
                  sub_3C8F80(a4, v9, a2);
                v29 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v13);
                if ( v29 )
                {
                  if ( *(_QWORD *)(v29 + 32) != -1 )
                    goto LABEL_43;
                }
                else if ( *(_QWORD *)(v9 + 8) != -1 )
                {
                  goto LABEL_43;
                }
              }
              if ( v16 <= (int)++v15 )
                goto LABEL_16;
              v17 = v15;
            }
          }
          if ( *(_QWORD *)(v9 + 8) != -1 )
            break;
          if ( v16 <= (int)++v15 )
            goto LABEL_16;
        }
LABEL_43:
        if ( (unsigned int)(*(_DWORD *)(v9 + 60) - 1) <= 1 && (v13 & 0x80000000) == 0LL )
        {
          *(_DWORD *)(a2 + 8) = 0;
          *(_DWORD *)(a2 + 20) = v13;
          *(_DWORD *)(a2 + 24) = v17;
          sub_3CECB0(a1, a2, v9, a4);
          return 1;
        }
        return 0;
      }
LABEL_16:
      ++v13;
      v14 += 24;
      if ( v11 <= (int)v13 )
        goto LABEL_17;
    }
    if ( (v13 & 0x80000000) != 0LL )
      goto LABEL_16;
    v15 = 0;
    if ( v13 >= *(_QWORD *)(v9 + 120) )
      goto LABEL_16;
LABEL_11:
    v16 = *(_DWORD *)(*(_QWORD *)(v9 + 112) + v14 + 8);
    goto LABEL_12;
  }
LABEL_17:
  v18 = v12;
  if ( v12 < 0 )
    return 0;
  v31 = (_DWORD *)a2;
  while ( (_DWORD)v18 != v12 )
  {
    if ( v18 < *(_QWORD *)(v9 + 120) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 24 * v18 + 8) - 1;
      goto LABEL_22;
    }
LABEL_51:
    if ( (--v18 & 0x80000000) != 0LL )
      return 0;
  }
  v19 = v4[6] - 1;
LABEL_22:
  if ( v19 < 0 )
    goto LABEL_51;
  while ( 1 )
  {
    a2 = (unsigned int)v18;
    v22 = sub_3CCAE0(v9, v18, v19);
    if ( v22 )
    {
      v20 = *(_QWORD *)(v22 + 24);
    }
    else
    {
      if ( (int)v18 >= v25 )
        goto LABEL_56;
      if ( (unsigned int)v18 >= v25 )
        goto LABEL_59;
      v26 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + v24);
      if ( v26 )
        v20 = *(_QWORD *)(v26 + 32);
      else
LABEL_56:
        v20 = *(_QWORD *)(v9 + 8);
    }
    if ( v20 != -1 )
      return sub_3CF290(a1, v31, v9, v18, v23, a4);
    v21 = v23 == 0;
    v19 = v23 - 1;
    if ( v21 )
      goto LABEL_51;
  }
}
