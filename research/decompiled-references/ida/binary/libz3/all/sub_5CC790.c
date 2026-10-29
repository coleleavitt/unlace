__int64 __fastcall sub_5CC790(_QWORD *a1, _QWORD *a2, _QWORD *a3, char a4)
{
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int16 v10; // di
  __int16 v11; // si
  _DWORD *v12; // r8
  _DWORD *v13; // r8
  char v14; // r9
  __int64 v16; // r8
  __int64 v17; // rax
  __int16 v18; // r10
  __int16 v19; // r9
  _DWORD *v20; // r11
  _DWORD *v21; // r11
  char v22; // r9
  _DWORD *v23; // r14
  _DWORD *v24; // rsi
  _DWORD *v25; // rbp
  _DWORD *v26; // rdx
  char v27; // dl
  _DWORD *v28; // rax
  __int64 v29; // rax
  char v30; // cl
  _DWORD *v31; // rax
  __int64 v32; // rbx
  bool v33; // zf

  v7 = *a2;
  v9 = *a3;
  v10 = *(_WORD *)(*a2 + 4LL);
  v11 = *(_WORD *)(*a3 + 4LL);
  if ( v10 || (v12 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr || *v12 || v12[1] != 8 )
  {
    if ( v11 )
      return 0;
    v13 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v13 )
      return 0;
    v14 = 0;
    if ( *v13 )
      return 0;
  }
  else
  {
    if ( v11 )
      goto LABEL_15;
    v13 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( !v13 || *v13 )
      goto LABEL_15;
    v14 = 1;
  }
  if ( (v13[1] == 8) == v14 )
    return 0;
  v11 = 0;
LABEL_15:
  v16 = a2[1];
  v17 = a3[1];
  v18 = *(_WORD *)(v16 + 4);
  v19 = *(_WORD *)(v17 + 4);
  if ( v18 || (v20 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL)) == nullptr || *v20 || v20[1] != 8 )
  {
    if ( v19 )
      return 0;
    v21 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v21 )
      return 0;
    v22 = 0;
    if ( *v21 )
      return 0;
    goto LABEL_21;
  }
  if ( !v19 )
  {
    v21 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( v21 )
    {
      if ( !*v21 )
      {
        v22 = 1;
LABEL_21:
        if ( (v21[1] == 8) == v22 )
          return 0;
        v19 = 0;
      }
    }
  }
  if ( v10 )
    goto LABEL_26;
  v23 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
  if ( !v23 )
    goto LABEL_27;
  if ( *v23 )
  {
LABEL_26:
    v23 = nullptr;
  }
  else
  {
    v33 = v23[1] == 8;
    v23 = nullptr;
    if ( v33 && *(_DWORD *)(v7 + 24) == 1 )
    {
      if ( *(_QWORD *)(v7 + 32) != v9 )
        return 0;
      v23 = (_DWORD *)v9;
    }
  }
LABEL_27:
  if ( !v11 )
  {
    v24 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
    if ( v24 )
    {
      if ( !*v24 && v24[1] == 8 && *(_DWORD *)(v9 + 24) == 1 )
      {
        v23 = *(_DWORD **)(v9 + 32);
        if ( (_DWORD *)v7 != v23 )
          return 0;
      }
    }
  }
  if ( !v18 )
  {
    v25 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
    if ( !v25 )
      goto LABEL_34;
    if ( !*v25 )
    {
      v33 = v25[1] == 8;
      v25 = nullptr;
      if ( !v33 )
        goto LABEL_34;
      if ( *(_DWORD *)(v16 + 24) != 1 )
        goto LABEL_34;
      v25 = *(_DWORD **)(v16 + 32);
      if ( (_DWORD *)v17 == v25 )
        goto LABEL_34;
      return 0;
    }
  }
  v25 = nullptr;
LABEL_34:
  if ( !v19 )
  {
    v26 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( v26 )
    {
      if ( !*v26 && v26[1] == 8 && *(_DWORD *)(v17 + 24) == 1 )
      {
        v25 = *(_DWORD **)(v17 + 32);
        if ( (_DWORD *)v16 != v25 )
          return 0;
      }
    }
  }
  if ( !(unsigned __int8)sub_15D2CB0(*a1, v23) || !(unsigned __int8)sub_15D2CB0(*a1, v25) )
    return 0;
  v27 = 0;
  if ( !*(_WORD *)(*a2 + 4LL) )
  {
    v28 = *(_DWORD **)(*(_QWORD *)(*a2 + 16LL) + 24LL);
    if ( v28 )
    {
      if ( !*v28 )
        v27 = v28[1] == 8;
    }
  }
  v29 = a2[1];
  v30 = 0;
  if ( !*(_WORD *)(v29 + 4) )
  {
    v31 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
    if ( v31 )
    {
      if ( !*v31 )
        v30 = v31[1] == 8;
    }
  }
  v32 = *a1;
  if ( (v30 == v27) != a4 )
    sub_15E1A70(*a1);
  return sub_15E1B70(v32);
}

