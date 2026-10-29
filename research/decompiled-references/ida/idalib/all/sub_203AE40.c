__int64 __fastcall sub_203AE40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // r13
  size_t v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // r13
  size_t v16; // rax
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // r13
  size_t v20; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // r13
  size_t v24; // rax
  size_t v25; // rax
  unsigned int v26; // ebx
  size_t v27; // rax
  __int64 v29; // [rsp+0h] [rbp-48h] BYREF
  char v30; // [rsp+8h] [rbp-40h]
  char *v31; // [rsp+10h] [rbp-38h]
  __int64 v32; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIStringType(");
  v29 = a1;
  v32 = a3;
  v30 = 1;
  v31 = ", ";
  if ( (unsigned __int16)sub_206CE80(a2) != 18 )
    sub_2030BB0((__int64)&v29, a2);
  v4 = sub_2031EC0(a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v29, "name", v8, v7, v6);
  v9 = *(_BYTE *)(a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(_QWORD *)(a2 - 32);
  else
    v10 = a2 - 8LL * ((v9 >> 2) & 0xF) - 16;
  v11 = *(_QWORD *)(v10 + 40);
  v12 = j__strlen("stringLength");
  sub_203A140((__int64)&v29, "stringLength", v12, v11);
  v13 = *(_BYTE *)(a2 - 16);
  if ( (v13 & 2) != 0 )
    v14 = *(_QWORD *)(a2 - 32);
  else
    v14 = a2 - 8LL * ((v13 >> 2) & 0xF) - 16;
  v15 = *(_QWORD *)(v14 + 48);
  v16 = j__strlen("stringLengthExpression");
  sub_203A140((__int64)&v29, "stringLengthExpression", v16, v15);
  v17 = *(_BYTE *)(a2 - 16);
  if ( (v17 & 2) != 0 )
    v18 = *(_QWORD *)(a2 - 32);
  else
    v18 = a2 - 8LL * ((v17 >> 2) & 0xF) - 16;
  v19 = *(_QWORD *)(v18 + 56);
  v20 = j__strlen("stringLocationExpression");
  sub_203A140((__int64)&v29, "stringLocationExpression", v20, v19);
  v21 = *(_BYTE *)(a2 - 16);
  if ( (v21 & 2) != 0 )
    v22 = *(_QWORD *)(a2 - 32);
  else
    v22 = a2 - 8LL * ((v21 >> 2) & 0xF) - 16;
  v23 = *(_QWORD *)(v22 + 24);
  v24 = j__strlen("size");
  sub_203A620((__int64)&v29, "size", v24, v23);
  LODWORD(v23) = sub_206CE70(a2);
  v25 = j__strlen("align");
  sub_2031290((__int64)&v29, "align", v25, v23);
  v26 = *(_DWORD *)(a2 + 28);
  v27 = j__strlen("encoding");
  sub_20316C0(&v29, "encoding", v27, v26, (__int64 (__fastcall *)(_QWORD))sub_201E290, 1);
  return sub_995540(a1, ")");
}
