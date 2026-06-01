__int64 __fastcall sub_81B000(unsigned int *a1, unsigned int a2, unsigned int a3, __int64 *a4, unsigned int a5)
{
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // edx

  v5 = *a4;
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    v7 = 8 * v6 + 88;
  }
  else
  {
    v7 = 88;
    LODWORD(v6) = 0;
  }
  *((_QWORD *)a1 + 5) = v7;
  *(_QWORD *)a1 = off_1C54F60;
  v8 = 0;
  *((_QWORD *)a1 + 1) = 1;
  a1[4] = a3;
  a1[5] = -2;
  *((_QWORD *)a1 + 3) = 0;
  a1[8] = v6;
  *((_BYTE *)a1 + 48) = 0;
  a1[13] = a2;
  *((_BYTE *)a1 + 56) = 0;
  a1[15] = a5;
  *((_QWORD *)a1 + 8) = 0;
  a1[18] = 0;
  if ( (_DWORD)v6 )
  {
    do
    {
      v9 = *(_DWORD *)(v5 + v8 * 4);
      a1[v8 + 20] = *(_DWORD *)(v5 + v8 * 4 + 4);
      if ( v9 > a5 )
        v9 = a5;
      a1[v8 + 19] = v9;
      v8 += 2;
    }
    while ( 2LL * (unsigned int)v6 != v8 );
  }
  return sub_81AF80(a1);
}

