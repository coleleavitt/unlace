__int64 __fastcall sub_2039F10(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  size_t v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // r13
  size_t v12; // rax
  __int64 v13; // rbx
  size_t v14; // rax
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  char v17; // [rsp+8h] [rbp-40h]
  char *v18; // [rsp+10h] [rbp-38h]
  __int64 v19; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DINamespace(");
  v19 = a3;
  v16 = a1;
  v17 = 1;
  v18 = ", ";
  v4 = sub_2031EC0((__int64)a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v16, "name", v8, v7, v6);
  v9 = *((_BYTE *)a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(a2 - 4);
  else
    v10 = (__int64)&a2[-((v9 >> 2) & 0xF) - 2];
  v11 = *(_QWORD *)(v10 + 8);
  v12 = j__strlen("scope");
  sub_2039D00((__int64)&v16, "scope", v12, v11, 0);
  v13 = *a2;
  v14 = j__strlen("exportSymbols");
  sub_2030CE0((__int64)&v16, "exportSymbols", v14, BYTE1(v13) >> 7, 0);
  return sub_995540(a1, ")");
}
