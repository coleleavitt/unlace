__int64 __fastcall sub_21E7D60(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx
  __int64 v4; // rax
  _WORD *v5; // rcx

  v2 = sub_227BF10(a2, a1[1], a1[2]);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v2 + 24) )
  {
    v2 = sub_227BA10(v2, 58);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 58;
  }
  v4 = sub_227B930(v2, a1[5]);
  v5 = *(_WORD **)(v4 + 32);
  if ( *(_QWORD *)(v4 + 24) - (_QWORD)v5 > 1u )
  {
    *v5 = 8250;
    *(_QWORD *)(v4 + 32) += 2LL;
  }
  else
  {
    v4 = sub_227BF10(v4, ": ", 2);
  }
  return sub_227BF10(v4, a1[6], a1[7]);
}
