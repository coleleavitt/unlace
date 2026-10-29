__int64 __fastcall sub_F5DCA0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  int v4; // ebp
  __int64 result; // rax

  v4 = a4;
  sub_F1A490(a3, a1, a2, 1, 0);
  result = *(unsigned int *)(a1 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v4;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
