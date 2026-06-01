__int64 sub_2E6A40()
{
  _DWORD *v0; // rbp
  char **v1; // rbx
  _QWORD *v2; // r13
  __int64 v3; // rsi
  __int64 result; // rax

  v0 = &unk_8CD448;
  v1 = off_862440;
  v2 = QT::QCoreApplication::self;
  qword_8CD440 = 0x2E00000029LL;
  do
  {
    v3 = (__int64)*v1++;
    ++v0;
    result = sub_47A0E0(v2, v3, 0);
    *(v0 - 1) = result;
  }
  while ( v1 != (char **)algn_862478 );
  return result;
}
