__int64 __fastcall sub_73E280(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // r15
  bool v6; // r14
  int v7; // ebx
  char v8; // al
  char *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  char *v15; // rax
  char v16; // al
  __int64 v17; // [rsp+0h] [rbp-68h]
  int *v18; // [rsp+8h] [rbp-60h]
  char v19; // [rsp+1Fh] [rbp-49h] BYREF
  int v20; // [rsp+20h] [rbp-48h] BYREF
  int v21; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v18 = a1;
  v5 = qword_2CAA5C0;
  v22 = __readfsqword(0x28u);
  ++BYTE2(xmmword_2CA2E80);
  v20 = 0;
  v19 = 0;
  if ( (DWORD1(xmmword_2CA2E80) & 0x700000) == 0x300000 )
  {
    v15 = ++qword_2CAA5C0;
    if ( *v5 != 118 )
      goto LABEL_35;
    goto LABEL_27;
  }
  if ( *qword_2CAA5C0 == 118 )
  {
    a1 = &v21;
    a2 = 1684631414;
    ++qword_2CAA5C0;
    sub_74F810(&v21, 1684631414, 4);
    v20 = v21;
    v15 = qword_2CAA5C0;
LABEL_27:
    v16 = *v15;
    if ( !v16 || v16 == 69 )
      goto LABEL_32;
    a3 = (__int64)v18;
    if ( v18 && v16 == 46 )
    {
      *(_BYTE *)v18 = 3;
LABEL_32:
      v7 = 0;
      goto LABEL_19;
    }
LABEL_35:
    sub_74E200(a1, a2, a3, a4);
  }
  v6 = a1 != nullptr;
  v7 = 0;
  while ( 1 )
  {
    if ( *(_WORD *)v5 != 28740 )
    {
      if ( v7 )
        goto LABEL_14;
      goto LABEL_5;
    }
    v9 = v5 + 2;
    qword_2CAA5C0 = v5 + 2;
    a4 = (unsigned __int8)v5[2];
    if ( (_BYTE)a4 != 84 )
    {
      if ( v5[3] != 84 || (_BYTE)a4 != 79 && (_BYTE)a4 != 82 )
        goto LABEL_13;
      v9 = v5 + 3;
    }
    qword_2CAA5C0 = v9 + 1;
    v17 = xmmword_2CA2E90;
    v10 = sub_73BCE0(xmmword_2CA2E90, a2, a3, a4, a5);
    if ( !*(_WORD *)sub_752810(v17, v10, v11, v12) )
      goto LABEL_19;
LABEL_13:
    qword_2CAA5C0 = v5;
    if ( v7 )
LABEL_14:
      sub_750750(&v20);
LABEL_5:
    ++v7;
    a2 = (__int64)&v21;
    a1 = &v20;
    v21 = sub_73D7A0((unsigned int *)&v19, 0, a3, a4, a5);
    sub_7506B0(&v20, &v21);
    v5 = qword_2CAA5C0;
    v8 = *qword_2CAA5C0;
    if ( !*qword_2CAA5C0 || v8 == 69 )
      goto LABEL_19;
    if ( v8 == 46 && v6 )
      break;
    if ( v19 )
      goto LABEL_35;
  }
  *(_BYTE *)v18 = 3;
LABEL_19:
  --BYTE2(xmmword_2CA2E80);
  if ( !(_DWORD)xmmword_2CA2E80 )
  {
    v13 = DWORD1(xmmword_2CA2E80);
    if ( v19 )
    {
      --v7;
      v13 = DWORD1(xmmword_2CA2E80) | 0x10000;
    }
    if ( v7 > 255 )
      v7 = 255;
    DWORD1(xmmword_2CA2E80) = v13 | (v7 << 8) | 1;
  }
  return sub_752830(&v20);
}

