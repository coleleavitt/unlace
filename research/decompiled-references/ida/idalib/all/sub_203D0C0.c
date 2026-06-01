__int64 __fastcall sub_203D0C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // r14
  size_t v8; // rax
  unsigned __int8 v9; // al
  __int64 *v10; // rax
  size_t v11; // rax
  unsigned int v12; // ebx
  size_t v13; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  char v16; // [rsp+8h] [rbp-40h]
  char *v17; // [rsp+10h] [rbp-38h]
  __int64 v18; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DILexicalBlockFile(");
  v18 = a3;
  v4 = a2;
  v17 = ", ";
  v5 = *(_BYTE *)(a2 - 16);
  v15 = a1;
  v16 = 1;
  if ( (v5 & 2) != 0 )
    v6 = *(_QWORD *)(a2 - 32);
  else
    v6 = a2 - 8LL * ((v5 >> 2) & 0xF) - 16;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = j__strlen("scope");
  sub_2039D00((__int64)&v15, "scope", v8, v7, 0);
  if ( *(_BYTE *)a2 != 16 )
  {
    v9 = *(_BYTE *)(a2 - 16);
    if ( (v9 & 2) != 0 )
      v10 = *(__int64 **)(a2 - 32);
    else
      v10 = (__int64 *)(a2 - 8LL * ((v9 >> 2) & 0xF) - 16);
    v4 = *v10;
  }
  v11 = j__strlen("file");
  sub_203A140((__int64)&v15, "file", v11, v4);
  v12 = *(_DWORD *)(a2 + 4);
  v13 = j__strlen("discriminator");
  sub_2031410((__int64)&v15, "discriminator", v13, v12, 0);
  return sub_995540(a1, ")");
}
