unsigned __int64 __fastcall sub_8E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  char *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbx
  char *v14; // [rsp+8h] [rbp-450h]
  char s[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v16; // [rsp+418h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  qsnprintf();
  v9 = strrchr(s, 46);
  if ( v9 )
  {
    v14 = v9;
    if ( !strncasecmp(v9, ".dll", 4u) )
      *v14 = 0;
  }
  set_name();
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_7230(a2, a5, a6, 0);
  v10 = sub_7130(a1, *(_QWORD *)(a1 + 16) & (a2 + 4), (__int64)"Time stamp: ", *(_DWORD *)(a3 + 4));
  create_data();
  set_cmt();
  v11 = *(_QWORD *)(a1 + 16) & (v10 + 4);
  create_data();
  set_cmt();
  if ( *(_DWORD *)(a3 + 12) )
  {
    sub_7230(v11, a5, a6, 0);
    sub_7CE0(*(_QWORD *)(a1 + 16) & (a5 + *(unsigned int *)(a3 + 12)), 0);
  }
  v12 = *(_QWORD *)(a1 + 16) & (v11 + 4);
  create_data();
  set_cmt();
  if ( (unsigned int)get_dword() )
    sub_7230(v12, a5, a6, 0);
  return v16 - __readfsqword(0x28u);
}
