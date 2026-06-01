__int64 __fastcall sub_622000(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax

  v2 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v2;
  result = qstrdup(*((_QWORD *)a2 + 1));
  *(_QWORD *)(a1 + 8) = result;
  return result;
}

