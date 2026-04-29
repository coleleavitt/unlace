unsigned __int64 __fastcall sub_40A760(_BYTE *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+10h] [rbp-98h] BYREF
  __int128 v12; // [rsp+18h] [rbp-90h]
  __int64 v13; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+30h] [rbp-78h] BYREF
  __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  __int128 v16; // [rsp+40h] [rbp-68h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+58h] [rbp-50h]
  char v19; // [rsp+68h] [rbp-40h]
  unsigned __int64 v20; // [rsp+78h] [rbp-30h]

  v2 = *a1 == 0;
  v20 = __readfsqword(0x28u);
  v10 = 0;
  if ( !v2 || (unsigned __int8)parse_decl(a1, 0, 0, "int syscall(int, ...);", 0) )
  {
    copy_tinfo_t(&v10, a1);
    v19 = 16;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = 0;
    v12 = 0;
    v16 = 0;
    v18 = 0;
    if ( (unsigned __int8)get_tinfo_details(v10, 12, &v11) )
      *(_DWORD *)(a2 + 20) = get_tinfo_property(v10, 20);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    cleanup_argloc(&v15);
    clear_tinfo_t(&v14);
    v3 = v11;
    if ( v11 )
    {
      v4 = v12;
      if ( (_QWORD)v12 )
      {
        v5 = 0;
        do
        {
          v6 = (_QWORD *)(v3 + 80 * v5);
          clear_tinfo_t(v6 + 8);
          v7 = v6[5];
          if ( v7 )
          {
            v6[6] = 0;
            qfree(v7);
          }
          v8 = v6[2];
          if ( v8 )
          {
            v6[3] = 0;
            qfree(v8);
          }
          ++v5;
          cleanup_argloc(v6);
          v3 = v11;
        }
        while ( v4 != v5 );
      }
      *(_QWORD *)&v12 = 0;
      qfree(v3);
    }
  }
  clear_tinfo_t(&v10);
  return v20 - __readfsqword(0x28u);
}
