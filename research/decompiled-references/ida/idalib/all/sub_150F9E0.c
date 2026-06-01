__int64 __fastcall sub_150F9E0(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v5; // r14d
  __int64 v6; // r12
  int v9; // [rsp+Ch] [rbp-1CCh]
  _DWORD v10[3]; // [rsp+14h] [rbp-1C4h] BYREF
  void *v11; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1B0h]
  _BYTE v13[32]; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v14; // [rsp+50h] [rbp-188h] BYREF
  __int128 v15; // [rsp+60h] [rbp-178h]
  void *v16[2]; // [rsp+70h] [rbp-168h]
  __int64 v17; // [rsp+80h] [rbp-158h]
  __int64 v18; // [rsp+88h] [rbp-150h]
  __int64 v19; // [rsp+90h] [rbp-148h]
  __int64 v20; // [rsp+98h] [rbp-140h]
  int v21; // [rsp+A0h] [rbp-138h]
  __int64 v22; // [rsp+A8h] [rbp-130h]
  __int64 v23; // [rsp+B0h] [rbp-128h]
  void *v24; // [rsp+B8h] [rbp-120h]
  __int64 v25; // [rsp+C0h] [rbp-118h]
  _BYTE v26[32]; // [rsp+C8h] [rbp-110h] BYREF
  void *v27; // [rsp+E8h] [rbp-F0h]
  __int64 v28; // [rsp+F0h] [rbp-E8h]
  _BYTE v29[32]; // [rsp+F8h] [rbp-E0h] BYREF
  void *v30; // [rsp+118h] [rbp-C0h]
  __int64 v31; // [rsp+120h] [rbp-B8h]
  __int64 v32; // [rsp+128h] [rbp-B0h] BYREF
  void *v33; // [rsp+130h] [rbp-A8h]
  __int64 v34; // [rsp+138h] [rbp-A0h]
  _BYTE v35[12]; // [rsp+140h] [rbp-98h] BYREF
  __int128 v36; // [rsp+14Ch] [rbp-8Ch]
  void *v37; // [rsp+160h] [rbp-78h]
  __int64 v38; // [rsp+168h] [rbp-70h]
  __int64 v39; // [rsp+170h] [rbp-68h] BYREF
  void *ptr; // [rsp+178h] [rbp-60h]
  __int64 v41; // [rsp+180h] [rbp-58h]
  _QWORD v42[10]; // [rsp+188h] [rbp-50h] BYREF

  v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v9 = *(_DWORD *)(a1 + 40);
  v11 = v13;
  v12 = 0x400000000LL;
  v23 = 0xFFFFFFFFLL;
  v27 = v29;
  v24 = v26;
  v33 = v35;
  v25 = 0x700000000LL;
  v28 = 0x700000000LL;
  v37 = &v39;
  v30 = &v32;
  ptr = v42;
  v14 = 0;
  v15 = 0;
  *(_OWORD *)v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v31 = 0x200000000LL;
  v34 = 0x200000000LL;
  v35[8] = 0;
  v36 = 0;
  v38 = 0x200000000LL;
  v41 = 0x200000000LL;
  v42[1] = 0;
  if ( (unsigned __int8)sub_150CE00(
                          (const __m128i *)a1,
                          a2,
                          a3,
                          (__int64)&v11,
                          (__int64)&v14,
                          (__m128i)0LL,
                          (__m128)0LL)
    || a4 )
  {
    v6 = 0;
  }
  else
  {
    v10[0] = v5;
    v10[1] = v9;
    v10[2] = DWORD1(v15);
    v6 = sub_1B79680(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), a3, v11, (unsigned int)v12, v10, &v14);
  }
  if ( ptr != v42 )
    free(ptr);
  if ( v37 != &v39 )
    free(v37);
  if ( v33 != v35 )
    free(v33);
  if ( v30 != &v32 )
    free(v30);
  if ( v27 != v29 )
    free(v27);
  if ( v24 != v26 )
    free(v24);
  if ( HIDWORD(v17) )
    free(v16[1]);
  if ( v11 != v13 )
    free(v11);
  return v6;
}
