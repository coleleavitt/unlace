/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140019C10
// Address: 0x0000000140019C10

//----- (0000000140019C10) ----------------------------------------------------
void __fastcall sub_140019C10(char *Str, __int64 a2)
{
  __int16 *v4; // rdi
  char *v5; // r15
  size_t v6; // r14
  void *v7; // rax
  size_t v8; // r14
  void *v9; // rax
  size_t v10; // r14
  size_t v11; // rsi
  size_t v12; // r8
  void *v13; // r10
  __int16 *v14; // rax
  size_t v15; // rcx
  __int16 *v16; // rax
  __int16 *v17; // rax
  const char *v18; // rdx
  const char *v19; // rcx
  int v20; // esi
  size_t v21; // r14
  void *v22; // rax
  size_t v23; // r14
  void *v24; // rax
  size_t v25; // r14
  size_t v26; // rsi
  size_t v27; // r8
  void *v28; // r10
  __int16 *v29; // rax
  size_t v30; // rcx
  __int16 *v31; // rax
  const char *v32; // rdx
  const char *v33; // rcx
  int v34; // edi
  size_t v35; // rax
  CHAR v36; // cl
  unsigned __int64 v37; // rax
  size_t v38; // rax
  CHAR v39; // cl
  void *Buf2; // [rsp+20h] [rbp-E0h] BYREF
  size_t v41; // [rsp+28h] [rbp-D8h]
  __int64 v42; // [rsp+30h] [rbp-D0h]
  void *Buf1; // [rsp+38h] [rbp-C8h] BYREF
  size_t v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+48h] [rbp-B8h]
  void *Block; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  CHAR Buffer[1024]; // [rsp+70h] [rbp-90h] BYREF
  CHAR Src[1024]; // [rsp+470h] [rbp+370h] BYREF

  Buffer[0] = 0;
  GetSystemDirectoryA(Buffer, 0x400u);
  if ( !Buffer[0] || !Str || !*Str )
    return;
  v4 = word_1400CAE32;
  v5 = (char *)Str1;
  if ( Buffer == Str )
  {
LABEL_38:
    Src[0] = 0;
    GetSystemWow64DirectoryA(Src, 0x400u);
    if ( !Src[0] )
      return;
    if ( Buffer[0] )
    {
      Buf1 = nullptr;
      v44 = 0;
      v45 = 0;
      v21 = strlen(Src);
      v22 = nullptr;
      if ( v21 != -1 )
      {
        v22 = sub_14005ABE0((__int64)&Buf1, nullptr, v21 + 1, 1u);
        Buf1 = v22;
      }
      v44 = v21 + 1;
      memcpy(v22, Src, v21);
      *((_BYTE *)Buf1 + v21) = 0;
      Buf2 = nullptr;
      v41 = 0;
      v42 = 0;
      v23 = strlen(Buffer);
      v24 = nullptr;
      if ( v23 != -1 )
      {
        v24 = sub_14005ABE0((__int64)&Buf2, nullptr, v23 + 1, 1u);
        Buf2 = v24;
      }
      v41 = v23 + 1;
      memcpy(v24, Buffer, v23);
      *((_BYTE *)Buf2 + v23) = 0;
      v25 = v44 - 1;
      if ( !v44 )
        v25 = 0;
      v26 = v41 - 1;
      if ( !v41 )
        v26 = 0;
      sub_140008250((__int64)&Buf1, (const char *)&dword_140092EF4, byte_140092EF0);
      sub_140008250((__int64)&Buf2, (const char *)&dword_140092EF4, byte_140092EF0);
      v27 = v25 - 1;
      v28 = Buf1;
      if ( v44 || (v29 = word_1400CAE32, v25 != 1) )
        v29 = (__int16 *)((char *)Buf1 + v27);
      if ( *(_BYTE *)v29 != 47 )
        v27 = v25;
      v30 = v26 - 1;
      if ( v41 || (v31 = word_1400CAE32, v26 != 1) )
        v31 = (__int16 *)((char *)Buf2 + v30);
      if ( *(_BYTE *)v31 != 47 )
        v30 = v26;
      if ( v27 > v30 )
        goto LABEL_79;
      if ( v27 >= v30 )
        goto LABEL_64;
      if ( v41 || v27 )
        v4 = (__int16 *)((char *)Buf2 + v27);
      if ( *(_BYTE *)v4 == 47 )
      {
LABEL_64:
        v32 = Str1;
        if ( v41 )
          v32 = (const char *)Buf2;
        v33 = Str1;
        if ( v44 )
          v33 = (const char *)Buf1;
        v34 = memicmp(v33, v32, v27);
        if ( Buf2 )
        {
          v41 = 0;
          j_free(Buf2);
          Buf2 = nullptr;
          v42 = 0;
        }
        if ( Buf1 )
        {
          v44 = 0;
          j_free(Buf1);
        }
        if ( !v34 )
          return;
      }
      else
      {
LABEL_79:
        if ( Buf2 )
        {
          v41 = 0;
          j_free(Buf2);
          Buf2 = nullptr;
          v42 = 0;
          v28 = Buf1;
        }
        if ( v28 )
        {
          v44 = 0;
          j_free(v28);
        }
      }
    }
    v35 = strlen(Src);
    v36 = Buffer[v35 + 1023];
    if ( v36 == 47 || v36 == 92 )
    {
      v37 = v35 - 1;
      if ( v37 >= 0x400 )
        sub_14006AED4();
      Src[v37] = 0;
    }
    v38 = strlen(Buffer);
    v39 = Buffer[v38 - 1];
    if ( v39 == 47 || v39 == 92 )
      Str[--v38] = 0;
    Block = nullptr;
    v47 = 0;
    v48 = 0;
    sub_140002FB0((__int64)&Block, "%s%s", Src, &Str[v38]);
    if ( v47 )
      v5 = (char *)Block;
    sub_1400621E0(Str, v5, a2);
    if ( Block )
    {
      v47 = 0;
      j_free(Block);
    }
    return;
  }
  Buf1 = nullptr;
  v44 = 0;
  v45 = 0;
  v6 = strlen(Buffer);
  v7 = nullptr;
  if ( v6 != -1 )
  {
    v7 = sub_14005ABE0((__int64)&Buf1, nullptr, v6 + 1, 1u);
    Buf1 = v7;
  }
  v44 = v6 + 1;
  memcpy(v7, Buffer, v6);
  *((_BYTE *)Buf1 + v6) = 0;
  Buf2 = nullptr;
  v41 = 0;
  v42 = 0;
  v8 = strlen(Str);
  v9 = nullptr;
  if ( v8 != -1 )
  {
    v9 = sub_14005ABE0((__int64)&Buf2, nullptr, v8 + 1, 1u);
    Buf2 = v9;
  }
  v41 = v8 + 1;
  memcpy(v9, Str, v8);
  *((_BYTE *)Buf2 + v8) = 0;
  v10 = v44 - 1;
  if ( !v44 )
    v10 = 0;
  v11 = v41 - 1;
  if ( !v41 )
    v11 = 0;
  sub_140008250((__int64)&Buf1, (const char *)&dword_140092EF4, byte_140092EF0);
  sub_140008250((__int64)&Buf2, (const char *)&dword_140092EF4, byte_140092EF0);
  v12 = v10 - 1;
  v13 = Buf1;
  if ( v44 || (v14 = word_1400CAE32, v10 != 1) )
    v14 = (__int16 *)((char *)Buf1 + v12);
  if ( *(_BYTE *)v14 != 47 )
    v12 = v10;
  v15 = v11 - 1;
  if ( v41 || (v16 = word_1400CAE32, v11 != 1) )
    v16 = (__int16 *)((char *)Buf2 + v15);
  if ( *(_BYTE *)v16 != 47 )
    v15 = v11;
  if ( v12 > v15 )
    goto LABEL_74;
  if ( v12 >= v15 )
    goto LABEL_29;
  if ( v41 || (v17 = word_1400CAE32, v12) )
    v17 = (__int16 *)((char *)Buf2 + v12);
  if ( *(_BYTE *)v17 == 47 )
  {
LABEL_29:
    v18 = Str1;
    if ( v41 )
      v18 = (const char *)Buf2;
    v19 = Str1;
    if ( v44 )
      v19 = (const char *)Buf1;
    v20 = memicmp(v19, v18, v12);
    if ( Buf2 )
    {
      v41 = 0;
      j_free(Buf2);
      Buf2 = nullptr;
      v42 = 0;
    }
    if ( Buf1 )
    {
      v44 = 0;
      j_free(Buf1);
    }
    if ( !v20 )
      goto LABEL_38;
  }
  else
  {
LABEL_74:
    if ( Buf2 )
    {
      v41 = 0;
      j_free(Buf2);
      Buf2 = nullptr;
      v42 = 0;
      v13 = Buf1;
    }
    if ( v13 )
    {
      v44 = 0;
      j_free(v13);
    }
  }
}
// 140092EF4: using guessed type int dword_140092EF4;
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
