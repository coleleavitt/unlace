__int64 __fastcall sub_756CF0(char a1)
{
  char *v1; // rax
  int v2; // r12d
  unsigned int v3; // r13d
  unsigned int v5; // [rsp+0h] [rbp-48h] BYREF
  int v6; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-40h]

  v7 = __readfsqword(0x28u);
  v5 = 0;
  v1 = ++qword_2CD44C0;
  if ( *qword_2CD44C0 == 113 )
  {
    v2 = 0;
    v3 = 0;
    while ( 2 )
    {
      qword_2CD44C0 = v1 + 2;
      switch ( v1[1] )
      {
        case 'c':
          v1 += 2;
          v2 = 2;
          v3 = 1;
          goto LABEL_7;
        case 'f':
          v1 += 2;
          v2 = 3;
          v3 = 10;
          goto LABEL_7;
        case 'g':
          if ( (dword_2CD44CC & 0x120) != 0 )
          {
            if ( !a1 )
              goto LABEL_22;
LABEL_21:
            dword_2CD44C8 |= 0x10u;
            goto LABEL_22;
          }
          v5 = sub_76E800(12);
          if ( a1 )
            goto LABEL_21;
LABEL_22:
          v1 = qword_2CD44C0;
LABEL_7:
          if ( *v1 == 113 )
            continue;
          if ( v2 && (dword_2CD44CC & 0x120) == 0 )
          {
            v6 = sub_76E800(v3);
            v5 = sub_771320(&v6, &v5);
          }
          break;
        case 'i':
          v1 += 2;
          v2 = 9;
          v3 = 11;
          goto LABEL_7;
        case 'm':
          v1 += 2;
          v2 = 10;
          v3 = 8;
          goto LABEL_7;
        case 'p':
          v1 += 2;
          v2 = 3;
          v3 = 2;
          goto LABEL_7;
        case 'r':
          v1 += 2;
          v2 = 5;
          v3 = 5;
          goto LABEL_7;
        case 's':
          v1 += 2;
          v2 = 4;
          v3 = 4;
          goto LABEL_7;
        case 'y':
          v1 += 2;
          v2 = 8;
          v3 = 9;
          goto LABEL_7;
        default:
          byte_2CD44A1 = 1;
          return v5;
      }
      break;
    }
  }
  else
  {
    v2 = 0;
  }
  if ( a1 )
  {
    if ( !v2 )
      v2 = 1;
    dword_2CD44C8 |= v2;
  }
  return v5;
}
