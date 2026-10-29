__int64 __fastcall sub_C10CE0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // r12
  __int64 v5; // rax

  sub_1383B90(a1 + 952, a2 - *(_DWORD *)(a1 + 944), *(_QWORD *)(a1 + 936) + 24LL * *(unsigned int *)(a1 + 944));
  result = *(unsigned int *)(a1 + 944);
  if ( (unsigned int)result < a2 )
  {
    v3 = 24LL * (unsigned int)result;
    v4 = 24 * ((unsigned int)result + (unsigned __int64)(a2 - 1 - (unsigned int)result) + 1);
    do
    {
      v5 = v3 + *(_QWORD *)(a1 + 936);
      v3 += 24;
      result = sub_C10940((__int64 *)a1, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    }
    while ( v3 != v4 );
  }
  *(_DWORD *)(a1 + 944) = a2;
  return result;
}

