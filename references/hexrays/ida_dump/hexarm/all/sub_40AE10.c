__int64 __fastcall sub_40AE10(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int8 a4, int a5)
{
  __int64 v9; // rax
  unsigned int tinfo_details; // ebp
  __int64 v11; // rdx
  __int64 v12; // rax
  const char *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-78h] BYREF
  __int128 v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+18h] [rbp-60h]
  __int128 v27; // [rsp+20h] [rbp-58h]
  int v28; // [rsp+30h] [rbp-48h]
  char v29; // [rsp+34h] [rbp-44h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0x80;
  v25 = 0;
  v27 = 0;
  v9 = sub_40A9D0(a1, a4, a5);
  copy_tinfo_t(a2, v9);
  tinfo_details = get_tinfo_details(*a2, 45, &v24);
  if ( (_BYTE)tinfo_details )
  {
    if ( a5 < 0 && (_QWORD)v25 != 51 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC7B2u, 45, 0.0);
      goto LABEL_38;
    }
    v11 = v24 + 56 * v25;
    v12 = v24;
    if ( v24 == v11 )
      goto LABEL_33;
    while ( a5 != *(_DWORD *)(v12 + 48) )
    {
      v12 += 56;
      if ( v12 == v11 )
        goto LABEL_33;
    }
    if ( v12 == v11 )
    {
LABEL_33:
      tinfo_details = 0;
    }
    else if ( a5 < 0 )
    {
      v22 = (char *)&unk_4E6140 - 0x2492492492492490LL * ((v12 - v24) >> 3);
      if ( a5 != *(_DWORD *)v22 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC7B3u, 45, 0.0);
LABEL_38:
        BUG();
      }
      v23 = *((_QWORD *)v22 + 1);
      if ( v23 )
        parse_decl(a3, 0, 0, v23, 1);
    }
    else
    {
      v13 = *(const char **)v12;
      if ( (a4
         || (strncmp(*(const char **)v12, "__NR_", 5u) || !(unsigned __int8)sub_40A430(a3, v13 + 5, 0))
         && (strncmp(v13, "__NR_rt_", 8u) || !(unsigned __int8)sub_40A430(a3, v13 + 8, 0)))
        && !strncmp(v13, "SYS_", 4u) )
      {
        sub_40A430(a3, v13 + 4, a4);
      }
    }
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  v14 = v24;
  if ( v24 )
  {
    v15 = v25;
    if ( (_QWORD)v25 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v14 + v16);
        v19 = *(_QWORD *)(v14 + v16 + 24);
        if ( v19 )
        {
          v18[4] = 0;
          qfree(v19);
        }
        v20 = *v18;
        if ( *v18 )
        {
          v18[1] = 0;
          qfree(v20);
        }
        ++v17;
        v14 = v24;
        v16 += 56;
      }
      while ( v15 != v17 );
    }
    *(_QWORD *)&v25 = 0;
    qfree(v14);
  }
  return tinfo_details;
}
