__int64 __fastcall sub_203A810(__int64 a1, _DWORD *a2, const char *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r14
  size_t v10; // rax
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // r13
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  unsigned int v18; // r14d
  size_t v19; // rax
  __int64 v20; // rdi
  size_t v21; // r13
  __int64 v22; // rax
  __int64 v23; // r13
  const char *v24; // rsi
  int v25; // ebx
  size_t v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int8 v31; // r13
  size_t v32; // rax
  size_t v33; // rax
  __int64 v34; // [rsp+0h] [rbp-48h] BYREF
  char v35; // [rsp+8h] [rbp-40h]
  const char *v36[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_995540(a1, "!DIFixedPointType(");
  v34 = a1;
  v36[1] = a3;
  v35 = 1;
  v36[0] = ", ";
  if ( (unsigned __int16)sub_206CE80(a2) != 36 )
    sub_2030BB0((__int64)&v34, (__int64)a2);
  v6 = sub_2031EC0((__int64)a2, 2u);
  v8 = v7;
  v9 = v6;
  v10 = j__strlen("name");
  sub_2030E00(&v34, "name", v10, v9, v8);
  v11 = *((_BYTE *)a2 - 16);
  if ( (v11 & 2) != 0 )
    v12 = *((_QWORD *)a2 - 4);
  else
    v12 = (__int64)&a2[-2 * ((v11 >> 2) & 0xF) - 4];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = j__strlen("size");
  sub_203A620((__int64)&v34, "size", v14, v13);
  LODWORD(v13) = sub_206CE70(a2);
  v15 = j__strlen("align");
  sub_2031290((__int64)&v34, "align", v15, v13);
  LODWORD(v13) = a2[7];
  v16 = j__strlen("encoding");
  sub_20316C0(&v34, "encoding", v16, v13, (__int64 (__fastcall *)(_QWORD))sub_201E290, 1);
  LODWORD(v13) = a2[5];
  v17 = j__strlen("flags");
  sub_20309B0(&v34, "flags", v17, v13);
  v18 = a2[8];
  v19 = j__strlen("kind");
  v20 = v34;
  v21 = v19;
  if ( v35 )
    v35 = 0;
  else
    v20 = sub_202F8E0(v34, v36);
  v22 = sub_9954E0(v20, "kind", v21);
  v23 = sub_995540(v22, ": ");
  v24 = (const char *)sub_206D4D0(v18);
  sub_995540(v23, v24);
  if ( a2[8] == 2 )
  {
    v31 = sub_206D4C0(a2) ^ 1;
    v32 = j__strlen("numerator");
    sub_2031490(&v34, "numerator", v32, (__int64)(a2 + 10), v31);
    v33 = j__strlen("denominator");
    sub_2031490(&v34, "denominator", v33, (__int64)(a2 + 14), v31);
  }
  else
  {
    v25 = a2[9];
    v26 = j__strlen("factor");
    if ( v25 )
    {
      v27 = v34;
      if ( v35 )
        v35 = 0;
      else
        v27 = sub_202F8E0(v34, v36);
      v28 = sub_9954E0(v27, "factor", v26);
      v29 = sub_995540(v28, ": ");
      sub_227B930(v29, v25);
    }
  }
  return sub_995540(a1, ")");
}
