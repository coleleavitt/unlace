__int64 __fastcall sub_4629E0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax

  v3 = *(__int64 **)(a1 + 32);
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD *)(a1 + 32), v5, v4 + 1, 8);
    *v3 = v7;
    v5 = v7;
    v4 = v3[1];
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  ++v3[1];
  return 0;
}
