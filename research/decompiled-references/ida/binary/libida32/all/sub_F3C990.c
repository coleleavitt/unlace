__int64 __fastcall sub_F3C990(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rcx
  __int64 v14; // rax

  sub_993300(a1, a2);
  sub_993300(a1, SHIDWORD(a2));
  sub_993300(a1, a3);
  sub_993300(a1, a4);
  sub_993300(a1, *(_DWORD *)(a5 + 4));
  v8 = *(_QWORD *)(a5 + 8);
  result = 3LL * *(unsigned int *)(a5 + 4);
  v10 = v8 + 24LL * *(unsigned int *)(a5 + 4);
  if ( v10 != v8 )
  {
    result = *(unsigned int *)(a1 + 8);
    do
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
      {
        sub_22134E0(a1, a1 + 16, result + 1, 4);
        result = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = v11;
      v12 = HIDWORD(v11);
      v13 = *(unsigned int *)(a1 + 12);
      v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v14;
      if ( v14 + 1 > v13 )
      {
        sub_22134E0(a1, a1 + 16, v14 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v12;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = v12;
      }
      v8 += 24;
      result = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = result;
    }
    while ( v10 != v8 );
  }
  return result;
}

