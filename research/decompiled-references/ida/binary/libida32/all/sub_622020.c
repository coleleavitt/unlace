__int64 __fastcall sub_622020(__int64 a1, int *a2)
{
  int v3; // eax
  __int64 v4; // rdi

  if ( (int *)a1 != a2 )
  {
    qfree(*(void **)(a1 + 8));
    v3 = *a2;
    v4 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = v3;
    *(_QWORD *)(a1 + 8) = qstrdup(v4);
  }
  return a1;
}

