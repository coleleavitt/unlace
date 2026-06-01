__int64 __fastcall sub_1F61710(__int64 *a1, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rsi

  ++*(_DWORD *)(*a1 + 24);
  sub_1F61590(a1, (__int64)a2);
  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  a2[10] = v4;
  v6 = sub_1EE7490(v5);
  v7 = *a1;
  a2[11] = v6;
  a2[12] = sub_1EE7490(v7);
  result = (unsigned int)a2[13];
  if ( (_DWORD)result )
  {
    v9 = *(_QWORD *)(*a1 + 8);
    LODWORD(result) = 0;
    v10 = *(_DWORD *)(v9 + 13072);
    do
    {
      v11 = v10--;
      v12 = *(_QWORD *)(*(_QWORD *)(v9 + 13064) + 8 * v11 - 8);
      v13 = (unsigned int)result;
      *(_DWORD *)(v9 + 13072) = v10;
      result = (unsigned int)(result + 1);
      *(_QWORD *)&a2[2 * v13 + 14] = v12;
    }
    while ( a2[13] > (unsigned int)result );
  }
  return result;
}
