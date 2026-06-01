_BOOL8 __fastcall sub_159D190(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  unsigned __int64 v29; // [rsp+0h] [rbp-40h]
  __int64 v30; // [rsp+8h] [rbp-38h] BYREF
  unsigned __int64 v31; // [rsp+10h] [rbp-30h]

  if ( !a1 )
    BUG();
  v6 = *(_QWORD *)(a1 + 112);
  v7 = *(_QWORD *)(v6 + 104);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v7 & 2) == 0 )
        goto LABEL_5;
      v17 = v9[2295];
      v18 = v6 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v17 )
      {
        v19 = v9[294];
        v9[304] += 24LL;
        v20 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9[295] >= v20 + 24 && v19 )
        {
          v9[294] = v20 + 24;
          v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          a2 = 24;
          v21 = sub_986170((__int64)(v9 + 294), 24, 24, 3, a5, a6);
          v20 = v21 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v21 = v17;
        v18 = v20 | 4;
        *(_DWORD *)(v21 + 8) = 0;
        *(_QWORD *)(v21 + 16) = v6;
      }
      v8 = v18 & 0xFFFFFFFFFFFFFFFELL;
      v7 = v8 | 1;
      *(_QWORD *)(v6 + 104) = v8 | 1;
    }
  }
  v22 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v22;
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
    {
      v10 = 0;
      if ( v22 )
      {
        v23 = *(_QWORD *)v22;
        v24 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
        if ( *(_DWORD *)(v22 + 8) != v24 )
        {
          *(_DWORD *)(v22 + 8) = v24;
          a2 = v6;
          v29 = v22;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 152LL))(v23, v6);
          v22 = v29;
        }
        v10 = *(_QWORD *)(v22 + 16);
      }
    }
  }
LABEL_5:
  v11 = (__int64 *)(*(_QWORD *)(v10 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v10 + 56) & 4) != 0 )
  {
    v11 = (__int64 *)v11[4];
    if ( v11 )
      goto LABEL_7;
    return 0;
  }
  if ( !v11 )
    return 0;
LABEL_7:
  v12 = *v11;
  v31 = (unsigned __int64)(v11 + 1);
  v30 = v12;
  while ( 1 )
  {
    v15 = sub_15991B0(&v30);
    if ( !v15 )
      break;
    if ( *(_QWORD *)v13 && *(_WORD *)(*(_QWORD *)v13 + 36LL) == 67 )
      return 1;
    v25 = v13 + 8;
    v26 = sub_F6C520(*(_QWORD *)(v15 + 40));
    a2 = v25 != 0;
    v30 = *(_QWORD *)(v15 + 40);
    v31 = v26 * (a2 + (v25 - a2) / (unsigned __int64)v26);
  }
  v27 = *(_QWORD *)(v10 + 40) & 7LL;
  if ( (_DWORD)v27 != 6 )
    return 0;
  v28 = *(_DWORD *)(*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v28 != 15 && (unsigned int)(v28 - 18) > 7 )
    return 0;
  return sub_1598C00(v10, a2, v27, v14);
}
