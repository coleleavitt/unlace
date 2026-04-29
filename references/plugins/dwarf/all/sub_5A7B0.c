__int64 __fastcall sub_5A7B0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7,
        unsigned __int8 a8)
{
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rcx
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v17; // r14
  const char *v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  unsigned __int8 v22; // [rsp+13h] [rbp-85h]
  unsigned int v23; // [rsp+14h] [rbp-84h]
  unsigned __int8 v24; // [rsp+1Fh] [rbp-79h]
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  __int64 v26; // [rsp+28h] [rbp-70h] BYREF
  __int64 v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h] BYREF
  const char *v29; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  LOBYTE(a3) = a3 | 0x80;
  v9 = a6;
  v22 = a8;
  v31 = __readfsqword(0x28u);
  v10 = *a5;
  v23 = a3;
  v25 = 0;
  v26 = v10;
  if ( a6 )
  {
    v11 = *a6;
    if ( *a6 )
      v12 = (__int64 *)&v29;
    else
      v12 = nullptr;
  }
  else
  {
    v11 = 0;
    v12 = nullptr;
  }
  v29 = (const char *)v11;
  v13 = deserialize_tinfo(&v25, a1, &v26, v12, 0, 0);
  if ( v13 )
    goto LABEL_10;
  while ( a8 )
  {
    v14 = *(_QWORD *)(a7 + 232);
    v29 = nullptr;
    v30 = 0;
    v15 = v14 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v14 != -1 && v15 )
    {
      sub_20160((__int64 *)&v29, (__int64)"__DIE_%llu_%s", v15, a4);
      v17 = src;
      if ( (_QWORD)v30 )
        v17 = v29;
      v18 = (const char *)sub_81C40(a7 + 8);
      sub_5A690((__int64)"Failed saving DIE @ %s. Trying auto-generated name '%s'\n", v18, v17);
      v27 = *a5;
      v19 = 0;
      if ( v9 )
      {
        v19 = *v9;
        if ( *v9 )
          v9 = &v28;
        else
          v9 = nullptr;
      }
      v28 = v19;
      v22 = deserialize_tinfo(&v25, a1, &v27, v9, 0, 0);
      if ( v22 )
      {
        v20 = src;
        if ( (_QWORD)v30 )
          v20 = v29;
        v22 = (unsigned int)save_tinfo(&v25, a1, a2, v20, v23) == 0;
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29);
      }
      break;
    }
    if ( under_debugger )
      BUG();
    v13 = interr(30478);
LABEL_10:
    v24 = v13;
    if ( !(unsigned int)save_tinfo(&v25, a1, a2, a4, v23) )
    {
      v22 = v24;
      break;
    }
  }
  clear_tinfo_t(&v25);
  return v22;
}
