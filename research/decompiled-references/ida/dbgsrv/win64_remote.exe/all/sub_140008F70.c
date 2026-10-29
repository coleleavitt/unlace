/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008F70
// Address: 0x0000000140008F70

//----- (0000000140008F70) ----------------------------------------------------
void __fastcall sub_140008F70(char *Str)
{
  const __m128i *v2; // rax
  char *v3; // rcx
  size_t v4; // rsi
  void *v5; // rax
  const char *v6; // r13
  const __m128i *v7; // r12
  const __m128i *v8; // rdi
  const __m128i *v9; // r14
  signed __int64 v10; // rbx
  char *v11; // rsi
  void *v12; // rax
  char *v13; // rbx
  void *v14; // rax
  size_t v15; // r14
  char *v16; // rbx
  void *v17; // rax
  void *v18; // r9
  void *v19; // rdx
  unsigned __int64 v20; // r8
  char *v21; // rcx
  void *v22; // rcx
  size_t v23; // rbx
  void *v24; // rax
  char *v25; // rdx
  char *v26; // rax
  char *v27; // rbx
  void *Src; // [rsp+20h] [rbp-30h] BYREF
  char *v29; // [rsp+28h] [rbp-28h]
  unsigned __int64 v30; // [rsp+30h] [rbp-20h]
  void *Block[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-8h]

  v2 = nullptr;
  Src = nullptr;
  v3 = nullptr;
  v29 = nullptr;
  v30 = 0;
  if ( Str )
  {
    v4 = strlen(Str);
    v5 = nullptr;
    if ( v4 != -1 )
    {
      v5 = sub_14005ABE0((__int64)&Src, nullptr, v4 + 1, 1u);
      Src = v5;
    }
    v29 = (char *)(v4 + 1);
    memcpy(v5, Str, v4);
    *((_BYTE *)Src + v4) = 0;
    v3 = v29;
    v2 = (const __m128i *)Src;
  }
  *(_OWORD *)Block = 0;
  v32 = 0;
  v6 = Str1;
  v7 = (const __m128i *)Str1;
  if ( v3 )
    v7 = v2;
  v8 = v7;
  v9 = sub_14006C4B8(v7, (const __m128i *)"\b");
  if ( !v9 )
    goto LABEL_31;
  do
  {
    v10 = (char *)v9 - (char *)v8;
    if ( v9 != v8 )
    {
      v11 = (char *)Block[1] - 1;
      if ( !Block[1] )
        v11 = nullptr;
      if ( (unsigned __int64)&v11[v10 + 1] <= v32 )
      {
        v12 = Block[0];
      }
      else
      {
        v12 = sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)&v11[v10 + 1], 1u);
        Block[0] = v12;
      }
      Block[1] = &v11[v10 + 1];
      *((_BYTE *)v12 + (_QWORD)v11 + v10) = 0;
      memcpy(&v11[(unsigned __int64)Block[0]], v8, (char *)v9 - (char *)v8);
    }
    v13 = (char *)Block[1] - 1;
    if ( !Block[1] )
      v13 = nullptr;
    if ( (unsigned __int64)(v13 + 1) <= v32 )
    {
      v14 = Block[0];
    }
    else
    {
      v14 = sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)(v13 + 1), 1u);
      Block[0] = v14;
    }
    Block[1] = v13 + 1;
    v13[(_QWORD)v14] = 0;
    v8 = (const __m128i *)&v9->m128i_i8[1];
    v9 = sub_14006C4B8((const __m128i *)&v9->m128i_i8[1], (const __m128i *)"\b");
  }
  while ( v9 );
  v6 = Str1;
  if ( v8 == v7 )
  {
LABEL_31:
    v22 = Block[0];
    if ( !Block[0] )
    {
LABEL_33:
      v21 = (char *)Src;
      goto LABEL_34;
    }
LABEL_32:
    Block[1] = nullptr;
    j_free(v22);
    goto LABEL_33;
  }
  if ( v8->m128i_i8[0] )
  {
    v15 = strlen(v8->m128i_i8);
    v16 = (char *)Block[1] - 1;
    if ( !Block[1] )
      v16 = nullptr;
    if ( (unsigned __int64)&v16[v15 + 1] <= v32 )
    {
      v17 = Block[0];
    }
    else
    {
      v17 = sub_14005ABE0((__int64)Block, Block[0], (unsigned __int64)&v16[v15 + 1], 1u);
      Block[0] = v17;
    }
    Block[1] = &v16[v15 + 1];
    *((_BYTE *)v17 + (_QWORD)v16 + v15) = 0;
    memcpy(&v16[(unsigned __int64)Block[0]], v8, v15);
  }
  v18 = Src;
  v19 = v29;
  v20 = v30;
  v21 = (char *)Block[0];
  Src = Block[0];
  v29 = (char *)Block[1];
  v30 = v32;
  Block[0] = v18;
  Block[1] = v19;
  v32 = v20;
  if ( v18 )
  {
    v22 = v18;
    goto LABEL_32;
  }
LABEL_34:
  if ( (unsigned __int64)v29 > 1 )
  {
    if ( strncmp(v21, "SYMSRV:  ", 9u) )
    {
      v23 = (size_t)(v29 - 1);
      if ( !v29 )
        v23 = 0;
      if ( v23 + 10 <= v30 )
      {
        v24 = Src;
      }
      else
      {
        v24 = sub_14005ABE0((__int64)&Src, Src, v23 + 10, 1u);
        Src = v24;
      }
      v29 = (char *)(v23 + 10);
      *((_BYTE *)v24 + v23 + 9) = 0;
      if ( v23 )
      {
        memcpy((char *)Src + 9, Src, v23);
        v23 = 0;
      }
      memcpy((char *)Src + v23, "SYMSRV:  ", 9u);
    }
    v25 = v29;
    v26 = v29 - 1;
    if ( !v29 )
      v26 = nullptr;
    v21 = (char *)Src;
    if ( !v26 || *((_BYTE *)Src + (_QWORD)v26 - 1) != 10 )
    {
      v27 = nullptr;
      if ( v29 )
        v27 = v29 - 1;
      if ( (unsigned __int64)(v27 + 2) > v30 )
      {
        v21 = (char *)sub_14005ABE0((__int64)&Src, Src, (unsigned __int64)(v27 + 2), 1u);
        Src = v21;
      }
      v29 = v27 + 2;
      v27[(_QWORD)v21] = 10;
      v27[(_QWORD)Src + 1] = 0;
      v25 = v29;
      v21 = (char *)Src;
    }
    if ( (dword_1400CB618 & 0x10000) != 0 )
    {
      if ( v25 )
        v6 = v21;
      sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, v6);
      v21 = (char *)Src;
    }
  }
  if ( v21 )
  {
    v29 = nullptr;
    j_free(v21);
  }
}
// 140091764: using guessed type int dword_140091764;
// 1400CB618: using guessed type int dword_1400CB618;
