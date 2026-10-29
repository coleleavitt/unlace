__int64 __fastcall sub_1CF6D00(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r14
  unsigned __int8 v10; // al

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = sub_1CF6840((unsigned int *)a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v9 = v7;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) || v7 != *(_QWORD *)(a2 + 8) )
    {
      v4 = sub_EEE9A0(16, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      *(_WORD *)v4 = *(_WORD *)v4 & 0xFE00 | 0x36;
      if ( unk_2CD7484 )
        sub_EE9B50(54);
      *(_WORD *)(v4 + 1) &= 0xF801u;
      *(_QWORD *)(v4 + 8) = v9;
      v10 = sub_B63130(v4);
      *(_BYTE *)(v4 + 1) = (v10 << 6) | *(_BYTE *)(v4 + 1) & 0x3F;
      *(_BYTE *)(v4 + 2) = *(_BYTE *)(v4 + 2) & 0xF8 | (v10 >> 2) & 7;
    }
    result = v4;
  }
  else
  {
    result = 1;
  }
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v6;
  return result;
}
