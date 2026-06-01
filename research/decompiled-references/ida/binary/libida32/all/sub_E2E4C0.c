void __fastcall sub_E2E4C0(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v6; // rdi
  _WORD *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_WORD **)(v6 + 32);
  if ( *(_QWORD *)(v6 + 24) - (_QWORD)v7 > 1u )
  {
    *v7 = 23135;
    *(_QWORD *)(v6 + 32) += 2LL;
  }
  else
  {
    sub_22581D0(v6, "_Z", 2);
  }
  v8 = *(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v8 - 34 <= 5 )
  {
    sub_E2ED50(a1, a2, a3);
  }
  else
  {
    v9 = 0x1E7F00C0000000LL;
    if ( _bittest64(&v9, v8) )
    {
      v10 = a3;
    }
    else
    {
      a2 = *(_QWORD *)(*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                     + 8LL * *(unsigned int *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                     - 8);
      v10 = 0;
    }
    sub_E2DBE0(a1, a2, v10, a4);
  }
}

