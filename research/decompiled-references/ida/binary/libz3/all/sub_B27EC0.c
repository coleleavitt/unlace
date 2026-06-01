int *__fastcall sub_B27EC0(int *a1, int *a2)
{
  int v2; // edx
  int v3; // eax
  _BOOL4 v4; // eax
  int v5; // eax
  void *v6; // rbp
  unsigned int v8; // eax
  _BOOL4 v9; // eax
  int v10; // eax
  int v11; // edx
  _BOOL4 v12; // eax
  int *v13; // rdx
  void *v14; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  if ( *a1 != 1 )
  {
    v3 = *a2;
    if ( *a2 != 1 )
    {
      if ( v2 )
        v4 = v3 != 0;
      else
        v4 = v3 == 0;
      v5 = 2 * v4;
LABEL_6:
      *a1 = v5;
LABEL_7:
      v6 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, a1 + 2);
      sub_182CBA0(v6, a1 + 6);
      *((_BYTE *)a1 + 28) &= ~1u;
      a1[6] = 1;
      return a1;
    }
    v8 = a2[2];
    if ( v8 )
    {
      if ( v2 )
        v9 = (v8 & 0x80000000) == 0;
      else
        v9 = v8 >> 31;
      v5 = 2 * v9;
      goto LABEL_6;
    }
LABEL_20:
    *a1 = 1;
    goto LABEL_7;
  }
  v10 = a1[2];
  if ( !v10 )
    return a1;
  v11 = *a2;
  if ( *a2 != 1 )
  {
    if ( v10 < 0 )
      v12 = v11 == 0;
    else
      v12 = v11 != 0;
    v5 = 2 * v12;
    goto LABEL_6;
  }
  if ( !a2[2] )
    goto LABEL_20;
  v13 = a2 + 2;
  if ( (a1[7] & 1) == 0 && a1[6] == 1 && (a2[7] & 1) == 0 && a2[6] == 1 )
  {
    v14 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, a1 + 2, v13);
    sub_182CBA0(v14, a1 + 6);
    *((_BYTE *)a1 + 28) &= ~1u;
    a1[6] = 1;
    return a1;
  }
  sub_1848FF0(qword_1C7F2C0, a1 + 2, v13);
  return a1;
}

