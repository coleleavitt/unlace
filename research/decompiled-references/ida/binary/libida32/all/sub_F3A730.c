__int64 __fastcall sub_F3A730(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4, unsigned __int8 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a1;
  v6 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    v6 = a2;
  *(_BYTE *)(a1 + 18) &= 0xF8u;
  *(_QWORD *)(a1 + 8) = v6;
  *(_WORD *)(a1 + 16) = 1837;
  v7 = *(_QWORD *)(a6 + 8);
  *(_QWORD *)(a1 + 40) = (4LL * a5) | a3 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(a1 + 32) = v7;
  *(_WORD *)(a1 + 20) = a4;
  result = *(unsigned int *)(a6 + 4);
  *(_WORD *)(a1 + 22) = result;
  return result;
}

