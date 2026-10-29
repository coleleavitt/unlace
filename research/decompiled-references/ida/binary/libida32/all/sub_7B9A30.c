__int64 __fastcall sub_7B9A30(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v6; // rax

  v1 = *(__int64 **)(a1 + 40);
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD *)(a1 + 40), v3, v2 + 1, 16);
    v2 = v1[1];
    *v1 = v6;
    v3 = v6;
  }
  v4 = v3 + 16 * v2;
  *(_QWORD *)v4 = -1;
  *(_QWORD *)(v4 + 8) = 0;
  ++v1[1];
  *(_DWORD *)v4 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(a1 + 28);
  *(_QWORD *)(v4 + 8) = unpack_dq(a1 + 8, *(_QWORD *)(a1 + 16)) - 1;
  return 0;
}

