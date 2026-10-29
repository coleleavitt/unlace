_QWORD *__fastcall sub_164F10(__int64 a1, void *a2, const __m128i *a3, int a4)
{
  __int64 v5; // rbp
  _QWORD *result; // rax

  v5 = a4;
  sub_F93A0(a1, a2);
  *(_QWORD *)a1 = &off_23B4B8;
  *(_QWORD *)(a1 + 72) = &off_23B7A0;
  *(_QWORD *)(a1 + 104) = off_23B7B8;
  *(_QWORD *)(a1 + 160) = off_23B7E8;
  *(_DWORD *)(a1 + 1200) = v5;
  *(_QWORD *)(a1 + 1208) = 0;
  sub_162290(a1, a3);
  result = (_QWORD *)qstrdup();
  *(_QWORD *)(a1 + 1216) = result;
  if ( (_DWORD)v5 != -1 )
  {
    qword_2542C0[v5] = a1;
    return qword_2542C0;
  }
  return result;
}

