__int64 __fastcall sub_6D40A0(__int64 a1, __int64 a2, const char *a3)
{
  const char **v3; // rbx
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (const char **)&off_2B0E300;
  v6[1] = __readfsqword(0x28u);
  while ( strcmp(*v3, a3) )
  {
    v3 += 2;
    if ( v3 == (const char **)&unk_2B0E3B0 )
      return 0;
  }
  v6[0] = *((unsigned __int8 *)v3 + 8);
  copy_tinfo_t(a2);
  clear_tinfo_t(v6);
  return 1;
}

