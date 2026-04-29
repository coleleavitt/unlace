__int64 __fastcall sub_170F00(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int **v5; // rbp
  __int64 v6; // rbp

  if ( *(_BYTE *)a2 != 10 )
  {
    if ( a4 )
      return 0;
    v5 = *(int ***)(a1 + 56);
    if ( *(_QWORD *)(a1 + 64) << 6 )
    {
      while ( !sub_1213D0((unsigned __int8 *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL), (__int64)(v5 + 1), 0) )
      {
        v5 += 8;
        if ( v5 == (int **)(*(_QWORD *)(a1 + 56) + (*(_QWORD *)(a1 + 64) << 6)) )
          goto LABEL_11;
      }
      if ( v5 && (unsigned __int8)sub_170BF0((__int64 *)a1, (char *)a2, v5) )
      {
        ++*(_DWORD *)(a1 + 104);
        *(_BYTE *)(a1 + 40) = 1;
        return 0;
      }
    }
LABEL_11:
    if ( *(_BYTE *)(a1 + 40) || *(_BYTE *)a2 != 14 )
      return 0;
    v6 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = a2;
    sub_11A7B0(*(_QWORD *)(a2 + 8), a1, nullptr, 0);
    sub_11A7B0(*(_QWORD *)(a2 + 8) + 16LL, a1, nullptr, 0);
    *(_QWORD *)(a1 + 96) = v6;
  }
  *(_BYTE *)(a1 + 40) = 1;
  return 0;
}
