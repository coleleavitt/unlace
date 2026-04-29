unsigned __int64 __fastcall sub_3EA3B0(__int64 a1, __int64 a2, int a3, int a4, double a5)
{
  unsigned __int16 v5; // ax
  unsigned __int8 v7; // r10
  int v8; // r14d
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rax
  signed int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r14d
  int v18; // eax
  __int64 v20; // [rsp-8h] [rbp-80h]
  unsigned __int8 v21; // [rsp+7h] [rbp-71h]
  unsigned __int8 v22; // [rsp+8h] [rbp-70h]
  unsigned __int8 v23[16]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v24[6]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v5 = *(_WORD *)(a1 + 48) - 69;
  if ( v5 > 2u )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE25u, a2, a5);
    BUG();
  }
  v7 = byte_40C227[v5];
  v8 = a2;
  v10 = *(_QWORD *)(a1 + 832);
  v21 = byte_40C224[v5];
  v11 = 2 * *(unsigned __int16 *)(a1 + 842);
  v12 = **(int **)(v10 + 632);
  if ( (_DWORD)v12 == (_DWORD)a2 || (_DWORD)v12 == a3 )
  {
    v22 = byte_40C227[v5];
    sub_1D1C90(a1, 3u, *(_DWORD *)(v10 + 80), 0, 0x3BEA45E214ADDC55LL, v12, 0);
    v10 = *(_QWORD *)(a1 + 832);
    a2 = v20;
    v7 = v22;
  }
  v13 = *(_QWORD *)(v10 + 712);
  if ( !v13
    || (v14 = *(_DWORD *)(*(_QWORD *)(v10 + 704) + 4 * v13 - 4),
        *(_QWORD *)(v10 + 712) = v13 - 1,
        a2 = *(unsigned __int16 *)(a1 + 842),
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v14)).m128i_u64[0],
        sub_3EA150(a1, a2, v11, v8, v14, v7, a5),
        v15 = *(_QWORD *)(a1 + 832),
        (v16 = *(_QWORD *)(v15 + 712)) == 0) )
  {
    sub_3E4E50(a5, a1, a2);
  }
  v17 = *(_DWORD *)(*(_QWORD *)(v15 + 704) + 4 * v16 - 4);
  *(_QWORD *)(v15 + 712) = v16 - 1;
  sub_3EA150(a1, *(unsigned __int16 *)(a1 + 842), v11, a3, v17, v21, a5);
  sub_3E8D60(a1, 0xEu, v11, v14, v17, v14, 0);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v17);
  *(_DWORD *)v23 = 1;
  *(double *)&v23[4] = a5;
  v18 = *(unsigned __int16 *)(a1 + 842);
  v24[0] = 1;
  v24[2] = a4;
  v24[1] = v18;
  sub_3E9430(a1, 11, v23, nullptr, (unsigned __int8 *)v24);
  sub_3E6F70(*(_QWORD *)(a1 + 832), v14);
  sub_1188E0((__int64)v24);
  sub_1188E0((__int64)v23);
  return v25 - __readfsqword(0x28u);
}
