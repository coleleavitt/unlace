unsigned __int64 __fastcall sub_60FA50(__int64 a1)
{
  char *v2; // rsi
  char *v3; // r15
  int v4; // eax
  const char *v5; // rdx
  unsigned int v6; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v7; // [rsp+Ch] [rbp-5Ch] BYREF
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v9; // [rsp+18h] [rbp-50h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  netnode_check(&v6, "$ BMARKS ", 0, 0);
  if ( !(unsigned __int8)netnode_exist(&v6) )
    return v10 - __readfsqword(0x28u);
  v9 = 0;
  s1 = nullptr;
  if ( netnode_qhashfirst(v6, &s1, 72) != -1 )
  {
    do
    {
      v2 = (char *)haystack;
      if ( (_QWORD)v9 )
        v2 = s1;
      v7 = netnode_hashval_long(v6, v2, 72);
      if ( (unsigned __int8)netnode_exist(&v7) )
      {
        if ( !(_QWORD)v9 )
          goto LABEL_18;
        v3 = s1;
        if ( !strcmp(s1, "enumplace_t") || !strcmp(v3, "structplace_t") )
          continue;
        if ( !strcmp(v3, "idaplace_t") )
        {
          v5 = "IDA View-A";
        }
        else
        {
          v4 = strcmp(v3, "tiplace_t");
          v5 = "Types Layout";
          if ( v4 )
LABEL_18:
            sub_365330();
        }
        sub_60EAD0(a1, v7, v5, 1);
      }
      v3 = (char *)haystack;
      if ( (_QWORD)v9 )
        v3 = s1;
    }
    while ( netnode_qhashnext(v6, &s1, v3, 72) != -1 );
  }
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(s1);
  }
  return v10 - __readfsqword(0x28u);
}

