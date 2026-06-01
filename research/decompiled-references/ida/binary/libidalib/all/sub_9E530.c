__int64 __fastcall sub_9E530(__int64 a1, int *a2)
{
  __int64 v2; // rbp
  size_t v3; // r13
  void *v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbp

  v2 = *(_QWORD *)(*(_QWORD *)a2 + 24LL) + 32LL * a2[3];
  *(_DWORD *)a1 = -2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a1 != v2 )
  {
    if ( *(int *)v2 < -1 )
    {
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v2 + 8);
    }
    else
    {
      v3 = *(_QWORD *)(v2 + 16);
      if ( v3 )
      {
        v4 = (void *)qalloc_or_throw();
        *(_QWORD *)(a1 + 24) = v3;
        *(_QWORD *)(a1 + 8) = v4;
        memcpy(v4, *(const void **)(v2 + 8), v3);
        *(_QWORD *)(a1 + 16) = v3;
      }
    }
    *(_DWORD *)a1 = *(_DWORD *)v2;
  }
  v5 = a2[2];
  if ( (v5 & 0x80000000) == 0LL && v5 < (unsigned __int64)xmmword_2524F8 )
  {
    v6 = qword_2524F0 + 56 * v5;
    if ( v6 )
    {
      if ( (unsigned __int8)sub_C72E0(qword_2524F0 + 56 * v5) )
        *(_QWORD *)(a1 + 8) &= sub_C73A0(v6);
    }
  }
  return a1;
}

