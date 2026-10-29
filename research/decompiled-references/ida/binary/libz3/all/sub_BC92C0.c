__int64 __fastcall sub_BC92C0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _BYTE *a5, int a6)
{
  __int64 *v6; // rbp
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // eax
  _DWORD *v11; // rdx
  _DWORD *v12; // rdx
  __int64 v13; // rax
  char v14; // al
  int v15; // r8d
  int v16; // r9d
  void *v17; // rsi
  void *v18; // rsi
  __int64 v19; // rdi
  __int64 v21; // r13
  __int64 v22; // rdi
  int v23; // [rsp+0h] [rbp-B8h]
  __int64 v24; // [rsp+8h] [rbp-B0h]
  __int64 *v25; // [rsp+10h] [rbp-A8h]
  _BYTE *v26; // [rsp+18h] [rbp-A0h]
  void *v29; // [rsp+30h] [rbp-88h] BYREF
  __int64 v30; // [rsp+38h] [rbp-80h]
  _BYTE v31[120]; // [rsp+40h] [rbp-78h] BYREF

  v6 = *(__int64 **)(a2 + 8);
  v26 = a5;
  if ( !v6 )
    return 1;
  v25 = &v6[*((unsigned int *)v6 - 1)];
  if ( v25 == v6 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v6;
      v24 = *(_QWORD *)(a1 + 24);
      if ( *v6 )
        ++*(_DWORD *)(v9 + 8);
      v10 = *(_DWORD *)(a1 + 1744);
      if ( !*(_WORD *)(v9 + 4) )
      {
        do
        {
          v11 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
          if ( !v11 || *v11 != v10 || v11[1] != 2 || *(_DWORD *)(v9 + 24) != 2 )
            break;
          v21 = *(_QWORD *)(v9 + 40);
          if ( !(unsigned __int8)sub_BC90F0(a1, *(_QWORD *)(v9 + 32), a3, a4, v26, a6) )
            goto LABEL_40;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          sub_BB0560(v9, v24);
          v8 = *(_WORD *)(v21 + 4) == 0;
          v9 = v21;
          *v26 = 1;
          v10 = *(_DWORD *)(a1 + 1744);
        }
        while ( v8 );
      }
      v29 = v31;
      v30 = 0x1000000000LL;
      if ( *(_WORD *)(v9 + 4) )
        break;
      v12 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( !v12 || *v12 != v10 || v12[1] != 1 )
        break;
LABEL_8:
      *v26 = 1;
      v8 = (*(_DWORD *)(v9 + 8))-- == 1;
      if ( v8 )
        goto LABEL_27;
LABEL_9:
      if ( v25 == ++v6 )
        return 1;
    }
    if ( (unsigned __int8)sub_163BAA0(a1 + 1728, v9, &v29) && !(_DWORD)v30 )
    {
      if ( v29 != v31 && v29 )
        sub_186B220(v29);
      goto LABEL_8;
    }
    if ( v29 != v31 && v29 )
      sub_186B220(v29);
    v13 = *(_QWORD *)(a1 + 24);
    v29 = nullptr;
    v30 = v13;
    v14 = sub_BC8FB0(a1, v9, a4, (__int64 *)&v29);
    v17 = v29;
    if ( !v14 )
      break;
    *v26 |= v29 != (void *)v9;
    sub_163F730(a1 + 1728, (int)v17, a3, (int)v26, v15, v16, v23, v24, (int)v25, v26);
    v18 = v29;
    if ( v29 )
    {
      v19 = v30;
      v8 = (*((_DWORD *)v29 + 2))-- == 1;
      if ( v8 )
        sub_15D7BC0(v19, v18);
    }
    v8 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( !v8 )
      goto LABEL_9;
LABEL_27:
    ++v6;
    sub_15D7BC0(v24, v9);
    if ( v25 == v6 )
      return 1;
  }
  if ( v29 && (v22 = v30, v8 = *((_DWORD *)v29 + 2) == 1, --*((_DWORD *)v29 + 2), v8) )
  {
    sub_15D7BC0(v22, v17);
    v8 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v8 )
      goto LABEL_42;
  }
  else
  {
LABEL_40:
    v8 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( !v8 )
      return 0;
LABEL_42:
    sub_15D7BC0(v24, v9);
  }
  return 0;
}

