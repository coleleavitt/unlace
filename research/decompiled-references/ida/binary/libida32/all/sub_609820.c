__int64 __fastcall sub_609820(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rax

  v1 = sub_3B9110(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 1480LL), *(_DWORD *)(a1 + 20));
  if ( v1 < *(_DWORD *)(a1 + 96) || v1 >= *(_DWORD *)(a1 + 100) )
  {
    v2 = *(__int64 **)(a1 + 88);
    v3 = v2[1];
    v4 = *v2;
    if ( v2[2] < (unsigned __int64)(v3 + 1) )
    {
      v7 = qvector_reserve(*(_QWORD *)(a1 + 88), v4, v3 + 1, 24);
      v3 = v2[1];
      *v2 = v7;
      v4 = v7;
    }
    v5 = v4 + 24 * v3;
    *(_QWORD *)v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
    ++v2[1];
    sub_3573A0((char **)v5);
  }
  return 0;
}

