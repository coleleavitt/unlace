__int64 __fastcall sub_3E2930(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v6 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = -1;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v6 )
  {
    if ( *(int *)a5 >= 0 && *(int *)(a5 + 4) >= 0 && *(_QWORD *)(a5 + 16) )
      v6 = 0;
    else
      v6 = *(_QWORD *)(a2 + 32);
  }
  if ( (unsigned __int64)(int)a3 < *(_QWORD *)(v6 + 24) )
  {
    v7 = *(_QWORD *)(v6 + 16);
    *(_DWORD *)a1 = a3;
    *(_DWORD *)(a1 + 4) = a4;
    v8 = *(_QWORD *)(v7 + 8LL * (int)a3);
    *(_QWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 8) = v8;
    return a1;
  }
  if ( (debug & 0x40000) == 0 )
    return a1;
  sub_3E25E0((__int64)"Invalid ::index() request, with row=%d, column=%d\n", a3, (unsigned int)a4, a4, a5, a6);
  return a1;
}
