__int64 __fastcall sub_704550(_QWORD *a1, __int64 a2, char *a3, int a4, double a5, __m128i a6, __m128 a7)
{
  __int64 v7; // r12
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // rax
  int v12; // r13d

  v7 = a2;
  if ( !a2 )
    v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 1672LL) + 8LL);
  v10 = a4;
  v9 = a4 | 0x40A;
  BYTE1(v10) |= 4u;
  if ( (debug & 0x4000) == 0 )
    v9 = v10;
  v11 = (_QWORD *)a1[1];
  *((_DWORD *)a1 + 30) = v9;
  *v11 |= 0x100uLL;
  v12 = *((_DWORD *)a1 + 30);
  sub_6F5C40((__int64)a1);
  parse_command_line(a1 + 9, 0, &byte_22F0C30, 0);
  if ( a3 && *a3 )
    return sub_702A10((__int64)a1, v7, a3, v12, a5, a6, a7);
  sub_6FCBC0(a1);
  sub_6F8510((__int64)a1);
  return 1;
}
