__int64 __fastcall sub_21ECEB0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  int v4; // edx
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rbp
  _QWORD *v10; // rax

  result = *(_QWORD *)(a1 + 152);
  v3 = *(_QWORD *)(result + 24);
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 168);
    if ( v4 )
    {
      result = *(unsigned int *)(a2 + 8);
      v5 = 16 * (3LL * (unsigned int)(v4 - 1) + 3);
      do
      {
        while ( 1 )
        {
          v7 = (__int64 *)(v3 + *(_QWORD *)(a1 + 160));
          v8 = v7[1];
          v9 = *v7;
          if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
            break;
          v6 = (_QWORD *)(*(_QWORD *)a2 + 16 * result);
          v3 += 48;
          *v6 = v9;
          v6[1] = v8;
          result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
          *(_DWORD *)(a2 + 8) = result;
          if ( v5 == v3 )
            return result;
        }
        v3 += 48;
        sub_2237220(a2, a2 + 16, result + 1, 16);
        v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
        *v10 = v9;
        v10[1] = v8;
        result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        *(_DWORD *)(a2 + 8) = result;
      }
      while ( v3 != v5 );
    }
  }
  return result;
}
