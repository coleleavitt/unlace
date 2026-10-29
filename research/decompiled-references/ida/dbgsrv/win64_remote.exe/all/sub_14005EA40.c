/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005EA40
// Address: 0x000000014005EA40

//----- (000000014005EA40) ----------------------------------------------------
char *__fastcall sub_14005EA40(_BYTE *a1)
{
  char *v2; // rbx
  HMODULE ModuleHandleW; // rax
  char *v4; // rdx
  char **v5; // rbx
  size_t v6; // rax
  void *Block; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h]
  __int64 v10; // [rsp+40h] [rbp-C0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp-B8h] BYREF
  void *v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  WCHAR Filename[264]; // [rsp+70h] [rbp-90h] BYREF

  sub_14005BA20(&v11);
  v2 = &byte_1400CB750;
  if ( byte_1400CB750 )
    goto LABEL_18;
  *(_OWORD *)v12 = 0;
  v13 = 0;
  if ( !byte_1400CAFC0 )
    goto LABEL_10;
  if ( !sub_14005D470("IDADIR", (__int64)v12) )
  {
    if ( byte_1400CAFC0 )
    {
      ModuleHandleW = GetModuleHandleW(L"ida");
      if ( ModuleHandleW )
      {
        GetModuleFileNameW(ModuleHandleW, Filename, 0x104u);
        Block = nullptr;
        v9 = 0;
        v10 = 0;
        sub_140061D80((__int64)&Block, Filename, -1);
        v4 = (char *)Str1;
        if ( v9 )
          v4 = (char *)Block;
LABEL_12:
        sub_1400621E0(&byte_1400CB750, v4, 260);
        if ( Block )
        {
          v9 = 0;
          j_free(Block);
        }
        if ( !sub_14005EF90(&byte_1400CB750) )
          sub_14005DA20((__m128i *)&byte_1400CB750, 0x104u, (__m128i *)&byte_1400CB750);
        goto LABEL_16;
      }
    }
LABEL_10:
    GetModuleFileNameW(nullptr, Filename, 0x104u);
    Block = nullptr;
    v9 = 0;
    v10 = 0;
    sub_140061D80((__int64)&Block, Filename, -1);
    v4 = (char *)Str1;
    if ( v9 )
      v4 = (char *)Block;
    goto LABEL_12;
  }
  sub_1400621E0(&byte_1400CB750, (char *)v12[0], 260);
LABEL_16:
  if ( v12[0] )
  {
    v12[1] = nullptr;
    j_free(v12[0]);
  }
LABEL_18:
  if ( a1 && *a1 )
  {
    sub_14005DE20((__int8 *)Filename, 260, &byte_1400CB750, a1, 0);
    v5 = (char **)sub_140063CC0();
    v6 = strlen((const char *)Filename);
    if ( v6 )
      sub_140001810((__int64)v5, Filename, v6);
    else
      v5[1] = nullptr;
    v2 = *v5;
  }
  sub_14005D6D0(v11);
  return v2;
}
// 1400CAFC0: using guessed type char byte_1400CAFC0;
// 1400CB750: using guessed type char byte_1400CB750;
