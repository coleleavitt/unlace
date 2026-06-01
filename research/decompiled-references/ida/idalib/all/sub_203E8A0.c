__int64 __fastcall sub_203E8A0(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r15
  size_t v9; // rax
  int v10; // eax
  unsigned __int8 v11; // al
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 *v14; // r14
  __int64 *v15; // rbx
  char v16; // r15
  __int64 v17; // rbp
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  char v20; // [rsp+8h] [rbp-50h]
  const char *v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1;
  sub_995540(a1, "!GenericDINode(");
  v19 = a1;
  v20 = 1;
  v21[0] = ", ";
  v21[1] = a3;
  sub_2030BB0((__int64)&v19, a2);
  v5 = sub_2031EC0(a2, 0);
  v7 = v6;
  v8 = v5;
  v9 = j__strlen("header");
  sub_2030E00(&v19, "header", v9, v8, v7);
  if ( (*(_BYTE *)(a2 - 16) & 2) != 0 )
    v10 = *(_DWORD *)(a2 - 24);
  else
    v10 = (*(_WORD *)(a2 - 16) >> 6) & 0xF;
  if ( v10 != 1 )
  {
    if ( v20 )
      v20 = 0;
    else
      a1 = sub_202F8E0(a1, v21);
    sub_995540(a1, "operands: {");
    v11 = *(_BYTE *)(a2 - 16);
    if ( (v11 & 2) != 0 )
    {
      v12 = *(_QWORD *)(a2 - 32);
      v13 = *(unsigned int *)(a2 - 24);
    }
    else
    {
      v13 = (*(_WORD *)(a2 - 16) >> 6) & 0xF;
      v12 = a2 - 8LL * ((v11 >> 2) & 0xF) - 16;
    }
    v14 = (__int64 *)(v12 + 8 * v13);
    v15 = (__int64 *)(v12 + 8);
    v16 = 1;
    if ( v14 == v15 )
    {
LABEL_15:
      sub_995540(v3, "}");
      return sub_995540(v3, ")");
    }
    while ( 1 )
    {
      if ( v16 )
      {
        v17 = *v15;
        v16 = 0;
        if ( !*v15 )
          goto LABEL_14;
LABEL_11:
        sub_20399E0(v3, v17, (__int64 *)a3);
        ++v15;
        (**(void (__fastcall ***)(char *, __int64))a3)(a3, v17);
        if ( v14 == v15 )
          goto LABEL_15;
      }
      else
      {
        sub_995540(v3, ", ");
        v17 = *v15;
        if ( *v15 )
          goto LABEL_11;
LABEL_14:
        ++v15;
        sub_995540(v3, "null");
        if ( v14 == v15 )
          goto LABEL_15;
      }
    }
  }
  return sub_995540(v3, ")");
}
