__int64 __fastcall sub_DAC80(int a1, __int32 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 i; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 j; // r15
  __int64 v17; // rax
  int v18; // ebx
  __int64 k; // rax
  TView **v21; // r13
  TView *v22; // rbx
  TView *v23; // r15
  __int64 Bounds; // rax
  TView *v25; // rdi
  __int64 v26; // rdx
  int v27; // r14d
  __int64 v28; // rax
  int v29; // edx
  int v30; // esi
  int v31; // esi
  __int64 Extent; // rax
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm0
  _QWORD *v35; // rbp
  __m128i v36; // [rsp+8h] [rbp-80h] BYREF
  __int64 *v37; // [rsp+18h] [rbp-70h]
  __int64 v38; // [rsp+28h] [rbp-60h] BYREF
  __int64 v39; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-50h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v36.m128i_i32[3] = a2;
  v41 = __readfsqword(0x28u);
  dword_251530 = a1;
  qword_251198 = 0;
  byte_251535 = 0;
  byte_251534 = 1;
  byte_25159B = 0;
  byte_25159A = a2;
  byte_251599 = 0;
  byte_251598 = 0;
  nullsub_99();
  v2 = qword_251450;
  dword_244128 = -1;
  dword_244124 = -1;
  if ( qword_251450 )
  {
    v3 = xmmword_251458;
    if ( (_QWORD)xmmword_251458 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + (v4 << 6));
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        ++v4;
        v2 = qword_251450;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&xmmword_251458 = 0;
    qfree();
    qword_251450 = 0;
    *((_QWORD *)&xmmword_251458 + 1) = 0;
  }
  v6 = qword_251410;
  dword_25110C = 0;
  if ( qword_251410 )
  {
    v36.m128i_i64[0] = xmmword_251418;
    if ( (_QWORD)xmmword_251418 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + v7);
        if ( *(_QWORD *)(v6 + v7 + 176) )
        {
          v9[23] = 0;
          qfree();
        }
        if ( v9[15] )
        {
          v9[16] = 0;
          qfree();
        }
        if ( v9[11] )
        {
          v9[12] = 0;
          qfree();
        }
        v10 = v9[8];
        if ( v10 )
        {
          v11 = v9[9];
          if ( v11 )
          {
            for ( i = 0; i != v11; ++i )
            {
              v13 = v10 + 32 * i;
              if ( *(int *)v13 >= -1 && *(_QWORD *)(v13 + 8) )
              {
                *(_QWORD *)(v13 + 16) = 0;
                qfree();
                v10 = v9[8];
              }
            }
          }
          v9[9] = 0;
          qfree();
        }
        v14 = v9[5];
        if ( v14 )
        {
          v15 = v9[6];
          if ( v15 )
          {
            for ( j = 0; j != v15; ++j )
            {
              v17 = v14 + 32 * j;
              if ( *(int *)v17 >= -1 && *(_QWORD *)(v17 + 8) )
              {
                *(_QWORD *)(v17 + 16) = 0;
                qfree();
                v14 = v9[5];
              }
            }
          }
          v9[6] = 0;
          qfree();
        }
        if ( v9[1] )
        {
          v9[2] = 0;
          qfree();
        }
        v6 = qword_251410;
        ++v8;
        v7 += 232;
      }
      while ( v36.m128i_i64[0] != v8 );
    }
    *(_QWORD *)&xmmword_251418 = 0;
    qfree();
    qword_251410 = 0;
    *((_QWORD *)&xmmword_251418 + 1) = 0;
  }
  v18 = 0;
  for ( k = 0; v18 < (unsigned __int64)xmmword_251438; k = v18 )
  {
    ++v18;
    sub_B7F00(*((_QWORD *)qword_251430 + k), (*(_BYTE *)(*((_QWORD *)qword_251430 + k) + 16LL) & 2) != 0);
  }
  sub_BDC80();
  dword_251538 |= 3u;
  mark_builtin_widgets();
  v36.m128i_i8[11] = batch;
  if ( !batch )
  {
    v37 = &v38;
    sub_1091C0(&v38);
    sub_DAB50();
    byte_251038 = 0;
    TView::disableCommand((TView *)unk_24DF86, 0);
    while ( 1 )
    {
      v21 = (TView **)&unk_2531E0;
      v22 = nullptr;
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( !*v21 )
            break;
          Bounds = TView::getBounds(*v21);
          *((_BYTE *)v23 + 188) = 1;
          v25 = qword_251040;
          v27 = v26;
          *(_QWORD *)((char *)v23 + 172) = Bounds;
          *(_QWORD *)((char *)v23 + 180) = v26;
          v28 = TView::getBounds(v25);
          v30 = v29;
          v36.m128i_i64[0] = v28;
          if ( v27 <= v29 )
            v30 = v27;
          if ( v30 > 0 )
          {
            Extent = TView::getExtent(TProgram::deskTop);
            v40 = v33;
            v34 = _mm_loadl_epi64(&v36);
            v39 = Extent;
            v40 = _mm_unpacklo_epi32(v34, _mm_cvtsi32_si128(HIDWORD(v33) - 2)).m128i_u64[0];
            (*(void (__fastcall **)(TView *, __int64 *))(*(_QWORD *)v23 + 56LL))(v23, &v39);
          }
          if ( !v22 )
            v22 = v23;
          if ( &qword_2532B0 == (__int64 *)++v21 )
            goto LABEL_56;
        }
        ++v21;
      }
      while ( &qword_2532B0 != (__int64 *)v21 );
      if ( v22 )
        break;
      sub_1649F0();
    }
LABEL_56:
    TView::select(v22);
    v31 = 16;
    if ( !(unsigned __int8)getinf_flag() )
    {
      v35 = (_QWORD *)operator new(8u);
      *v35 = &unk_235CA8;
      v31 = (int)v35;
      install_user_defined_prefix();
      qword_251028 = (__int64)v35;
      *v35 = &off_22F718;
    }
    if ( !v36.m128i_i8[12]
      && (*(_BYTE *)(dbg + 32LL) & 1) == 0
      && (unsigned __int8)TProgram::switch_screen((TProgram *)0xFFFFFFFELL, v31) )
    {
      v36.m128i_i8[11] = qgetenv() ^ 1;
    }
    byte_251038 = v36.m128i_i8[11];
    sub_19B690(10, 0, 0);
    sub_109250(v37);
  }
  sub_C0300();
  if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 && dword_2515A4 > 0 )
    return sub_19F870(4, 0);
  else
    return v41 - __readfsqword(0x28u);
}

