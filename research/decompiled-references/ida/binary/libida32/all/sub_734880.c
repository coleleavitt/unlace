_QWORD *sub_734880()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)operator new(0x10018u);
  *(_QWORD *)((char *)v0 + 65548) = 0xFFFFFFFFLL;
  *v0 = qmutex_create();
  return v0;
}

