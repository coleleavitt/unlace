void __fastcall sub_1D3A4A0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, unsigned __int64 *a5)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rsi

  v8 = *(_QWORD *)(a2 + 8);
  v9 = a3;
  if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    sub_1D3A4A0(a1, v8 & 0xFFFFFFFFFFFFFFF8LL, a3);
    v8 = *(_QWORD *)(a2 + 8);
  }
  v10 = 0;
  if ( ((v8 >> 1) & 3) == 2 )
    v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
  sub_1D39F20(a1, v10, v9, a4, a5);
}
