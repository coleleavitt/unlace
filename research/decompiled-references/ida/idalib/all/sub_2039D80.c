__int64 __fastcall sub_2039D80(__int64 a1, __int64 a2, const char *a3)
{
  unsigned int v5; // r13d
  size_t v6; // rax
  unsigned __int8 v7; // r13
  size_t v8; // rax
  size_t v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rax
  const char *v12; // rax
  size_t v13; // rdx
  unsigned __int8 *v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // rbx
  size_t v18; // rax
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  char v21; // [rsp+8h] [rbp-40h]
  const char *v22[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_995540(a1, "!DISubroutineType(");
  v5 = *(_DWORD *)(a2 + 20);
  v22[1] = a3;
  v20 = a1;
  v21 = 1;
  v22[0] = ", ";
  v6 = j__strlen("flags");
  sub_20309B0(&v20, "flags", v6, v5);
  v7 = *(_BYTE *)(a2 + 28);
  v8 = j__strlen("cc");
  if ( v7 )
  {
    v9 = v8;
    v10 = v20;
    if ( v21 )
      v21 = 0;
    else
      v10 = sub_202F8E0(v20, v22);
    v11 = sub_9954E0(v10, "cc", v9);
    sub_995540(v11, ": ");
    v12 = sub_201EFF0(v7);
    if ( v13 )
    {
      sub_9954E0(v20, v12, v13);
    }
    else
    {
      v14 = *(unsigned __int8 **)(v20 + 32);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v20 + 24) )
      {
        sub_227BA10(v20, v7);
      }
      else
      {
        *(_QWORD *)(v20 + 32) = v14 + 1;
        *v14 = v7;
      }
    }
  }
  v15 = *(_BYTE *)(a2 - 16);
  if ( (v15 & 2) != 0 )
    v16 = *(_QWORD *)(a2 - 32);
  else
    v16 = a2 - 8LL * ((v15 >> 2) & 0xF) - 16;
  v17 = *(_QWORD *)(v16 + 40);
  v18 = j__strlen("types");
  sub_2039D00((__int64)&v20, "types", v18, v17, 0);
  return sub_995540(a1, ")");
}
