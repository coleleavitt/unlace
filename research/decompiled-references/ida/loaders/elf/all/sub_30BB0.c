__int64 __fastcall sub_30BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  v5 = *(__int64 **)(a1 + 16);
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve(*(_QWORD *)(a1 + 16), v7, v6 + 1, 40);
    v6 = v5[1];
    *v5 = v9;
    v7 = v9;
  }
  result = v7 + 40 * v6;
  *(_QWORD *)(result + 8) = 0;
  *(_OWORD *)(result + 16) = 0;
  ++v5[1];
  *(_QWORD *)result = a3;
  *(_WORD *)(result + 32) = *(_WORD *)(a2 + 2);
  *(_WORD *)(result + 34) = *(_WORD *)(a2 + 4);
  return result;
}

