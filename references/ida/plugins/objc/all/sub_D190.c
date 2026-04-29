__int64 __fastcall sub_D190(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // r14d
  __int16 tinfo_property; // [rsp+8h] [rbp-60h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  result = is_cvt64();
  if ( (_BYTE)result )
    return 0;
  if ( (*(_BYTE *)(a1 + 1824) & 8) != 0 )
    return result;
  sub_28FE0(a1 + 1832);
  sub_28FE0(a1 + 1952);
  sub_22010(a1, a2, v3, v4, v5, v6);
  WORD4(v10) = 256;
  *(_QWORD *)&v10 = "id";
  s1 = (char *)get_idati();
  if ( (unsigned __int8)create_tinfo() )
  {
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      tinfo_property = get_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) == 1 )
      {
        clear_tinfo_t();
        goto LABEL_9;
      }
      s1 = 0;
      v10 = 0;
      if ( (tinfo_property & 0x100) != 0 && get_tinfo_pdata() && (_QWORD)v10 )
      {
        v7 = strcmp(s1, "objc_object");
        clear_tinfo_t();
        if ( !v7 )
          goto LABEL_9;
      }
      else
      {
        clear_tinfo_t();
      }
    }
    parse_decls();
  }
LABEL_9:
  clear_tinfo_t();
  s1 = 0;
  v11 = 0;
  v12 = -1;
  v10 = 0;
  sub_B130(a1, (int)&s1);
  if ( s1 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return 1;
}
