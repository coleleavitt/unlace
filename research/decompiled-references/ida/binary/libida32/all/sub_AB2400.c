void __fastcall sub_AB2400(__int64 a1, __int64 a2)
{
  int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rbp
  _BYTE *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rbx
  int v16; // eax
  __int64 *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax

  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    v21 = sub_C715F0(a2);
    sub_AAD6B0(a1, v21);
    return;
  }
  v3 = *(unsigned __int16 *)(a2 + 4);
  v4 = a1 + 8;
  v5 = 0;
  if ( *(_WORD *)(a2 + 4) )
  {
    while ( 1 )
    {
      v6 = (_BYTE *)(sub_C71310(a2) + 16 * v5);
      if ( (*v6 & 1) != 0 )
        goto LABEL_5;
      if ( (unsigned __int8)sub_C71270(a2, v6) )
      {
        sub_AAD6B0(a1, *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_5:
        if ( v3 == (_DWORD)++v5 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(a2 + 8 * v5++ + 32);
        sub_AAE4E0(v4, 0, 0, v8, a1, v7);
        if ( v3 == (_DWORD)v5 )
          break;
      }
    }
  }
  v9 = sub_C71620(a2);
  sub_AAF750(a1, v9, v10, v11, v12, v13);
  v14 = sub_C71600(a2);
  v15 = *(__int64 **)(v14 + 120);
  sub_B52330(v14);
  v17 = &v15[v16];
  while ( v17 != v15 )
  {
    v18 = *v15++;
    sub_AAD6B0(a1, v18);
  }
  v19 = sub_C71140(a2);
  sub_AAE4E0(v4, 0, 0, v19, a1, v20);
}

