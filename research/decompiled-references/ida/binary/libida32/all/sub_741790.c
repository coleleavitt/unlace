__int64 __fastcall sub_741790(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int *v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  int v14; // eax
  char *v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // al
  unsigned int v21; // eax
  __int64 v22; // rdx
  char v23; // cl
  unsigned int v24; // eax
  __int64 v25; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  int *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v38; // [rsp+20h] [rbp-48h] BYREF
  int v39; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  sub_74E4D0(a1, a2, a3, a4, a5);
  v37 = 0;
  sub_74EA60(&v37);
  if ( byte_2CAA5A1 > 0 )
    sub_750840(&v37);
  if ( a1 )
    *a1 = v37;
  v5 = 60;
  sub_74F860(&v37, 60);
  v6 = 1;
  v12 = sub_73FAB0(1, 60, v7, v8, v9);
  while ( 1 )
  {
    v15 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 == 90 )
    {
      ++qword_2CAA5C0;
      v14 = sub_740E40((unsigned int *)v6, v5, (__int64)(v15 + 1), v11, v13);
      v5 = (__int64)&v39;
      v39 = v14;
      sub_7506B0(&v37, &v39);
      goto LABEL_7;
    }
    v16 = sub_740E40((unsigned int *)v6, v5, v10, v11, v13);
    v5 = (__int64)qword_2CAA5C0;
    v38 = v16;
    if ( v15 < qword_2CAA5C0 )
      break;
LABEL_7:
    if ( !--v12 )
      goto LABEL_30;
LABEL_8:
    v6 = (__int64)&v37;
    sub_750750(&v37);
  }
  while ( 1 )
  {
    v20 = *v15;
    if ( *v15 > 84 )
      break;
    if ( v20 <= 66 )
      goto LABEL_17;
    v6 = 1LL << (v20 - 67);
    v18 = v6;
    if ( (v6 & 0x11409) == 0 )
    {
      BYTE1(v18) = BYTE1(v6) & 0xA0;
      if ( (v6 & 0xA000) != 0 )
      {
LABEL_37:
        v30 = &v38;
        sub_7506B0(&v37, &v38);
        if ( (_WORD)v38 && (_WORD)v37 )
        {
          v30 = (int *)&qword_20;
          sub_74F860(&v37, 32);
        }
        v5 = (unsigned int)sub_73FAB0(1, (__int64)v30, v31, v32, v33);
        sub_74EA60(&v37);
        goto LABEL_7;
      }
      if ( v20 == 84 )
LABEL_54:
        sub_74E200(v6, v5, v17, v18);
LABEL_17:
      v21 = *qword_2CAA5C0;
      if ( *qword_2CAA5C0 == 109 )
      {
        sub_74F860(&v37, 45);
        v5 = (__int64)(qword_2CAA5C0 + 1);
        qword_2CAA5C0 = (char *)v5;
        v21 = *(char *)v5;
      }
      for ( LODWORD(v22) = 0; v21 <= 0x7F; v21 = *(char *)(v5 + v22) )
      {
        if ( v21 - 48 > 9 )
          break;
        v22 = (unsigned int)(v22 + 1);
      }
      goto LABEL_29;
    }
LABEL_31:
    if ( ++v15 == qword_2CAA5C0 )
      goto LABEL_7;
  }
  switch ( v20 )
  {
    case 'U':
    case 'V':
      goto LABEL_31;
    case 'b':
      v27 = sub_74E4D0(v6, qword_2CAA5C0, v17, v18, v19);
      if ( v27 > 1 )
        goto LABEL_54;
      if ( v27 )
      {
        v28 = 4;
        v29 = 1702195828;
LABEL_36:
        sub_74F810(&v39, v29, v28);
        v5 = (__int64)&v39;
        sub_7506B0(&v37, &v39);
      }
      else
      {
        sub_74F560(&v39, "false", 5);
        v5 = (__int64)&v39;
        sub_7506B0(&v37, &v39);
      }
      goto LABEL_7;
    case 'c':
      if ( *qword_2CAA5C0 == 109 )
      {
        v5 = 45;
        v6 = (__int64)&v37;
        sub_74F860(&v37, 45);
        ++qword_2CAA5C0;
      }
      v34 = sub_74E4D0(v6, v5, v17, v18, v19);
      if ( !v34 )
        goto LABEL_54;
      v28 = 3;
      v29 = (unsigned __int16)((_WORD)v34 << 8) | 0x270027u;
      goto LABEL_36;
    case 'd':
    case 'f':
    case 'r':
      v23 = *qword_2CAA5C0;
      if ( *qword_2CAA5C0 == 109 )
      {
        sub_74F860(&v37, 45);
        v5 = (__int64)++qword_2CAA5C0;
        v23 = *qword_2CAA5C0;
      }
      v24 = v23;
      LODWORD(v22) = 0;
      if ( (unsigned int)v23 > 0x7F )
        goto LABEL_29;
      break;
    case 'p':
      goto LABEL_37;
    case 'v':
      goto LABEL_54;
    default:
      goto LABEL_17;
  }
  while ( v24 - 48 <= 9 )
  {
    v25 = (unsigned int)(v22 + 1);
    v24 = *(char *)(v5 + v25);
    LODWORD(v22) = v22 + 1;
    v23 = *(_BYTE *)(v5 + v25);
    if ( v24 > 0x7F )
      goto LABEL_28;
  }
  v25 = (unsigned int)v22;
  if ( v23 != 46 )
  {
LABEL_28:
    if ( *(_BYTE *)(v5 + v25) == 101 )
    {
      do
      {
        v22 = (unsigned int)(v22 + 1);
        v35 = *(char *)(v5 + v22);
      }
      while ( v35 <= 0x7F && v35 - 48 <= 9 );
    }
    goto LABEL_29;
  }
  while ( 1 )
  {
    v25 = (unsigned int)(v22 + 1);
    v36 = *(char *)(v5 + v25);
    LODWORD(v22) = v22 + 1;
    if ( v36 > 0x7F )
      break;
    if ( v36 - 48 > 9 )
      goto LABEL_28;
  }
LABEL_29:
  v5 = (unsigned int)v22;
  sub_74EA60(&v37);
  if ( --v12 )
    goto LABEL_8;
LABEL_30:
  sub_74F860(&v37, 62);
  return v37;
}

