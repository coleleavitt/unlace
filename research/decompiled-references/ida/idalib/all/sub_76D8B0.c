__int64 __fastcall sub_76D8B0(int *a1, int *a2)
{
  int *v2; // r12
  char *v3; // rax
  unsigned int v4; // ebx
  char *v6; // rax
  char v7; // r13
  char v8; // dl
  unsigned __int64 i; // rbx
  unsigned int v10; // eax
  const __int32_t **v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int32_t v14; // eax
  int v15; // [rsp+8h] [rbp-50h] BYREF
  int v16; // [rsp+Ch] [rbp-4Ch] BYREF
  int v17; // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v2 = a1;
  v15 = 0;
  v3 = qword_2CD44C0++;
  if ( *qword_2CD44C0 != 58 )
  {
    if ( *qword_2CD44C0 == 63 )
    {
      qword_2CD44C0 = v3 + 2;
      v15 = sub_76DBB0(0);
      if ( (*((_BYTE *)a1 + 2) & 4) == 0 )
        goto LABEL_4;
    }
    else
    {
      v15 = sub_76CEC0();
      if ( (*((_BYTE *)a1 + 2) & 4) == 0 )
      {
LABEL_4:
        v4 = 1;
        goto LABEL_5;
      }
    }
    sub_770B70(a1, &v15);
    goto LABEL_4;
  }
  v16 = 0;
  v6 = v3 + 2;
  v7 = 0;
  v17 = 0;
  while ( 1 )
  {
    qword_2CD44C0 = v6 + 1;
    v8 = *v6;
    if ( *v6 == 49 )
    {
      v17 = sub_76CF50(nullptr, 0);
      goto LABEL_20;
    }
    if ( v8 == 63 )
    {
      v17 = sub_76DBB0(0);
      if ( !v7 )
        goto LABEL_21;
      goto LABEL_29;
    }
    if ( v8 != 48 )
      break;
    for ( i = 0; ; i = v10 | (32 * i) )
    {
      v10 = sub_76CE80(a1, a2);
      if ( v10 > 0x1F )
        break;
    }
    v11 = __ctype_toupper_loc();
    v13 = (unsigned __int8)*(qword_2CD44C0 - 1);
    v14 = (*v11)[v13];
    if ( v14 == 89 )
    {
      i = -(__int64)i;
      sub_76F8C0(&v18, 45);
      v17 = v18;
    }
    else if ( v14 != 90 )
    {
      sub_76E6C0(a1, a2, v13, v12);
    }
    sub_76ECC0(&v18, i);
    sub_770B70(&v17, &v18);
LABEL_20:
    if ( !v7 )
      goto LABEL_21;
LABEL_29:
    sub_770C10(&v16);
LABEL_21:
    a2 = &v17;
    a1 = &v16;
    v7 = 1;
    sub_770B70(&v16, &v17);
    v6 = qword_2CD44C0;
  }
  qword_2CD44C0 = v6;
  v4 = 0;
  v18 = sub_773010(&v16);
  sub_770B70(v2, &v18);
LABEL_5:
  if ( *qword_2CD44C0 == 58 )
    sub_76D8B0(&v15);
  if ( *(_WORD *)v2 )
  {
    if ( (_WORD)v15 )
      sub_771030(v2, &v15);
  }
  else
  {
    *v2 = v15;
  }
  return v4;
}
