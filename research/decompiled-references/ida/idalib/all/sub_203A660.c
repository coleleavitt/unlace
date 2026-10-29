__int64 __fastcall sub_203A660(__int64 a1, _DWORD *a2, __int64 a3)
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
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  unsigned int v16; // ebx
  size_t v17; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  char v20; // [rsp+8h] [rbp-40h]
  char *v21; // [rsp+10h] [rbp-38h]
  __int64 v22; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIBasicType(");
  v19 = a1;
  v22 = a3;
  v20 = 1;
  v21 = ", ";
  if ( (unsigned __int16)sub_206CE80(a2) != 36 )
    sub_2030BB0((__int64)&v19, (__int64)a2);
  v4 = sub_2031EC0((__int64)a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v19, "name", v8, v7, v6);
  v9 = *((_BYTE *)a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *((_QWORD *)a2 - 4);
  else
    v10 = (__int64)&a2[-2 * ((v9 >> 2) & 0xF) - 4];
  v11 = *(_QWORD *)(v10 + 24);
  v12 = j__strlen("size");
  sub_203A620((__int64)&v19, "size", v12, v11);
  LODWORD(v11) = sub_206CE70(a2);
  v13 = j__strlen("align");
  sub_2031290((__int64)&v19, "align", v13, v11);
  LODWORD(v11) = a2[7];
  v14 = j__strlen("encoding");
  sub_20316C0(&v19, "encoding", v14, v11, (__int64 (__fastcall *)(_QWORD))sub_201E290, 1);
  LODWORD(v11) = a2[6];
  v15 = j__strlen("num_extra_inhabitants");
  sub_2031290((__int64)&v19, "num_extra_inhabitants", v15, v11);
  v16 = a2[5];
  v17 = j__strlen("flags");
  sub_20309B0(&v19, "flags", v17, v16);
  return sub_995540(a1, ")");
}
