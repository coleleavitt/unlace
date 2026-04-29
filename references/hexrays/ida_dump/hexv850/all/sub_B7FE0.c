unsigned __int64 __fastcall sub_B7FE0(_QWORD *a1, int a2, __int64 a3, unsigned __int64 a4, unsigned int *a5)
{
  unsigned __int64 v8; // r15
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // edx
  __int64 i; // rax
  unsigned __int64 v13; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 j; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v26; // [rsp+10h] [rbp-88h] BYREF
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int64 v28[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v8 = a4;
  while ( 1 )
  {
    v9 = (_QWORD *)*a1;
    if ( !*a1 )
      goto LABEL_6;
    v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v10 )
      break;
LABEL_10:
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      return 0;
  }
  if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v10 + 24);
    if ( v8 >= v13 )
      break;
    v10 = *(_QWORD *)(v10 + 8);
LABEL_14:
    if ( (*(_BYTE *)v10 & 2) != 0 )
      goto LABEL_6;
  }
  if ( v13 < v8 )
  {
    v10 = *(_QWORD *)(v10 + 16);
    goto LABEL_14;
  }
  if ( v9 != (_QWORD *)v10 )
    goto LABEL_10;
LABEL_6:
  if ( !(unsigned __int8)sub_B7600(a1, a5, v8, 0) )
  {
    v11 = 0;
    for ( i = 0; (unsigned __int64)v11 < a1[12]; i = v11 )
    {
      ++v11;
      *(_QWORD *)(a1[8] + 8LL * *(int *)(a1[11] + 4 * i)) = 0;
    }
    a1[12] = 0;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1[40] + 528LL) + 8LL * a2) + 24LL) & 1) == 0 )
  {
    sub_122E60(v25, a3, v8, 1);
    sub_11FAC0(v28, a3, v8, 1);
    sub_5F800(v28, v25);
    sub_3113F0(&v29, &v26);
    v15 = *(_QWORD *)(v8 + 8);
    if ( !v15 )
      goto LABEL_52;
LABEL_23:
    v16 = sub_A51D0(a3, v25, v15, *(_QWORD *)(a4 + 8), 1u);
    if ( v16 )
    {
      v17 = (_QWORD *)*a1;
      if ( !*a1 )
        goto LABEL_30;
      v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v18 )
        goto LABEL_36;
      if ( (*(_BYTE *)(*v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      {
LABEL_30:
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
        v8 = 0;
        qfree(v25[0]);
        return v8;
      }
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + 24);
        if ( v16 >= v19 )
        {
          if ( v19 >= v16 )
          {
            if ( v17 == (_QWORD *)v18 )
              goto LABEL_30;
LABEL_36:
            v15 = *(_QWORD *)(v16 + 8);
            if ( !v15 )
              break;
            goto LABEL_23;
          }
          v18 = *(_QWORD *)(v18 + 16);
        }
        else
        {
          v18 = *(_QWORD *)(v18 + 8);
        }
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_30;
      }
    }
    for ( j = *(_QWORD *)(v8 + 8); j; j = *(_QWORD *)(v21 + 8) )
    {
      v21 = sub_A4EE0(a3, v28, j, *(_QWORD *)(a4 + 8), 1u);
      if ( !v21 )
        break;
      v22 = (_QWORD *)*a1;
      if ( !*a1 )
        goto LABEL_30;
      v23 = *v22 & 0xFFFFFFFFFFFFFFFCLL;
      if ( v23 )
      {
        if ( (*(_BYTE *)(*v22 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_30;
        v24 = *(_QWORD *)(v23 + 24);
        if ( v21 < v24 )
        {
LABEL_43:
          v23 = *(_QWORD *)(v23 + 8);
          goto LABEL_44;
        }
        while ( v24 < v21 )
        {
          v23 = *(_QWORD *)(v23 + 16);
LABEL_44:
          if ( (*(_BYTE *)v23 & 2) != 0 )
            goto LABEL_30;
          v24 = *(_QWORD *)(v23 + 24);
          if ( v21 < v24 )
            goto LABEL_43;
        }
        if ( v22 == (_QWORD *)v23 )
          goto LABEL_30;
      }
    }
LABEL_52:
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
  return v8;
}
