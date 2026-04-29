unsigned __int64 __fastcall sub_3EDF90(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  int v5; // ebx
  unsigned __int16 v6; // ax
  int v7; // r14d
  unsigned __int8 v10; // r10
  __int64 v11; // rdx
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rax
  signed int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r14d
  int v19; // eax
  __int64 v21; // [rsp-8h] [rbp-80h]
  unsigned __int8 v22; // [rsp+0h] [rbp-78h]
  unsigned __int8 v23; // [rsp+8h] [rbp-70h]
  bool v24; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v25[16]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v26[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a1 + 890);
  v27 = __readfsqword(0x28u);
  if ( (((_WORD)v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC69u, a2, a5);
LABEL_20:
    BUG();
  }
  v6 = *(_WORD *)(a1 + 48);
  if ( v6 > 0x6A0u )
    goto LABEL_16;
  v7 = a2;
  if ( v6 > 0x69Eu )
  {
    v24 = v6 != 1695;
    v10 = 0;
    goto LABEL_7;
  }
  if ( v6 == 504 )
  {
    v24 = 0;
    v10 = 1;
    goto LABEL_7;
  }
  if ( v6 != 1694 )
  {
LABEL_16:
    if ( !under_debugger )
      sub_37E160(0xD43Bu, a2, a5);
    goto LABEL_20;
  }
  v24 = 1;
  v10 = 1;
LABEL_7:
  v11 = *(_QWORD *)(a1 + 832);
  v12 = 2 * v5;
  v13 = **(int **)(v11 + 696);
  if ( (_DWORD)v13 == (_DWORD)a2 || (_DWORD)v13 == a3 )
  {
    v22 = v10;
    sub_1D1F50(a1, 3u, *(_DWORD *)(v11 + 80), 0, 0x3BEA45E214ADDC55LL, v13, 0);
    v11 = *(_QWORD *)(a1 + 832);
    a2 = v21;
    v10 = v22;
  }
  v14 = *(_QWORD *)(v11 + 760);
  if ( !v14
    || (v23 = v10,
        v15 = *(_DWORD *)(*(_QWORD *)(v11 + 752) + 4 * v14 - 4),
        *(_QWORD *)(v11 + 760) = v14 - 1,
        a2 = *(unsigned __int16 *)(a1 + 890),
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v15)).m128i_u64[0],
        sub_3EDDF0((_QWORD *)a1, a2, v12, v7, v15, v10),
        v16 = *(_QWORD *)(a1 + 832),
        (v17 = *(_QWORD *)(v16 + 760)) == 0) )
  {
    sub_3E5460(a5, a1, a2);
  }
  v18 = *(_DWORD *)(*(_QWORD *)(v16 + 752) + 4 * v17 - 4);
  *(_QWORD *)(v16 + 760) = v17 - 1;
  sub_3EDDF0((_QWORD *)a1, *(unsigned __int16 *)(a1 + 890), v12, a3, v18, v23);
  sub_3EAB70(a1, 0xEu, v12, v15, v18, v15, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v18);
  v26[2] = a4;
  *(_DWORD *)v25 = 1;
  *(double *)&v25[4] = a5;
  v19 = *(unsigned __int16 *)(a1 + 890);
  v26[0] = 1;
  v26[1] = v19;
  sub_3EB6F0((_QWORD *)a1, v24 + 10, v25, nullptr, (unsigned __int8 *)v26);
  sub_3E8540(*(_QWORD *)(a1 + 832), v15);
  sub_118BA0((__int64)v26);
  sub_118BA0((__int64)v25);
  return v27 - __readfsqword(0x28u);
}
