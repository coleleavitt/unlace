__int64 __fastcall sub_835270(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v6; // rdx
  bool v7; // dl

  v3 = *a1;
  v4 = a2;
  result = sub_2575D20(a1, a2, a3);
  v6 = a1;
  if ( v3 == result )
    v6 = (_QWORD *)a1[1];
  v7 = (*((_BYTE *)v6 + 20) & 8) != 0;
  if ( *a2 == result )
    v4 = (_QWORD *)a2[1];
  if ( ((*((_BYTE *)v4 + 20) & 8) != 0) != v7 )
  {
    if ( v3 == result )
      return sub_257D180();
    else
      return sub_2577530();
  }
  return result;
}

