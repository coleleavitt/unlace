__int64 __fastcall sub_6AE350(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  v7 = a2;
  if ( a2 )
    v7 = a2 - 24;
  if ( (unsigned __int8)((unsigned __int64)sub_B145E0(v7) >> 32) )
  {
    v8 = *(_QWORD *)(v7 + 8LL * (unsigned int)sub_B145E0(v7) + 64);
    v9 = *(unsigned int *)(a5 + 8);
    if ( *(unsigned int *)(a5 + 12) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(a5, a5 + 16, v9 + 1, 4);
      v9 = *(unsigned int *)(a5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a5 + 4 * v9) = v8;
    v10 = HIDWORD(v8);
    v11 = *(unsigned int *)(a5 + 12);
    v12 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
    *(_DWORD *)(a5 + 8) = v12;
    if ( v11 < v12 + 1 )
    {
      sub_25D6060(a5, a5 + 16, v12 + 1, 4);
      v12 = *(unsigned int *)(a5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a5 + 4 * v12) = v10;
    ++*(_DWORD *)(a5 + 8);
  }
  else
  {
    sub_B14850(
      a5,
      *(_QWORD *)(v7 + 32),
      *(_QWORD *)(v7 + 40),
      *(_QWORD *)(v7 + 48),
      (unsigned int)*(char *)(v7 + 59) >> 31);
  }
  return sub_25ABE00(a5, a3);
}

