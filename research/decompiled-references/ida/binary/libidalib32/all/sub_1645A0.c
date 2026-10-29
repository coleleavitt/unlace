_QWORD *__fastcall sub_1645A0(__int64 a1, void *a2, const __m128i *a3, int a4)
{
  __int64 v5; // rbp
  _QWORD *result; // rax

  v5 = a4;
  sub_F91A0(a1, a2);
  *(_QWORD *)a1 = &off_23A4B8;
  *(_QWORD *)(a1 + 72) = &off_23A7A0;
  *(_QWORD *)(a1 + 104) = off_23A7B8;
  *(_QWORD *)(a1 + 160) = off_23A7E8;
  *(_DWORD *)(a1 + 1192) = v5;
  *(_QWORD *)(a1 + 1200) = 0;
  sub_161970(a1, a3);
  result = (_QWORD *)qstrdup();
  *(_QWORD *)(a1 + 1208) = result;
  if ( (_DWORD)v5 != -1 )
  {
    qword_253100[v5] = a1;
    return qword_253100;
  }
  return result;
}

