/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000ECE0
// Address: 0x000000014000ECE0

//----- (000000014000ECE0) ----------------------------------------------------
int __fastcall sub_14000ECE0(__int64 a1, __int64 a2)
{
  int v4; // eax
  const void **v5; // r14
  __int64 v6; // r12
  unsigned int (__fastcall **v7)(__int64, int *); // rax
  unsigned int (__fastcall **v8)(__int64, int *); // rsi
  __int64 v9; // rbx
  int v10; // eax
  char *v11; // rdx
  size_t v12; // rax
  __int64 v13; // rax
  size_t v14; // r8
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  size_t v18; // r8
  __int64 v19; // rax
  void *Block; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  unsigned int (__fastcall **v24)(__int64, int *); // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  DWORD LastError; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  int v28; // [rsp+68h] [rbp-98h]
  char v29[260]; // [rsp+8Ch] [rbp-74h] BYREF
  char Str[80]; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v31; // [rsp+1E0h] [rbp+E0h]
  unsigned __int8 v32[272]; // [rsp+2A0h] [rbp+1A0h] BYREF

  sub_140063190(a2, 1);
  v4 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
  if ( v4 != 1 && v4 != 11 && v4 != 8 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3295);
  }
  v5 = (const void **)(a2 + 24);
  v6 = *(_QWORD *)(a1 + 24) & *(_QWORD *)(a1 + 1136);
  v7 = (unsigned int (__fastcall **)(__int64, int *))sub_14001E600();
  v8 = v7;
  v24 = v7;
  v9 = -1;
  v25 = -1;
  LastError = 0;
  if ( *((_BYTE *)v7 + 56) )
  {
    v9 = ((__int64 (__fastcall *)(__int64, _QWORD))*v7)(2, 0);
    v25 = v9;
    if ( v9 == -1 )
      LastError = GetLastError();
  }
  v27 = 304;
  if ( v9 == -1 || !v8[1](v9, &v27) )
  {
LABEL_31:
    LastError = GetLastError();
    goto LABEL_32;
  }
  v10 = v28;
  if ( !v28 )
  {
    while ( v8[2](v9, &v27) )
    {
      v10 = v28;
      if ( v28 )
        goto LABEL_14;
    }
    goto LABEL_31;
  }
LABEL_14:
  if ( v10 != *(_DWORD *)a2 )
  {
    while ( v8[2](v9, &v27) )
    {
      v10 = v28;
      if ( v28 )
        goto LABEL_14;
    }
    goto LABEL_31;
  }
  Block = nullptr;
  v22 = 0;
  v23 = 0;
  sub_140061080((__int64)&Block, v29, 0, 0xFDE9u);
  v11 = (char *)Str1;
  if ( v22 )
    v11 = (char *)Block;
  sub_1400621E0(Str, v11, 260);
  if ( Block )
  {
    v22 = 0;
    j_free(Block);
  }
  if ( !sub_14005DC40((unsigned __int8 *)Str) )
  {
    sub_140013BB0((_QWORD *)a1, v32, 0x104u, nullptr, 0, v6);
    if ( v32[0] )
      sub_1400621E0(Str, (char *)v32, 260);
  }
  if ( *(_QWORD *)(a1 + 864) <= 1u || sub_14005DC40((unsigned __int8 *)Str) )
  {
    v12 = strlen(Str);
    if ( v12 )
      sub_140001810(a1 + 856, Str, v12);
    else
      *(_QWORD *)(a1 + 864) = 0;
  }
LABEL_32:
  if ( v5 != (const void **)(a1 + 856) )
  {
    v13 = *(_QWORD *)(a1 + 864);
    v14 = v13 - 1;
    if ( !v13 )
      v14 = 0;
    if ( v14 )
      sub_140001810(a2 + 24, *(const void **)(a1 + 856), v14);
    else
      *(_QWORD *)(a2 + 32) = 0;
  }
  *(_QWORD *)(a2 + 48) = v6;
  v15 = sub_140014780(a1, v6, Str);
  v16 = v31;
  if ( v15 == -1 )
    v16 = 0;
  *(_QWORD *)(a2 + 56) = v16;
  *(_QWORD *)(a2 + 64) = -1;
  if ( (const void **)(a1 + 1024) != v5 )
  {
    v17 = *(_QWORD *)(a2 + 32);
    v18 = v17 - 1;
    if ( !v17 )
      v18 = 0;
    if ( v18 )
      sub_140001810(a1 + 1024, *v5, v18);
    else
      *(_QWORD *)(a1 + 1032) = 0;
  }
  *(_QWORD *)(a1 + 1048) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 1056) = *(_QWORD *)(a2 + 56);
  v19 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 1064) = v19;
  if ( *((_BYTE *)v8 + 56) && v9 != -1 )
    LODWORD(v19) = CloseHandle((HANDLE)v9);
  return v19;
}
// 14000EDED: conditional instruction was optimized away because rbx.8!=FFFFFFFFFFFFFFFF
// 14000EE0D: conditional instruction was optimized away because rbx.8!=FFFFFFFFFFFFFFFF
// 14000EE2D: conditional instruction was optimized away because rbx.8!=FFFFFFFFFFFFFFFF
// 1400CB61C: using guessed type char byte_1400CB61C;
