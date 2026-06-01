__int64 __fastcall sub_5E51B0(__int64 a1)
{
  unsigned __int64 v2; // rbp
  size_t v3; // r13
  __int64 v4; // r12
  size_t v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( *(_BYTE *)(a1 + 80) != *(_BYTE *)(a1 + 757) )
    return set_qerrno(1152);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v2 != 1 )
    {
      v4 = *(_QWORD *)(a1 + 544);
      v5 = v2 - 1;
      if ( v4 )
      {
        --v4;
        v5 = v3 + v4;
        v2 += v4;
      }
      v6 = *(_QWORD *)(a1 + 536);
      if ( *(_QWORD *)(a1 + 552) < v2 )
      {
        v7 = qvector_reserve(a1 + 536, v6, v2, 1);
        *(_QWORD *)(a1 + 536) = v7;
        v6 = v7;
      }
      *(_QWORD *)(a1 + 544) = v2;
      *(_BYTE *)(v6 + v5) = 0;
      memcpy((void *)(v4 + *(_QWORD *)(a1 + 536)), *(const void **)(a1 + 40), v3);
    }
  }
  return 0;
}
