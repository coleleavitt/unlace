__int64 __fastcall sub_7CC270(__int64 a1, _QWORD *a2, unsigned int **a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // r13
  unsigned __int64 v7; // r12
  _OWORD *v8; // rax
  unsigned int *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  _OWORD v13[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v14; // [rsp+20h] [rbp-68h]
  _OWORD *v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+38h] [rbp-50h]
  __int128 v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+50h] [rbp-38h]

  if ( !a3 )
    return 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*a2 + 424LL);
  if ( v5 == sub_79EFD0 )
    v6 = a2[18];
  else
    v6 = v5((__int64)a2);
  v7 = *(_QWORD *)(a1 + 144);
  v14 = 0;
  v13[0] = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v6);
  v13[1] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  v15 = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v16 = 8;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  if ( v7 != v6 )
    sub_15D2280(*((_QWORD *)&v13[0] + 1), *(_QWORD *)&v13[0]);
  v9 = *a3;
  if ( *((_QWORD *)&v13[0] + 1) != *(_QWORD *)&v13[0] )
    v9 = (unsigned int *)sub_15CFF50(v13, v9);
  v10 = a2[215];
  if ( v10 )
  {
    v11 = *v9;
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
      v10 = 0;
    else
      v10 = *(_QWORD *)(v10 + 8 * v11);
  }
  sub_15CE760(v13);
  return v10;
}

