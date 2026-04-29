__int64 __fastcall sub_101BC0(__int64 a1, __int64 *a2)
{
  char v2; // al
  __int64 v3; // rbp
  int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbp
  int v11; // edx
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // r13
  int v22; // edx
  char v23; // al
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // [rsp+8h] [rbp-60h]
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __int64 v30; // [rsp+18h] [rbp-50h]
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 32);
  v3 = *(int *)(a1 + 40);
  v31 = __readfsqword(0x28u);
  if ( v2 == 5 )
  {
    v26 = *(_QWORD *)(a1 + 24);
    v27 = *(_QWORD *)(*(_QWORD *)(get_module_data((unsigned int)dword_4C2AB8) + 1344) + 1440LL) + v26;
    v30 = v3;
    v29 = v27;
    sub_1AEBE0(&v29, a2);
  }
  else
  {
    if ( v2 != 1 )
      sub_FD150();
    v5 = *(_DWORD *)(a1 + 24);
    v29 = 0;
    v30 = 0;
    sub_5F400(&v29, v5, v3);
    sub_60370((__int64)&v29, (__int64)a2);
    qfree(v29);
  }
  v6 = a2[1];
  if ( v6 )
  {
    v9 = v6 + 1;
    v8 = a2[1];
    v7 = *a2;
    --v6;
    if ( a2[2] >= v9 )
      goto LABEL_6;
  }
  else
  {
    v7 = *a2;
    v8 = 1;
    v9 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_6;
  }
  v16 = qvector_reserve(a2, v7, v9, 1);
  *a2 = v16;
  v7 = v16;
LABEL_6:
  a2[1] = v9;
  *(_BYTE *)(v7 + v6) = 123;
  v10 = 0;
  *(_BYTE *)(*a2 + v8) = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)a1 + 4 * v10++);
      sub_F5F10(a2, (__int64)"%d", v11);
      if ( v10 >= *(_QWORD *)(a1 + 8) )
        break;
      v12 = a2[1];
      if ( v12 )
      {
        v13 = v12 + 1;
        v14 = a2[1];
        v15 = *a2;
        --v12;
        if ( a2[2] >= v13 )
          goto LABEL_10;
      }
      else
      {
        v15 = *a2;
        v14 = 1;
        v13 = 2;
        if ( (unsigned __int64)a2[2] >= 2 )
          goto LABEL_10;
      }
      v28 = v14;
      v17 = qvector_reserve(a2, v15, v13, 1);
      v14 = v28;
      *a2 = v17;
      v15 = v17;
LABEL_10:
      a2[1] = v13;
      *(_BYTE *)(v15 + v12) = 44;
      *(_BYTE *)(*a2 + v14) = 0;
    }
  }
  v18 = a2[1];
  if ( v18 )
  {
    v21 = v18 + 1;
    v20 = a2[1];
    v19 = *a2;
    --v18;
    if ( a2[2] >= v21 )
      goto LABEL_17;
  }
  else
  {
    v19 = *a2;
    v20 = 1;
    v21 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_17;
  }
  v25 = qvector_reserve(a2, v19, v21, 1);
  *a2 = v25;
  v19 = v25;
LABEL_17:
  a2[1] = v21;
  *(_BYTE *)(v19 + v18) = 125;
  *(_BYTE *)(*a2 + v20) = 0;
  v22 = *(_DWORD *)(a1 + 44);
  if ( (v22 & 0x10000) == 0 )
    sub_F5F10(a2, (__int64)"%d", v22);
  v23 = *(_BYTE *)(a1 + 48);
  if ( (v23 & 8) != 0 )
  {
    sub_FD2D0(a2, 70);
    v23 = *(_BYTE *)(a1 + 48);
    if ( (v23 & 4) == 0 )
    {
LABEL_21:
      if ( (v23 & 0x10) == 0 )
        goto LABEL_22;
LABEL_28:
      sub_FD2D0(a2, 80);
      if ( (*(_BYTE *)(a1 + 48) & 0x20) == 0 )
        return v31 - __readfsqword(0x28u);
      return sub_FD2D0(a2, 84);
    }
  }
  else if ( (v23 & 4) == 0 )
  {
    goto LABEL_21;
  }
  sub_FD2D0(a2, 79);
  v23 = *(_BYTE *)(a1 + 48);
  if ( (v23 & 0x10) != 0 )
    goto LABEL_28;
LABEL_22:
  if ( (v23 & 0x20) == 0 )
    return v31 - __readfsqword(0x28u);
  return sub_FD2D0(a2, 84);
}
