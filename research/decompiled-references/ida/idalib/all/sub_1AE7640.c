int *__fastcall sub_1AE7640(__int64 a1, int *a2)
{
  int v3; // ebp
  int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) )
    return a2;
  v3 = a2[1];
  v4 = *a2;
  v5 = (_QWORD *)sub_168B6C0(*(_QWORD *)(*(_QWORD *)a1 + 760LL));
  return sub_EBF390(v5, v4, v3, v6, v7, v8);
}
