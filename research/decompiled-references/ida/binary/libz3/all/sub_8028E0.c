void __fastcall sub_8028E0(__int64 a1, __int64 *a2, int *a3, __int64 a4, char a5)
{
  _DWORD *v7; // rdx
  int v8; // edx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  _DWORD *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r13
  int v15[22]; // [rsp-58h] [rbp-58h] BYREF

  if ( *(_WORD *)(a4 + 4) )
    return;
  v7 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
  if ( !v7 || *v7 != 5 )
    return;
  v8 = v7[1];
  if ( v8 == 2 )
  {
    if ( *(_DWORD *)(a4 + 24) != 2 )
      goto LABEL_35;
    v13 = *(_QWORD *)(a4 + 32);
    v14 = *(_QWORD *)(a4 + 40);
  }
  else
  {
    if ( v8 != 3 )
      goto LABEL_13;
    if ( *(_DWORD *)(a4 + 24) != 2 )
    {
LABEL_9:
      if ( *(_DWORD *)(a4 + 24) != 2 )
        return;
      v9 = *(_QWORD *)(a4 + 32);
      v10 = *(_QWORD *)(a4 + 40);
      goto LABEL_11;
    }
    v14 = *(_QWORD *)(a4 + 32);
    v13 = *(_QWORD *)(a4 + 40);
  }
  if ( !a5 )
    goto LABEL_29;
LABEL_13:
  if ( v8 == 4 )
  {
    if ( *(_DWORD *)(a4 + 24) != 2 )
      goto LABEL_30;
    v14 = *(_QWORD *)(a4 + 32);
    v13 = *(_QWORD *)(a4 + 40);
LABEL_28:
    if ( a5 )
    {
LABEL_29:
      sub_801BE0(a1, a2, a3, v13);
      sub_3EBD70((__int64)v15, (__int64)a3);
      sub_801BE0(a1, a2, v15, v14);
      sub_25A130((char *)v15);
      return;
    }
    goto LABEL_15;
  }
  if ( v8 == 5 )
  {
    if ( *(_DWORD *)(a4 + 24) != 2 )
    {
LABEL_19:
      if ( *(_DWORD *)(a4 + 24) != 2 )
        return;
      v11 = *(_QWORD *)(a4 + 32);
      v10 = *(_QWORD *)(a4 + 40);
LABEL_21:
      if ( a5 )
        return;
      sub_801BE0(a1, a2, a3, v10);
      sub_3EBD70((__int64)v15, (__int64)a3);
      sub_801BE0(a1, a2, v15, v11);
      goto LABEL_23;
    }
    v13 = *(_QWORD *)(a4 + 32);
    v14 = *(_QWORD *)(a4 + 40);
    goto LABEL_28;
  }
LABEL_15:
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
LABEL_17:
      if ( v8 != 4 )
      {
        if ( v8 != 5 )
          return;
        goto LABEL_19;
      }
LABEL_30:
      if ( *(_DWORD *)(a4 + 24) != 2 )
        return;
      v10 = *(_QWORD *)(a4 + 32);
      v11 = *(_QWORD *)(a4 + 40);
      goto LABEL_21;
    }
    goto LABEL_9;
  }
LABEL_35:
  if ( *(_DWORD *)(a4 + 24) != 2 )
    return;
  v10 = *(_QWORD *)(a4 + 32);
  v9 = *(_QWORD *)(a4 + 40);
LABEL_11:
  if ( !a5 )
    goto LABEL_17;
  sub_801BE0(a1, a2, a3, v9);
  sub_3EBD70((__int64)v15, (__int64)a3);
  sub_801BE0(a1, a2, v15, v10);
LABEL_23:
  sub_25A130((char *)v15);
  v12 = *(_DWORD **)(sub_15D1F10(v10) + 24);
  if ( v12 && *v12 == 5 && v12[1] == 1 )
    sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a2 + 3), (__int64)a3, (__int64)(a2 + 3));
  else
    *(_BYTE *)(a1 + 40) = 1;
}

