void __fastcall sub_ABE1E0(__int64 a1, __int64 a2)
{
  int v3; // r14d
  __int64 v4; // r15
  __int64 v5; // rbp
  _BYTE *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // rbx
  int v11; // eax
  __int64 *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  if ( *(_DWORD *)(a1 + 4) != 1 )
  {
    v15 = sub_C715F0(a2);
    sub_AB9DD0(a1, v15);
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
        sub_AB9DD0(a1, *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_5:
        if ( v3 == (_DWORD)++v5 )
          break;
      }
      else
      {
        v7 = *(_QWORD *)(a2 + 8 * v5++ + 32);
        sub_ABAAB0(v4, 0, 0, v7, a1);
        if ( v3 == (_DWORD)v5 )
          break;
      }
    }
  }
  v8 = sub_C71620(a2);
  sub_ABBD10(a1, v8);
  v9 = sub_C71600(a2);
  v10 = *(__int64 **)(v9 + 120);
  sub_B52330(v9);
  v12 = &v10[v11];
  while ( v12 != v10 )
  {
    v13 = *v10++;
    sub_AB9DD0(a1, v13);
  }
  v14 = sub_C71140(a2);
  sub_ABAAB0(v4, 0, 0, v14, a1);
}

