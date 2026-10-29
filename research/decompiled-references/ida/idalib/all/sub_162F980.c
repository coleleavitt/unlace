void __fastcall sub_162F980(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 (*v29)(); // rax
  _BYTE v30[184]; // [rsp+0h] [rbp-B8h] BYREF

  v8 = a2;
  v9 = *(_QWORD **)(*a1 + 248);
  v10 = v9[294];
  v9[304] += 40LL;
  v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v9[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
    v9[294] = (char *)v11 + 40;
  else
    v11 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, a5, a6);
  sub_B07920(v11, *(_QWORD *)(*a1 + 248), a3);
  sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
  sub_162EF90(*(_QWORD **)(*a1 + 632), a2, a3);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v20 = sub_B8C3D0(a2, a2, v16, v17, v18, v19);
    v23 = *v20;
    v24 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( *v20 >= v24 )
    {
      if ( v23 == v24 )
        goto LABEL_10;
      while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 116 )
      {
        v24 += 8LL;
        if ( v23 == v24 )
          goto LABEL_10;
      }
    }
    else
    {
      v25 = (__int64 *)*v20;
      while ( 1 )
      {
        v23 = *v25;
        if ( *(_WORD *)(*v25 + 36) == 116 )
          break;
        if ( (__int64 *)v24 == ++v25 )
          goto LABEL_10;
      }
      if ( (__int64 *)v24 == v25 )
      {
LABEL_10:
        if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
          return;
LABEL_11:
        v26 = sub_B8C3D0(v8, a2, v23, v24, v21, v22);
        sub_16281C0((__int64)v26);
        if ( !*((_DWORD *)v26 + 2) )
          *(_BYTE *)(v8 + 29) &= ~1u;
        return;
      }
    }
    v27 = *a1;
    v28 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17448LL);
    v29 = *(__int64 (**)())(*(_QWORD *)v28 + 584LL);
    if ( v29 != sub_A55EE0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, const char *, __int64))v29)(v28, "vfp", 3) )
        return;
      v27 = *a1;
    }
    a2 = v27 + 8;
    sub_168B9F0(v30, a2, *(unsigned int *)(v8 + 24), 6518, 0);
    sub_15F7200(v30);
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      return;
    goto LABEL_11;
  }
}
