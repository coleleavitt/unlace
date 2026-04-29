__int64 __fastcall sub_162BE0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v3 = sub_10BA00(v2, 0);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = v3;
  v6 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 72LL);
  if ( (unsigned int)v6 >= *(_DWORD *)(v4 + 64) )
    goto LABEL_7;
  v7 = sub_10BA00(*(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v6), 0);
  result = 0;
  if ( v5 == v7 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    if ( (*(_BYTE *)(v9 + 6) & 2) == 0 )
    {
      sub_153480(v9, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, *(_QWORD *)(a1 + 56), 0);
      v2 = *(_QWORD *)(a1 + 56);
      v10 = *(_QWORD *)(a1 + 64);
      v11 = *(unsigned int *)(v2 + 72);
      if ( (unsigned int)v11 < *(_DWORD *)(v10 + 64) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v11);
        sub_116EE0(v2);
        v13 = *(_DWORD *)(a1 + 24);
        v14 = *(_QWORD *)(a1 + 8);
        BYTE1(v13) &= ~2u;
        LOBYTE(v13) = v13 | 0x80;
        *(_DWORD *)(a1 + 24) = v13;
        sub_134C00(v14);
        sub_10BE90(a1, *(_QWORD *)(a1 + 8), v12);
        sub_60A20(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_USELESS_JX");
        return 1;
      }
LABEL_7:
      sub_161430(v2);
    }
  }
  return result;
}
