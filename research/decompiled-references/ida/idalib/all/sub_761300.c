__int64 __fastcall sub_761300(unsigned int *a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  unsigned int v5; // r15d
  char *v6; // rdx
  char *v7; // rbx
  char v8; // r14
  char v9; // al
  char *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  int v15; // eax
  char *v16; // rbx
  int v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v5 = 0;
  v19 = __readfsqword(0x28u);
  v17 = 0;
  v6 = qword_2CD44C0;
  while ( 2 )
  {
    v7 = v6 + 1;
    qword_2CD44C0 = v6 + 1;
    v8 = *v6;
    switch ( *v6 )
    {
      case 'A':
        if ( !v5 )
        {
          a1 = (unsigned int *)&v17;
          sub_772CF0(&v17);
          v7 = qword_2CD44C0;
        }
        v18 = 0;
        while ( 2 )
        {
          while ( 2 )
          {
            if ( *v7 != 95 )
            {
              if ( *v7 )
              {
                ++v7;
                continue;
              }
              if ( !byte_2CD44A1 )
LABEL_62:
                sub_76E6C0(a1, a2, v6, a4);
              qword_2CD44C0 = v7;
LABEL_56:
              byte_2CD44A1 = 1;
              v18 = 0;
LABEL_35:
              if ( (_WORD)v17 )
              {
LABEL_36:
                sub_770D00(&v18);
                ++byte_2CD44A1;
                if ( (_WORD)v18 )
                  goto LABEL_37;
                goto LABEL_10;
              }
              return v18;
            }
            break;
          }
          sub_76FD20(&v18, 91);
          sub_76EF20(&v18);
          a2 = 93;
          a1 = &v18;
          sub_76FD20(&v18, 93);
          v16 = qword_2CD44C0++;
          if ( *qword_2CD44C0 == 65 )
          {
            v7 = v16 + 2;
            qword_2CD44C0 = v7;
            continue;
          }
          break;
        }
        a2 = (__int64)&v18;
        v5 = 0;
        a1 = (unsigned int *)&v17;
        sub_770B70(&v17, &v18);
        v6 = qword_2CD44C0;
        continue;
      case 'C':
        a2 = 65;
        v5 = 0;
        a1 = (unsigned int *)&v17;
        sub_76FFF0(&v17);
        v6 = qword_2CD44C0;
        continue;
      case 'F':
        if ( v5 )
          sub_772CF0(&v17);
        a1 = (unsigned int *)&v17;
        a2 = (__int64)&v18;
        v18 = sub_761960(0);
        sub_770B70(&v17, &v18);
        if ( byte_2CD44A1 > 0 )
          goto LABEL_34;
        v6 = qword_2CD44C0;
        if ( *qword_2CD44C0 == 95 )
        {
          v6 = qword_2CD44C0 + 1;
          v5 = 0;
          continue;
        }
        if ( *qword_2CD44C0 )
          goto LABEL_62;
        goto LABEL_44;
      case 'G':
        ++v6;
        continue;
      case 'M':
      case 'O':
        sub_76E990(a1, a2, v6, a4, a5);
        v18 = 0;
        sub_76EF20(&v18);
        if ( byte_2CD44A1 > 0 )
          sub_770D00(&v18);
        a2 = (__int64)&v18;
        sub_771030(&v17, &v18);
        a1 = (unsigned int *)&v17;
        sub_772CF0(&v17);
        a4 = &v18;
        if ( byte_2CD44A1 <= 0 )
        {
          v6 = qword_2CD44C0;
          v5 = 0;
          if ( v8 == 77 )
          {
            a2 = (unsigned __int8)*qword_2CD44C0;
            if ( (_BYTE)a2 == 67 )
            {
              a1 = (unsigned int *)(qword_2CD44C0 + 1);
              v5 = 1;
              ++qword_2CD44C0;
              a2 = (unsigned __int8)*++v6;
            }
            if ( (_BYTE)a2 == 86 )
            {
              a1 = (unsigned int *)(v6 + 1);
              v5 |= 2u;
              qword_2CD44C0 = v6 + 1;
              a2 = (unsigned __int8)*++v6;
            }
            if ( !(_BYTE)a2 && byte_2CD44A1 )
              goto LABEL_56;
            qword_2CD44C0 = v6 + 1;
            if ( *v6 != 70 )
              goto LABEL_62;
            a2 = (__int64)&v18;
            a1 = (unsigned int *)&v17;
            v18 = sub_761960(0);
            sub_770B70(&v17, &v18);
            if ( byte_2CD44A1 > 0 )
            {
LABEL_34:
              v18 = 0;
              goto LABEL_35;
            }
            v11 = qword_2CD44C0;
            if ( !*qword_2CD44C0 && byte_2CD44A1 )
              goto LABEL_56;
            v6 = ++qword_2CD44C0;
            if ( *v11 != 95 )
              goto LABEL_62;
            if ( v5 )
            {
              a2 = v5;
              a1 = (unsigned int *)&v17;
              sub_76FFF0(&v17);
              v6 = qword_2CD44C0;
LABEL_44:
              v5 = 0;
            }
          }
          continue;
        }
        v9 = ++byte_2CD44A1;
LABEL_4:
        v18 = 0;
        if ( v9 > 0 )
          goto LABEL_35;
        if ( *qword_2CD44C0 == 81 )
        {
          ++qword_2CD44C0;
          v18 = sub_762050(0, 0);
        }
        else
        {
          v18 = sub_761080(a1, a2, (__int64)v6, (__int64)a4, a5);
        }
        if ( (_WORD)v17 )
        {
          if ( byte_2CD44A1 > 0 )
            goto LABEL_36;
          if ( (_WORD)v18 )
LABEL_37:
            sub_76FD20(&v18, 32);
LABEL_10:
          sub_770B70(&v18, &v17);
        }
        return v18;
      case 'P':
      case 'p':
        a1 = (_DWORD *)(&qword_28 + 2);
        ++v5;
        a2 = (__int64)&v17;
        v17 = sub_7713D0(42, &v17);
        goto LABEL_13;
      case 'R':
        a1 = (_DWORD *)(&qword_20 + 6);
        v5 = 0;
        a2 = (__int64)&v17;
        v15 = sub_7713D0(38, &v17);
        v6 = qword_2CD44C0;
        v17 = v15;
        continue;
      case 'T':
        v12 = sub_75FF70(0, a2, (__int64)v6, (__int64)a4, a5);
        v14 = 0;
        if ( byte_2CD44A1 <= 0 )
          v14 = *(_DWORD *)sub_772CD0(qword_2CD44D0, v12, &qword_2CD44D0, v13);
        v18 = v14;
        a2 = (__int64)&v18;
        a1 = (unsigned int *)&v17;
        sub_770B70(&v17, &v18);
        if ( byte_2CD44A1 > 0 )
          goto LABEL_34;
LABEL_13:
        v6 = qword_2CD44C0;
        continue;
      default:
        qword_2CD44C0 = v6;
        v9 = byte_2CD44A1;
        goto LABEL_4;
    }
  }
}
