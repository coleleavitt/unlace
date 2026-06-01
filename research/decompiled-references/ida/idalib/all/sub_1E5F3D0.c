void __fastcall sub_1E5F3D0(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // eax
  __m128i v18; // xmm0
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // eax
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  int v24; // [rsp+14h] [rbp-54h]
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  void *v26[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+30h] [rbp-38h]

  v4 = sub_BFB9F0(a2);
  if ( (*(_WORD *)v4 & 0x1FF) == 0x47 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v25 = *(_QWORD *)(v4 + 16);
      if ( (sub_B740B0(v5) & 0xFFFFFFFD) != 0 )
      {
        v11 = sub_B8C330(v25);
        v15 = sub_B7D8D0(v25, v11);
        if ( !v15 )
        {
          v23.m128i_i64[0] = (__int64)&v25;
          v23 = (__m128i)_mm_loadh_ps((const double *)v23.m128i_i64);
          v17 = sub_C00A40(a2, v11, v12, v13, v14);
          v18 = _mm_load_si128(&v23);
          v24 = v17;
          *(__m128i *)v26 = v18;
          v27 = a1;
          sub_15F0FC0(a1, v17, (__int64 (__fastcall *)(__int64))sub_1E5D7D0, (__int64)v26);
          v19 = v25;
          v20 = sub_B8C330(v25);
          v15 = sub_B7D8D0(v19, v20);
          if ( !(unsigned int)sub_B73F60(v25) && v15 )
          {
            v21 = v25;
            v22 = sub_B740B0(v25);
            sub_B74430(v21, v22, v24);
          }
          else if ( !v15 )
          {
            goto LABEL_4;
          }
        }
        sub_BF7F60(v4, v15);
        v16 = *(_QWORD *)(v15 + 48);
        *(_QWORD *)(v4 + 8) = v16;
        *(_QWORD *)(a2 + 8) = v16;
      }
    }
  }
LABEL_4:
  if ( ((*(_WORD *)a2 + 432) & 0x1FFu) <= 8 )
  {
    v6 = sub_A72040(*(_QWORD **)(a1 + 248), **(_QWORD **)(a2 + 24));
    v7 = v6;
    if ( v6 )
    {
      if ( *(_BYTE *)(v6 + 16) == 5 )
      {
        v8 = *(_QWORD **)(a1 + 248);
        v9 = sub_A63CE0(v8);
        LODWORD(v26[1]) = sub_A97D20((__int64)v8, *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
        if ( LODWORD(v26[1]) > 0x40 )
          sub_2205470(v26, 1, 0);
        else
          v26[0] = &dword_0 + 1;
        v10 = sub_A70F70((__int64)v8, *(_QWORD *)(v7 + 32), (__int64)v26, nullptr, 0, 0);
        if ( LODWORD(v26[1]) > 0x40 )
        {
          if ( v26[0] )
            operator delete[](v26[0]);
        }
        *(_QWORD *)(a2 + 8) = v10;
      }
    }
  }
}
