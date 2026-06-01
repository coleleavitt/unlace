__int64 __fastcall sub_81A570(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  unsigned int v4; // ebx
  int v5; // edx

  result = *(unsigned int *)(a1 + 68);
  *(_DWORD *)(a1 + 20) = -2;
  if ( (_DWORD)result )
  {
    v3 = a1 + 76;
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(v3 + 4);
      ++v4;
      v3 += 8;
      result = sub_7E4390(a1, a2, v5);
    }
    while ( v4 < *(_DWORD *)(a1 + 68) );
  }
  *(_DWORD *)(a1 + 68) = 0;
  return result;
}

