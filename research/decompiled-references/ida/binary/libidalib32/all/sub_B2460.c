__int64 __fastcall sub_B2460(unsigned int *a1, unsigned int a2, int a3, char a4)
{
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf

  v5 = a1[42];
  if ( v5 == -1 )
  {
    v7 = a1[43];
    if ( v7 == -1 )
      goto LABEL_10;
    if ( a3 != 1 )
    {
LABEL_6:
      v8 = sub_AEF10(xmmword_250E60, 3u, *a1, v7);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 24) = a2;
        if ( qword_250F40 )
          qword_250F40(xmmword_250E60, v8);
      }
    }
LABEL_9:
    a1[43] = -1;
    goto LABEL_10;
  }
  if ( a3 == 1 )
  {
    sub_B1080();
    v10 = a1[43] == -1;
    a1[42] = -1;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v6 = sub_AEF10(xmmword_250E60, 2u, *a1, v5);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 24) = a2;
    if ( qword_250F40 )
    {
      qword_250F40(xmmword_250E60, v6);
      v7 = a1[43];
      a1[42] = -1;
      if ( v7 == -1 )
        goto LABEL_10;
      goto LABEL_6;
    }
  }
  a1[42] = -1;
  v7 = a1[43];
  if ( v7 != -1 )
    goto LABEL_6;
LABEL_10:
  result = sub_D1220(&qword_2511A0);
  if ( *(_DWORD *)(result + 8) != -1 )
  {
    result = sub_D1290(&qword_2511A0);
    if ( (_BYTE)result )
    {
      a1[42] = a2;
    }
    else if ( (a4 & 1) != 0 )
    {
      result = sub_D10D0(&qword_2511A0);
      if ( (_BYTE)result )
        a1[43] = a2;
    }
  }
  return result;
}

