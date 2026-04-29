unsigned __int64 __fastcall sub_B8A40(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned int *a5)
{
  unsigned __int64 v7; // r15
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // edx
  __int64 i; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 j; // rdx
  unsigned __int64 v20; // rax
  _QWORD *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+8h] [rbp-98h]
  __int64 v25[2]; // [rsp+10h] [rbp-90h] BYREF
  __int64 v26; // [rsp+20h] [rbp-80h] BYREF
  __int64 v27; // [rsp+28h] [rbp-78h]
  __int64 v28[2]; // [rsp+40h] [rbp-60h] BYREF
  __int64 v29; // [rsp+50h] [rbp-50h] BYREF
  __int64 v30; // [rsp+58h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-38h]

  v24 = a4;
  v31 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v7 = a4;
  while ( 1 )
  {
    v8 = *(_QWORD **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_6;
    v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v9 )
      break;
LABEL_10:
    v7 = *(_QWORD *)(v7 + 8);
    if ( !v7 )
      return 0;
  }
  if ( (*(_BYTE *)(*v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v9 + 24);
    if ( v7 >= v12 )
      break;
    v9 = *(_QWORD *)(v9 + 8);
LABEL_14:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_6;
  }
  if ( v12 < v7 )
  {
    v9 = *(_QWORD *)(v9 + 16);
    goto LABEL_14;
  }
  if ( v8 != (_QWORD *)v9 )
    goto LABEL_10;
LABEL_6:
  if ( !(unsigned __int8)sub_B7D00((_QWORD *)a1, a5, v7, 0) )
  {
    v10 = 0;
    for ( i = 0; (unsigned __int64)v10 < *(_QWORD *)(a1 + 96); i = v10 )
    {
      ++v10;
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(int *)(*(_QWORD *)(a1 + 88) + 4 * i)) = 0;
    }
    *(_QWORD *)(a1 + 96) = 0;
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v7 + 64) == 8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 72) + 284LL) == 5 )
      return v7;
    v13 = *(_QWORD *)(a1 + 320);
    if ( *(_DWORD *)(v13 + 64) != 1 )
      goto LABEL_22;
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 320);
    if ( *(_DWORD *)(v13 + 64) != 1 )
    {
LABEL_22:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 528) + 8LL * a2) + 24LL) & 1) == 0 )
      {
        sub_123560(v25, a3, v7, 1);
        v15 = v7;
        while ( 1 )
        {
          v15 = sub_120800(a3, v25, v15, *(_QWORD *)(v24 + 16), 0, 1);
          if ( !v15 )
            break;
          v16 = *(_QWORD **)a1;
          if ( *(_QWORD *)a1 )
          {
            v17 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !v17 )
              continue;
            if ( (*(_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
            {
              v18 = *(_QWORD *)(v17 + 24);
              if ( v15 < v18 )
              {
LABEL_37:
                v17 = *(_QWORD *)(v17 + 8);
                goto LABEL_38;
              }
              while ( v18 < v15 )
              {
                v17 = *(_QWORD *)(v17 + 16);
LABEL_38:
                if ( (*(_BYTE *)v17 & 2) != 0 )
                  goto LABEL_33;
                v18 = *(_QWORD *)(v17 + 24);
                if ( v15 < v18 )
                  goto LABEL_37;
              }
              if ( v16 != (_QWORD *)v17 )
                continue;
            }
          }
LABEL_33:
          if ( v26 )
          {
            v27 = 0;
            qfree(v26);
          }
          v7 = 0;
          qfree(v25[0]);
          return v7;
        }
        sub_1201C0(v28, a3, v7, 1);
        sub_5FF00(v28, v25);
        sub_311BB0(&v29, &v26);
        for ( j = *(_QWORD *)(v7 + 16); j; j = *(_QWORD *)(v20 + 16) )
        {
          v20 = sub_124C90(a3, (unsigned int)v25, j, *(_QWORD *)(v24 + 16), 0, 0, 257);
          if ( !v20 )
            break;
          v21 = *(_QWORD **)a1;
          if ( !*(_QWORD *)a1 )
            goto LABEL_49;
          v22 = *v21 & 0xFFFFFFFFFFFFFFFCLL;
          if ( v22 )
          {
            if ( (*(_BYTE *)(*v21 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
              goto LABEL_49;
            v23 = *(_QWORD *)(v22 + 24);
            if ( v20 < v23 )
            {
LABEL_53:
              v22 = *(_QWORD *)(v22 + 8);
              goto LABEL_54;
            }
            while ( v23 < v20 )
            {
              v22 = *(_QWORD *)(v22 + 16);
LABEL_54:
              if ( (*(_BYTE *)v22 & 2) != 0 )
                goto LABEL_49;
              v23 = *(_QWORD *)(v22 + 24);
              if ( v20 < v23 )
                goto LABEL_53;
            }
            if ( v21 == (_QWORD *)v22 )
            {
LABEL_49:
              if ( v29 )
              {
                v30 = 0;
                qfree(v29);
              }
              qfree(v28[0]);
              goto LABEL_33;
            }
          }
        }
        if ( v29 )
        {
          v30 = 0;
          qfree(v29);
        }
        qfree(v28[0]);
        if ( v26 )
        {
          v27 = 0;
          qfree(v26);
        }
        qfree(v25[0]);
      }
      return v7;
    }
  }
  v24 = ***(_QWORD ***)(a1 + 40);
  if ( v24 )
    goto LABEL_22;
  return v7;
}
