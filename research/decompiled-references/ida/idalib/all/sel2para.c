__int64 __fastcall sel2para(unsigned __int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r11
  _QWORD *v7; // r9
  __int64 result; // rax

  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1760LL);
  if ( a1 == *(_QWORD *)(v1 + 8) )
    return *(_QWORD *)(v1 + 16);
  v2 = *(_QWORD *)(v1 + 32);
  *(_QWORD *)(v1 + 8) = a1;
  v3 = sub_50D020(*(_QWORD **)(v1 + 24), *(_QWORD *)(v1 + 24) + 16 * v2, a1);
  if ( v7 != v3 && v4 == *v3 )
    v4 = v3[1];
  *(_QWORD *)(v5 + 16) = v4;
  result = -1;
  if ( v4 != -1 )
    return v4 & (*(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL) >> 4);
  return result;
}
