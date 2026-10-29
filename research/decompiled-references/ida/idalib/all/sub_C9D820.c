__int64 __fastcall sub_C9D820(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  v5 = *(_QWORD *)(a2 + 8);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v7 = sub_A76A60(a3, v5, a4);
    v8 = *(_QWORD *)(a2 + 16);
    *(_BYTE *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 8) = v7;
    result = a1;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 16) = v8;
  }
  else
  {
    *(_DWORD *)a1 = 1;
    result = a1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
  }
  *(_DWORD *)(a1 + 28) = 0;
  return result;
}
