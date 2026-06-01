_QWORD *__fastcall sub_A4F800(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v4 = (unsigned int)(a2 + a3);
  result = (_QWORD *)operator new[](56 * v4 + 8);
  *result = v4;
  v6 = result + 1;
  if ( v4 )
  {
    v7 = result + 1;
    result += 7 * v4 + 1;
    do
    {
      *(_DWORD *)v7 = 0;
      *((_BYTE *)v7 + 4) &= ~1u;
      v7 += 7;
    }
    while ( v7 != result );
  }
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a3;
  *(_QWORD *)a1 = v6;
  return result;
}
