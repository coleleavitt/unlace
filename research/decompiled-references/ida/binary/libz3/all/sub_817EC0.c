__int64 __fastcall sub_817EC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 *v11; // rbx
  __int64 *i; // r12
  __int64 v13; // rax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 344);
  do
  {
    v7 = a2;
    v8 = a2;
    a2 = *(_DWORD *)(v6 + 4LL * a2);
  }
  while ( v8 != a2 );
  v9 = *(_QWORD *)(a1 + 184);
  result = *(_QWORD *)(v9 + 8 * v7);
  v11 = *(__int64 **)(result + 16);
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    for ( i = &v11[result];
          i != v11;
          result = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_865240)(
                     a1,
                     v14,
                     v9,
                     v6,
                     a5,
                     a6) )
    {
      v13 = *v11++;
      v14[0] = 3;
      v14[1] = v13;
      v14[2] = 0;
    }
  }
  return result;
}

