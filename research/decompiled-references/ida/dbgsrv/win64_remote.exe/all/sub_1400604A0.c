/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400604A0
// Address: 0x00000001400604A0

//----- (00000001400604A0) ----------------------------------------------------
__int64 __fastcall sub_1400604A0(char *String1)
{
  int v1; // r13d
  unsigned int v2; // r12d
  unsigned int v4; // edi
  char *v5; // rbp
  __int64 v6; // rsi
  UINT ACP; // esi
  char *v8; // r15
  __int64 result; // rax
  const char *v10; // rax
  __int64 v11; // rdi
  char **v12; // r14
  __int64 v13; // rbp
  unsigned int v14; // ecx
  char *v15; // rdi
  int v16; // [rsp+58h] [rbp+10h]

  v1 = dword_1400CBA30;
  v2 = 0;
  v16 = dword_1400CBA30;
  v4 = 0;
  v5 = byte_1400CB8B0;
  ++dword_1400CBA30;
  do
  {
    if ( *(_DWORD *)v5 )
    {
      v6 = (__int64)(int)v4 << 6;
      if ( !strcmp((const char *)&qword_1400CB8B8[3] + v6 + 4, String1) )
      {
        result = *(unsigned int *)&byte_1400CB8B0[v6];
        *(_DWORD *)&byte_1400CB8B0[v6 + 4] = v1;
        return result;
      }
    }
    ++v4;
    v5 += 64;
  }
  while ( v4 < 6 );
  ACP = -1;
  v8 = String1;
  if ( !*String1 || !strcmp(String1, "char") )
  {
    ACP = GetACP();
    String1 = sub_14005F050(ACP);
  }
  else
  {
    if ( !strcmp(String1, "wchar_t") )
    {
      ACP = 1200;
LABEL_23:
      LOBYTE(v2) = dword_1400CB8F4 < (unsigned int)dword_1400CB8B4;
      v14 = v2;
      if ( (unsigned int)dword_1400CB934 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v2 + 4] )
        v14 = 2;
      if ( (unsigned int)dword_1400CB974 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v14 + 4] )
        v14 = 3;
      if ( (unsigned int)dword_1400CB9B4 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v14 + 4] )
        v14 = 4;
      if ( (unsigned int)dword_1400CB9F4 < *(_DWORD *)&byte_1400CB8B0[64 * (unsigned __int64)v14 + 4] )
        v14 = 5;
      v15 = &byte_1400CB8B0[64 * (unsigned __int64)v14];
      *(_DWORD *)v15 = ACP;
      sub_1400621E0(v15 + 8, v8, 28);
      sub_1400621E0(v15 + 36, String1, 28);
      *((_DWORD *)v15 + 1) = v1;
      return ACP;
    }
    if ( !strnicmp(String1, "cp", 2u) )
      goto LABEL_11;
    if ( (unsigned __int8)(*String1 - 48) > 9u )
    {
      if ( !strnicmp(String1, "xx", 2u) )
      {
LABEL_11:
        ACP = unknown_libname_43(String1 + 2);
        goto LABEL_22;
      }
      v10 = off_1400C8768;
      if ( !off_1400C8768 )
        return ACP;
      v11 = 0;
      v12 = &off_1400C8768;
      v13 = 0;
      do
      {
        if ( !stricmp(String1, v10) )
        {
          ACP = *(int *)((char *)dword_1400C8760 + v11);
          v8 = *v12;
        }
        v11 = v13 + 16;
        v13 = v11;
        v12 = (char **)((char *)&off_1400C8768 + v11);
        v10 = *(char **)((char *)&off_1400C8768 + v11);
      }
      while ( v10 );
      v1 = v16;
    }
    else
    {
      ACP = unknown_libname_43(String1);
    }
  }
LABEL_22:
  if ( (int)ACP > 0 )
    goto LABEL_23;
  return ACP;
}
// 140070E80: using guessed type __int64 __fastcall unknown_libname_43(_QWORD);
// 1400C8760: using guessed type int dword_1400C8760[];
// 1400CB8B4: using guessed type int dword_1400CB8B4;
// 1400CB8B8: using guessed type __int64[7];
// 1400CB8F4: using guessed type int dword_1400CB8F4;
// 1400CB934: using guessed type int dword_1400CB934;
// 1400CB974: using guessed type int dword_1400CB974;
// 1400CB9B4: using guessed type int dword_1400CB9B4;
// 1400CB9F4: using guessed type int dword_1400CB9F4;
// 1400CBA30: using guessed type int dword_1400CBA30;
