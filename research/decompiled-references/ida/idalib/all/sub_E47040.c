__int64 __fastcall sub_E47040(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  __int64 v5; // rdi
  _WORD *v6; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_BYTE **)(v3 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
  {
    sub_227BA10(v3, 76);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = 76;
  }
  sub_E3FB80(a1, a2);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_WORD **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 <= 1u )
    return sub_227BF10(v5, "0E", 2);
  *v6 = 17712;
  *(_QWORD *)(v5 + 32) += 2LL;
  return 17712;
}
