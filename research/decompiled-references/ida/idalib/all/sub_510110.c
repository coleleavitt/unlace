__int64 __fastcall sub_510110(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r10
  __int64 v3; // r9
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r11
  _QWORD *v9; // r9
  __int64 result; // rax

  v2 = *(_QWORD **)(*(_QWORD *)a1 + 1760LL);
  if ( v2[1] == a2 )
    return v2[2];
  v3 = v2[4];
  v4 = (_QWORD *)v2[3];
  v2[1] = a2;
  v5 = sub_50D020(v4, (__int64)&v4[2 * v3], a2);
  if ( v5 != v9 && *v5 == v6 )
    v6 = v5[1];
  *(_QWORD *)(v7 + 16) = v6;
  result = -1;
  if ( v6 != -1 )
    return v6 & (*(_QWORD *)(*(_QWORD *)(v8 + 24) + 16LL) >> 4);
  return result;
}
