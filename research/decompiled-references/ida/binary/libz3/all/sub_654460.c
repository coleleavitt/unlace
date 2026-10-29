_QWORD *__fastcall sub_654460(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v2)(_QWORD *); // rax

  sub_654200(a2, 0);
  v2 = *(void (__fastcall **)(_QWORD *))(**(_QWORD **)(a2 + 2976) + 128LL);
  if ( (char *)v2 == (char *)sub_39A230 )
    *a1 = 0;
  else
    v2(a1);
  return a1;
}

