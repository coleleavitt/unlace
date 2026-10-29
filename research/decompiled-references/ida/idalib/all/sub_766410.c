__int64 __fastcall sub_766410(__int64 a1, unsigned int *a2)
{
  char *v2; // rdx
  char *v3; // rcx
  unsigned int v5; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = sub_76E800(0);
  v2 = qword_2CD44C0;
  v3 = ++qword_2CD44C0;
  if ( !*v2 )
LABEL_9:
    sub_76E6C0(0, a2, v2, v3);
  switch ( *v2 )
  {
    case '0':
      sub_770800(&v5, 6);
      goto LABEL_3;
    case '1':
      sub_76FA20(&v6, "(__segment)__self", 17);
      sub_770B70(&v5, &v6);
      goto LABEL_3;
    case '2':
      v6 = sub_766380(0, a2, (__int64)v2, v3);
      sub_770B70(&v5, &v6);
      goto LABEL_3;
    case '5':
      goto LABEL_9;
    case '7':
      if ( (v2[1] & 0xBF) != 0 )
      {
        sub_76FA20(&v6, "__segname(\"", 11);
        sub_770B70(&v5, &v6);
        sub_76F5E0(&v6, 0);
        sub_770B70(&v5, &v6);
        sub_76FCD0(&v6, 2238754, 3);
        sub_770B70(&v5, &v6);
      }
      goto LABEL_3;
    default:
LABEL_3:
      sub_770730(&v5, 8233);
      return v5;
  }
}
