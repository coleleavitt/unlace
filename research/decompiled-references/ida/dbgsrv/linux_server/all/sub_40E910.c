/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E910
// Address: 0x000000000040E910

//----- (000000000040E910) ----------------------------------------------------
void __fastcall sub_40E910(char *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rdi
  char *v4; // rdi
  void *v5; // rdi

  v2 = *((_QWORD **)a1 + 7);
  *(_QWORD *)a1 = qword_4C4288;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    operator delete(v3, 0x18u);
  }
  memset(*((void **)a1 + 5), 0, 8LL * *((_QWORD *)a1 + 6));
  v4 = *((char **)a1 + 5);
  *((_QWORD *)a1 + 8) = 0;
  *((_QWORD *)a1 + 7) = 0;
  if ( v4 != a1 + 88 )
    operator delete(v4, 8LL * *((_QWORD *)a1 + 6));
  v5 = *((void **)a1 + 2);
  if ( v5 )
  {
    *((_QWORD *)a1 + 3) = 0;
    j__free(v5);
  }
  operator delete(a1, 0xDE0u);
}
// 4C4288: using guessed type __int64 qword_4C4288[2];
