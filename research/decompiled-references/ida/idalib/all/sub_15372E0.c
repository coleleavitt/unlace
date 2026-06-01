__int64 __fastcall sub_15372E0(__int64 a1, __int64 a2, _QWORD *a3, double a4, __m128 a5)
{
  unsigned int v6; // r13d
  __m128i v7; // xmm0
  bool v8; // zf
  _BOOL8 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v13; // [rsp+0h] [rbp-98h] BYREF
  __int64 v14; // [rsp+8h] [rbp-90h]
  _BYTE v15[32]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v17; // [rsp+40h] [rbp-58h]
  unsigned int v18; // [rsp+50h] [rbp-48h]
  const char *v19; // [rsp+58h] [rbp-40h]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 40);
  sub_2233820(v16);
  v13 = a2;
  v18 = v6;
  v7 = (__m128i)_mm_loadh_ps((const double *)&v13);
  v8 = *(_WORD *)(a1 + 32) == 62;
  v16[0] = &off_2B4A628;
  v17 = v7;
  v19 = "parsing function try block";
  if ( v8 )
    sub_14A5C50(a1, a2, v7, *(double *)a5.m128_u64);
  else
    sub_187CD10(*(_QWORD *)(a1 + 96), a2);
  v9 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0
    && a2
    && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3;
  *(double *)v7.m128i_i64 = sub_1667EB0(v15, *(_QWORD *)(a1 + 96), "InternalPragmaState", 19, v9);
  LODWORD(v13) = *(_DWORD *)(a1 + 16);
  v10 = sub_1536E10((const __m128i *)a1, v6, 1, v7, a5);
  if ( v10 == 1 )
  {
    v14 = *(_QWORD *)(a1 + 96);
    sub_1C36400(v14, 0);
    v10 = sub_1C36480(*(_QWORD *)(a1 + 96), (unsigned int)v13, (unsigned int)v13, 0, 0, 0);
    sub_1C36470(v14);
  }
  if ( *a3 )
  {
    sub_1564F70(*a3);
    *a3 = 0;
  }
  v11 = sub_17F10E0(*(_QWORD *)(a1 + 96), a2, v10 & 0xFFFFFFFFFFFFFFFELL);
  sub_1667FA0(v15);
  v16[0] = &off_2B4A628;
  sub_22338A0(v16);
  return v11;
}
