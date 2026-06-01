_BYTE *__fastcall sub_E92400(__int64 *a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi

  result = (_BYTE *)sub_971800(*a1, "partial");
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 )
  {
    v5 = *a1;
    v6 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_2257CD0(v5, 40);
    }
    else
    {
      *(_QWORD *)(v5 + 32) = v6 + 1;
      *v6 = 40;
    }
    v7 = sub_E90F10();
    sub_EE3EC0(v4, *a1, 0, a1[1], 0, 0, (__int64)"\n", v7);
    v8 = *a1;
    result = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
    {
      return (_BYTE *)sub_2257CD0(v8, 41);
    }
    else
    {
      *(_QWORD *)(v8 + 32) = result + 1;
      *result = 41;
    }
  }
  return result;
}

