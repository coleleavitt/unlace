__int64 __fastcall sub_1F6F3D0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax

  sub_9B9C90(*(_QWORD *)(*a1 + 16), *((int *)a2 + 2));
  v2 = *a1;
  v3 = *a2;
  result = *(unsigned int *)(*a1 + 32);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(*a1 + 36) )
  {
    sub_2237220(v2 + 24, v2 + 40, result + 1, 8);
    result = *(unsigned int *)(v2 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8 * result) = v3;
  ++*(_DWORD *)(v2 + 32);
  return result;
}
