__int64 __fastcall sub_53CA20(__int64 a1, unsigned __int64 *a2, int *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  v3 = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v4 < *a2 || v4 >= v3 + *a3 )
    return 0;
  **(_QWORD **)(*(_QWORD *)a1 + 16LL) = *(_QWORD *)(***(_QWORD ***)a1 + 56 * v3 + 48);
  return 1;
}

