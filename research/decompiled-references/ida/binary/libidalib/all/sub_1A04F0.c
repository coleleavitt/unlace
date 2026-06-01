unsigned __int64 __fastcall sub_1A04F0(TView *this, __int64 a2)
{
  bool v2; // zf
  __int64 v3; // rdx
  char *v4; // r15
  char v5; // r13
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ebp
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  const char *v13; // rcx
  int v14; // eax
  int v15; // ecx
  __m128i v17; // [rsp+8h] [rbp-70h] BYREF
  int v18; // [rsp+18h] [rbp-60h]
  int v19; // [rsp+1Ch] [rbp-5Ch]
  __int64 v20; // [rsp+20h] [rbp-58h]
  __int128 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_main_thread() )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  TView::getBounds(this);
  v2 = *(_QWORD *)(a2 + 8) == 0;
  v17.m128i_i64[0] = v3;
  v17.m128i_i64[0] = _mm_add_epi32(_mm_loadl_epi64(&v17), _mm_loadl_epi64((const __m128i *)&shadowSize)).m128i_u64[0];
  if ( v2 )
  {
    v20 = 0;
    v21 = 0;
    goto LABEL_28;
  }
  v20 = 0;
  v4 = *(char **)a2;
  v21 = 0;
  v5 = *v4;
  if ( !*v4 )
  {
LABEL_28:
    v12 = *((_QWORD *)this + 22);
    v13 = s1;
    goto LABEL_22;
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    ++v4;
    if ( !v9 && v5 != 3 )
    {
      v10 = 2;
      if ( v8 )
        v10 = v8-- + 1;
      if ( v7 < v10 )
      {
        v20 = qvector_reserve();
        v6 = v20;
      }
      *(_QWORD *)&v21 = v10;
      *(_BYTE *)(v6 + v8) = 3;
      *(_BYTE *)(v20 + v8 + 1) = 0;
      v7 = *((_QWORD *)&v21 + 1);
      v8 = v21;
      v6 = v20;
    }
    v11 = 2;
    if ( v8 )
      v11 = v8-- + 1;
    if ( v7 < v11 )
    {
      v20 = qvector_reserve();
      v6 = v20;
    }
    *(_QWORD *)&v21 = v11;
    ++v9;
    *(_BYTE *)(v6 + v8) = v5;
    *(_BYTE *)(v20 + v8 + 1) = 0;
    v2 = v5 == 10;
    v5 = *v4;
    if ( v2 )
      v9 = 0;
    v8 = v21;
    if ( !v5 )
      break;
    v7 = *((_QWORD *)&v21 + 1);
    v6 = v20;
  }
  v12 = *((_QWORD *)this + 22);
  v13 = s1;
  if ( (_QWORD)v21 )
    v13 = (const char *)v20;
LABEL_22:
  sub_17CAB0(this, 40, 6, v13, v12);
  if ( !(unsigned int)TDialog::valid(this, 1u) )
  {
    TView::show(this);
    sub_1758E0(TProgram::application + 136LL, this, 1);
  }
  TView::growTo(this, *((_WORD *)this + 8), *((_WORD *)this + 10) + 2);
  v14 = *((_DWORD *)this + 5);
  v15 = *((_DWORD *)this + 4);
  v17.m128i_i32[2] = 2;
  v17.m128i_i32[3] = v14 - 3;
  v18 = v15 - 1;
  v19 = v14 - 2;
  TWindow::handleEvent();
  TGroup::freeBuffer(this);
  TView::drawView(this);
  TView::sizeLimits();
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  return v22 - __readfsqword(0x28u);
}

