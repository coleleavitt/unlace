/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140048C50
// Address: 0x0000000140048C50

//----- (0000000140048C50) ----------------------------------------------------
__int64 __fastcall sub_140048C50(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v6; // rbp
  const char *v7; // r12
  char *v8; // r13
  unsigned __int64 v9; // rax
  char *v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rdi
  unsigned __int8 *v16; // rbx
  int v17; // ebx
  char *v18; // rdx
  char *v19; // rax
  size_t v20; // rax
  unsigned int v21; // ebx
  void *Block; // [rsp+40h] [rbp-4E8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-4E0h]
  __int64 v25; // [rsp+50h] [rbp-4D8h]
  __int64 (__fastcall **v26)(); // [rsp+60h] [rbp-4C8h] BYREF
  char Str[1128]; // [rsp+68h] [rbp-4C0h] BYREF
  _BYTE *v28; // [rsp+4D0h] [rbp-58h]
  int v29; // [rsp+4D8h] [rbp-50h]

  v6 = (_BYTE *)(a2 + 28);
  v7 = *(const char **)a2;
  v8 = (char *)(a2 + 1062);
  v9 = *(unsigned __int16 *)(a2 + 36);
  v10 = nullptr;
  Block = nullptr;
  v11 = 0;
  v24 = 0;
  v25 = 0;
  if ( (_WORD)v9 )
  {
    v12 = (unsigned int)v9;
    if ( v9 < 0xC )
      goto LABEL_17;
    v13 = *(_DWORD *)(a2 + 38);
    v14 = *(_DWORD *)(a2 + 42);
    if ( *v6 )
    {
      v13 = _byteswap_ulong(v13);
      v14 = _byteswap_ulong(v14);
    }
    v15 = v14;
    if ( v12 < v14 + (unsigned __int64)v13 + 12 )
    {
LABEL_17:
      v21 = -1;
      goto LABEL_22;
    }
    v16 = &v6[v13 + 22];
    if ( v14 )
    {
      do
      {
        sub_140024520((__int64)&Block, "%02x", *v16++);
        --v15;
      }
      while ( v15 );
      v11 = v24;
      v10 = (char *)Block;
    }
  }
  v17 = *(_DWORD *)(a2 + 24);
  v18 = (char *)Str1;
  v19 = (char *)Str1;
  if ( v11 )
    v19 = v10;
  if ( *(_QWORD *)(a3 + 8) )
    v18 = *(char **)a3;
  sub_140046ED0((__int64)&v26, v18, 0, v7, v8, 0, v19);
  v26 = &off_140097558;
  v28 = v6;
  v29 = v17;
  if ( !(unsigned int)sub_140047DC0((__int64)&v26) )
  {
    v21 = -1;
    goto LABEL_21;
  }
  if ( !a1 )
    goto LABEL_19;
  v20 = strlen(Str);
  if ( !v20 )
  {
    *(_QWORD *)(a1 + 8) = 0;
LABEL_19:
    v21 = 0;
    goto LABEL_21;
  }
  sub_140001810(a1, Str, v20);
  v21 = 0;
LABEL_21:
  sub_1400477A0(&v26);
  v10 = (char *)Block;
LABEL_22:
  if ( v10 )
  {
    v24 = 0;
    j_free(v10);
  }
  return v21;
}
// 140097558: using guessed type __int64 (__fastcall *off_140097558)();
