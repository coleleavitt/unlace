__int64 __fastcall sub_1509A00(__int64 a1, unsigned int a2, char a3, __m128i a4)
{
  unsigned int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD v11[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_DWORD *)(a1 + 40);
  v6 = *(_DWORD *)(a1 + 16);
  v11[0] = 0;
  v7 = sub_20EB760(a2, 0);
  v9 = sub_1509090((const __m128i *)a1, v7, a4, v8, v11, 0);
  if ( v9 == 1 || a3 )
    return 0;
  else
    return sub_1B213A0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), a2, v9 & 0xFFFFFFFFFFFFFFFELL, v5, v6, v11[0]);
}
