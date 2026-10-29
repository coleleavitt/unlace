__int64 __fastcall sub_BA0600(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // edx
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v3 = *(_QWORD *)(sub_B685F0((__int64)a1) + 18360);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 80LL))(v3, a1[9], 1);
  v6 = a1[10];
  if ( !v6 )
    v6 = sub_B9F7C0(a1);
  *((_DWORD *)a2 + 2) = 0;
  if ( *((_DWORD *)a2 + 3) < *(_DWORD *)(v6 + 116) )
    sub_22134E0(a2, a2 + 2, *(unsigned int *)(v6 + 116), 8);
  v7 = *(_QWORD *)(v6 + 120);
  result = *(unsigned int *)(v6 + 128);
  v9 = v7 + 8 * result;
  if ( v9 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
      v11 = *(_QWORD *)(v10 + 96);
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v11 & 1) != 0 )
        goto LABEL_23;
      v13 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v11 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        goto LABEL_23;
      v14 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v11 & 2) != 0 )
        break;
LABEL_11:
      while ( sub_B73710(v14) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + 96);
          v14 = 0;
          if ( (v15 & 3) != 0 )
            break;
          v14 = v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !sub_B73710(v15 & 0xFFFFFFFFFFFFFFFCLL) )
            goto LABEL_14;
        }
      }
LABEL_14:
      result = *((unsigned int *)a2 + 2);
      if ( result + 1 > (unsigned __int64)*((unsigned int *)a2 + 3) )
      {
        v7 += 8;
        sub_22134E0(a2, a2 + 2, result + 1, 8);
        result = *a2;
        *(_QWORD *)(*a2 + 8LL * (unsigned int)(*((_DWORD *)a2 + 2))++) = v14;
        if ( v9 == v7 )
          return result;
      }
      else
      {
        v7 += 8;
        *(_QWORD *)(*a2 + 8 * result) = v14;
        ++*((_DWORD *)a2 + 2);
        if ( v9 == v7 )
          return result;
      }
    }
    v16 = v13[2295];
    v17 = v10 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v16 )
    {
      v18 = v13[294];
      v13[304] += 24LL;
      v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13[295] >= v19 + 24 && v18 )
      {
        v13[294] = v19 + 24;
        v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v20 = sub_962430((__int64)(v13 + 294), 24, 24, 3, v4, v5);
        v19 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v20 = v16;
      v17 = v19 | 4;
      *(_DWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = v10;
    }
    v12 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v11 = v12 | 1;
    *(_QWORD *)(v10 + 96) = v12 | 1;
LABEL_23:
    v21 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = v21;
    if ( v12 )
    {
      if ( (v12 & 4) != 0 )
      {
        v14 = 0;
        if ( v21 )
        {
          v22 = *(_QWORD *)v21;
          v23 = *(_DWORD *)(*(_QWORD *)v21 + 12LL);
          if ( *(_DWORD *)(v21 + 8) != v23 )
          {
            *(_DWORD *)(v21 + 8) = v23;
            v24 = v21;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v10);
            v21 = v24;
          }
          v14 = *(_QWORD *)(v21 + 16);
        }
      }
    }
    goto LABEL_11;
  }
  return result;
}

