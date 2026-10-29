__int64 __fastcall sub_DC280(__int64 a1, __int32 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 i; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 j; // r14
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
  qword_2526B0 = a1;
  qword_252278 = 0;
  byte_2526B9 = 0;
  byte_2526B8 = 1;
  byte_252743 = 0;
  byte_252742 = a2;
  byte_252741 = 0;
  byte_252740 = 0;
  nullsub_99();
  v2 = qword_2525D0;
  qword_245188 = -1;
  qword_245180 = -1;
  if ( qword_2525D0 )
  {
    v3 = xmmword_2525D8;
    if ( (_QWORD)xmmword_2525D8 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 80 * v4);
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        ++v4;
        v2 = qword_2525D0;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&xmmword_2525D8 = 0;
    qfree();
    qword_2525D0 = 0;
    *((_QWORD *)&xmmword_2525D8 + 1) = 0;
  }
  v6 = qword_252590;
  dword_2521EC = 0;
  if ( qword_252590 )
  {
    v7 = xmmword_252598;
    if ( (_QWORD)xmmword_252598 )
    {
      v8 = 0;
      do
      {
        v9 = (_QWORD *)(v6 + (v8 << 8));
        if ( v9[24] )
        {
          v9[25] = 0;
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
        ++v8;
        v6 = qword_252590;
      }
      while ( v7 != v8 );
    }
    *(_QWORD *)&xmmword_252598 = 0;
    qfree();
    qword_252590 = 0;
    *((_QWORD *)&xmmword_252598 + 1) = 0;
  }
  v18 = 0;
  for ( k = 0; v18 < (unsigned __int64)xmmword_2525B8; k = v18 )
  {
    ++v18;
    sub_B8470(*((_QWORD *)qword_2525B0 + k), (*(_BYTE *)(*((_QWORD *)qword_2525B0 + k) + 16LL) & 2) != 0);
  }
  sub_BE320();
  dword_2526BC |= 3u;
  mark_builtin_widgets();
  v36.m128i_i8[11] = batch;
  if ( !batch )
  {
    v37 = &v38;
    sub_109450(&v38);
    sub_DC150();
    byte_252118 = 0;
    TView::disableCommand((TView *)unk_24EFE6, 0);
    while ( 1 )
    {
      v21 = (TView **)&unk_2543A0;
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
          v25 = qword_252120;
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
          if ( &qword_254470 == (__int64 *)++v21 )
            goto LABEL_56;
        }
        ++v21;
      }
      while ( &qword_254470 != (__int64 *)v21 );
      if ( v22 )
        break;
      sub_165350();
    }
LABEL_56:
    TView::select(v22);
    v31 = 16;
    if ( !(unsigned __int8)getinf_flag() )
    {
      v35 = (_QWORD *)operator new(8u);
      *v35 = &unk_236CA8;
      v31 = (int)v35;
      install_user_defined_prefix();
      qword_252108 = (__int64)v35;
      *v35 = &off_230798;
    }
    if ( !v36.m128i_i8[12]
      && (*(_BYTE *)(dbg + 32LL) & 1) == 0
      && (unsigned __int8)TProgram::switch_screen((TProgram *)0xFFFFFFFELL, v31) )
    {
      v36.m128i_i8[11] = qgetenv() ^ 1;
    }
    byte_252118 = v36.m128i_i8[11];
    sub_19C290(10, 0, 0);
    sub_1094E0(v37);
  }
  sub_C14A0();
  if ( (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 && dword_25274C > 0 )
    return sub_1A0470(4, 0);
  else
    return v41 - __readfsqword(0x28u);
}

