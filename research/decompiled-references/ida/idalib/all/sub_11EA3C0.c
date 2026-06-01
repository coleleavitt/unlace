__int64 __fastcall sub_11EA3C0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi

  result = *((unsigned int *)a1 + 4);
  if ( (_DWORD)result )
  {
    v2 = *a1;
    v3 = *a1 + 104 * result;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)v2 + 2LL;
        if ( *(_QWORD *)v2 != -2 && result != 1 )
        {
          if ( *(_BYTE *)(v2 + 96) )
            break;
        }
        v2 += 104;
        if ( v3 == v2 )
          return result;
      }
      v4 = *(unsigned int *)(v2 + 88);
      v5 = *(_QWORD *)(v2 + 72);
      v2 += 104;
      result = operator delete(v5, 32 * v4, 4);
    }
    while ( v3 != v2 );
  }
  return result;
}
