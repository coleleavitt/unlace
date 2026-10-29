__int64 __fastcall sub_761080(unsigned int *p_i, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v5; // bp
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int i; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v5 = 0;
  v13 = __readfsqword(0x28u);
  for ( i = 0; ; sub_76FFF0(&i) )
  {
    v6 = qword_2CD44C0;
    v7 = (__int64)++qword_2CD44C0;
    v8 = (unsigned __int8)*v6;
    if ( (_BYTE)v8 != 85 )
    {
      while ( 1 )
      {
        if ( (char)v8 > 85 )
          goto LABEL_26;
        if ( (_BYTE)v8 == 67 )
          break;
        if ( (_BYTE)v8 != 83 )
          goto LABEL_6;
        if ( !v5 )
        {
          v6 = qword_2CD44C0;
          v5 = 64;
          ++qword_2CD44C0;
          v8 = (unsigned __int8)*v6;
          if ( (_BYTE)v8 != 85 )
            continue;
        }
        goto LABEL_36;
      }
      a2 = 129;
      goto LABEL_28;
    }
    if ( v5 )
      goto LABEL_36;
    qword_2CD44C0 = v6 + 2;
    v8 = (unsigned __int8)v6[1];
    if ( (_BYTE)v8 == 85 )
      goto LABEL_36;
    if ( (char)v8 <= 85 )
      break;
    v6 = (char *)v7;
    v5 = 32;
LABEL_26:
    if ( (_BYTE)v8 != 86 )
      goto LABEL_6;
    a2 = 130;
LABEL_28:
    p_i = &i;
  }
  if ( (_BYTE)v8 == 67 )
  {
    v5 = 32;
    a2 = 129;
    goto LABEL_28;
  }
  if ( (_BYTE)v8 == 83 )
    goto LABEL_36;
  v6 = (char *)v7;
  v5 = 32;
LABEL_6:
  qword_2CD44C0 = v6;
  if ( (_WORD)i )
  {
    p_i = &i;
    a2 = 32;
    sub_76FD20(&i, 32);
    v6 = qword_2CD44C0;
  }
  v7 = (unsigned __int8)*v6;
  v8 = (unsigned int)(v7 - 48);
  if ( (unsigned __int8)(v7 - 48) <= 9u || (qword_2CD44C0 = v6 + 1, v8 = (unsigned int)*v6, *v6 == 71) )
  {
    v9 = sub_760F20(nullptr, a2, v8, v7, a5);
    goto LABEL_10;
  }
  if ( !*v6 || *v6 == 95 )
  {
    qword_2CD44C0 = v6;
  }
  else
  {
    if ( *v6 != 116 )
    {
      if ( (unsigned __int8)(*v6 - 98) <= 0x16u )
      {
        v8 = (int)v8 - 98;
        a2 = byte_23B7E80[v8];
        if ( (_BYTE)a2 )
        {
          if ( (unsigned __int8)a2 >= v5 )
          {
            sub_770800(&i, v5 | a2 & 0x1F);
            return i;
          }
        }
      }
LABEL_36:
      sub_76E6C0(p_i, a2, v8, v7);
    }
    if ( !byte_2CCCDA8 )
      goto LABEL_36;
    v9 = sub_761C50(0);
LABEL_10:
    a2 = (__int64)&v12;
    p_i = &i;
    v12 = v9;
    sub_770B70(&i, &v12);
    if ( byte_2CD44A1 > 0 )
    {
      p_i = &i;
      sub_770D00(&i);
      ++byte_2CD44A1;
    }
  }
  if ( v5 )
    goto LABEL_36;
  return i;
}
