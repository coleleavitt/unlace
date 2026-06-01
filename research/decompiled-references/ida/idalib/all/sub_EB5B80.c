__int64 __fastcall sub_EB5B80(__int64 a1, _QWORD *a2, int a3)
{
  unsigned int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = 0;
    v4 = (__int64)&a2[3 * (unsigned int)(a3 - 1) + 3];
    do
    {
      v5 = *a2;
      v6 = v3;
      v7 = v3 + 1;
      a2 += 3;
      v3 += 2;
      *(_QWORD *)(a1 + 8 * v6 + 24) = v5;
      *(_QWORD *)(a1 + 8 * v7 + 24) = *(a2 - 2);
      *(_DWORD *)(a1 + 4 * v6 + 8LL * (unsigned int)(2 * *(_DWORD *)(a1 + 16)) + 24) = *((_DWORD *)a2 - 2);
      result = 4 * v7 + 8LL * (unsigned int)(2 * *(_DWORD *)(a1 + 16));
      *(_DWORD *)(a1 + result + 24) = *((_DWORD *)a2 - 1);
    }
    while ( (_QWORD *)v4 != a2 );
  }
  return result;
}
