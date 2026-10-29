__int64 sub_75FD40()
{
  char *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  const unsigned __int16 *v4; // rdx
  __int64 v5; // rcx
  char *v7; // rbp
  char v8; // bl
  const unsigned __int16 **v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // eax
  char v12; // [rsp+7h] [rbp-A41h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-A40h] BYREF
  _BYTE v14[4]; // [rsp+Ch] [rbp-A3Ch] BYREF
  char *v15; // [rsp+10h] [rbp-A38h] BYREF
  int v16; // [rsp+18h] [rbp-A30h]
  char v17; // [rsp+20h] [rbp-A28h] BYREF
  char v18; // [rsp+220h] [rbp-828h] BYREF
  int v19; // [rsp+A20h] [rbp-28h]
  unsigned __int64 v20; // [rsp+A28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v13 = 0;
  v19 = 0;
  v15 = &v17;
  v16 = 0x400000;
  xmmword_2CCCD90 = (__int128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)&v15, (__m128i)(unsigned __int64)&v18);
  byte_2CD44A0 = sub_76F0B0(1);
  if ( (unsigned __int8)byte_2CD44A0 <= 1u )
  {
    v12 = 1;
    byte_2CCCD70 = 0;
    qword_2CD44C0 += 11;
    v0 = (char *)sub_76F070();
    if ( !v0 )
    {
      sub_76EF20(&v13);
      goto LABEL_4;
    }
  }
  else
  {
    v12 = 2;
    byte_2CCCD70 = 0;
    v0 = (char *)sub_76F070();
    if ( !v0 )
      goto LABEL_4;
  }
  qword_2CD44C0 = v0;
  v13 = sub_75ECE0((int *)&v12, 0, v1, v2, v3);
  if ( v12 == 3 )
  {
    v7 = qword_2CD44C0;
    v8 = *qword_2CD44C0;
    if ( *qword_2CD44C0 == 46 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = v7[1];
          if ( !v8 || (unsigned int)v8 > 0x7F )
            goto LABEL_10;
          ++v7;
          if ( (unsigned int)(v8 - 48) > 9 )
            break;
          do
          {
            v11 = *++v7;
            v8 = v11;
            if ( v11 > 0x7F )
              goto LABEL_10;
          }
          while ( v11 - 48 <= 9 );
          if ( (_BYTE)v11 != 46 )
            goto LABEL_17;
        }
        v9 = __ctype_b_loc();
        v4 = *v9;
        if ( ((*v9)[v8] & 0x200) != 0 || v8 == 95 )
          break;
LABEL_16:
        if ( v8 != 46 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v10 = *++v7;
        v8 = v10;
        if ( v10 > 0x7F )
          break;
        if ( (v4[(char)v10] & 0x200) == 0 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_17:
      if ( !v8 )
      {
        qword_2CD44C0 = v7;
        sub_76FA20(v14, " [clone]", 8);
        sub_770B70(&v13, v14);
        goto LABEL_4;
      }
    }
LABEL_10:
    sub_76E6C0(&v12, 0, v4, v5);
  }
LABEL_4:
  sub_76F2E0(&v13);
  return v13;
}
