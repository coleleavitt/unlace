__int64 __fastcall sub_41B3D0(__int64 a1, int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v8; // rax

  v3 = *(__int64 **)(a1 + 24);
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve(*(_QWORD *)(a1 + 24), v5, v4 + 1, 24);
    v4 = v3[1];
    *v3 = v8;
    v5 = v8;
  }
  v6 = v5 + 24 * v4;
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = 0;
  ++v3[1];
  sub_3B9110(*(_QWORD **)(a1 + 16), a2);
  sub_3573A0((char **)v6);
  return 0;
}

