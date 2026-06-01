__int64 __fastcall sub_746D00(unsigned int *a1)
{
  __int64 v1; // rsi
  char *v3; // r14
  unsigned __int64 v4; // rdi
  char *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned int *v8; // rsi
  unsigned int *v9; // rax
  _BYTE *v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // r8d
  _BYTE *v14; // r9
  unsigned int v15; // r10d
  int v17; // r15d
  unsigned int v18; // r11d
  int v19; // r10d
  int v20; // r13d
  int v21; // eax
  int v22; // r14d
  int v23; // r15d
  unsigned int v24; // r9d
  int v25; // r8d
  unsigned int v26; // edx
  int v27; // edx
  unsigned int v28; // edx
  int v29; // r8d
  unsigned int v30; // edx
  unsigned int v31; // edi
  unsigned int v32; // eax
  int i; // eax
  __int64 v34; // rdi
  int v35; // [rsp+Ch] [rbp-3Ch]

  v1 = 95;
  v3 = qword_2CAA5C0;
  v4 = (unsigned __int64)qword_2CAA5C0;
  v5 = strrchr(qword_2CAA5C0, 95);
  v7 = (unsigned __int64)a1;
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = (unsigned int)*v3;
      if ( *v3 < 0 )
        goto LABEL_40;
      *(_DWORD *)v7 = v6;
      v6 = (unsigned __int64)(v3 + 1);
      v7 += 4LL;
      if ( v3 + 1 >= v5 )
        break;
      ++v3;
    }
    qword_2CAA5C0 = v3 + 2;
    if ( !v3[2] )
      goto LABEL_7;
    v3 += 2;
    v7 = (__int64)(v7 - (_QWORD)a1) >> 2;
    v17 = v7;
  }
  else
  {
    v17 = 0;
    if ( !*v3 )
      return 0;
  }
  v35 = v17;
  v18 = 128;
  v19 = 72;
  v20 = 0;
  while ( 2 )
  {
    v4 = (unsigned __int64)(v3 + 1);
    qword_2CAA5C0 = v3 + 1;
    v21 = *v3;
    if ( !*v3 )
      goto LABEL_40;
    v22 = v20;
    v23 = v19 + 26;
    v1 = 36;
    v24 = 36 - v19;
    v25 = 1;
    while ( 1 )
    {
      v26 = v21 - 97;
      if ( (unsigned int)(v21 - 97) <= 0x19 )
        break;
      v6 = (unsigned int)(v21 - 65);
      if ( (unsigned int)v6 > 9 )
        goto LABEL_40;
      v26 = v21 - 39;
      v7 = (unsigned int)(v22 + v25 * (v21 - 39));
      v22 += v25 * (v21 - 39);
      if ( v19 < (int)v1 )
      {
        if ( v23 <= (int)v1 )
        {
          v27 = 10;
          goto LABEL_27;
        }
        goto LABEL_44;
      }
      v27 = 35;
LABEL_27:
      v25 *= v27;
      v6 = v4 + 1;
      v1 = (unsigned int)(v1 + 36);
      v24 += 36;
      qword_2CAA5C0 = (char *)(v4 + 1);
      v21 = *(char *)v4;
      if ( !*(_BYTE *)v4 )
        goto LABEL_40;
      ++v4;
    }
    v7 = v22 + v25 * v26;
    v22 += v25 * v26;
    if ( v19 >= (int)v1 )
    {
      v32 = 1;
      goto LABEL_42;
    }
    if ( v23 <= (int)v1 )
      goto LABEL_32;
LABEL_44:
    v32 = v24;
LABEL_42:
    if ( v26 >= v32 )
    {
      v27 = 36 - v32;
      goto LABEL_27;
    }
LABEL_32:
    v1 = (unsigned int)(v35 + 1);
    if ( v20 )
      v28 = v7 - v20;
    else
      v28 = (unsigned int)v7 / 0x15E;
    v29 = 0;
    v30 = (v28 >> 1) + (v28 >> 1) / (unsigned int)v1;
    if ( v30 > 0x1C7 )
    {
      do
      {
        v29 += 36;
        v31 = v30;
        v30 /= 0x23u;
      }
      while ( v31 > 0x3E57 );
    }
    v4 = v30 + 38;
    v19 = 36 * ((unsigned int)v7 % (unsigned int)v1) / (unsigned int)v4 + v29;
    v6 = (unsigned int)v7 % (unsigned int)v1;
    v18 += (unsigned int)v7 / (unsigned int)v1;
    if ( v18 <= 0x7F )
      goto LABEL_40;
    if ( v18 > 0xD7FF )
    {
      if ( v18 <= 0xD87F )
      {
        v18 -= 55296;
      }
      else if ( v18 - 57344 > 0x1F1FFF )
      {
        goto LABEL_40;
      }
    }
    for ( i = v35; (int)v6 <= i; a1[(int)v7] = v4 )
    {
      v34 = i;
      LODWORD(v7) = i-- + 1;
      v4 = a1[v34];
      v7 = (int)v7;
    }
    v20 = v6 + 1;
    a1[(int)v6] = v18;
    v3 = qword_2CAA5C0;
    if ( *qword_2CAA5C0 )
    {
      ++v35;
      continue;
    }
    break;
  }
  v7 = (unsigned __int64)&a1[v1];
  if ( !v7 )
LABEL_40:
    sub_74E200(v4, v1, v6, v7);
LABEL_7:
  if ( (unsigned __int64)a1 >= v7 )
    return 0;
  v8 = a1;
  v9 = a1;
  do
  {
    while ( 1 )
    {
      v11 = *v8;
      if ( *v8 > 0x7F )
        break;
      ++v8;
      *(_BYTE *)v9 = v11;
      v9 = (unsigned int *)((char *)v9 + 1);
      if ( (unsigned __int64)v8 >= v7 )
        return (unsigned int)((_DWORD)v9 - (_DWORD)a1);
    }
    v12 = v11 >> 6;
    if ( v11 <= 0x7FF )
    {
      v10 = (char *)v9 + 1;
      *(_BYTE *)v9 = v12 | 0xC0;
    }
    else
    {
      v13 = v11 >> 12;
      if ( v11 > 0xFFFF )
      {
        v14 = (char *)v9 + 2;
        *((_BYTE *)v9 + 1) = v13 & 0x3F | 0x80;
        v15 = (v11 >> 18) | 0xFFFFFFF0;
      }
      else
      {
        v14 = (char *)v9 + 1;
        LOBYTE(v15) = v13 | 0xE0;
      }
      *(_BYTE *)v9 = v15;
      v10 = v14 + 1;
      *v14 = v12 & 0x3F | 0x80;
    }
    ++v8;
    v9 = (unsigned int *)(v10 + 1);
    *v10 = v11 & 0x3F | 0x80;
  }
  while ( (unsigned __int64)v8 < v7 );
  return (unsigned int)((_DWORD)v9 - (_DWORD)a1);
}

