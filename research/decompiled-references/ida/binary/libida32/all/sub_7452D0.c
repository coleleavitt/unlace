__int64 __fastcall sub_7452D0(unsigned int *a1, unsigned int *a2)
{
  char *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  int v7; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v8; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6 = 0;
  v2 = qword_2CAA5C0++;
  v3 = (unsigned __int8)*v2;
  if ( (_BYTE)v3 != 65 )
  {
    if ( (char)v3 <= 65 )
    {
      if ( !(_BYTE)v3 )
        goto LABEL_15;
      if ( (_BYTE)v3 == 36 )
      {
        v3 = (__int64)(v2 + 2);
        qword_2CAA5C0 = v2 + 2;
        if ( v2[1] == 36 )
        {
          v3 = (__int64)(v2 + 3);
          qword_2CAA5C0 = v2 + 3;
          switch ( v2[2] )
          {
            case 'A':
              return sub_744860(a1, a2, (__int64)&qword_2CAA5C0, (char *)v3);
            case 'B':
              return sub_745080((int *)a1, 1, (char *)&qword_2CAA5C0);
            case 'C':
              v7 = 0;
              v8 = sub_7460D0(a1, 0, &v7, 0);
              return sub_744CA0(&v8, 0);
            case 'Q':
              goto LABEL_20;
            case 'R':
              sub_74FB30(&v6);
              if ( *(_WORD *)a1 )
              {
                if ( (_WORD)v6 )
                  sub_74F860(&v6, 32);
              }
LABEL_20:
              v4 = 127;
              goto LABEL_10;
            case 'T':
              sub_74F560(&v8, "std::nullptr_t", 14);
              return v8;
            default:
              break;
          }
        }
LABEL_15:
        sub_74E200(a1, a2, &qword_2CAA5C0, v3);
      }
      goto LABEL_12;
    }
    if ( (_BYTE)v3 != 66 )
    {
LABEL_12:
      qword_2CAA5C0 = v2;
      return sub_744CA0(a1, (unsigned __int64)a2);
    }
    sub_74FB30(&v6);
    if ( *(_WORD *)a1 && (_WORD)v6 )
      sub_74F860(&v6, 32);
  }
  v4 = 38;
LABEL_10:
  v8 = *a1;
  BYTE2(v8) |= 1u;
  return sub_744BA0((__int64)&v6, (__int64)&v8, v4, v3);
}

