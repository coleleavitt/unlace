__int64 __fastcall sub_203A1C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  size_t v5; // rax
  unsigned int v6; // r12d
  size_t v7; // rax
  unsigned __int8 v8; // al
  __int64 *v9; // rax
  __int64 v10; // r12
  size_t v11; // rax
  unsigned __int8 v12; // al
  __int64 v13; // r12
  size_t v14; // rax
  char v15; // r12
  size_t v16; // rax
  __int64 v17; // r12
  size_t v18; // rax
  unsigned __int8 v19; // bl
  size_t v20; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  char v24; // [rsp+8h] [rbp-40h]
  char *v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DILocation(");
  v4 = *(_DWORD *)(a2 + 4);
  v26 = a3;
  v23 = a1;
  v24 = 1;
  v25 = ", ";
  v5 = j__strlen("line");
  sub_2031410((__int64)&v23, "line", v5, v4, 0);
  v6 = *(unsigned __int16 *)(a2 + 2);
  v7 = j__strlen("column");
  sub_2031290((__int64)&v23, "column", v7, v6);
  v8 = *(_BYTE *)(a2 - 16);
  if ( (v8 & 2) != 0 )
    v9 = *(__int64 **)(a2 - 32);
  else
    v9 = (__int64 *)(a2 - 8LL * ((v8 >> 2) & 0xF) - 16);
  v10 = *v9;
  v11 = j__strlen("scope");
  sub_2039D00((__int64)&v23, "scope", v11, v10, 0);
  v12 = *(_BYTE *)(a2 - 16);
  if ( (v12 & 2) == 0 )
  {
    v13 = 0;
    if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xF) != 2 )
      goto LABEL_5;
    v22 = a2 - 8LL * ((v12 >> 2) & 0xF) - 16;
    goto LABEL_7;
  }
  v13 = 0;
  if ( *(_DWORD *)(a2 - 24) == 2 )
  {
    v22 = *(_QWORD *)(a2 - 32);
LABEL_7:
    v13 = *(_QWORD *)(v22 + 8);
  }
LABEL_5:
  v14 = j__strlen("inlinedAt");
  sub_203A140((__int64)&v23, "inlinedAt", v14, v13);
  v15 = (unsigned __int8)BYTE1(*(_QWORD *)a2) >> 7;
  v16 = j__strlen("isImplicitCode");
  sub_2030CE0((__int64)&v23, "isImplicitCode", v16, v15, 0);
  v17 = *(_QWORD *)(a2 + 16) & 0x1FFFFFFFFFFFFFFFLL;
  v18 = j__strlen("atomGroup");
  sub_2031390((__int64)&v23, "atomGroup", v18, v17, 1);
  v19 = *(_BYTE *)(a2 + 23);
  v20 = j__strlen("atomRank");
  sub_2031290((__int64)&v23, "atomRank", v20, v19 >> 5);
  return sub_995540(a1, ")");
}
