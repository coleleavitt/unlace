__int64 __fastcall sub_1FC6F20(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r13
  __int64 result; // rax
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  _BOOL8 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx

  v2 = a2 + 2;
  sub_9B9C90(*(_QWORD *)(a1 + 16), *a2);
  result = *a2;
  v4 = (__int64)&a2[*a2 + 2];
  if ( a2 + 2 != (__int64 *)v4 )
  {
    do
    {
      while ( 1 )
      {
        if ( (*v2 & 2) != 0 )
        {
          v6 = 1;
          v5 = 0;
        }
        else
        {
          v5 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
          v6 = v5 == 0;
        }
        v7 = *(_QWORD *)(a1 + 16);
        v8 = *(unsigned int *)(v7 + 8);
        if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 16), v7 + 16, v8 + 1, 8);
          v8 = *(unsigned int *)(v7 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v7 + 8 * v8) = v6;
        ++*(_DWORD *)(v7 + 8);
        if ( v5 )
          break;
        v9 = *v2++;
        v9 &= 0xFFFFFFFFFFFFFFFCLL;
        sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)v9, *(_QWORD *)(a1 + 16));
        result = (__int64)sub_1F740B0(
                            *(_QWORD *)(a1 + 8),
                            *(_QWORD *)(v9 + 8),
                            *(_QWORD *)(v9 + 16),
                            *(_QWORD *)(a1 + 16));
        if ( (__int64 *)v4 == v2 )
          return result;
      }
      result = *(unsigned int *)(a1 + 32);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
      {
        sub_2237220(a1 + 24, a1 + 40, result + 1, 8);
        result = *(unsigned int *)(a1 + 32);
      }
      ++v2;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * result) = v5;
      ++*(_DWORD *)(a1 + 32);
    }
    while ( (__int64 *)v4 != v2 );
  }
  return result;
}
