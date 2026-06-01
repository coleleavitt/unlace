_BOOL8 __fastcall sub_550D20(__int64 *a1, __int64 a2, unsigned __int8 *a3, const char *a4, int a5)
{
  __int64 v6; // rax
  void *tinfo_property; // rax
  void *v10; // rdx
  __int64 tinfo_pdata; // rax
  void *v12; // rbp
  bool v13; // al
  const char *v14; // rdi
  bool v15; // [rsp+7h] [rbp-B1h]
  bool v16; // [rsp+7h] [rbp-B1h]
  unsigned __int8 *v17; // [rsp+8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+18h] [rbp-A0h]
  _OWORD v20[3]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+60h] [rbp-58h]
  __int64 v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  __int64 v24; // [rsp+78h] [rbp-40h]
  unsigned __int64 v25; // [rsp+88h] [rbp-30h]

  v17 = a3;
  v25 = __readfsqword(0x28u);
  if ( !a3 || (*a3 & 0xF) != 0xA )
    return 0;
  v6 = *a1;
  memset(v20, 0, sizeof(v20));
  v21 = -1;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( !(unsigned __int8)sub_53B7F0((__int64)v20, v6, a2, &v17, 0, 0) || (BYTE6(v23) & 0xF) != 0xA )
  {
LABEL_6:
    sub_5415B0((__int64)v20);
    return 0;
  }
  while ( 1 )
  {
    ptr = nullptr;
    tinfo_property = (void *)get_tinfo_property(*(_QWORD *)&v20[0], 13);
    ptr = tinfo_property;
    if ( !(_BYTE)tinfo_property )
      break;
    v10 = *(void **)&v20[0];
    *(_QWORD *)&v20[0] = tinfo_property;
    ptr = v10;
    clear_tinfo_t(&ptr);
  }
  clear_tinfo_t(&ptr);
  if ( a5 )
  {
    v13 = a5 == (unsigned int)get_tinfo_property(*(_QWORD *)&v20[0], 7);
  }
  else
  {
    ptr = nullptr;
    v19 = 0;
    if ( (v20[0] & 0x100) == 0 )
      goto LABEL_6;
    tinfo_pdata = get_tinfo_pdata(&ptr, *(_QWORD *)&v20[0], 0);
    v12 = ptr;
    if ( !tinfo_pdata )
    {
      if ( ptr )
      {
        *(_QWORD *)&v19 = 0;
        qfree(ptr);
      }
      goto LABEL_6;
    }
    v14 = (const char *)ptr;
    if ( !(_QWORD)v19 )
      v14 = haystack;
    v13 = strcmp(v14, a4) == 0;
    if ( v12 )
    {
      v16 = v13;
      *(_QWORD *)&v19 = 0;
      qfree(v12);
      v13 = v16;
    }
  }
  v15 = v13;
  sub_5415B0((__int64)v20);
  return v15;
}
