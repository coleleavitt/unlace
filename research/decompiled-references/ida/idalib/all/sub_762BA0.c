__int64 __fastcall sub_762BA0(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rdx
  __int64 v6; // rsi
  char v8; // dl
  char v9; // cl
  char **v10; // r12
  char v11; // dl
  bool v12; // zf
  char *v13; // rax
  __int64 v14; // r13
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  LODWORD(v5) = 0;
  v16 = __readfsqword(0x28u);
  if ( *(_WORD *)qword_2CD44C0 == 24415 )
  {
    v6 = (unsigned __int8)qword_2CD44C0[2];
    switch ( (char)v6 )
    {
      case 'b':
        LODWORD(v5) = 0;
        if ( qword_2CD44C0[3] != 97 || qword_2CD44C0[4] != 115 || qword_2CD44C0[5] != 101 )
          return (unsigned int)v5;
        v5 = qword_2CD44C0 + 5;
        a4 = qword_2CD44C0 + 6;
        v10 = &off_2B38C30;
        goto LABEL_36;
      case 'c':
        v5 = nullptr;
        if ( qword_2CD44C0[3] != 111 || qword_2CD44C0[4] != 112 || qword_2CD44C0[5] != 121 )
          return (unsigned int)v5;
        qword_2CD44C0 += 6;
        goto LABEL_31;
      case 's':
        v11 = qword_2CD44C0[3];
        if ( v11 == 105 )
        {
          LODWORD(v5) = 0;
          if ( qword_2CD44C0[4] == 110 && qword_2CD44C0[5] == 105 && qword_2CD44C0[6] == 116 )
          {
            v13 = qword_2CD44C0 + 7;
            v14 = 6;
            goto LABEL_24;
          }
        }
        else
        {
          v12 = v11 == 116;
          LODWORD(v5) = 0;
          if ( v12 && qword_2CD44C0[4] == 101 && qword_2CD44C0[5] == 114 && qword_2CD44C0[6] == 109 )
          {
            v13 = qword_2CD44C0 + 7;
            v14 = 8;
LABEL_24:
            qword_2CD44C0 = v13;
            sub_76E990(a1, v6, 0, a4, a5);
            if ( *(_WORD *)qword_2CD44C0 == 24415 && qword_2CD44C0[2] == 70 )
            {
              qword_2CD44C0 += 2;
              v10 = &(&off_2B38BC0)[v14];
LABEL_37:
              sub_76FB60(&v15, v10);
              sub_770B70(a1, &v15);
              dword_2CD44C8 |= 0x80000u;
              LODWORD(v5) = 1;
              return (unsigned int)v5;
            }
LABEL_31:
            sub_4B3580((int)"Unusual C++ mangled name for VA.", v6, v5, a4);
          }
        }
        return (unsigned int)v5;
      case 't':
        v5 = nullptr;
        if ( qword_2CD44C0[3] != 101
          || qword_2CD44C0[4] != 109
          || qword_2CD44C0[5] != 112
          || *(_DWORD *)(qword_2CD44C0 + 6) == 1701667182
          && *(_DWORD *)(qword_2CD44C0 + 10) == 1920233567
          && !qword_2CD44C0[14] )
        {
          return (unsigned int)v5;
        }
        qword_2CD44C0 += 6;
        goto LABEL_31;
      case 'v':
        v8 = qword_2CD44C0[3];
        if ( v8 == 102 )
        {
          LODWORD(v5) = 0;
          if ( qword_2CD44C0[4] != 116 )
            return (unsigned int)v5;
          v10 = &off_2B38C50;
          qword_2CD44C0 += 5;
          dword_2CD44C8 |= 0xA0u;
          goto LABEL_37;
        }
        if ( v8 == 116 )
        {
          LODWORD(v5) = 0;
          if ( qword_2CD44C0[4] != 116 )
            return (unsigned int)v5;
          v5 = qword_2CD44C0 + 4;
          a4 = qword_2CD44C0 + 5;
          v10 = &off_2B38BC0;
          goto LABEL_36;
        }
        if ( v8 != 98 )
          goto LABEL_3;
        v9 = qword_2CD44C0[4];
        v5 = qword_2CD44C0 + 4;
        if ( v9 == 97 )
        {
          LODWORD(v5) = 0;
          if ( qword_2CD44C0[5] == 115 && qword_2CD44C0[6] == 101 )
          {
            v5 = qword_2CD44C0 + 6;
            a4 = qword_2CD44C0 + 7;
            v10 = &off_2B38BD0;
            goto LABEL_36;
          }
        }
        else
        {
          if ( v9 == 112 )
          {
            a4 = qword_2CD44C0 + 5;
            v10 = &off_2B38C40;
            if ( qword_2CD44C0[5] == 99 && qword_2CD44C0[6] == 102 )
            {
              qword_2CD44C0 += 7;
              goto LABEL_31;
            }
LABEL_36:
            qword_2CD44C0 = a4;
            if ( v5[1] == 76 )
            {
              qword_2CD44C0 = v5 + 2;
              sub_76E990(a1, v6, v5 + 2, a4, a5);
              v15 = 0;
              sub_76EF20(&v15);
              if ( byte_2CD44A1 > 0 )
                sub_770D00(&v15);
              sub_770B70(a1, &v15);
            }
            goto LABEL_37;
          }
LABEL_3:
          LODWORD(v5) = 0;
        }
        break;
      default:
        goto LABEL_3;
    }
  }
  return (unsigned int)v5;
}
