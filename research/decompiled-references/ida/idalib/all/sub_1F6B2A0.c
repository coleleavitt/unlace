__int64 __fastcall sub_1F6B2A0(int *a1, int *a2, int *a3, int *a4, __int64 a5)
{
  __int64 v5; // rax
  int v6; // eax
  int v7; // r9d
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx

  while ( a2 != a1 && a4 != a3 )
  {
    v6 = *a3;
    v7 = *a1;
    if ( *a3 < (unsigned int)*a1 || v6 == v7 && *((_QWORD *)a3 + 1) < *((_QWORD *)a1 + 1) )
    {
      v8 = *((_QWORD *)a3 + 1);
      a3 += 4;
      *(_QWORD *)(a5 + 8) = v8;
    }
    else
    {
      v5 = *((_QWORD *)a1 + 1);
      a1 += 4;
      *(_QWORD *)(a5 + 8) = v5;
      v6 = v7;
    }
    *(_DWORD *)a5 = v6;
    a5 += 16;
  }
  v9 = (char *)a2 - (char *)a1;
  v10 = v9 >> 4;
  if ( v9 > 0 )
  {
    do
    {
      v11 = *a1;
      a5 += 16;
      a1 += 4;
      *(_DWORD *)(a5 - 16) = v11;
      *(_QWORD *)(a5 - 8) = *((_QWORD *)a1 - 1);
      --v10;
    }
    while ( v10 );
  }
  v12 = (char *)a4 - (char *)a3;
  v13 = v12 >> 4;
  if ( v12 > 0 )
  {
    do
    {
      v14 = *a3;
      a5 += 16;
      a3 += 4;
      *(_DWORD *)(a5 - 16) = v14;
      *(_QWORD *)(a5 - 8) = *((_QWORD *)a3 - 1);
      --v13;
    }
    while ( v13 );
  }
  return a5;
}
