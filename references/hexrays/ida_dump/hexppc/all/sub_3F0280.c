__int64 __fastcall sub_3F0280(__int64 a1, int a2, unsigned int a3, unsigned __int16 a4, char a5, char a6, double a7)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  signed int v13; // r14d

  v8 = a3;
  v9 = *(_QWORD *)(a1 + 832);
  v10 = *(_QWORD *)(v9 + 4464);
  if ( !v10 )
    sub_3E6800(a7, a1, v8);
  v13 = *(_DWORD *)(*(_QWORD *)(v9 + 4456) + 4 * v10 - 4);
  *(_QWORD *)(v9 + 4464) = v10 - 1;
  sub_3EF940(a1, v8, a4, v13, a7);
  return sub_3EF3E0(a1, a2, a5, a6, v13, a7);
}
