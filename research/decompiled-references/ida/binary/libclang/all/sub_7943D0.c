_QWORD *__fastcall sub_7943D0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *result; // rax
  _QWORD *v9; // rax

  v5 = a2[274];
  v6 = a1 + a4 + 8;
  a2[284] += v6;
  v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v6 + v7 && v5 )
  {
    a2[274] = v6 + v7;
    result = (_QWORD *)(v7 + 8);
    *(result - 1) = a3;
  }
  else
  {
    v9 = (_QWORD *)sub_792ED0((__int64)(a2 + 274), v6, 3);
    *v9 = a3;
    return v9 + 1;
  }
  return result;
}

