__int64 __fastcall sub_7454C0(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v6; // ebp
  char *v7; // rax
  __int64 v8; // rcx
  char v9; // dl
  unsigned __int64 v10; // r15
  char *v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  char *v14; // rax
  char v16; // dl
  __int64 v17; // rdx
  char *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int16 v21; // cx
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned __int8 v26; // al
  char *v27; // rdi
  unsigned __int64 i; // rdx
  __int64 v29; // rdx
  char *v30; // rcx
  bool v31; // zf
  unsigned int v32; // edx
  _BYTE *v33; // rax
  char *v34; // rcx
  __int64 v35; // rdx
  int v36; // r12d
  unsigned int v37; // eax
  char v38; // [rsp+0h] [rbp-D8h]
  unsigned __int8 v39; // [rsp+Fh] [rbp-C9h]
  unsigned __int8 v40; // [rsp+Fh] [rbp-C9h]
  int v41; // [rsp+1Ch] [rbp-BCh] BYREF
  unsigned int v42; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+24h] [rbp-B4h] BYREF
  unsigned int v44; // [rsp+28h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+2Ch] [rbp-ACh] BYREF
  _DWORD v46[26]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v6 = -1;
  v47 = __readfsqword(0x28u);
  v42 = 0;
  byte_2CA2EAA = 1;
  if ( (*qword_2CAA5C0 & 0xBF) != 0 )
  {
    do
    {
      if ( ++v6 )
      {
        a1 = &v42;
        sub_750750(&v42);
        v7 = qword_2CAA5C0;
        v8 = (unsigned __int8)*qword_2CAA5C0;
        if ( (unsigned __int8)(v8 - 48) <= 9u )
        {
LABEL_11:
          qword_2CAA5C0 = v7 + 1;
          a1 = &v42;
          a2 = (unsigned int *)sub_752810(qword_2CA2EB8, (unsigned int)(*v7 - 48), v7 + 1, v8);
          sub_7506B0(&v42, a2);
          v14 = qword_2CAA5C0;
          continue;
        }
      }
      else
      {
        v7 = qword_2CAA5C0;
        v8 = (unsigned __int8)*qword_2CAA5C0;
        if ( (unsigned __int8)(v8 - 48) <= 9u )
          goto LABEL_11;
      }
      v43 = 0;
      if ( *(_WORD *)v7 == 9252 )
      {
        v16 = v7[2];
        if ( v16 == 36 )
        {
          if ( v7[3] == 86 )
          {
            ++v7;
LABEL_16:
            v14 = v7 + 3;
            qword_2CAA5C0 = v14;
            continue;
          }
        }
        else if ( v16 == 86 )
        {
          goto LABEL_16;
        }
      }
      v9 = *v7;
      v10 = (unsigned __int64)(v7 + 1);
      if ( *v7 == 63 )
      {
        sub_74F560(&v45, "`template-parameter'", 20);
        v43 = v45;
        v45 = sub_742E60(&v45, (__int64)"`template-parameter'", v17, v18);
        sub_7506B0(&v43, &v45);
      }
      else if ( v9 == 88 )
      {
        qword_2CAA5C0 = v7 + 1;
        sub_750340(&v42, 6);
      }
      else if ( v9 != 36 || v7[1] == 36 )
      {
        v45 = 0;
        v43 = sub_7452D0(&v45, a2);
      }
      else
      {
        v11 = v7 + 2;
        v44 = 0;
        qword_2CAA5C0 = v7 + 2;
        v12 = (unsigned __int8)v7[1];
        v13 = (unsigned __int8)(v12 - 48);
        switch ( (char)v12 )
        {
          case '0':
          case '2':
          case 'D':
          case 'Q':
            v39 = v7[1];
            v19 = sub_742E60(a1, v13, (__int64)v11, (char *)v12);
            v12 = v39;
            v44 = v19;
            switch ( v39 )
            {
              case '0':
                goto LABEL_30;
              case '2':
                if ( !(_WORD)v44 )
LABEL_52:
                  sub_74E200(a1, v13, v11, v12);
                v41 = 100;
                v46[0] = 0;
                v33 = (_BYTE *)sub_74EA10(&v44, (char *)v46 + 1, &v41);
                v35 = 46;
                v36 = (int)v33;
                LOBYTE(v46[0]) = BYTE1(v46[0]);
                if ( BYTE1(v46[0]) == 45 )
                {
                  v35 = BYTE2(v46[0]);
                  BYTE2(v46[0]) = 46;
                }
                BYTE1(v46[0]) = v35;
                *v33 = 101;
                v44 = sub_742E60(&v44, (__int64)v46 + 1, v35, v34);
                sub_74F740(&v45, v46, v36 + 1 - (unsigned int)v46);
                break;
              case 'D':
                sub_74F560(&v45, "`template-parameter'", 20);
                break;
              default:
                sub_74F560(&v45, "`non-type-template-parameter'", 29);
                break;
            }
            v19 = sub_750E60(&v45, &v44);
LABEL_30:
            v20 = v19;
            v21 = v19;
            v22 = HIBYTE(v19);
            v23 = HIWORD(v20);
            break;
          case '1':
            v11 = v7 + 3;
            v31 = v7[2] == 64;
            qword_2CAA5C0 = v7 + 3;
            if ( v31 )
            {
              sub_74F810(&v45, 1280070990, 4);
              v21 = v45;
              v22 = HIBYTE(v45);
              v23 = HIWORD(v45);
            }
            else
            {
              if ( v7[2] != 63 )
                goto LABEL_52;
              v44 = sub_743070(-1, (unsigned int *)v13);
              v32 = sub_750F10(38, &v44);
              v21 = v32;
              v22 = HIBYTE(v32);
              v23 = HIWORD(v32);
            }
            break;
          case 'A':
          case 'B':
            v26 = v7[2] - 65;
            if ( v26 > 0xFu )
            {
              v27 = (char *)v10;
              v13 = 0;
            }
            else
            {
              v13 = 0;
              do
              {
                v27 = v11++;
                qword_2CAA5C0 = v11;
                v13 = (char)v26 + 16 * v13;
                v26 = *v11 - 65;
              }
              while ( v26 <= 0xFu );
            }
            a1 = (unsigned int *)(v27 + 2);
            qword_2CAA5C0 = (char *)a1;
            if ( *v11 != 64 )
              goto LABEL_52;
            for ( i = (int)qsnprintf((int)v46, 32, (int)"%lf", v12, a5, a6, v38);
                  i > 2 && *((_BYTE *)v46 + i - 1) == 48 && *((_BYTE *)&v45 + i + 2) != 46;
                  --i )
            {
              ;
            }
            sub_74F740(&v45, v46, i);
            v21 = v45;
            LOBYTE(v23) = BYTE2(v45);
            LOBYTE(v22) = HIBYTE(v45);
            break;
          case 'E':
          case 'H':
          case 'I':
          case 'J':
            v11 = v7 + 3;
            v40 = v7[1];
            qword_2CAA5C0 = v7 + 3;
            if ( v7[2] != 63 )
              goto LABEL_52;
            v19 = sub_743070(-1, (unsigned int *)v13);
            v44 = v19;
            if ( v40 == 69 )
              goto LABEL_30;
            a1 = &v44;
            sub_750750(&v44);
            v12 = v40;
            if ( v40 != 72 )
            {
              if ( v40 == 74 )
              {
LABEL_57:
                v37 = sub_742E60(a1, v13, (__int64)v11, (char *)v12);
                v13 = (__int64)&v45;
                v45 = v37;
                sub_7506B0(&v44, &v45);
                a1 = &v44;
                sub_750750(&v44);
              }
LABEL_35:
              v24 = sub_742E60(a1, v13, (__int64)v11, (char *)v12);
              v13 = (__int64)&v45;
              v45 = v24;
              sub_7506B0(&v44, &v45);
              sub_750750(&v44);
            }
            v45 = sub_742E60(&v44, v13, (__int64)v11, (char *)v12);
            sub_7506B0(&v44, &v45);
            v25 = sub_752CE0(&v44);
            v21 = v25;
            v22 = HIBYTE(v25);
            v23 = HIWORD(v25);
            break;
          case 'F':
            goto LABEL_35;
          case 'G':
            goto LABEL_57;
          case 'R':
            v44 = sub_745CD0(1);
            sub_742E60((unsigned int *)((char *)&dword_0 + 1), v13, v29, v30);
            v21 = v44;
            v22 = HIBYTE(v44);
            v23 = HIWORD(v44);
            break;
          default:
            v13 = (unsigned int)(v12 - 48);
            goto LABEL_52;
        }
        LOWORD(v43) = v21;
        BYTE2(v43) = v23;
        HIBYTE(v43) = v22;
      }
      if ( v10 < (unsigned __int64)qword_2CAA5C0 )
        sub_752640(qword_2CA2EB8, &v43);
      a2 = &v43;
      a1 = &v42;
      sub_7506B0(&v42, &v43);
      v14 = qword_2CAA5C0;
    }
    while ( (*v14 & 0xBF) != 0 );
  }
  byte_2CA2EAA = 0;
  return v42;
}

