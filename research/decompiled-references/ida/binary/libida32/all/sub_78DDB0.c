__int64 __fastcall sub_78DDB0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // rcx
  __int64 v4; // rdi
  int v5; // esi
  __int64 result; // rax

  v3 = *(unsigned __int8 **)(a2 + 8);
  v4 = **(_QWORD **)(a1 + 1544);
  if ( v3 >= &v3[*(unsigned int *)(a2 + 4)] )
  {
    result = 0xFFFFFFFFLL;
    v5 = 0;
  }
  else
  {
    v5 = *v3;
    result = (unsigned int)(v5 - 1);
  }
  if ( a3 )
    result = (unsigned int)(1 - v5);
  *(_DWORD *)(v4 + 5880) -= result;
  return result;
}

