unsigned __int64 __fastcall sub_6E1720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = a2;
  if ( a2 )
    v4 = a2 - 24;
  if ( (unsigned __int8)((unsigned __int64)sub_B145E0(v4) >> 32) )
  {
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned int)sub_B145E0(v4) + 64);
    v6 = *(unsigned int *)(a3 + 8);
    if ( *(unsigned int *)(a3 + 12) < (unsigned __int64)(v6 + 1) )
    {
      sub_25D6060(a3, a3 + 16, v6 + 1, 4);
      v6 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v5;
    v7 = HIDWORD(v5);
    v8 = *(unsigned int *)(a3 + 12);
    v9 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v9;
    if ( v8 < v9 + 1 )
    {
      sub_25D6060(a3, a3 + 16, v9 + 1, 4);
      v9 = *(unsigned int *)(a3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a3 + 4 * v9) = v7;
    v10 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v10;
  }
  else
  {
    sub_B14850(
      a3,
      *(_QWORD *)(v4 + 32),
      *(_QWORD *)(v4 + 40),
      *(_QWORD *)(v4 + 48),
      (unsigned int)*(char *)(v4 + 59) >> 31);
    v10 = *(unsigned int *)(a3 + 8);
  }
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4 * v10);
}

