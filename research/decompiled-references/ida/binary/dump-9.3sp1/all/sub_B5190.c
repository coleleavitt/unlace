__int64 __fastcall sub_B5190(_QWORD *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = (unsigned int *)a1[7];
  if ( v2 )
  {
    if ( (v4 = *v2, (unsigned int)(v4 - 56) <= 1) && *((_BYTE *)v2 + 64) != 8 || (unsigned __int8)sub_32ED40(v4, 0) )
    {
      if ( !under_debugger )
        sub_383060(51232);
      BUG();
    }
  }
  v5 = a1[8];
  v6 = sub_1CFBB0(v5, *(_QWORD *)(a2 + 24));
  if ( (*(_BYTE *)(a2 + 4) & 0x20) != 0 )
  {
    v7 = *(int *)(*(_QWORD *)(v5 + 1504) + 80LL);
    v6 += v7;
  }
  if ( a1[40] < v6 )
    a1[40] = v6;
  v9 = sub_96D90(a1[60], a2, v7, v8);
  if ( v9 )
    sub_338690(a1, v9);
  sub_338690(a1, a2);
  if ( *(_DWORD *)a2 == 58 )
    sub_1D55B0(a1[8], *(_QWORD *)(a2 + 24));
  while ( (unsigned __int8)sub_B36D0((__int64)a1, (__int64 *)a2) )
    ;
  return a2;
}
