__int64 __fastcall clang_executeOnThread(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  __int64 v4; // rbp

  v2 = (_QWORD *)operator new(0x10u);
  v2[1] = a1;
  v3 = v2;
  *v2 = a2;
  v4 = sub_2648890((void *(*)(void *))start_routine, v2);
  if ( !v4 )
    operator delete(v3, 0x10u);
  return sub_2648940(v4);
}

