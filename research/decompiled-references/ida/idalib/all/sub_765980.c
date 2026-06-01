__int64 __fastcall sub_765980(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, int a6)
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
  unsigned __int8 v38; // [rsp+Fh] [rbp-C9h]
  unsigned __int8 v39; // [rsp+Fh] [rbp-C9h]
  int v40; // [rsp+1Ch] [rbp-BCh] BYREF
  unsigned int v41; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+24h] [rbp-B4h] BYREF
  unsigned int v43; // [rsp+28h] [rbp-B0h] BYREF
  unsigned int v44; // [rsp+2Ch] [rbp-ACh] BYREF
  _DWORD v45[26]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v6 = -1;
  v46 = __readfsqword(0x28u);
  v41 = 0;
  byte_2CCCDAA = 1;
  if ( (*qword_2CD44C0 & 0xBF) != 0 )
  {
    do
    {
      if ( ++v6 )
      {
        a1 = &v41;
        sub_770C10(&v41);
        v7 = qword_2CD44C0;
        v8 = (unsigned __int8)*qword_2CD44C0;
        if ( (unsigned __int8)(v8 - 48) <= 9u )
        {
LABEL_11:
          qword_2CD44C0 = v7 + 1;
          a1 = &v41;
          a2 = (unsigned int *)sub_772CD0(qword_2CCCDB8, (unsigned int)(*v7 - 48), v7 + 1, v8);
          sub_770B70(&v41, a2);
          v14 = qword_2CD44C0;
          continue;
        }
      }
      else
      {
        v7 = qword_2CD44C0;
        v8 = (unsigned __int8)*qword_2CD44C0;
        if ( (unsigned __int8)(v8 - 48) <= 9u )
          goto LABEL_11;
      }
      v42 = 0;
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
            qword_2CD44C0 = v14;
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
        sub_76FA20(&v44, "`template-parameter'", 20);
        v42 = v44;
        v44 = sub_763320(&v44, (__int64)"`template-parameter'", v17, v18);
        sub_770B70(&v42, &v44);
      }
      else if ( v9 == 88 )
      {
        qword_2CD44C0 = v7 + 1;
        sub_770800(&v41, 6);
      }
      else if ( v9 != 36 || v7[1] == 36 )
      {
        v44 = 0;
        v42 = sub_765790(&v44, a2);
      }
      else
      {
        v11 = v7 + 2;
        v43 = 0;
        qword_2CD44C0 = v7 + 2;
        v12 = (unsigned __int8)v7[1];
        v13 = (unsigned __int8)(v12 - 48);
        switch ( (char)v12 )
        {
          case '0':
          case '2':
          case 'D':
          case 'Q':
            v38 = v7[1];
            v19 = sub_763320(a1, v13, (__int64)v11, (char *)v12);
            v12 = v38;
            v43 = v19;
            switch ( v38 )
            {
              case '0':
                goto LABEL_30;
              case '2':
                if ( !(_WORD)v43 )
LABEL_52:
                  sub_76E6C0(a1, v13, v11, v12);
                v40 = 100;
                v45[0] = 0;
                v33 = (_BYTE *)sub_76EED0(&v43, (char *)v45 + 1, &v40);
                v35 = 46;
                v36 = (int)v33;
                LOBYTE(v45[0]) = BYTE1(v45[0]);
                if ( BYTE1(v45[0]) == 45 )
                {
                  v35 = BYTE2(v45[0]);
                  BYTE2(v45[0]) = 46;
                }
                BYTE1(v45[0]) = v35;
                *v33 = 101;
                v43 = sub_763320(&v43, (__int64)v45 + 1, v35, v34);
                sub_76FC00(&v44, v45, v36 + 1 - (unsigned int)v45);
                break;
              case 'D':
                sub_76FA20(&v44, "`template-parameter'", 20);
                break;
              default:
                sub_76FA20(&v44, "`non-type-template-parameter'", 29);
                break;
            }
            v19 = sub_771320(&v44, &v43);
LABEL_30:
            v20 = v19;
            v21 = v19;
            v22 = HIBYTE(v19);
            v23 = HIWORD(v20);
            break;
          case '1':
            v11 = v7 + 3;
            v31 = v7[2] == 64;
            qword_2CD44C0 = v7 + 3;
            if ( v31 )
            {
              sub_76FCD0(&v44, 1280070990, 4);
              v21 = v44;
              v22 = HIBYTE(v44);
              v23 = HIWORD(v44);
            }
            else
            {
              if ( v7[2] != 63 )
                goto LABEL_52;
              v43 = sub_763530(-1, (unsigned int *)v13);
              v32 = sub_7713D0(38, &v43);
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
                qword_2CD44C0 = v11;
                v13 = (char)v26 + 16 * v13;
                v26 = *v11 - 65;
              }
              while ( v26 <= 0xFu );
            }
            a1 = (unsigned int *)(v27 + 2);
            qword_2CD44C0 = (char *)a1;
            if ( *v11 != 64 )
              goto LABEL_52;
            for ( i = (int)qsnprintf((unsigned int)v45, 32, (unsigned int)"%lf", v12, a5, a6);
                  i > 2 && *((_BYTE *)v45 + i - 1) == 48 && *((_BYTE *)&v44 + i + 2) != 46;
                  --i )
            {
              ;
            }
            sub_76FC00(&v44, v45, i);
            v21 = v44;
            LOBYTE(v23) = BYTE2(v44);
            LOBYTE(v22) = HIBYTE(v44);
            break;
          case 'E':
          case 'H':
          case 'I':
          case 'J':
            v11 = v7 + 3;
            v39 = v7[1];
            qword_2CD44C0 = v7 + 3;
            if ( v7[2] != 63 )
              goto LABEL_52;
            v19 = sub_763530(-1, (unsigned int *)v13);
            v43 = v19;
            if ( v39 == 69 )
              goto LABEL_30;
            a1 = &v43;
            sub_770C10(&v43);
            v12 = v39;
            if ( v39 != 72 )
            {
              if ( v39 == 74 )
              {
LABEL_57:
                v37 = sub_763320(a1, v13, (__int64)v11, (char *)v12);
                v13 = (__int64)&v44;
                v44 = v37;
                sub_770B70(&v43, &v44);
                a1 = &v43;
                sub_770C10(&v43);
              }
LABEL_35:
              v24 = sub_763320(a1, v13, (__int64)v11, (char *)v12);
              v13 = (__int64)&v44;
              v44 = v24;
              sub_770B70(&v43, &v44);
              sub_770C10(&v43);
            }
            v44 = sub_763320(&v43, v13, (__int64)v11, (char *)v12);
            sub_770B70(&v43, &v44);
            v25 = sub_7731A0(&v43);
            v21 = v25;
            v22 = HIBYTE(v25);
            v23 = HIWORD(v25);
            break;
          case 'F':
            goto LABEL_35;
          case 'G':
            goto LABEL_57;
          case 'R':
            v43 = sub_766190(1);
            sub_763320((unsigned int *)((char *)&dword_0 + 1), v13, v29, v30);
            v21 = v43;
            v22 = HIBYTE(v43);
            v23 = HIWORD(v43);
            break;
          default:
            v13 = (unsigned int)(v12 - 48);
            goto LABEL_52;
        }
        LOWORD(v42) = v21;
        BYTE2(v42) = v23;
        HIBYTE(v42) = v22;
      }
      if ( v10 < (unsigned __int64)qword_2CD44C0 )
        sub_772B00(qword_2CCCDB8, &v42);
      a2 = &v42;
      a1 = &v41;
      sub_770B70(&v41, &v42);
      v14 = qword_2CD44C0;
    }
    while ( (*v14 & 0xBF) != 0 );
  }
  byte_2CCCDAA = 0;
  return v41;
}
