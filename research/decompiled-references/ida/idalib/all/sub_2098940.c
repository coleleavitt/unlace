void __fastcall sub_2098940(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r10
  size_t v11; // rax
  _BYTE *v12; // r15
  __int64 v13; // rdx
  size_t v14; // rax
  __int64 v15; // r15
  size_t v16; // rax
  size_t v17; // rax
  __int64 v18; // r13
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  _QWORD *v23; // rax
  _BYTE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10
  _BYTE *v27; // rax
  __int64 v28; // rdx
  _BYTE *v29; // rsi
  void *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rbx
  void *v33; // rdi
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 *v37; // rbp
  __int64 *v38; // r14
  __m128i v39; // xmm1
  __int64 v40; // rsi
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 v45; // [rsp+8h] [rbp-360h]
  __int64 v46; // [rsp+8h] [rbp-360h]
  __int64 v47; // [rsp+10h] [rbp-358h]
  __int64 v48; // [rsp+18h] [rbp-350h]
  __int64 v49; // [rsp+18h] [rbp-350h]
  __int64 v50; // [rsp+20h] [rbp-348h]
  __int64 v51; // [rsp+28h] [rbp-340h] BYREF
  __int64 v52; // [rsp+38h] [rbp-330h] BYREF
  _QWORD v53[10]; // [rsp+40h] [rbp-328h] BYREF
  void *v54[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _BYTE v55[64]; // [rsp+A0h] [rbp-2C8h] BYREF
  __m128i v56; // [rsp+E0h] [rbp-288h] BYREF
  __m128i v57; // [rsp+F0h] [rbp-278h] BYREF
  void *v58[2]; // [rsp+130h] [rbp-238h] BYREF
  _OWORD v59[4]; // [rsp+140h] [rbp-228h] BYREF
  __int64 v60[10]; // [rsp+180h] [rbp-1E8h] BYREF
  __int64 v61; // [rsp+1D0h] [rbp-198h]
  unsigned int v62; // [rsp+1D8h] [rbp-190h]
  __int64 v63; // [rsp+1E0h] [rbp-188h] BYREF

  v8 = *a1;
  v51 = a6;
  if ( (*(__int64 (__fastcall **)(__int64 *))(v8 + 104))(a1) )
    return;
  v52 = a5;
  v47 = v51;
  if ( !v51 )
  {
    v60[0] = a5;
    v34 = *(_QWORD *)(a2 + 32);
    v35 = a2 + 24;
    if ( a2 + 24 == v34 )
      return;
    do
    {
      if ( v34 )
        v36 = v34 - 56;
      else
        v36 = 0;
      sub_2098180(v60, v36);
      v34 = *(_QWORD *)(v34 + 8);
    }
    while ( v35 != v34 );
    v42 = *(_QWORD *)(a2 + 32);
    if ( v35 == v42 )
      return;
    if ( v42 )
    {
      if ( *(_QWORD *)(v42 + 16) != v42 + 16 )
      {
LABEL_51:
        v9 = v42 - 56;
        v51 = v9;
        goto LABEL_5;
      }
      v42 = *(_QWORD *)(v42 + 8);
      if ( v35 == v42 )
        return;
      while ( v42 )
      {
        if ( *(_QWORD *)(v42 + 16) != v42 + 16 )
          goto LABEL_51;
        v42 = *(_QWORD *)(v42 + 8);
        if ( v42 == v35 )
          return;
      }
    }
    BUG();
  }
  sub_2098180(&v52, v51);
  v9 = v51;
LABEL_5:
  v10 = *(_QWORD *)(v9 + 80);
  v45 = a3 + a4;
  v58[0] = nullptr;
  v58[1] = nullptr;
  if ( v10 )
    v10 -= 24;
  v48 = v10;
  v11 = j__strlen("IRSizeChange");
  v50 = v48;
  sub_208C700((__int64)v60, (__int64)"size-info", (__int64)"IRSizeChange", v11, (const __m128i *)v58, v48);
  v12 = (_BYTE *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  v49 = v13;
  v14 = j__strlen("Pass");
  sub_208C1E0((__int64)v58, "Pass", v14, v12, v49);
  v15 = sub_20955A0((__int64)v60, (__int64)v58);
  v16 = j__strlen(": IR instruction count changed from ");
  sub_208CA70(v15, ": IR instruction count changed from ", v16);
  v17 = j__strlen("IRInstrsBefore");
  sub_208C560(&v56, "IRInstrsBefore", v17, a4);
  v18 = sub_20955A0(v15, (__int64)&v56);
  v19 = j__strlen(" to ");
  sub_208CA70(v18, " to ", v19);
  v20 = j__strlen("IRInstrsAfter");
  sub_208C2D0(v54, "IRInstrsAfter", v20, v45);
  v46 = sub_20955A0(v18, (__int64)v54);
  v21 = j__strlen("; Delta: ");
  sub_208CA70(v46, "; Delta: ", v21);
  v22 = j__strlen("DeltaInstrCount");
  sub_208C2D0(v53, "DeltaInstrCount", v22, a3);
  sub_20955A0(v46, (__int64)v53);
  sub_2095460((__int64)v53);
  sub_2095460((__int64)v54);
  sub_2095460((__int64)&v56);
  sub_2095460((__int64)v58);
  v23 = (_QWORD *)sub_208D410(v51);
  sub_2091720(v23, v60);
  v24 = (_BYTE *)(*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  v26 = v50;
  if ( v24 )
  {
    v54[0] = v55;
    sub_2094420(v54, v24, (__int64)&v24[v25]);
    v26 = v50;
  }
  else
  {
    v55[0] = 0;
    v54[0] = v55;
    v54[1] = nullptr;
  }
  v56.m128i_i64[0] = a5;
  v56.m128i_i64[1] = (__int64)&v51;
  v57.m128i_i64[0] = v26;
  v57.m128i_i64[1] = (__int64)v54;
  if ( v47 )
  {
    v27 = (_BYTE *)sub_20CC3B0(v51);
    if ( v27 )
    {
      v58[0] = v59;
      sub_2094420(v58, v27, (__int64)&v27[v28]);
      v29 = v58[0];
      v30 = v58[1];
    }
    else
    {
      v29 = v59;
      LOBYTE(v59[0]) = 0;
      v30 = nullptr;
      v58[0] = v59;
      v58[1] = nullptr;
    }
    sub_20982A0(v56.m128i_i64, v29, (size_t)v30);
    if ( v58[0] != v59 )
      operator delete(v58[0]);
  }
  else
  {
    sub_2098900((__int64 **)v58, (__int64 *)(*(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8)), 1);
    v37 = (__int64 *)v58[0];
    sub_2098900((__int64 **)v58, *(__int64 **)a5, *(_DWORD *)(a5 + 8) == 0);
    v38 = (__int64 *)v58[0];
    v39 = _mm_load_si128(&v57);
    *(__m128i *)v58 = _mm_load_si128(&v56);
    v59[0] = v39;
    if ( v37 != v38 )
    {
      v40 = *v38;
      do
      {
        sub_20982A0((__int64 *)v58, (_BYTE *)(v40 + 16), *(_QWORD *)v40);
        v40 = v38[1];
        if ( v40 != -8 && v40 )
        {
          ++v38;
        }
        else
        {
          v41 = v38 + 2;
          do
          {
            do
            {
              v40 = *v41;
              v38 = v41++;
            }
            while ( !v40 );
          }
          while ( v40 == -8 );
        }
      }
      while ( v37 != v38 );
    }
  }
  if ( v54[0] != v55 )
    operator delete(v54[0]);
  v31 = v61;
  v60[0] = (__int64)&off_2C721A0;
  v32 = v61 + 80LL * v62;
  if ( v61 != v32 )
  {
    do
    {
      while ( 1 )
      {
        v32 -= 80;
        v33 = *(void **)(v32 + 32);
        if ( v33 != (void *)(v32 + 48) )
          operator delete(v33);
        if ( *(_QWORD *)v32 == v32 + 16 )
          break;
        operator delete(*(void **)v32);
        if ( v31 == v32 )
          goto LABEL_21;
      }
    }
    while ( v31 != v32 );
LABEL_21:
    v32 = v61;
  }
  if ( (__int64 *)v32 != &v63 )
    free((void *)v32);
}
