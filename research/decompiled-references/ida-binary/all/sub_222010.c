__int64 __fastcall sub_222010(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned __int64 v5; // rcx
  int *v6; // rax
  unsigned __int64 v7; // rcx
  int *v8; // rax
  __int64 result; // rax
  bool v10; // zf

  v5 = *(_QWORD *)(a1 + 176);
  if ( v5 == -1 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    if ( v7 == -1 )
      goto LABEL_10;
    if ( a3 != 1 )
    {
LABEL_6:
      v8 = sub_21EBB0((__m128i *)qword_8CBAA0, 3u, *(_DWORD *)a1, v7);
      if ( v8 )
      {
        *((_QWORD *)v8 + 3) = a2;
        if ( qword_8CBB80 )
          qword_8CBB80(qword_8CBAA0, v8);
      }
    }
LABEL_9:
    *(_QWORD *)(a1 + 184) = -1;
    goto LABEL_10;
  }
  if ( a3 == 1 )
  {
    sub_220C40((signed int *)a1, *(_QWORD *)(a1 + 176));
    v10 = *(_QWORD *)(a1 + 184) == -1;
    *(_QWORD *)(a1 + 176) = -1;
    if ( v10 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v6 = sub_21EBB0((__m128i *)qword_8CBAA0, 2u, *(_DWORD *)a1, v5);
  if ( v6 )
  {
    *((_QWORD *)v6 + 3) = a2;
    if ( qword_8CBB80 )
    {
      qword_8CBB80(qword_8CBAA0, v6);
      v7 = *(_QWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 176) = -1;
      if ( v7 == -1 )
        goto LABEL_10;
      goto LABEL_6;
    }
  }
  v7 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 176) = -1;
  if ( v7 != -1 )
    goto LABEL_6;
LABEL_10:
  result = sub_2417E0(&qword_8CC120);
  if ( *(_QWORD *)(result + 16) != -1 )
  {
    result = sub_241850(&qword_8CC120);
    if ( (_BYTE)result )
    {
      *(_QWORD *)(a1 + 176) = a2;
    }
    else if ( (a4 & 1) != 0 )
    {
      result = sub_241680(&qword_8CC120);
      if ( (_BYTE)result )
        *(_QWORD *)(a1 + 184) = a2;
    }
  }
  return result;
}
