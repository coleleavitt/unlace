__int64 __fastcall sub_32AC50(int *a1, int *a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax

  v2 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a2 + 2);
  if ( v3 < v2 )
    return 1;
  if ( v2 < v3 )
    return 0xFFFFFFFFLL;
  return sub_1BDD50(a1, a2);
}
