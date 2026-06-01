unsigned __int64 __fastcall sub_2CB7F0(
        QT::QWidget *this,
        _QWORD *a2,
        __int64 a3,
        int *a4,
        unsigned __int8 a5,
        double a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // r15
  __int64 (*v12)(void); // rax
  int v13; // eax
  __int64 v14; // rbp
  const char *v15; // rsi
  unsigned __int64 i; // r14
  __int64 v17; // r13
  __int64 v18; // rsi
  double v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  _DWORD *v24; // rdi
  __int64 (*v25)(void); // rax
  int v26; // eax
  _DWORD *v27; // r12
  __int64 v28; // rax
  unsigned int v29; // ebp
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  double v38; // [rsp+0h] [rbp-A8h]
  _QWORD *v39; // [rsp+8h] [rbp-A0h]
  int v40; // [rsp+14h] [rbp-94h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  int *v42; // [rsp+20h] [rbp-88h]
  char *v43; // [rsp+28h] [rbp-80h]
  char *v44; // [rsp+30h] [rbp-78h]
  _QWORD *v45; // [rsp+38h] [rbp-70h]
  unsigned int v46; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v47; // [rsp+44h] [rbp-64h] BYREF
  int v48; // [rsp+48h] [rbp-60h] BYREF
  char v49; // [rsp+4Ch] [rbp-5Ch]
  __int64 v50; // [rsp+50h] [rbp-58h] BYREF
  __int128 v51; // [rsp+58h] [rbp-50h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v39 = a2;
  v41 = a3;
  v42 = a4;
  v52 = __readfsqword(0x28u);
  v40 = a5;
  sub_1F2240(this, a2, a3, a4, a5, 1, a6);
  v8 = *a2;
  v9 = sub_178210((__int64)a2, a3 + 8, (__int64)this);
  v10 = *((_DWORD **)this + 91);
  v11 = v9;
  v12 = *(__int64 (**)(void))(*(_QWORD *)v10 + 104LL);
  if ( (char *)v12 == (char *)hv_hexplace_gen_t__::vfunc_13 )
    v13 = v10[9];
  else
    v13 = v12();
  if ( v13 == 4 )
    sub_209270((__int64)this, (__int64)v39, (char *)v11);
  if ( *((_BYTE *)this + 1080) )
  {
    a6 = 0.0;
    v50 = 0;
    v51 = 0;
    v14 = 2165563958LL;
    v45 = v39 + 1;
    v44 = (char *)&v50;
    v43 = &asc_5E5F48[0xFFFFFFFDFBB07728LL];
    do
    {
      if ( v14 != 2165563958LL )
        *(_QWORD *)&v51 = 0;
      v15 = v44;
      sub_174A70(v11, (__int64 *)v44, (__int64)v45, v43[4 * v14], 0);
      for ( i = 0; i < (unsigned __int64)v51; *(_BYTE *)(v17 + 12) = 1 )
      {
        v18 = *(_QWORD *)(v11 + 136);
        *(_QWORD *)&v19 = v50 + 8 * i;
        v20 = *(_QWORD *)(v11 + 144);
        if ( *(_QWORD *)(v11 + 152) < (unsigned __int64)(v20 + 1) )
        {
          *(_QWORD *)&v38 = v50 + 8 * i;
          v21 = qvector_reserve(v11 + 136, v18, v20 + 1, 16);
          *(_QWORD *)(v11 + 136) = v21;
          v18 = v21;
          v19 = v38;
          v20 = *(_QWORD *)(v11 + 144);
        }
        v17 = v18 + 16 * v20;
        v15 = (const char *)v14;
        *(_QWORD *)v17 = -1;
        *(_DWORD *)(v17 + 8) = -1;
        *(_BYTE *)(v17 + 12) = 0;
        ++*(_QWORD *)(v11 + 144);
        *(_DWORD *)v17 = **(_DWORD **)&v19;
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(*(_QWORD *)&v19 + 4LL);
        *(_DWORD *)(v17 + 8) = sub_524F80((char *)this + 40, v14, 0);
        ++i;
      }
      v22 = v14 + 1;
      v14 = 2165563959LL;
    }
    while ( v22 != 2165563960LL );
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      a6 = qfree(v50, v15);
    }
  }
  else
  {
    v24 = *((_DWORD **)this + 91);
    v25 = *(__int64 (**)(void))(*(_QWORD *)v24 + 104LL);
    if ( (char *)v25 == (char *)hv_hexplace_gen_t__::vfunc_13 )
      v26 = v24[9];
    else
      v26 = v25();
    if ( (unsigned int)(v26 - 2) > 2 )
    {
      v27 = (_DWORD *)(*((_QWORD *)this + 91) + 16LL);
      v28 = (*(__int64 (__fastcall **)(QT::QWidget *, _QWORD))(*(_QWORD *)this + 720LL))(this, 0);
      if ( (unsigned __int8)sub_2CAA00(v27, &v46, &v47, v8, v28, 1u, a6) )
      {
        v29 = v46;
        v48 = -1;
        v49 = 0;
        LODWORD(v50) = -1;
        BYTE4(v50) = 0;
        if ( (unsigned __int8)sub_177620((_QWORD *)v11, (__int64)&v48, (__int64)&v50, v46, a6) )
        {
          *(_QWORD *)&a6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v29), _mm_cvtsi32_si128(v47 - v29)).m128i_u64[0];
          if ( v49 )
          {
            v33 = *(_QWORD *)(v11 + 168);
            v34 = *(_QWORD *)(v11 + 160);
            if ( *(_QWORD *)(v11 + 176) < (unsigned __int64)(v33 + 1) )
            {
              v38 = a6;
              v37 = qvector_reserve(v11 + 160, v34, v33 + 1, 16);
              *(_QWORD *)(v11 + 160) = v37;
              v34 = v37;
              v33 = *(_QWORD *)(v11 + 168);
            }
            v35 = v34 + 16 * v33;
            *(_QWORD *)v35 = -1;
            *(_DWORD *)(v35 + 8) = -1;
            *(_BYTE *)(v35 + 12) = 0;
            ++*(_QWORD *)(v11 + 168);
            *(double *)v35 = a6;
            *(_DWORD *)(v35 + 8) = v48;
            *(_BYTE *)(v35 + 12) = v49;
          }
          if ( !BYTE4(v50) )
          {
            LODWORD(v50) = -1;
            BYTE4(v50) = 1;
          }
          v30 = *(_QWORD *)(v11 + 144);
          v31 = *(_QWORD *)(v11 + 136);
          if ( *(_QWORD *)(v11 + 152) < (unsigned __int64)(v30 + 1) )
          {
            v38 = a6;
            v36 = qvector_reserve(v11 + 136, v31, v30 + 1, 16);
            a6 = v38;
            *(_QWORD *)(v11 + 136) = v36;
            v31 = v36;
            v30 = *(_QWORD *)(v11 + 144);
          }
          v32 = v31 + 16 * v30;
          *(_QWORD *)v32 = -1;
          *(_DWORD *)(v32 + 8) = -1;
          *(_BYTE *)(v32 + 12) = 0;
          ++*(_QWORD *)(v11 + 144);
          *(double *)v32 = a6;
          *(_DWORD *)(v32 + 8) = v50;
          *(_BYTE *)(v32 + 12) = BYTE4(v50);
        }
      }
    }
  }
  return sub_1F2240(this, v39, v41, v42, v40, 62, a6);
}
