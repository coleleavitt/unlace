__int64 __fastcall sub_A9BEF0(_QWORD *a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 (*v18)(); // rax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 (*v21)(); // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 *v24; // rax
  __int64 v25; // [rsp+8h] [rbp-40h]

  sub_A4E540(a1, a2, a3, a4);
  v7 = *a2 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = *(_QWORD *)v7;
  v9 = *(unsigned __int8 *)(*(_QWORD *)v7 + 16LL);
  if ( (_BYTE)v9 == 42 )
  {
    v10 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 42 )
    {
LABEL_3:
      *a2 = *(_QWORD *)(v8 + 32);
      *a3 = *(_QWORD *)(v10 + 32);
      return 1;
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v8 = sub_F3F310(v8, a2, v9, v5);
    v10 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 42 )
      goto LABEL_8;
  }
  else
  {
    v10 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) == 42 )
    {
      v12 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (_BYTE)v9 == 33 )
        goto LABEL_27;
      goto LABEL_24;
    }
    v8 = 0;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) != 42 )
    goto LABEL_10;
  v10 = sub_F3F310(v10, a2, v9, v5);
LABEL_8:
  if ( v8 && v10 )
    goto LABEL_3;
LABEL_10:
  v8 = *(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 33 )
  {
LABEL_24:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
    {
      v8 = sub_F3F310(v8, a2, v9, v5);
      v12 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) == 33 )
      {
        if ( !v8 )
          goto LABEL_29;
LABEL_38:
        if ( v12 )
          goto LABEL_12;
LABEL_29:
        if ( (*(_BYTE *)(a1[290] + 2LL) & 4) == 0 )
          return 0;
        v24 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
        v8 = *v24;
        if ( *(_BYTE *)(*v24 + 16) == 34 )
        {
          v10 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v10 + 16) == 34 )
            goto LABEL_3;
        }
        else
        {
          v8 = sub_A32EC0(*v24, (__int64)a2, v9, v5, v6);
          v10 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v10 + 16) == 34 )
          {
LABEL_33:
            if ( v8 )
            {
              if ( v10 )
                goto LABEL_3;
              return 0;
            }
            return 0;
          }
        }
        v10 = sub_A32EC0(v10, (__int64)a2, v9, v5, v6);
        goto LABEL_33;
      }
    }
    else
    {
      v12 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v12 + 16) == 33 )
        goto LABEL_29;
      v8 = 0;
    }
LABEL_27:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      goto LABEL_29;
    v12 = sub_F3F310(v12, a2, v9, v5);
    if ( !v8 )
      goto LABEL_29;
    goto LABEL_38;
  }
  v12 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) != 33 )
    goto LABEL_27;
LABEL_12:
  v13 = sub_F3DED0(v8, a2, v9, v5, v6);
  v17 = sub_F3DED0(v12, a2, v14, v15, v16);
  if ( v13 != v17 )
  {
    v25 = v17;
    v18 = *(__int64 (**)())(*(_QWORD *)v13 + 32LL);
    v19 = v18 == sub_9DD400 ? sub_B4CD20(v13) : ((__int64 (__fastcall *)(__int64))v18)(v13);
    v20 = v19;
    v21 = *(__int64 (**)())(*(_QWORD *)v25 + 32LL);
    v22 = v21 == sub_9DD400
        ? sub_B4CD20(v25)
        : ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64 (*)()))v21)(v25, a2, v25, sub_9DD400);
    if ( v20 != v22 )
      return 0;
  }
  v23 = sub_A93830(a1, *(_QWORD *)(v8 + 40));
  if ( v23 != sub_A93830(a1, *(_QWORD *)(v12 + 40)) )
    return 0;
  *a2 = *(_QWORD *)(v8 + 32);
  *a3 = *(_QWORD *)(v12 + 32);
  return 1;
}

