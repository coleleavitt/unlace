__int64 __fastcall sub_409D00(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 1408LL);
  result = 0;
  if ( *(_DWORD *)(v5 + 8) != a2 )
  {
    *(_DWORD *)(v5 + 8) = a2;
    result = sub_409860(a1, a2, a3, a4, a5);
    *(_DWORD *)(v5 + 8) = -1;
  }
  return result;
}

