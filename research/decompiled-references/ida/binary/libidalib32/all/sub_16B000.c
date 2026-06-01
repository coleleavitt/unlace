__int64 __fastcall sub_16B000(__int64 a1)
{
  unsigned __int64 v1; // r15
  const char *v2; // r13
  unsigned __int64 v3; // rbx
  unsigned int v4; // ebx
  int v6; // r14d
  const char *v7; // rax
  int utf8_char; // eax
  const char *v9; // [rsp+0h] [rbp-68h]
  const char *v10; // [rsp+8h] [rbp-60h] BYREF
  const char *v11; // [rsp+10h] [rbp-58h] BYREF
  __int128 v12; // [rsp+18h] [rbp-50h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v12 = 0;
  v11 = nullptr;
  if ( sub_15DC00(a1, (__int64)&v11, 0) > 0 )
  {
    if ( !*(_QWORD *)(a1 + 480) )
      sub_1582F0(a1);
    v1 = *(__int16 *)(a1 + 468);
    v2 = s1;
    if ( (_QWORD)v12 )
      v2 = v11;
    v3 = qustrlen();
    if ( v3 < v1 )
    {
LABEL_6:
      LODWORD(v10) = v3;
      sub_16ACA0(a1, (unsigned __int64)&v10, 0);
      v4 = 1;
      goto LABEL_7;
    }
    v9 = v2;
    skip_utf8();
    v6 = 0;
    if ( v1 >= v3 )
      goto LABEL_20;
LABEL_11:
    v7 = v9;
    while ( 1 )
    {
      v10 = v7;
      utf8_char = get_utf8_char();
      if ( utf8_char == -1 )
      {
LABEL_19:
        if ( v6 == 1 )
          goto LABEL_21;
LABEL_20:
        v6 = 1;
        if ( v1 >= v3 )
        {
LABEL_21:
          LODWORD(v3) = v1;
          goto LABEL_6;
        }
        goto LABEL_11;
      }
      if ( v6 != 1 )
        break;
      if ( utf8_char != 32 )
        goto LABEL_13;
LABEL_14:
      v7 = v10;
      ++v1;
      v9 = v10;
      if ( v3 == v1 )
        goto LABEL_19;
    }
    if ( utf8_char == 32 )
      goto LABEL_19;
LABEL_13:
    if ( v6 )
      goto LABEL_21;
    goto LABEL_14;
  }
  v4 = 0;
LABEL_7:
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v4;
}

