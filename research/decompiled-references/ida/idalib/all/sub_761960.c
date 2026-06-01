__int64 __fastcall sub_761960(unsigned int *a1, int *a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  char v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  char *v8; // rax
  __int64 v9; // rdx
  char v10; // al
  int v11; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // [rsp+8h] [rbp-60h]
  char v16; // [rsp+18h] [rbp-50h]
  _BOOL4 v17; // [rsp+1Ch] [rbp-4Ch]
  int v18; // [rsp+20h] [rbp-48h] BYREF
  int v19; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v16 = (char)a1;
  v20 = __readfsqword(0x28u);
  v18 = 0;
  if ( !*qword_2CD44C0 )
  {
    sub_76FCD0(&v19, 1684631414, 4);
    v18 = v19;
    goto LABEL_18;
  }
  if ( *qword_2CD44C0 == 95 )
  {
LABEL_18:
    v6 = 0;
    goto LABEL_19;
  }
  v5 = (char)a1;
  v6 = 1;
  v7 = 0;
  v19 = 0;
  while ( 1 )
  {
    v8 = qword_2CD44C0++;
    v9 = (unsigned __int8)*v8;
    if ( (_BYTE)v9 == 84 )
    {
      v15 = 1;
LABEL_25:
      v17 = byte_2CCCDA8 == 0;
      v13 = sub_75FF70(byte_2CCCDA8 == 0, (__int64)a2, (__int64)&byte_2CD44A1, (__int64)a4, a5);
      if ( byte_2CD44A1 > 0 )
      {
        v19 = 0;
LABEL_27:
        if ( (_WORD)v19 )
          goto LABEL_28;
LABEL_32:
        sub_770D00(&v18);
LABEL_29:
        ++byte_2CD44A1;
        goto LABEL_19;
      }
      v14 = *(_DWORD *)sub_772CD0(qword_2CD44D0, (unsigned int)(v13 - v17), &byte_2CD44A1, &qword_2CD44D0);
      v10 = byte_2CD44A1;
      v19 = v14;
      goto LABEL_8;
    }
    if ( (_BYTE)v9 == 101 )
      break;
    if ( (_BYTE)v9 == 78 )
    {
      v15 = sub_75FF70(byte_2CCCDA8 == 0 ? -1 : 1, (__int64)a2, v9, (__int64)a4, a5);
      if ( byte_2CD44A1 > 0 )
      {
        if ( !(_WORD)v19 )
          goto LABEL_32;
LABEL_28:
        sub_770B70(&v18, &v19);
        goto LABEL_29;
      }
      goto LABEL_25;
    }
    qword_2CD44C0 = v8;
    v15 = 1;
    v19 = sub_761300(a1, (__int64)a2, v9, a4, a5);
    v10 = byte_2CD44A1;
LABEL_8:
    if ( v10 > 0 )
      goto LABEL_27;
    v11 = v15;
    while ( 1 )
    {
      a2 = &v19;
      sub_770B70(&v18, &v19);
      if ( v5 )
        break;
      if ( !--v11 )
        goto LABEL_14;
LABEL_11:
      sub_770C10(&v18);
    }
    a2 = &v19;
    sub_772B70(qword_2CD44D0, &v19);
    if ( --v11 )
      goto LABEL_11;
LABEL_14:
    v7 += v15;
    if ( !*qword_2CD44C0 || *qword_2CD44C0 == 95 )
    {
      v6 = v7;
LABEL_19:
      if ( v16 )
      {
LABEL_20:
        if ( v6 > 0xFF )
          v6 = 255;
        dword_2CD44C8 |= (v6 << 8) | 1;
      }
      return sub_772CF0(&v18);
    }
    a1 = (unsigned int *)&v18;
    v19 = 0;
    v6 = v7 + 1;
    sub_770C10(&v18);
  }
  if ( v16 )
  {
    dword_2CD44C8 |= 0x10000u;
    sub_770800(&v18, 1);
    goto LABEL_20;
  }
  sub_770800(&v18, 1);
  return sub_772CF0(&v18);
}
