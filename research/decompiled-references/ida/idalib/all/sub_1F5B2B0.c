unsigned __int64 __fastcall sub_1F5B2B0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 result; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rsi

  sub_1F5B190(a1, a2);
  v4 = *(_QWORD *)a1;
  v5 = 0;
  v6 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  if ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)a1 + 40LL) )
  {
    v10 = *(_QWORD **)(v4 + 8);
    v11 = *(_QWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 24) = v6 + 1;
    v5 = sub_1F15160(v10, v11, *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v6));
  }
  *(_QWORD *)(a2 + 32) = v5;
  v7 = *(_QWORD *)a1;
  result = 0;
  v9 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  if ( (unsigned int)v9 < *(_DWORD *)(*(_QWORD *)a1 + 40LL) )
  {
    v12 = *(_QWORD **)(v7 + 8);
    v13 = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(v7 + 24) = v9 + 1;
    result = sub_1F15160(v12, v13, *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v9));
    *(_QWORD *)(a2 + 40) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 40) = 0;
  }
  return result;
}
