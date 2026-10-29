__int64 __fastcall sub_BF62A0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  unsigned int *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rdi
  unsigned int *v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  unsigned int *v23; // [rsp+10h] [rbp-38h] BYREF
  __int64 v24; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    return 0;
  if ( !*(_DWORD *)(v4 - 4) )
    return 0;
  v7 = *(_QWORD *)(a3 + 8);
  if ( !v7 )
    return 0;
  if ( !*(_DWORD *)(v7 - 4) )
    return 0;
  if ( !(unsigned __int8)sub_BB1010(a1) )
    return 0;
  v5 = sub_BB1010(a1);
  if ( !(_BYTE)v5 )
    return 0;
  sub_BB1EF0((__int64)&v21, a1);
  v9 = v21;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v10 )
  {
    v11 = *v21;
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) || !*(_QWORD *)(v10 + 8 * v11) )
    {
      v5 = 0;
LABEL_22:
      v20 = v22;
      goto LABEL_23;
    }
    v12 = sub_966570(a1, v21)[1];
    sub_BB1EF0((__int64)&v23, a1);
    v13 = v23;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( v14 )
    {
      v15 = *v23;
      if ( (unsigned int)v15 < *(_DWORD *)(v14 - 4) && *(_QWORD *)(v14 + 8 * v15) )
      {
        v16 = sub_966570(a1, v23)[1];
        if ( v12 == v16 )
        {
          *a4 = 0;
          v13 = v23;
        }
        else
        {
          v17 = sub_BE6E00(a1 + 624, v12, v16, a4);
          v13 = v23;
          v5 = v17;
        }
        if ( !v13 )
          goto LABEL_21;
      }
      else
      {
        v5 = 0;
      }
      v18 = v24;
    }
    else
    {
      v18 = v24;
      v5 = 0;
    }
    v19 = v13[2]-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v13);
LABEL_21:
    v9 = v21;
    if ( !v21 )
      return v5;
    goto LABEL_22;
  }
  v20 = v22;
  v5 = 0;
LABEL_23:
  v19 = v9[2]-- == 1;
  if ( v19 )
    sub_15D7BC0(v20, v9);
  return v5;
}

