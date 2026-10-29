__int64 *__fastcall sub_D900F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v8; // r13
  int v10; // r12d
  int v11; // r12d
  int v12; // esi
  _DWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rdi
  int *v31; // rax
  unsigned int v32; // r13d
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  void *v35; // rax
  int v37; // [rsp+10h] [rbp-B0h]
  void *v39; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+28h] [rbp-98h]
  int v41[2]; // [rsp+38h] [rbp-88h] BYREF
  __m128 v42; // [rsp+40h] [rbp-80h] BYREF
  int v43[2]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v44; // [rsp+58h] [rbp-68h]
  int v45[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 v46; // [rsp+68h] [rbp-58h]
  __int64 v47; // [rsp+70h] [rbp-50h] BYREF
  __int64 v48; // [rsp+78h] [rbp-48h]
  __int64 v49; // [rsp+80h] [rbp-40h] BYREF
  __int64 v50; // [rsp+88h] [rbp-38h]

  v8 = a5;
  v40 = a2 + 16;
  v10 = sub_15C5540((int)a2 + 16, a4, a3, a4, a5, a6);
  LODWORD(v40) = sub_15C5560(a2 + 16, a4);
  v11 = v40 + v10;
  v39 = *(void **)(a2 + 8);
  v42 = _mm_loadh_ps((const double *)&v39);
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v12 = *(_DWORD *)(a2 + 80);
  if ( !*(_WORD *)(v8 + 4) )
  {
    v13 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
    if ( !v13 || *v13 != v12 || v13[1] )
    {
      if ( (unsigned __int8)sub_135E850(a3, *(_QWORD *)(v8 + 16), &v42) )
      {
        v8 = v42.m128_u64[0];
        v39 = *(void **)(a2 + 8);
      }
      else
      {
        v39 = (void *)(a2 + 80);
        v31 = *(int **)(*(_QWORD *)(sub_15D1F10(v8) + 24) + 8LL);
        if ( *((_BYTE *)v31 + 8) )
          sub_DBF6E(0);
        v32 = *v31;
        v47 = 0;
        v48 = 0;
        v49 = 1;
        v50 = 0;
        sub_182CBA0(qword_1C7F2C0, &v49);
        BYTE4(v49) &= ~1u;
        LODWORD(v49) = 1;
        v8 = sub_1674520(v39, &v47, v32);
        v39 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v47);
        sub_182CBA0(v39, &v49);
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        v33 = v42.m128_u64[0];
        if ( v42.m128_u64[0] )
        {
          v34 = v42.m128_u64[1];
          v22 = (*(_DWORD *)(v42.m128_u64[0] + 8))-- == 1;
          if ( v22 )
            sub_15D7BC0(v34, v33);
        }
        v35 = *(void **)(a2 + 8);
        v42.m128_u64[0] = v8;
        v39 = v35;
      }
    }
  }
  LOBYTE(v48) = 0;
  v14 = *(_QWORD *)(a2 + 88);
  LODWORD(v47) = v11 - 1;
  LODWORD(v49) = v11 - 1;
  *(_QWORD *)v41 = v8;
  LOBYTE(v50) = 0;
  v15 = sub_15DCAD0(v14, (int)v41, 0);
  sub_15D0DF0(&v49);
  sub_15D0DF0(&v47);
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  LOBYTE(v48) = 0;
  v16 = *(_QWORD *)(a2 + 88);
  LODWORD(v47) = v11 - 2;
  *(_QWORD *)v43 = v42.m128_u64[0];
  LOBYTE(v50) = 0;
  LODWORD(v49) = v40 - 1;
  v17 = sub_15DCAD0(v16, (int)v43, 0);
  sub_15D0DF0(&v49);
  sub_15D0DF0(&v47);
  if ( v17 )
    ++*(_DWORD *)(v17 + 8);
  LOBYTE(v48) = 0;
  v49 = 0;
  *(_QWORD *)v45 = v42.m128_u64[0];
  v50 = 0;
  v18 = *(_QWORD *)(a2 + 88);
  LODWORD(v47) = v40 - 2;
  v40 = sub_15DCAD0(v18, (int)v45, 0);
  sub_15D0DF0(&v49);
  sub_15D0DF0(&v47);
  if ( v40 )
    ++*(_DWORD *)(v40 + 8);
  v19 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)v43 = 0;
  v44 = v19;
  *(_QWORD *)v45 = 0;
  v46 = v19;
  v47 = 0;
  v48 = v19;
  sub_14B9BF0(a2 + 104, v15, v43);
  sub_14B9BF0(a2 + 104, v17, v45);
  sub_14B9BF0(a2 + 104, v40, &v47);
  sub_D8F2D0(a1, a2, a4, *(__int64 *)v43, *(__int64 *)v45, v47);
  v20 = v47;
  if ( v47 )
  {
    v21 = v48;
    v22 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v21, v20);
  }
  v23 = *(_QWORD *)v45;
  if ( *(_QWORD *)v45 )
  {
    v24 = v46;
    v22 = (*(_DWORD *)(*(_QWORD *)v45 + 8LL))-- == 1;
    if ( v22 )
      sub_15D7BC0(v24, v23);
  }
  v25 = *(_QWORD *)v43;
  if ( *(_QWORD *)v43 )
  {
    v26 = v44;
    v22 = (*(_DWORD *)(*(_QWORD *)v43 + 8LL))-- == 1;
    if ( v22 )
      sub_15D7BC0(v26, v25);
  }
  v27 = v40;
  if ( v40 )
  {
    v37 = *(_DWORD *)(v40 + 8);
    *(_DWORD *)(v40 + 8) = v37 - 1;
    if ( v37 == 1 )
      sub_15D7BC0(v39, v27);
  }
  if ( v17 )
  {
    v22 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v39, v17);
  }
  if ( v15 )
  {
    v22 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v39, v15);
  }
  v28 = v42.m128_u64[0];
  if ( v42.m128_u64[0] )
  {
    v29 = v42.m128_u64[1];
    v22 = (*(_DWORD *)(v42.m128_u64[0] + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v29, v28);
  }
  return a1;
}

