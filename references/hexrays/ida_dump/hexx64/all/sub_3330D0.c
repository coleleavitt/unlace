const char **__fastcall sub_3330D0(const char **a1, const char **a2, const char *a3)
{
  const char **v3; // rbp
  __int64 v4; // rbx
  __int64 v6; // r14
  const char **v7; // r15
  const char *v9; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v10[5]; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v11[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a1;
  v4 = 0xCCCCCCCCCCCCCCCDLL * (a2 - a1);
  v11[1] = __readfsqword(0x28u);
  v10[1] = a3;
  v11[0] = 0;
  while ( v4 > 0 )
  {
    while ( 1 )
    {
      v6 = v4 >> 1;
      v7 = &v3[5 * (v4 >> 1)];
      if ( strcmp(*v7, a3) < 0 )
        break;
      v4 >>= 1;
      if ( v6 <= 0 )
        goto LABEL_5;
    }
    v3 = v7 + 5;
    v4 = v4 - 1 - v6;
  }
LABEL_5:
  if ( a2 == v3 || strcmp(*v3, a3) )
  {
    v3 = nullptr;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)v3 + 32) )
  {
    v9 = v3[2];
    v10[0] = v3[3];
    if ( (unsigned __int8)deserialize_tinfo(v3 + 4, 0, &v9, v10, 0, 0) )
    {
      if ( (int)lower_type(0, v3 + 4, 0, 0) >= 0 )
        goto LABEL_8;
      if ( !under_debugger )
        sub_383060(52017);
    }
    else if ( !under_debugger )
    {
      sub_383060(51093);
    }
    BUG();
  }
LABEL_8:
  clear_tinfo_t(v11);
  return v3;
}
