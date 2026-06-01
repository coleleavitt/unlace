__int64 __fastcall sub_737310(char a1)
{
  int v1; // r12d
  __int64 v2; // rdx
  char *v3; // r15
  unsigned int v4; // eax
  __int64 v5; // rcx
  int v6; // esi
  __int64 v7; // rsi
  char v8; // r15
  const unsigned __int16 **v10; // rax
  char v11; // [rsp+3h] [rbp-195h]
  __int64 v12; // [rsp+8h] [rbp-190h]
  unsigned int v13; // [rsp+14h] [rbp-184h] BYREF
  int v14; // [rsp+18h] [rbp-180h] BYREF
  int v15; // [rsp+1Ch] [rbp-17Ch] BYREF
  char *v16; // [rsp+20h] [rbp-178h] BYREF
  int v17; // [rsp+28h] [rbp-170h]
  char v18; // [rsp+30h] [rbp-168h] BYREF
  unsigned __int64 v19; // [rsp+158h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  sub_74F400(&v13, 40);
  if ( *qword_2CAA5C0 == 118 )
  {
    sub_750340(&v13, 6);
    ++qword_2CAA5C0;
  }
  else
  {
    v1 = 0;
    v17 = 2359296;
    v16 = &v18;
    v14 = 0;
    v12 = unk_2CAA5D0;
    unk_2CAA5D0 = &v16;
    v15 = sub_736A40();
    if ( (_WORD)v15 )
      goto LABEL_29;
    while ( 1 )
    {
      v3 = qword_2CAA5C0;
      if ( *qword_2CAA5C0 == 116 )
      {
        ++qword_2CAA5C0;
        v4 = v3[1];
        v5 = v4;
        if ( v4 > 0x7F )
          goto LABEL_31;
        if ( v4 - 48 > 9 )
        {
          v11 = v3[1];
          v10 = __ctype_b_loc();
          v5 = v11;
          if ( ((*v10)[v11] & 0x200) == 0 )
            goto LABEL_31;
          qword_2CAA5C0 = v3 + 2;
          v6 = v3[1] - 87;
        }
        else
        {
          qword_2CAA5C0 = v3 + 2;
          v6 = v3[1] - 48;
        }
        v7 = (unsigned int)(v6 - 1);
        if ( byte_2CA2E58
          && *(unsigned __int16 *)(unk_2CAA5D0 + 8LL) <= (int)v7
          && qword_2CA2E60 - (__int64)qword_2CAA5C0 <= 119 )
        {
          qword_2CAA5C0 = (char *)qword_2CAA5B8;
LABEL_31:
          byte_2CAA5A1 = 1;
          goto LABEL_12;
        }
        v14 = *(_DWORD *)sub_752810(unk_2CAA5D0, v7, v2, v5);
      }
      else
      {
        v14 = sub_736AE0(a1);
        if ( byte_2CAA5A1 )
          goto LABEL_12;
      }
      ++v1;
      sub_752720(unk_2CAA5D0, &v14);
      sub_7506B0(&v13, &v15);
      sub_7506B0(&v13, &v14);
      v8 = *qword_2CAA5C0;
      if ( (unsigned int)*qword_2CAA5C0 > 0x7F )
        goto LABEL_12;
      if ( ((*__ctype_b_loc())[v8] & 8) == 0 )
        break;
      if ( (dword_2CAA5C8 & 0x10000) != 0 )
        goto LABEL_12;
      sub_750750(&v13);
      v15 = sub_736A40();
      if ( (_WORD)v15 )
LABEL_29:
        sub_74F860(&v15, 32);
    }
    if ( !v8 && a1 == -1 )
    {
      if ( !byte_2CAA5A1 )
        byte_2CAA5A1 = 1;
      unk_2CAA5D0 = v12;
      return v13;
    }
LABEL_12:
    unk_2CAA5D0 = v12;
    if ( a1 == 1 )
    {
      if ( v1 > 255 )
        v1 = 255;
      dword_2CAA5C8 |= v1 << 8;
    }
    if ( byte_2CAA5A1 )
      return v13;
  }
  sub_74F860(&v13, 41);
  return v13;
}

