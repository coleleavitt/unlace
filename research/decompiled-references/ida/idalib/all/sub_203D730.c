__int64 __fastcall sub_203D730(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r14
  size_t v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  size_t v13; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rbx
  size_t v17; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  char v20; // [rsp+8h] [rbp-40h]
  char *v21; // [rsp+10h] [rbp-38h]
  __int64 v22; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DITemplateValueParameter(");
  v19 = a1;
  v20 = 1;
  v21 = ", ";
  v22 = a3;
  if ( (unsigned __int16)sub_206CE80(a2) != 48 )
    sub_2030BB0((__int64)&v19, (__int64)a2);
  v4 = sub_2031EC0((__int64)a2, 0);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v19, "name", v8, v7, v6);
  v9 = *((_BYTE *)a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(a2 - 4);
  else
    v10 = (__int64)&a2[-((v9 >> 2) & 0xF) - 2];
  v11 = *(_QWORD *)(v10 + 8);
  v12 = j__strlen("type");
  sub_203A140((__int64)&v19, "type", v12, v11);
  LOBYTE(v11) = (unsigned __int8)BYTE1(*a2) >> 7;
  v13 = j__strlen("defaulted");
  sub_2030CE0((__int64)&v19, "defaulted", v13, v11, 0);
  v14 = *((_BYTE *)a2 - 16);
  if ( (v14 & 2) != 0 )
    v15 = *(a2 - 4);
  else
    v15 = (__int64)&a2[-((v14 >> 2) & 0xF) - 2];
  v16 = *(_QWORD *)(v15 + 16);
  v17 = j__strlen("value");
  sub_2039D00((__int64)&v19, "value", v17, v16, 0);
  return sub_995540(a1, ")");
}
