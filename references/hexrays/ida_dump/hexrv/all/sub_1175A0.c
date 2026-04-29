__int64 __fastcall sub_1175A0(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax

  v1 = *(_DWORD **)(a1 + 32);
  if ( (unsigned int)(*v1 - 56) > 1 )
    return 0;
  v3 = *(__int64 **)(a1 + 40);
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD *)(a1 + 40), v5, v4 + 1, 8);
    *v3 = v6;
    v5 = v6;
    v4 = v3[1];
  }
  *(_QWORD *)(v5 + 8 * v4) = v1;
  ++v3[1];
  return 0;
}
