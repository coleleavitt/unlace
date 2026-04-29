unsigned __int64 __fastcall sub_158EC0(__int64 *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r12
  bool v4; // zf
  unsigned __int8 v5; // r13
  __int64 v6; // r8
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v18; // rbx
  unsigned __int8 v19; // r12
  char v20; // al
  __int64 v21; // rax
  __int64 *v22; // r13
  _QWORD *v23; // r14
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]

  while ( 1 )
  {
    v3 = a2;
    v4 = *(_BYTE *)a2 == 4;
    v35 = __readfsqword(0x28u);
    v5 = a3;
    if ( !v4 )
      break;
    v18 = *(_DWORD **)(a2 + 8);
    if ( (unsigned int)(*v18 - 12) > 1 )
      return v35 - __readfsqword(0x28u);
    v19 = a3;
    sub_158EC0(a1, v18 + 8, a3);
    if ( *v18 == 13 )
      v19 = v5 ^ 1;
    a2 = (__int64)(v18 + 12);
    a3 = v19;
  }
  v34 = 0;
  if ( !(unsigned __int8)sub_158E50(a2, &v34, 1u) || (v6 = v34) == 0 )
  {
    if ( (*(_BYTE *)a2 & 0xFB) != 1 )
      return v35 - __readfsqword(0x28u);
    v6 = v34;
  }
  if ( v5 )
  {
    v7 = (_QWORD *)a1[1];
    v8 = a1 + 1;
    v9 = &v7[2 * a1[2]];
    if ( v7 == v9 )
      goto LABEL_49;
  }
  else
  {
    v7 = (_QWORD *)a1[4];
    v8 = a1 + 4;
    v9 = &v7[2 * a1[5]];
    if ( v7 == v9 )
      goto LABEL_35;
  }
  if ( v6 )
  {
    do
    {
      if ( v6 == *v7 )
      {
        if ( v7 != (_QWORD *)(*v8 + 16LL * v8[1]) )
          goto LABEL_13;
        if ( !v5 )
        {
          v7 = (_QWORD *)a1[1];
          v21 = a1[2];
          goto LABEL_36;
        }
        goto LABEL_49;
      }
      v7 += 2;
    }
    while ( v9 != v7 );
LABEL_33:
    if ( v7 != (_QWORD *)(*v8 + 16LL * v8[1]) )
      goto LABEL_13;
    if ( v5 )
      goto LABEL_49;
LABEL_35:
    v7 = (_QWORD *)a1[1];
    v21 = a1[2];
    v22 = a1 + 1;
    if ( !v6 )
      goto LABEL_50;
LABEL_36:
    v22 = a1 + 1;
    v8 = a1 + 1;
    v23 = &v7[2 * v21];
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 96) + 24LL) + 16LL) & -v6;
    if ( v23 == v7 )
    {
      v25 = v7;
    }
    else
    {
      if ( v24 )
      {
        do
        {
          if ( v24 == *v7 )
            break;
          v7 += 2;
        }
        while ( v7 != v23 );
      }
      else
      {
        do
        {
          v32 = v6;
          v27 = sub_1255A0((unsigned __int8 *)a2, v7[1], 0);
          v6 = v32;
          if ( v27 )
            break;
          v7 += 2;
        }
        while ( v23 != v7 );
      }
      v21 = a1[2];
      v25 = (_QWORD *)a1[1];
      if ( &v25[2 * v21] != v7 )
      {
        v10 = v7[1];
        if ( *(_BYTE *)a2 != 10 || *(_BYTE *)v10 != 10 )
          goto LABEL_16;
      }
    }
    v7 = v25;
    goto LABEL_50;
  }
  while ( 1 )
  {
    v31 = v6;
    v20 = sub_1255A0((unsigned __int8 *)a2, v7[1], 0);
    v6 = v31;
    if ( v20 )
      break;
    v7 += 2;
    if ( v7 == v9 )
      goto LABEL_33;
  }
  if ( v7 == (_QWORD *)(*v8 + 16LL * v8[1]) )
  {
    if ( !v5 )
    {
      v7 = (_QWORD *)a1[1];
      v21 = a1[2];
      v22 = a1 + 1;
LABEL_50:
      if ( v22[2] < (unsigned __int64)(v21 + 1) )
      {
        v33 = v6;
        v30 = qvector_reserve(v22, v7, v21 + 1, 16);
        v6 = v33;
        *v22 = v30;
        v7 = (_QWORD *)v30;
        v21 = v22[1];
      }
      v26 = &v7[2 * v21];
      *v26 = v6;
      v26[1] = a2;
      ++v22[1];
      return v35 - __readfsqword(0x28u);
    }
LABEL_49:
    v21 = a1[5];
    v7 = (_QWORD *)a1[4];
    v22 = a1 + 4;
    goto LABEL_50;
  }
LABEL_13:
  v10 = v7[1];
  if ( v5 )
  {
    if ( *(_BYTE *)a2 == 10 && *(_BYTE *)v10 != 10 )
      goto LABEL_49;
    v3 = v7[1];
    v10 = a2;
  }
  else if ( *(_BYTE *)v10 == 10 && *(_BYTE *)a2 != 10 )
  {
    v21 = a1[2];
    v7 = (_QWORD *)a1[1];
    v22 = a1 + 1;
    goto LABEL_50;
  }
LABEL_16:
  sub_120450(v3, *a1, 0, *(_DWORD *)(v3 + 4), a1[10], 0);
  v11 = a1[8];
  v12 = a1[7];
  if ( a1[9] < (unsigned __int64)(v11 + 1) )
  {
    v29 = qvector_reserve(a1 + 7, v12, v11 + 1, 8);
    a1[7] = v29;
    v12 = v29;
    v11 = a1[8];
  }
  *(_QWORD *)(v12 + 8 * v11) = v3;
  v13 = *a1;
  ++a1[8];
  v14 = a1[10];
  ++*((_DWORD *)a1 + 22);
  sub_120450(v10, v13, 0, *(_DWORD *)(v10 + 4), v14, 0);
  v15 = a1[8];
  v16 = a1[7];
  if ( a1[9] < (unsigned __int64)(v15 + 1) )
  {
    v28 = qvector_reserve(a1 + 7, v16, v15 + 1, 8);
    a1[7] = v28;
    v16 = v28;
    v15 = a1[8];
  }
  *(_QWORD *)(v16 + 8 * v15) = v10;
  ++a1[8];
  ++*((_DWORD *)a1 + 22);
  memmove(v7, v7 + 2, *v8 + 16LL * v8[1]-- - (_QWORD)v7 - 16);
  return v35 - __readfsqword(0x28u);
}
