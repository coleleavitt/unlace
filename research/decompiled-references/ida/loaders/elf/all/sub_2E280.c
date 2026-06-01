__int64 __fastcall sub_2E280(__int64 *a1, int a2)
{
  __int64 result; // rax
  const char *v3; // rsi
  const char *v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  const char *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // [rsp+8h] [rbp-38h]
  const char *v11; // [rsp+10h] [rbp-30h] BYREF
  __int128 v12; // [rsp+18h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    result = a1[22];
    if ( result != -1 )
      return result;
    v3 = "struct tls_index_local\n"
         "{\n"
         "  unsigned __int64 ti_module;\n"
         "  unsigned __int64 ti_offset __offset(OFF64,0x%a);\n"
         "};\n";
    v7 = *(_BYTE *)(a1[8] + 617) == 0;
    v12 = 0;
    v11 = nullptr;
    v4 = "tls_index_local";
    if ( v7 )
    {
      v3 = "struct tls_index_local\n"
           "{\n"
           "  unsigned __int32 ti_module;\n"
           "  unsigned __int32 ti_offset __offset(OFF32,0x%a);\n"
           "};\n";
      v4 = "tls_index_local";
    }
    v6 = *a1;
    v5 = a1 + 22;
  }
  else
  {
    if ( a2 != 2 )
      return -1;
    result = a1[23];
    if ( result != -1 )
      return result;
    if ( *(_BYTE *)(a1[8] + 617) )
    {
      v11 = nullptr;
      v3 = "struct tls_index_extern\n"
           "{\n"
           "  unsigned __int64 ti_module;\n"
           "  unsigned __int64 ti_offset __offset(OFF64,0x%a);\n"
           "};\n";
      v12 = 0;
      v4 = "tls_index_extern";
    }
    else
    {
      v11 = nullptr;
      v3 = "struct tls_index_extern\n"
           "{\n"
           "  unsigned __int32 ti_module;\n"
           "  unsigned __int32 ti_offset __offset(OFF32,0x%a);\n"
           "};\n";
      v12 = 0;
      v4 = "tls_index_extern";
    }
    v5 = a1 + 23;
    v6 = *(_QWORD *)(a1[5] + 16);
  }
  sub_2B240((__int64 *)&v11, (__int64)v3, v6);
  v8 = &s1;
  if ( (_QWORD)v12 )
    v8 = v11;
  h2ti(0, 0, v8, 1024, 0, 0, sub_EAA0, 0, 0);
  result = get_named_type_tid(v4);
  v9 = (__int64)v11;
  *v5 = result;
  if ( v9 )
  {
    v10 = result;
    *(_QWORD *)&v12 = 0;
    qfree(v9);
    return v10;
  }
  return result;
}

