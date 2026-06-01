__int64 __fastcall sub_36CF80(__int64 ***a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v8; // rax

  v2 = *a2;
  v3 = **a1;
  v4 = *v3;
  v5 = v3[1];
  v6 = (unsigned __int64)(*a1)[2] & *(_QWORD *)(*(*a1)[1] + 56 * v2 + 48);
  if ( v3[2] < (unsigned __int64)(v5 + 1) )
  {
    v8 = qvector_reserve(v3, v4, v5 + 1, 8);
    *v3 = v8;
    v4 = v8;
    v5 = v3[1];
  }
  *(_QWORD *)(v4 + 8 * v5) = v6;
  ++v3[1];
  return 0;
}

