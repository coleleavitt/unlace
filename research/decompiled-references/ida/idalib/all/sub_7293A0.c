_QWORD *__fastcall sub_7293A0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx

  v1 = (_QWORD *)operator new(0x38u);
  *v1 = a1;
  v2 = v1;
  v1[1] = qmutex_create();
  v2[2] = 0;
  v2[3] = 0;
  *((_BYTE *)v2 + 48) = 0;
  *((_OWORD *)v2 + 2) = 0;
  sub_729270(v2, (__int64)&unk_2C81B40);
  sub_729270(v2, (__int64)&unk_2C81AE0);
  return v2;
}
