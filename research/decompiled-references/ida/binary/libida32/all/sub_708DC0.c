_QWORD *__fastcall sub_708DC0(__int64 a1)
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
  sub_708C90(v2, (__int64)&unk_2C57C40);
  sub_708C90(v2, (__int64)&unk_2C57BE0);
  return v2;
}

