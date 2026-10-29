__int64 __fastcall sub_1F617A0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi

  ++*(_DWORD *)(*a1 + 24);
  sub_1F61590(a1, a2);
  v4 = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v5 = *a1;
  *(_QWORD *)(a2 + 40) = v4;
  *(_DWORD *)(a2 + 48) = sub_1EE7490(v5);
  result = *(unsigned int *)(a2 + 52);
  if ( (_DWORD)result )
  {
    v7 = *(_QWORD *)(*a1 + 8);
    LODWORD(result) = 0;
    v8 = *(_DWORD *)(v7 + 13072);
    do
    {
      v9 = v8--;
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v9 - 8);
      v11 = (unsigned int)result;
      *(_DWORD *)(v7 + 13072) = v8;
      result = (unsigned int)(result + 1);
      *(_QWORD *)(a2 + 8 * v11 + 56) = v10;
    }
    while ( *(_DWORD *)(a2 + 52) > (unsigned int)result );
  }
  return result;
}
