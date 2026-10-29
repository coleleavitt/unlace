__int64 __fastcall sub_46EA90(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v2 = *a1;
  v3 = *a2;
  result = (*a1)[1];
  v5 = **a1;
  if ( (*a1)[2] < (unsigned __int64)(result + 1) )
  {
    v6 = qvector_reserve(*a1, v5, result + 1, 8);
    *v2 = v6;
    v5 = v6;
    result = v2[1];
  }
  *(_QWORD *)(v5 + 8 * result) = v3;
  ++v2[1];
  return result;
}

