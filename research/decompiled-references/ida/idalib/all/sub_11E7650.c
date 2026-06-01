__int64 __fastcall sub_11E7650(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi

  v1 = *a1;
  v2 = 104LL * *((unsigned int *)a1 + 4);
  if ( *((_DWORD *)a1 + 4) )
  {
    v4 = v1 + 104LL * *((unsigned int *)a1 + 4);
    do
    {
      while ( *(_QWORD *)v1 == -2 || *(_QWORD *)v1 == -1 || !*(_BYTE *)(v1 + 96) )
      {
        v1 += 104;
        if ( v4 == v1 )
          goto LABEL_7;
      }
      v5 = *(unsigned int *)(v1 + 88);
      v6 = *(_QWORD *)(v1 + 72);
      v1 += 104;
      operator delete(v6, 32 * v5, 4);
    }
    while ( v4 != v1 );
LABEL_7:
    v1 = *a1;
    v2 = 104LL * *((unsigned int *)a1 + 4);
  }
  return operator delete(v1, v2, 8);
}
