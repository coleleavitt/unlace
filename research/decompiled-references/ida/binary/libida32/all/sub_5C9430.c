__int64 __fastcall sub_5C9430(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  size_t v4; // r13
  __int64 v5; // r12
  size_t v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( *(_BYTE *)(a1 + 72) != *(_BYTE *)(a1 + 741) )
    return set_qerrno(1152, a2);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v3 != 1 )
    {
      v5 = *(_QWORD *)(a1 + 536);
      v6 = v3 - 1;
      if ( v5 )
      {
        --v5;
        v6 = v4 + v5;
        v3 += v5;
      }
      v7 = *(_QWORD *)(a1 + 528);
      if ( *(_QWORD *)(a1 + 544) < v3 )
      {
        v8 = qvector_reserve(a1 + 528, v7, v3, 1);
        *(_QWORD *)(a1 + 528) = v8;
        v7 = v8;
      }
      *(_QWORD *)(a1 + 536) = v3;
      *(_BYTE *)(v7 + v6) = 0;
      memcpy((void *)(v5 + *(_QWORD *)(a1 + 528)), *(const void **)(a1 + 40), v4);
    }
  }
  return 0;
}

