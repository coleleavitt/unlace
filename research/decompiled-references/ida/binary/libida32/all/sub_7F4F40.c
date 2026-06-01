__int64 __fastcall sub_7F4F40(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v3; // eax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  char *v11; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx

  v3 = dword_2CAAADC;
  *a3 = 0;
  if ( v3 )
  {
    v11 = (char *)qword_2CAAAF0 + 40 * (int)(a1 % qword_2CAAAF8);
    v16 = *((_QWORD *)v11 + 1);
    if ( a1 == v16 )
    {
      *a2 = v11;
      return 0;
    }
    else
    {
      if ( a1 >= v16 || v16 == -1 )
        goto LABEL_4;
      return 4294949587LL;
    }
  }
  else
  {
    v5 = qword_2CAAAF0;
    v6 = 0;
    if ( !qword_2CAAAF8 )
    {
LABEL_3:
      v7 = (_QWORD *)xmmword_2CAAAE0;
      v8 = *(_QWORD **)(xmmword_2CAAAE0 + 8);
      v9 = *(_QWORD *)xmmword_2CAAAE0;
      *(_QWORD *)(v9 + 8) = v8;
      *v8 = v9;
      v10 = *((_QWORD **)&xmmword_2CAAAE0 + 1);
      v11 = (char *)(v7 - 3);
      *((_QWORD *)&xmmword_2CAAAE0 + 1) = v7;
      *v10 = v7;
      *v7 = &xmmword_2CAAAE0;
      v7[1] = v10;
LABEL_4:
      *a3 = 1;
      ++dword_2CAAAD0;
      *a2 = v11;
      *((_QWORD *)v11 + 1) = -1;
      return 0;
    }
    while ( a1 != v5[1] )
    {
      ++v6;
      v5 += 5;
      if ( v6 == qword_2CAAAF8 )
        goto LABEL_3;
    }
    v13 = v5[3];
    v14 = (_QWORD *)v5[4];
    *(_QWORD *)(v13 + 8) = v14;
    *v14 = v13;
    v15 = *((_QWORD **)&xmmword_2CAAAE0 + 1);
    *((_QWORD *)&xmmword_2CAAAE0 + 1) = v5 + 3;
    *v15 = v5 + 3;
    v5[4] = v15;
    v5[3] = &xmmword_2CAAAE0;
    *a2 = v5;
    return 0;
  }
}

