__int64 __fastcall sub_2031510(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rax
  size_t v5; // rdx
  unsigned int v6; // r13d
  size_t v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r14
  size_t v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r13
  size_t v17; // rax
  __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  char v20; // [rsp+8h] [rbp-40h]
  char *v21; // [rsp+10h] [rbp-38h]
  __int64 v22; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIMacro(");
  v19 = a1;
  v21 = ", ";
  v22 = a3;
  v20 = 0;
  sub_995540(a1, "type: ");
  v4 = sub_201F440(*(unsigned __int16 *)(a2 + 2));
  if ( v5 )
    sub_9954E0(v19, v4, v5);
  else
    sub_227B910(v19, *(unsigned __int16 *)(a2 + 2));
  v6 = *(_DWORD *)(a2 + 4);
  v7 = j__strlen("line");
  sub_2031290((__int64)&v19, "line", v7, v6);
  v8 = *(_BYTE *)(a2 - 16);
  if ( (v8 & 2) != 0 )
  {
    v9 = **(_QWORD **)(a2 - 32);
    if ( v9 )
    {
LABEL_5:
      v9 = sub_20A0B40(v9);
      v11 = v10;
      goto LABEL_6;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a2 - 8LL * ((v8 >> 2) & 0xF) - 16);
    if ( v9 )
      goto LABEL_5;
  }
  v11 = 0;
LABEL_6:
  v12 = j__strlen("name");
  sub_2030E00(&v19, "name", v12, v9, v11);
  v13 = *(_BYTE *)(a2 - 16);
  if ( (v13 & 2) != 0 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 8LL);
    if ( v14 )
      goto LABEL_8;
LABEL_11:
    v16 = 0;
    goto LABEL_9;
  }
  v14 = *(_QWORD *)(a2 - 8LL * ((v13 >> 2) & 0xF) - 16 + 8);
  if ( !v14 )
    goto LABEL_11;
LABEL_8:
  v14 = sub_20A0B40(v14);
  v16 = v15;
LABEL_9:
  v17 = j__strlen("value");
  sub_2030E00(&v19, "value", v17, v14, v16);
  return sub_995540(a1, ")");
}
