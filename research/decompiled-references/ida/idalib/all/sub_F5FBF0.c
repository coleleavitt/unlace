__int64 __fastcall sub_F5FBF0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4, __int64 a5)
{
  int v8; // rsi^4
  unsigned __int64 *v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rax

  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  sub_9B7040(a1, a3);
  sub_9B7040(a1, SHIDWORD(a3));
  sub_9B7040(a1, a5);
  v8 = HIDWORD(a5);
  v9 = &a4[a5];
  result = sub_9B7040(a1, v8);
  if ( v9 != a4 )
  {
    result = *(unsigned int *)(a1 + 8);
    do
    {
      v11 = *a4;
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_2237220(a1, a1 + 16, result + 1, 4);
        result = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v11;
      v12 = HIDWORD(v11);
      v13 = *(unsigned int *)(a1 + 12);
      v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v14;
      if ( v14 + 1 > v13 )
      {
        sub_2237220(a1, a1 + 16, v14 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v12;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = v12;
      }
      ++a4;
      result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = result;
    }
    while ( v9 != a4 );
  }
  return result;
}
