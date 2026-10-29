__int64 __fastcall sub_745F50(__int64 a1, unsigned int *a2)
{
  char *v2; // rdx
  char *v3; // rcx
  unsigned int v5; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = sub_74E340(0);
  v2 = qword_2CAA5C0;
  v3 = ++qword_2CAA5C0;
  if ( !*v2 )
LABEL_9:
    sub_74E200(0, a2, v2, v3);
  switch ( *v2 )
  {
    case '0':
      sub_750340(&v5, 6);
      goto LABEL_3;
    case '1':
      sub_74F560(&v6, "(__segment)__self", 17);
      sub_7506B0(&v5, &v6);
      goto LABEL_3;
    case '2':
      v6 = sub_745EC0(0, a2, (__int64)v2, v3);
      sub_7506B0(&v5, &v6);
      goto LABEL_3;
    case '5':
      goto LABEL_9;
    case '7':
      if ( (v2[1] & 0xBF) != 0 )
      {
        sub_74F560(&v6, "__segname(\"", 11);
        sub_7506B0(&v5, &v6);
        sub_74F120(&v6, 0);
        sub_7506B0(&v5, &v6);
        sub_74F810(&v6, 2238754, 3);
        sub_7506B0(&v5, &v6);
      }
      goto LABEL_3;
    default:
LABEL_3:
      sub_750270(&v5, 8233);
      return v5;
  }
}

