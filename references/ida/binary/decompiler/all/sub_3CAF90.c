__int64 __fastcall sub_3CAF90(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r10
  int v11; // r9d
  int v12; // r11d
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rdi
  int v18; // r15d
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v27; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v6 + 872);
  v8 = v7 + 8LL * *(_QWORD *)(v6 + 880);
  if ( v7 == v8 )
    return 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v7 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)v7 + 64LL);
      if ( v9 )
      {
        if ( a3[4] == *(_DWORD *)(v9 + 72) )
          break;
      }
    }
    v7 += 8;
    if ( v8 == v7 )
      return 0;
  }
  v10 = *(_QWORD *)(v9 + 64);
  v11 = *(_DWORD *)(v10 + 64);
  if ( !v11 )
    return 0;
  v12 = a3[5];
  if ( v12 < v11 )
  {
    v13 = v12;
    v14 = 24LL * v12;
    while ( v12 == (_DWORD)v13 )
    {
      v15 = (int)a3[6];
      v16 = 0;
      if ( v12 >= 0 && v13 < *(_QWORD *)(v9 + 120) )
        goto LABEL_11;
LABEL_12:
      if ( (int)v15 < v16 )
      {
        while ( 1 )
        {
          v17 = (unsigned int)v15;
          if ( (v13 & 0x80000000) == 0LL )
          {
            while ( 1 )
            {
              if ( v13 < *(_QWORD *)(v9 + 120)
                && (v15 & 0x80000000) == 0LL
                && (v23 = (_QWORD *)(v14 + *(_QWORD *)(v9 + 112)), v15 < v23[1])
                && (v24 = *(_QWORD *)(*v23 + 8 * v15)) != 0 )
              {
                if ( *(_QWORD *)(v24 + 24) != -1 )
                  goto LABEL_41;
              }
              else
              {
                if ( (unsigned int)v13 >= v11 )
                  sub_3C5320(v17);
                v25 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v13);
                if ( v25 )
                {
                  if ( *(_QWORD *)(v25 + 32) != -1 )
                    goto LABEL_41;
                }
                else if ( *(_QWORD *)(v9 + 8) != -1 )
                {
                  goto LABEL_41;
                }
              }
              if ( v16 <= (int)++v15 )
                goto LABEL_16;
              v17 = (unsigned int)v15;
            }
          }
          if ( *(_QWORD *)(v9 + 8) != -1 )
            break;
          if ( v16 <= (int)++v15 )
            goto LABEL_16;
        }
LABEL_41:
        if ( (unsigned int)(*(_DWORD *)(v9 + 60) - 1) <= 1 && (v13 & 0x80000000) == 0LL )
        {
          a2[6] = v17;
          a2[2] = 0;
          a2[5] = v13;
          sub_3CA9E0(a1, (__int64)a2, v9);
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
  if ( v12 < 0 )
    return 0;
  v27 = v12;
  while ( 1 )
  {
    if ( v12 == (_DWORD)v27 )
    {
      v18 = a3[6] - 1;
    }
    else
    {
      if ( v27 >= *(_QWORD *)(v9 + 120) )
        goto LABEL_49;
      v18 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 24 * v27 + 8) - 1;
    }
    if ( v18 >= 0 )
      break;
LABEL_49:
    if ( (--v27 & 0x80000000) != 0LL )
      return 0;
    v12 = a3[5];
  }
  while ( 1 )
  {
    v21 = sub_3C8680(v9, v27, v18);
    if ( v21 )
    {
      v19 = *(_QWORD *)(v21 + 24);
    }
    else
    {
      v22 = sub_3C8640(v9, v27);
      v19 = v22 ? *(_QWORD *)(v22 + 32) : *(_QWORD *)(v9 + 8);
    }
    if ( v19 != -1 )
      return sub_3CAF30(a1, a2, v9, v27, v18);
    if ( v18-- == 0 )
      goto LABEL_49;
  }
}
