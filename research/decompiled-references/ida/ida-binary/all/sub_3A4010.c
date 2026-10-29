__int64 __fastcall sub_3A4010(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  int *v7; // r14
  __int64 *v8; // r15
  __int64 v9; // rax
  int v10; // r13d
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  *(_QWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v5 = qvector_reserve(a1, 0, 5, 4);
  *(_QWORD *)a1 = v5;
  v6 = v5;
  if ( *(_QWORD *)(a1 + 40) <= 4u )
  {
    *(_QWORD *)(a1 + 24) = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), 5, 8);
    v6 = *(_QWORD *)a1;
  }
  v7 = (int *)&unk_5E9870;
  v8 = (__int64 *)&off_868740;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *v7;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
    {
      v14 = qvector_reserve(a1, v6, v9 + 1, 4);
      *(_QWORD *)a1 = v14;
      v6 = v14;
      v9 = *(_QWORD *)(a1 + 8);
    }
    *(_DWORD *)(v6 + 4 * v9) = v10;
    result = *(_QWORD *)(a1 + 32);
    ++*(_QWORD *)(a1 + 8);
    v12 = *v8;
    v13 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(result + 1) )
    {
      v15 = qvector_reserve(a1 + 24, v13, result + 1, 8);
      *(_QWORD *)(a1 + 24) = v15;
      v13 = v15;
      result = *(_QWORD *)(a1 + 32);
    }
    ++v7;
    *(_QWORD *)(v13 + 8 * result) = v12;
    ++v8;
    ++*(_QWORD *)(a1 + 32);
    if ( v7 == (int *)&unk_5E9884 )
      break;
    v6 = *(_QWORD *)a1;
  }
  if ( (a2 & 1) != 0 )
  {
    result = *(_QWORD *)a1;
    **(_DWORD **)a1 = 32;
  }
  if ( (a2 & 2) == 0 )
  {
    result = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 8LL) |= 0x100000u;
  }
  if ( (a2 & 4) == 0 )
  {
    result = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 12LL) |= 0x100000u;
  }
  if ( (a2 & 8) == 0 )
  {
    result = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 16LL) |= 0x100000u;
  }
  return result;
}
