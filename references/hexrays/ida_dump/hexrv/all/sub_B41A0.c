__int64 __fastcall sub_B41A0(__int64 a1, char *a2, __int64 a3, char a4)
{
  char v4; // al
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r15
  signed int v8; // eax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rbp
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *a2;
  v12[3] = __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( v4 != 9 )
      return 0;
    if ( (unsigned __int64)*(int *)(*((_QWORD *)a2 + 1) + 16LL) < *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
    {
      sub_120CC0(a2);
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    if ( !under_debugger )
      sub_37DDE0(50046);
LABEL_17:
    BUG();
  }
  if ( v4 != 9 )
  {
    if ( !under_debugger )
      sub_37DDE0(50044);
    goto LABEL_17;
  }
  v5 = *(int *)(*((_QWORD *)a2 + 1) + 16LL);
  if ( v5 >= *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) )
  {
    if ( !under_debugger )
      sub_37DDE0(50045);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *((int *)a2 + 1);
  v8 = sub_133C80(*(_QWORD *)(v6 + 328), v7, 1);
  v9 = v8;
  if ( v8 != -1 )
  {
    v12[1] = v7;
    v12[0] = v8;
    sub_311AB0(v6 + 192, v12);
    *(_QWORD *)(**(_QWORD **)(a1 + 56) + 8 * v5) = a2;
    v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*((_DWORD *)a2 + 1)), _mm_cvtsi32_si128(v9)).m128i_u64[0];
    sub_1188E0(a2);
    *a2 = 1;
    *(_QWORD *)(a2 + 4) = v10;
    return 0;
  }
  return v9;
}
