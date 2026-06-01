__int64 __fastcall sub_44F9C0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 (__fastcall *v3)(_QWORD *, __int64, unsigned __int64); // rcx
  __int64 (*v4)(void); // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  _QWORD *v17; // rax
  const void *v18; // rbp
  void *v19; // rax
  const void *v20; // r14
  void *v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v23; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v3 = sub_44F780;
  v24 = __readfsqword(0x28u);
  v4 = *(__int64 (**)(void))(*a1 + 80LL);
  if ( (char *)v4 != (char *)sub_44F780 )
    return v4();
  v5 = *(_QWORD **)(a2 + 56);
  v6 = (_QWORD *)(a2 + 48);
  if ( !v5 )
    goto LABEL_31;
  v7 = (_QWORD *)(a2 + 48);
  do
  {
    while ( 1 )
    {
      a2 = v5[2];
      v3 = (unsigned __int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64))v5[3];
      if ( v5[4] < a3 )
        break;
      v7 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !a2 )
        goto LABEL_7;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( v3 );
LABEL_7:
  if ( v6 == v7 || a3 < v7[4] )
LABEL_31:
    sub_44E230(a1, a2, a3, v3, v6);
  v8 = *((unsigned int *)v7 + 10);
  v9 = (_QWORD *)a1[7];
  v10 = a1 + 6;
  v22 = v8;
  v11 = v8;
  if ( !v9 )
    goto LABEL_23;
  do
  {
    while ( 1 )
    {
      v12 = v9[2];
      v13 = v9[3];
      if ( v9[4] < v8 )
        break;
      v10 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v12 )
        goto LABEL_14;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v13 );
LABEL_14:
  if ( a1 + 6 == v10 || v8 < v10[4] )
  {
LABEL_23:
    v23 = &v22;
    v17 = sub_44F310(a1 + 5, v10, &v23);
    v11 = *((_DWORD *)v7 + 10);
    v10 = v17;
  }
  *((_DWORD *)v10 + 10) = v11;
  *((_DWORD *)v10 + 11) = *((_DWORD *)v7 + 11);
  if ( v10 + 6 != v7 + 6 )
  {
    v14 = v7[7];
    if ( v14 > 1 )
    {
      v20 = (const void *)v7[6];
      v21 = (void *)v10[6];
      if ( v10[8] < v14 )
      {
        v21 = (void *)qvector_reserve(v10 + 6, v10[6], v7[7], 1);
        v10[6] = v21;
      }
      v10[7] = v14;
      memmove(v21, v20, v14 - 1);
      *(_BYTE *)(v10[6] + v14 - 1) = 0;
    }
    else
    {
      v10[7] = 0;
    }
  }
  if ( v10 + 9 != v7 + 9 )
  {
    v15 = v7[10];
    if ( v15 > 1 )
    {
      v18 = (const void *)v7[9];
      v19 = (void *)v10[9];
      if ( v10[11] < v15 )
      {
        v19 = (void *)qvector_reserve(v10 + 9, v10[9], v15, 1);
        v10[9] = v19;
      }
      v10[10] = v15;
      memmove(v19, v18, v15 - 1);
      *(_BYTE *)(v10[9] + v15 - 1) = 0;
    }
    else
    {
      v10[10] = 0;
    }
  }
  return v24 - __readfsqword(0x28u);
}

