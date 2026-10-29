__int64 __fastcall sub_609AA0(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rax

  v1 = *(__int64 **)(a1 + 88);
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < (unsigned __int64)(v2 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD *)(a1 + 88), v3, v2 + 1, 24);
    v2 = v1[1];
    *v1 = v6;
    v3 = v6;
  }
  v4 = v3 + 24 * v2;
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  ++v1[1];
  sub_3573A0((char **)v4);
  return 0;
}

