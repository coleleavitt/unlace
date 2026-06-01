__int64 __fastcall sub_1FC23C0(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // edx
  __int64 v4; // rbx
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 1);
  v2 = *(_QWORD *)(v1 + 16);
  if ( *((_BYTE *)a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * a1[4]) = *a1;
    *((_BYTE *)a1 + 20) = 0;
    *(_QWORD *)a1 = 0;
    v2 = *(_QWORD *)(v1 + 16);
  }
  v3 = *(_DWORD *)(v2 + 8);
  *((_BYTE *)a1 + 20) = 1;
  a1[4] = v3;
  v4 = *(_QWORD *)(v1 + 16);
  result = *(unsigned int *)(v4 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(v4, v4 + 16, result + 1, 8);
    result = *(unsigned int *)(v4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v4 + 8 * result) = 0;
  ++*(_DWORD *)(v4 + 8);
  return result;
}
