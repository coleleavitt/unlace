__int64 __fastcall sub_203DEA0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  __int64 *v5; // rax
  __int64 v6; // r13
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // r14
  size_t v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // r13
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  __int64 v20; // rbx
  size_t v22; // rax
  __int64 v23; // [rsp+0h] [rbp-48h] BYREF
  char v24; // [rsp+8h] [rbp-40h]
  char *v25; // [rsp+10h] [rbp-38h]
  __int64 v26; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DILabel(");
  v23 = a1;
  v25 = ", ";
  v4 = *(_BYTE *)(a2 - 16);
  v24 = 1;
  v26 = a3;
  if ( (v4 & 2) != 0 )
    v5 = *(__int64 **)(a2 - 32);
  else
    v5 = (__int64 *)(a2 - 8LL * ((v4 >> 2) & 0xF) - 16);
  v6 = *v5;
  v7 = j__strlen("scope");
  sub_2039D00((__int64)&v23, "scope", v7, v6, 0);
  v8 = sub_2031EC0(a2, 1u);
  v10 = v9;
  v11 = v8;
  v12 = j__strlen("name");
  sub_2030E00(&v23, "name", v12, v11, v10);
  v13 = *(_BYTE *)(a2 - 16);
  if ( (v13 & 2) != 0 )
    v14 = *(_QWORD *)(a2 - 32);
  else
    v14 = a2 - 8LL * ((v13 >> 2) & 0xF) - 16;
  v15 = *(_QWORD *)(v14 + 16);
  v16 = j__strlen("file");
  sub_203A140((__int64)&v23, "file", v16, v15);
  LODWORD(v15) = *(_DWORD *)(a2 + 4);
  v17 = j__strlen("line");
  sub_2031290((__int64)&v23, "line", v17, v15);
  LODWORD(v15) = *(_DWORD *)(a2 + 16);
  v18 = j__strlen("column");
  sub_2031290((__int64)&v23, "column", v18, v15);
  LOBYTE(v15) = *(_BYTE *)(a2 + 28);
  v19 = j__strlen("isArtificial");
  sub_2030CE0((__int64)&v23, "isArtificial", v19, v15, 0);
  v20 = *(_QWORD *)(a2 + 20);
  if ( BYTE4(v20) )
  {
    v22 = j__strlen("coroSuspendIdx");
    sub_2031410((__int64)&v23, "coroSuspendIdx", v22, v20, 0);
  }
  return sub_995540(a1, ")");
}
