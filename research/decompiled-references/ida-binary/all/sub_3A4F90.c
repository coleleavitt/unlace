__int64 __fastcall import_std_struct(__int64 a1, __int64 a2, const char *a3, __int64 a4)
{
  _BYTE *v5; // rax
  unsigned __int8 v6; // al
  unsigned __int8 v7; // [rsp+7h] [rbp-31h]
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v8 = a4;
  v9[1] = __readfsqword(0x28u);
  if ( strchr(a3, 36) )
    return 0;
  v5 = (_BYTE *)resolve_typedef(a2, v8);
  if ( !v5 || (*v5 & 0x2F) != 0xD )
    return 0;
  v9[0] = 0;
  v6 = deserialize_tinfo(v9, a2, &v8, 0, 0, 0);
  if ( v6 )
    v6 = get_tinfo_size(0, v9[0], 0) != -1;
  v7 = v6;
  clear_tinfo_t(v9);
  return v7;
}
