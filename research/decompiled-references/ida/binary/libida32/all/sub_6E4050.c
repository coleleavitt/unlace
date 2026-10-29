__int64 __fastcall sub_6E4050(_QWORD *a1, __int64 a2, void **a3, int a4, double a5, __m128i a6, __m128 a7)
{
  __int64 v7; // r12
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // rax
  int v12; // r13d

  v7 = a2;
  if ( !a2 )
    v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 1480LL) + 8LL);
  v10 = a4;
  v9 = a4 | 0x40A;
  BYTE1(v10) |= 4u;
  if ( (debug & 0x4000) == 0 )
    v9 = v10;
  v11 = (_QWORD *)a1[1];
  *((_DWORD *)a1 + 30) = v9;
  *v11 |= 0x100uLL;
  v12 = *((_DWORD *)a1 + 30);
  sub_6D5600((__int64)a1);
  parse_command_line(a1 + 9, 0, &byte_22CD811, 0);
  if ( a3 && *(_BYTE *)a3 )
    return sub_6E2510((__int64)a1, v7, a3, v12, a5, a6, a7);
  sub_6DD970(a1);
  sub_6D7ED0((__int64)a1);
  return 1;
}

