__int64 __fastcall sub_7AE450(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rcx
  __int64 v4; // rdi
  int v5; // esi
  __int64 result; // rax

  v3 = *(unsigned __int8 **)(a2 + 8);
  v4 = **(_QWORD **)(a1 + 1736);
  if ( v3 >= &v3[*(unsigned int *)(a2 + 4)] )
  {
    LODWORD(result) = -1;
    v5 = 0;
  }
  else
  {
    v5 = *v3;
    LODWORD(result) = v5 - 1;
  }
  if ( a3 )
    LODWORD(result) = 1 - v5;
  result = (int)result;
  *(_QWORD *)(v4 + 5904) -= (int)result;
  return result;
}
