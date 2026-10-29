_QWORD *sub_754D50()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)operator new((unsigned __int64)&stru_10018);
  *(_QWORD *)((char *)v0 + 65548) = 0xFFFFFFFFLL;
  *v0 = qmutex_create();
  return v0;
}
