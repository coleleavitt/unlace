__int64 __fastcall sub_153D670(__int64 a1, __int64 a2, __int64 *a3, double a4, __m128 a5)
{
  unsigned int v7; // r15d
  __m128i v8; // xmm0
  __int64 v9; // rax
  _BOOL8 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v15; // [rsp+0h] [rbp-98h] BYREF
  __int64 v16; // [rsp+8h] [rbp-90h]
  _BYTE v17[32]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v19; // [rsp+40h] [rbp-58h]
  unsigned int v20; // [rsp+50h] [rbp-48h]
  const char *v21; // [rsp+58h] [rbp-40h]

  v7 = *(_DWORD *)(a1 + 16);
  sub_2233820(v18);
  v15 = a2;
  v20 = v7;
  v8 = (__m128i)_mm_loadh_ps((const double *)&v15);
  v18[0] = &off_2B4A628;
  v21 = "parsing function body";
  v9 = *(_QWORD *)(a1 + 8);
  v19 = v8;
  v10 = (*(_BYTE *)(*(_QWORD *)(v9 + 56) + 1LL) & 8) != 0 && a2 && (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3;
  *(double *)v8.m128i_i64 = sub_1667EB0(v17, *(_QWORD *)(a1 + 96), "InternalPragmaState", 19, v10);
  v11 = sub_153CA60(a1, 0, v8, a5);
  if ( v11 == 1 )
  {
    v16 = *(_QWORD *)(a1 + 96);
    sub_1C36400(v16, 0);
    v15 = sub_1C36480(*(_QWORD *)(a1 + 96), v7, v7, 0, 0, 0);
    sub_1C36470(v16);
    v11 = v15;
  }
  v12 = *a3;
  if ( *a3 )
  {
    v15 = v11;
    sub_1564F70(v12);
    *a3 = 0;
    v11 = v15;
  }
  v13 = sub_17F10E0(*(_QWORD *)(a1 + 96), a2, v11 & 0xFFFFFFFFFFFFFFFELL);
  sub_1667FA0(v17);
  v18[0] = &off_2B4A628;
  sub_22338A0(v18);
  return v13;
}
