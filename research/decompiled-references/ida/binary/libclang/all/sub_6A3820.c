_QWORD *__fastcall sub_6A3820(__int64 a1, int a2, int a3)
{
  __int64 v3; // r13
  _QWORD *result; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v3 = (unsigned int)(a2 != a3) + a2;
  result = (_QWORD *)operator new[](56 * v3 + 8);
  *result = v3;
  v6 = result + 1;
  if ( v3 )
  {
    v7 = result + 1;
    result += 7 * v3 + 1;
    do
    {
      *((_BYTE *)v7 + 4) &= ~1u;
      v7 += 7;
      *((_DWORD *)v7 - 14) = 0;
    }
    while ( result != v7 );
  }
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 20) = a3;
  *(_DWORD *)a1 = 9;
  return result;
}

