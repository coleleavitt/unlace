void __fastcall sub_181F590(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  _QWORD *v7; // rdi
  int v8; // eax
  bool v9; // zf
  __m128i *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  const void *v16; // r14
  __int64 v17; // r13
  __m128i *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // [rsp+8h] [rbp-D0h] BYREF
  const void *v31; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+18h] [rbp-C0h]
  __int64 v33; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v34; // [rsp+30h] [rbp-A8h] BYREF
  char v35; // [rsp+88h] [rbp-50h]
  unsigned int v36; // [rsp+90h] [rbp-48h]
  char v37; // [rsp+94h] [rbp-44h]

  if ( a3[3].m128i_i16[4] > 1u )
  {
    sub_168B9F0((__int64)&v31, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCAAu, 0);
    v15 = sub_15DD120((__int64)&v31, (__int64)a3);
    LODWORD(v30) = 1;
    sub_1587D10(v15, (int *)&v30);
    sub_15F7200(&v31);
  }
  else
  {
    v7 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v7 = (_QWORD *)*v7;
    v8 = *(_BYTE *)(sub_B8EAA0((__int64)v7) + 8) & 0x7F;
    if ( v8 == 24 || !v8 )
    {
      v31 = nullptr;
      v9 = a3[3].m128i_i16[4] == 0;
      v32 = 0;
      if ( !v9 && (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v31, nullptr, a4, a5) )
      {
        v16 = v31;
        v17 = v32;
        v18 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
        sub_B2D4B0(v18, *(_QWORD *)(a1 + 248), a3, v16, v17);
        sub_B8CC60(a2, (__int64)v18, v19, v20, v21, v22);
      }
      v10 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
      sub_B1B6A0(v10, *(_QWORD *)(a1 + 248), a3);
      sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
    }
    else
    {
      sub_168B9F0((__int64)&v31, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCA3u, 0);
      if ( v35 )
      {
        sub_AE9DF0(&v34, a2, 0xAu);
      }
      else if ( v37 )
      {
        v25 = sub_168B9E0(&v31);
        v28 = v33;
        if ( v33 )
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
        v30 = v28;
        v29 = sub_1587BC0(v25, &v30, v23, v24, v26, v27);
        sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v36 + 8), a2, 0xAu);
      }
      sub_15F7200(&v31);
    }
  }
}
