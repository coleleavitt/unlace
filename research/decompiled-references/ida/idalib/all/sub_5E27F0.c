__int64 __fastcall sub_5E27F0(__int64 a1)
{
  unsigned __int64 v2; // rbp
  const void *v4; // r13
  void *v5; // rdi
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 > 1 )
  {
    v4 = *(const void **)(a1 + 40);
    v5 = *(void **)(a1 + 536);
    if ( *(_QWORD *)(a1 + 552) < v2 )
    {
      v6 = qvector_reserve(a1 + 536, v5, v2, 1);
      *(_QWORD *)(a1 + 536) = v6;
      v5 = (void *)v6;
    }
    *(_QWORD *)(a1 + 544) = v2;
    memmove(v5, v4, v2 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 536) + v2 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 544) = 0;
  }
  *(_BYTE *)(a1 + 757) = *(_BYTE *)(a1 + 80);
  return 0;
}
