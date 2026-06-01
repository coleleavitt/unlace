__int64 __fastcall sub_AD12D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // r14
  int *v9; // rdx
  int v10; // edx
  __int64 **v11; // rbx
  __int64 **i; // r15
  __int64 *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-40h]

  result = a2;
  v8 = *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 20) + ~*(_DWORD *)(a1 + 16)) + 80);
  v9 = *(int **)(v8 + 24);
  if ( !v9 || (v10 = *v9, v10 == -1) || v10 == 4 )
  {
    result = sub_ACDB80(a3, a3 + 88, a2, *(_DWORD *)(a1 + 16), v8);
    v11 = *(__int64 ***)(a4 + 8664);
    v17 = result;
    if ( v11 )
    {
      result = *((unsigned int *)v11 - 1);
      for ( i = &v11[result]; i != v11; ++v11 )
      {
        v13 = *v11;
        v14 = **v11;
        if ( (unsigned int)sub_8E7030(a4) )
        {
          result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a4 + 7488) + 56LL))(
                     *(_QWORD *)(a4 + 7488),
                     v14);
          if ( !(_BYTE)result )
            continue;
        }
        result = sub_15D1F10(*v13);
        if ( v8 == result )
        {
          v15 = v17;
          do
          {
            v16 = v15;
            v15 = *(_QWORD *)(v15 + 8);
          }
          while ( v15 );
          result = (__int64)sub_AD0E00(*(_QWORD *)(v16 + 56), (__m128i *)*v13, *((_DWORD *)v13 + 9));
        }
      }
    }
  }
  return result;
}

