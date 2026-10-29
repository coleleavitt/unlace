__int64 __fastcall sub_157D1F0(__int64 a1, __m128i a2, __m128 a3)
{
  __int64 v3; // r13
  char v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  void *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  char v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  char v20; // r13
  __int64 v21; // rax
  __int128 v22; // [rsp+0h] [rbp-1C8h]
  __int64 v23; // [rsp+8h] [rbp-1C0h]
  __int64 v24; // [rsp+18h] [rbp-1B0h] BYREF
  _BYTE v25[4]; // [rsp+20h] [rbp-1A8h] BYREF
  unsigned int v26; // [rsp+24h] [rbp-1A4h]
  unsigned int v27; // [rsp+28h] [rbp-1A0h]
  unsigned int v28; // [rsp+2Ch] [rbp-19Ch]
  unsigned int v29; // [rsp+30h] [rbp-198h]
  unsigned int v30; // [rsp+34h] [rbp-194h]
  unsigned int v31; // [rsp+38h] [rbp-190h]
  unsigned __int8 v32; // [rsp+3Ch] [rbp-18Ch]
  void *v33; // [rsp+40h] [rbp-188h]
  unsigned int v34; // [rsp+48h] [rbp-180h]
  __int64 v35; // [rsp+50h] [rbp-178h] BYREF
  void *ptr; // [rsp+80h] [rbp-148h]
  unsigned int v37; // [rsp+88h] [rbp-140h]
  __int64 v38; // [rsp+90h] [rbp-138h] BYREF
  _BYTE v39[264]; // [rsp+C0h] [rbp-108h] BYREF

  v3 = 1;
  v5 = *(_BYTE *)(a1 + 2152);
  *(_BYTE *)(a1 + 2152) = 1;
  sub_157A440(v25, a1, *(double *)a2.m128i_i64, a3);
  if ( !(unsigned __int8)sub_1AA8E70(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), v25[0], v26, ptr, v37) )
  {
    v6 = v25[0];
    if ( v25[0] == 19 )
    {
      v18 = 0;
      if ( !v28 )
      {
        v20 = *(_BYTE *)(a1 + 2152);
        *(_BYTE *)(a1 + 2152) = 0;
        v21 = sub_153D810(a1, nullptr, 0, a2, a3);
        *(_BYTE *)(a1 + 2152) = v20;
        v18 = v21 & 0xFFFFFFFFFFFFFFFELL;
      }
      LODWORD(v19) = 0;
      if ( v34 )
        v19 = *(_QWORD *)v33;
      v3 = sub_1AA7870(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), v26, v27, v28, v19, v29, (__int64)ptr, v37, v30, v18);
    }
    else
    {
      v7 = 0;
      v8 = ptr;
      v9 = v37;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL);
      if ( ((1LL << v25[0]) & 0x1FE130) == 0 )
      {
        *((_QWORD *)&v22 + 1) = v37;
        *(_QWORD *)&v22 = ptr;
        sub_1AA1E60((unsigned int)v39, v10, v25[0], v27, 0, 0, v22);
        v11 = v25[0];
        v12 = *(_BYTE *)(a1 + 2152);
        *(_BYTE *)(a1 + 2152) = 0;
        sub_146B5E0(&v24, a1, dword_261B2C0[v11], 1, 0);
        v13 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL);
        v14 = sub_153D810(a1, nullptr, 0, a2, a3);
        v15 = v26;
        v7 = sub_1AA5AA0(v13, v26, v25[0], v32, (_DWORD)ptr, v37, v14);
        v16 = v23;
        if ( v24 )
          sub_1564F70(v24);
        *(_BYTE *)(a1 + 2152) = v12;
        sub_1AA3250(v39, v15, v16);
        v6 = v25[0];
        v8 = ptr;
        v9 = v37;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL);
      }
      v3 = sub_1AA2840(v10, v6, v26, v27, v28, v31, v33, v34, v32, v29, v30, v8, v9, v7);
    }
  }
  if ( ptr != &v38 )
    free(ptr);
  if ( v33 != &v35 )
    free(v33);
  *(_BYTE *)(a1 + 2152) = v5;
  return v3;
}
