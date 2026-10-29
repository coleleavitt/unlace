/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140051BD0
// Address: 0x0000000140051BD0

//----- (0000000140051BD0) ----------------------------------------------------
void *__fastcall sub_140051BD0(__int64 a1, char a2, __int64 *a3, char a4)
{
  void *v8; // rbp
  unsigned __int8 *v9; // rax
  void *v10; // rdi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rax
  void (*v15)(const char *, ...); // rax
  const char *v16; // rdx
  void *Block[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = nullptr;
  while ( 1 )
  {
    if ( a3[1] )
    {
      if ( (unsigned int)sub_140052B90(a1, a3) )
        break;
      if ( (a4 & 1) != 0 )
        goto LABEL_26;
      if ( *(_BYTE *)(*a3 + 4) == 52 )
        sub_14005A640(1);
    }
    v9 = (unsigned __int8 *)sub_1400529F0(a1, a2);
    v10 = v9;
    if ( !v9 )
      break;
    v11 = v9[4];
    if ( !v11 )
    {
      v8 = v10;
      goto LABEL_26;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      sub_140048C20((_BYTE *)a1, (struct __crt_locale_pointers *)"rpc: remote did not understand our request");
      goto LABEL_19;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      sub_140048C20((_BYTE *)a1, (struct __crt_locale_pointers *)"rpc: no remote memory");
LABEL_19:
      j_free(v10);
      goto LABEL_26;
    }
    if ( v13 == 4 )
    {
      sub_140002CE0((struct __crt_locale_pointers *)"rpc: user cancelled the operation\n");
      j_free(v10);
      goto LABEL_26;
    }
    if ( !*(_BYTE *)(a1 + 69) )
    {
      sub_1400542D0("Exploit packet has been detected and ignored\n");
      j_free(v10);
      goto LABEL_26;
    }
    v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64, void **, void *))(*(_QWORD *)a1 + 48LL))(a1, Block, v10);
    sub_140040A30((__int64)a3, v14);
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
    j_free(v10);
  }
  v15 = (void (*)(const char *, ...))sub_1400542D0;
  if ( *(_BYTE *)(a1 + 68) )
    v15 = (void (*)(const char *, ...))sub_140002CE0;
  v16 = Str1;
  if ( *(_QWORD *)(a1 + 24) )
    v16 = *(const char **)(a1 + 16);
  v15("%s\n", v16);
LABEL_26:
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 56LL))(a1, v8);
  return v8;
}
